
 FILE DRIVER = f541d663-4a48-40aa-aabf-ff158ccae34c {
    SECTION DXE_DEPEX = Dxe/use/SmemDxe/SmemDxe.depex
    SECTION PE32 = Dxe/all/SmemDxe.efi
    SECTION UI = "SmemDxe"
  }


FILE DRIVER = 8E9BD160-B184-11DF-94E2-0800200C9A66 {
    SECTION DXE_DEPEX = Dxe/use/DALSys/DALSys.depex
    SECTION PE32 = Dxe/use/DALSys/DALSys.efi
    SECTION UI = "DALSys"
  }

    FILE DRIVER = 8681CC5A-0DF6-441E-B4B8-E915C538F067 {
    SECTION DXE_DEPEX = Dxe/use/HWIODxeDriver/HWIODxeDriver.depex
    SECTION PE32 = Dxe/use/HWIODxeDriver/HWIODxeDriver.efi
    SECTION UI = "HWIODxeDriver"
  }

   FILE DRIVER = 10e193df-9966-44e7-b17c-59dd831e20fc {
    SECTION DXE_DEPEX = Dxe/depex/ChipInfo.depex
    SECTION PE32 = Dxe/all/ChipInfo.efi
    SECTION UI = "ChipInfo"
  }

    FILE DRIVER = B105211B-BBBD-4ADD-A3B0-D1CF4A52154C {
    SECTION DXE_DEPEX = Dxe/depex/PlatformInfoDxeDriver.depex
    SECTION PE32 = Dxe/all/PlatformInfoDxeDriver.efi
    SECTION UI = "PlatformInfoDxeDriver"
  }

    FILE DRIVER = 9A00771F-36D4-4DD5-8916-C48ED9B16B86 {
    SECTION DXE_DEPEX = Dxe/use/HALIOMMU/HALIOMMU.depex
    SECTION PE32 = Dxe/all/HALIOMMU.efi
    SECTION UI = "HALIOMMU"
  }

   FILE DRIVER = E43128A8-8692-42B6-8AFA-676158578D18 {
   SECTION DXE_DEPEX = Dxe/use/ULogDxe/ULogDxe.depex
    SECTION PE32 = Dxe/all/ULogDxe.efi
    SECTION UI = "ULogDxe"
  }

    FILE DRIVER = ABA01FF8-2CCB-4E12-8B2E-CD3F4A742993 {
    SECTION DXE_DEPEX = Dxe/use/CmdDbDxe/CmdDbDxe.depex
    SECTION PE32 = Dxe/all/CmdDbDxe.efi
    SECTION UI = "CmdDbDxe"
  }

    FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219711 {
    SECTION DXE_DEPEX = Dxe/use/NpaDxe/NpaDxe.depex
    SECTION PE32 = Dxe/all/NpaDxe.efi
  SECTION UI = "NpaDxe"
  }

    FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219766 {
    SECTION DXE_DEPEX = Dxe/use/RpmhDxe/RpmhDxe.depex
        SECTION PE32 = Dxe/all/RpmhDxe.efi
        SECTION UI = "RpmhDxe"
  }

    FILE DRIVER = B43C22DB-6333-490C-872D-0A73439059FD {
    SECTION DXE_DEPEX = Dxe/use/PdcDxe/PdcDxe.depex
        SECTION PE32 = Dxe/all/PdcDxe.efi
        SECTION UI = "PdcDxe"
  }

    FILE DRIVER = 4DB5DEA6-5302-4D1A-8A82-677A683B0D29 {
    SECTION DXE_DEPEX = Dxe/use/ClockDxe/ClockDxe.depex
        SECTION PE32 = Dxe/all/ClockDxe.efi
        SECTION UI = "ClockDxe"
  }


    FILE DRIVER = 9c1eb71f-dd6c-4ed5-9f6a-5cc0ca789f16 {
     SECTION DXE_DEPEX = Dxe/depex/ShmBridgeDxe.depex
        SECTION PE32 = Dxe/all/ShmBridgeDxe.efi
        SECTION UI = "ShmBridgeDxe"
  }

