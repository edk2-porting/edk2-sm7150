for i in "${EDK2}" ./edk2 ../edk2
do	if [ -n "${i}" ]&&[ -f "${i}/edksetup.sh" ]
	then	_EDK2="$(realpath "${i}")"
		break
	fi
done
for i in "${EDK2_PLATFORMS}" ./edk2-platforms ../edk2-platforms
do	if [ -n "${i}" ]&&[ -d "${i}/Platform" ]
	then	_EDK2_PLATFORMS="$(realpath "${i}")"
		break
	fi
done
for i in "${SIMPLE_INIT}" F11/Library/SimpleInit ./simple-init ../simple-init
do	if [ -n "${i}" ]&&[ -f "${i}/SimpleInit.inc" ]
	then	_SIMPLE_INIT="$(realpath "${i}")"
		break
	fi
done
echo "EDK2 Path: ${_EDK2}"
echo "EDK2_PLATFORMS Path: ${_EDK2_PLATFORMS}"
export CROSS_COMPILE="${CROSS_COMPILE:-aarch64-linux-gnu-}"
export GCC5_AARCH64_PREFIX="${CROSS_COMPILE}"
export CLANG38_AARCH64_PREFIX="${CROSS_COMPILE}"
export PACKAGES_PATH="$_EDK2:$_EDK2_PLATFORMS:$_SIMPLE_INIT:$PWD"
export WORKSPACE="${PWD}"

. "${_EDK2}"/edksetup.sh

mkdir -p "${_SIMPLE_INIT}/build"
sudo bash "${_SIMPLE_INIT}/scripts/gen-rootfs-source.sh" \
	"${_SIMPLE_INIT}" \
	"${_SIMPLE_INIT}/build"

make -C "${_EDK2}"/BaseTools/Source/C