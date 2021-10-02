#!/bin/bash
# based on the instructions from edk2-platform
set -e
. build_common.sh
PYTHON_COMMAND=python2.7

# not actually GCC5; it's GCC7 on Ubuntu 18.04.
GCC5_AARCH64_PREFIX= build -s -n 0 -a AARCH64 -t GCC5 -p F11/F11.dsc

gzip -c < Build/F11/DEBUG_GCC5/FV/F11_UEFI.fd >uefi_image

cat 7150.dtb >>uefi_image

abootimg --create uefi.img -k uefi_image -r ramdisk-null -f bootimg.cfg

rm uefi_image* Build/ -rf