#    FILE DRIVER = 2D7A83E3-E343-4FFB-9109-631F2EE11694 {
#    SECTION DXE_DEPEX = Dxe/depex/ScmDxe.depex
#        SECTION PE32 = Dxe/all/ScmDxe.efi
#        SECTION UI = "ScmDxe"
#  }


INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf



  FILE DRIVER = 0d35cd8e-97ea-4f9a-96af-0f0d89f76567 {
    SECTION DXE_DEPEX = Dxe/UFSDxe/UFSDxe.depex
    SECTION PE32 = Dxe/UFSDxe/UFSDxe.efi
    SECTION UI = "UFSDxe"
  }

       INF FatPkg/EnhancedFatDxe/Fat.inf




 # FILE DRIVER = 6925FAD3-E243-4B69-AD61-3F978C8ABC60 {
 #   SECTION DXE_DEPEX = Dxe/depex/TzDxe.depex
#    SECTION PE32 = Dxe/all/TzDxe.efi
#    SECTION UI = "TzDxe"
#  }


    FILE DRIVER = AF9763A2-033B-4109-8E17-56A98D380C92 {
   SECTION DXE_DEPEX = Dxe/use/DALTLMM/DALTLMM.depex
        SECTION PE32 = Dxe/all/DALTLMM.efi
        SECTION UI = "DALTLMM"
  }


    FILE DRIVER = 2a7b4bef-80cd-49e1-b473-374ba4d673fc {
    SECTION DXE_DEPEX = Dxe/use/SPMI/SPMI.depex
    SECTION PE32 = Dxe/all/SPMI.efi
    SECTION UI = "SPMI"
  }



    FILE DRIVER =  7db0793a-4402-4be1-906e-d0fabad2707e{
    SECTION DXE_DEPEX = Dxe/depex/DDRInfoDxe.depex
    SECTION PE32 = Dxe/all/DDRInfoDxe.efi
    SECTION UI = "DDRInfoDxe"
  }


#  FILE DRIVER = 3AE17DB7-3CC5-4B89-9304-9549211057EF {
#    SECTION DXE_DEPEX = Dxe/depex/ResetRuntimeDxe.depex
#    SECTION PE32 = Dxe/all/ResetRuntimeDxe.efi
#    SECTION UI = "ResetRuntimeDxe"
#  }
#
#
#   FILE DRIVER = 5776232e-082d-4b75-9a0e-fe1d13f7a5d9 {
#   SECTION DXE_DEPEX = Dxe/use/PmicDxe/PmicDxe.depex
#    SECTION PE32 = Dxe/6150/PmicDxe.efi
#   SECTION UI = "PmicDxe"
#  }



#   FILE DRIVER = 1d317734-4083-47c6-83ea-e3a42f2a6bff {
# SECTION DXE_DEPEX = Dxe/depex/PILDxe.depex
#    SECTION PE32 = Dxe/all/PILDxe.efi
#   SECTION UI = "PILDxe"
#  }

FILE DRIVER = 1B52138D-3FA3-4E50-B958-20887353F809 {
    SECTION DXE_DEPEX = Dxe/use/CPRDxe/CPRDxe.depex
        SECTION PE32 = Dxe/all/CPRDxe.efi
        SECTION UI = "CPRDxe"
  }

  FILE DRIVER = 5A5CB8CA-9382-4e0c-B383-77FB517CD9EB {
    SECTION DXE_DEPEX = Dxe/depex/AdcDxe.depex
    SECTION PE32 = Dxe/all/AdcDxe.efi
    SECTION UI = "AdcDxe"
  }


FILE DRIVER = 04DE8591-D2B3-4077-BBBE-B12070094EB6 {
    SECTION DXE_DEPEX = Dxe/use/I2C/I2C.depex
        SECTION PE32 = Dxe/all/I2C.efi
       SECTION UI = "I2C"
  }

  FILE DRIVER = 11faed4c-b21f-4d88-8e48-c4c28a1e50df {
    SECTION DXE_DEPEX = Dxe/use/UsbPwrCtrlDxe/UsbPwrCtrlDxe.depex
   SECTION PE32 = Dxe/all/UsbPwrCtrlDxe.efi
    SECTION UI = "UsbPwrCtrlDxe"
  }


#FILE DRIVER =240612B7-A063-11d4-9A3A-0090273FC14D {
   # SECTION DXE_DEPEX = Dxe/usb/XhciDxe/XhciDxe.depex
 #   SECTION PE32 = Dxe/all/UsbBusDxe.efi
 #   SECTION UI = "UsbBusDxe"
 # }

  FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83 {
   SECTION DXE_DEPEX = Dxe/use/UsbfnDwc3Dxe/UsbfnDwc3Dxe.depex
   SECTION PE32 = Dxe/all/UsbfnDwc3Dxe.efi
    SECTION UI = "UsbfnDwc3Dxe"
  }

    FILE DRIVER = cd823a4d-7dec-4531-ae5d-4134fa4127b8 {
    SECTION DXE_DEPEX = Dxe/depex/UsbConfigDxe.depex
    SECTION PE32 =Dxe/all/UsbConfigDxe.efi
    SECTION UI = "UsbConfigDxe"
  }


    FILE DRIVER = 0A134F0E-075E-40B3-9C63-3B3906804663 {
    SECTION DXE_DEPEX = Dxe/usb/UsbInitDxe/UsbInitDxe.depex
    SECTION PE32 = Dxe/all/UsbInitDxe.efi
    SECTION UI = "UsbInitDxe"
 }

    FILE DRIVER = 3299a266-15f0-4346-8318-716336736d3e {
    SECTION DXE_DEPEX = Dxe/use/UsbDeviceDxe/UsbDeviceDxe.depex
    SECTION PE32 = Dxe/all/UsbDeviceDxe.efi
    SECTION UI = "UsbDeviceDxe"
  }


FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
   SECTION PE32 = Dxe/all/UsbKbDxe.efi
    SECTION UI = "UsbKbDxe"
  }

FILE DRIVER = 5AF77F10-90DF-4E7E-8325-A17EC09D5443{
    SECTION DXE_DEPEX = Dxe/usb/UsbMsdDxe/UsbMsdDxe.depex
   SECTION PE32 = Dxe/all/UsbMsdDxe.efi
    SECTION UI = "UsbMsdDxe"
 }

FILE DRIVER = BEB12BEE-F6E1-11E1-9FB8-6C626DE4AEB1 {
    SECTION PE32 = Dxe/all/XhciPciEmulation.efi
    SECTION UI = "XhciPciEmulation"
  }

FILE DRIVER =B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
    SECTION DXE_DEPEX = Dxe/usb/XhciDxe/XhciDxe.depex
    SECTION PE32 = Dxe/all/XhciDxe.efi
    SECTION UI = "XhciDxe"
  }


#    FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
#    SECTION DXE_DEPEX = Dxe/use/ButtonsDxe/ButtonsDxe.depex
#    SECTION PE32 = Dxe/all/ButtonsDxe.efi
#    SECTION UI = "ButtonsDxe"
#  }

#
#  FILE DRIVER = F09AD92E-485C-9CDB-3E05-3385C38F94CC {
#    SECTION DXE_DEPEX = Dxe/depex/TsensDxe.depex
#   SECTION PE32 = Dxe/all/TsensDxe.efi
#    SECTION UI = "TsensDxe"
#  }
#

#FILE DRIVER = F09AD92E-4E91-490F-AB99-E69939B840B2 {
#    SECTION DXE_DEPEX = Dxe/depex/LimitsDxe.depex
#        SECTION PE32 = Dxe/all/LimitsDxe.efi
#       SECTION UI = "LimitsDxe"
#  }

#FILE DRIVER = 569EA0DE-B557-4043-84CF-01103FE516E5 {
#    SECTION DXE_DEPEX = Dxe/depex/GpiDxe.depex
#        SECTION PE32 = Dxe/all/GpiDxe.efi
#       SECTION UI = "GpiDxe"
 # }
 # FILE DRIVER =  51D4273A-C3FB-48FD-B5B7-97CE091A58A6 {
 #   SECTION PE32 = Dxe/all/UsbfnChgDxe.efi
#    SECTION UI = "UsbfnChgDxe"
#  }
