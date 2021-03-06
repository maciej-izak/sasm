/*
** The include file for PE32/PE32+/PE64 and COFF32/COFF64
*/

IMAGE_FILE_RELOCS_STRIPPED = 0x0001
IMAGE_FILE_EXECUTABLE_IMAGE = 0x0002
IMAGE_FILE_LINE_NUMS_STRIPPED = 0x0004
IMAGE_FILE_LOCAL_SYMS_STRIPPED = 0x0008
IMAGE_FILE_AGGRESIVE_WS_TRIM = 0x0010
IMAGE_FILE_BYTES_REVERSED_LO = 0x0080
IMAGE_FILE_32BIT_MACHINE = 0x0100
IMAGE_FILE_DEBUG_STRIPPED = 0x0200
IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP = 0x0400
IMAGE_FILE_NET_RUN_FROM_SWAP = 0x0800
IMAGE_FILE_SYSTEM = 0x1000
IMAGE_FILE_DLL = 0x2000
IMAGE_FILE_UP_SYSTEM_ONLY = 0x4000
IMAGE_FILE_BYTES_REVERSED_HI = 0x8000

IMAGE_FILE_CHARACTERISTICS_EXE = IMAGE_FILE_RELOCS_STRIPPED | IMAGE_FILE_EXECUTABLE_IMAGE | IMAGE_FILE_LINE_NUMS_STRIPPED | IMAGE_FILE_LOCAL_SYMS_STRIPPED | IMAGE_FILE_DEBUG_STRIPPED | IMAGE_FILE_32BIT_MACHINE
IMAGE_FILE_CHARACTERISTICS_DLL = IMAGE_FILE_EXECUTABLE_IMAGE | IMAGE_FILE_LINE_NUMS_STRIPPED | IMAGE_FILE_LOCAL_SYMS_STRIPPED | IMAGE_FILE_DEBUG_STRIPPED | IMAGE_FILE_32BIT_MACHINE | IMAGE_FILE_DLL

IMAGE_SUBSYSTEM_UNKNOWN = 0
IMAGE_SUBSYSTEM_NATIVE = 1
IMAGE_SUBSYSTEM_WINDOWS_GUI = 2
IMAGE_SUBSYSTEM_WINDOWS_CUI = 3
IMAGE_SUBSYSTEM_OS2_CUI = 5
IMAGE_SUBSYSTEM_POSIX_CUI = 7
IMAGE_SUBSYSTEM_WINDOWS_CE_GUI = 9
IMAGE_SUBSYSTEM_EFI_APPLICATION = 10
IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER = 11
IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER = 12
IMAGE_SUBSYSTEM_EFI_ROM = 13
IMAGE_SUBSYSTEM_XBOX = 14
IMAGE_SUBSYSTEM_WINDOWS_BOOT_APPLICATION = 16

IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE = 0x0040
IMAGE_DLLCHARACTERISTICS_FORCE_INTEGRITY = 0x0080
IMAGE_DLLCHARACTERISTICS_NX_COMPAT = 0x0100
IMAGE_DLLCHARACTERISTICS_NO_ISOLATION = 0x0200
IMAGE_DLLCHARACTERISTICS_NO_SEH = 0x0400
IMAGE_DLLCHARACTERISTICS_NO_BIND = 0x0800
IMAGE_DLLCHARACTERISTICS_WDM_DRIVER = 0x2000
IMAGE_DLLCHARACTERISTICS_TERMINAL_SERVER_AWARE = 0x8000

IMAGE_NUMBEROF_DIRECTORY_ENTRIES = 16

IMAGE_DIRECTORY_ENTRY_EXPORT = 0
IMAGE_DIRECTORY_ENTRY_IMPORT = 1
IMAGE_DIRECTORY_ENTRY_RESOURCE = 2
IMAGE_DIRECTORY_ENTRY_EXCEPTION = 3
IMAGE_DIRECTORY_ENTRY_SECURITY = 4
IMAGE_DIRECTORY_ENTRY_BASERELOC = 5
IMAGE_DIRECTORY_ENTRY_DEBUG = 6
IMAGE_DIRECTORY_ENTRY_COPYRIGHT = 7
IMAGE_DIRECTORY_ENTRY_GLOBALPTR = 8
IMAGE_DIRECTORY_ENTRY_TLS = 9
IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG = 10
IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT = 11
IMAGE_DIRECTORY_ENTRY_IAT = 12

IMAGE_SIZEOF_SHORT_NAME = 8

IMAGE_SCN_TYIMAGE_REG = 0x00000000
IMAGE_SCN_TYIMAGE_DSECT = 0x00000001
IMAGE_SCN_TYIMAGE_NOLOAD = 0x00000002
IMAGE_SCN_TYIMAGE_GROUP = 0x00000004
IMAGE_SCN_TYIMAGE_NO_PAD = 0x00000008
IMAGE_SCN_TYIMAGE_COPY = 0x00000010
IMAGE_SCN_CNT_CODE = 0x00000020
IMAGE_SCN_CNT_INITIALIZED_DATA = 0x00000040
IMAGE_SCN_CNT_UNINITIALIZED_DATA = 0x00000080
IMAGE_SCN_LNK_OTHER = 0x00000100
IMAGE_SCN_LNK_INFO = 0x00000200
IMAGE_SCN_TYIMAGE_OVER = 0x0000400
IMAGE_SCN_LNK_REMOVE = 0x00000800
IMAGE_SCN_LNK_COMDAT = 0x00001000
IMAGE_SCN_MEM_PROTECTED = 0x00004000
IMAGE_SCN_MEM_FARDATA = 0x00008000
IMAGE_SCN_MEM_SYSHEAP = 0x00010000
IMAGE_SCN_MEM_PURGEABLE = 0x00020000
IMAGE_SCN_MEM_16BIT = 0x00020000
IMAGE_SCN_MEM_LOCKED = 0x00040000
IMAGE_SCN_MEM_PRELOAD = 0x00080000
IMAGE_SCN_ALIGN_1BYTES = 0x00100000
IMAGE_SCN_ALIGN_2BYTES = 0x00200000
IMAGE_SCN_ALIGN_4BYTES = 0x00300000
IMAGE_SCN_ALIGN_8BYTES = 0x00400000
IMAGE_SCN_ALIGN_16BYTES = 0x00500000
IMAGE_SCN_ALIGN_32BYTES = 0x00600000
IMAGE_SCN_ALIGN_64BYTES = 0x00700000
IMAGE_SCN_ALIGN_128BYTES = 0x00800000
IMAGE_SCN_ALIGN_256BYTES = 0x00900000
IMAGE_SCN_ALIGN_512BYTES = 0x00a00000
IMAGE_SCN_ALIGN_1024BYTES = 0x00b00000
IMAGE_SCN_ALIGN_2048BYTES = 0x00c00000
IMAGE_SCN_ALIGN_4096BYTES = 0x00d00000
IMAGE_SCN_ALIGN_8192BYTES = 0x00e00000
IMAGE_SCN_LNK_NRELOC_OVFL = 0x01000000
IMAGE_SCN_MEM_DISCARDABLE = 0x02000000
IMAGE_SCN_MEM_NOT_CACHED = 0x04000000
IMAGE_SCN_MEM_NOT_PAGED = 0x08000000
IMAGE_SCN_MEM_SHARED = 0x10000000
IMAGE_SCN_MEM_EXECUTE = 0x20000000
IMAGE_SCN_MEM_READ = 0x40000000
IMAGE_SCN_MEM_WRITE = 0x80000000
IMAGE_SCN_CNT_RESOURCE = 0x100000000

IMAGE_REL_BASED_ABSOLUTE = 0
IMAGE_REL_BASED_HIGH = 1
IMAGE_REL_BASED_LOW = 2
IMAGE_REL_BASED_HIGHLOW = 3
IMAGE_REL_BASED_HIGHADJ = 4
IMAGE_REL_BASED_MIPS_JMPADDR = 5
IMAGE_REL_BASED_SECTION = 6
IMAGE_REL_BASED_REL32 = 7

IMAGE_REL_BASED_MIPS_JMPADDR16 = 9
IMAGE_REL_BASED_IA64_IMM64 = 9
IMAGE_REL_BASED_DIR64 = 10
IMAGE_REL_BASED_HIGH3ADJ = 11

!script {
  
  Assembler.defineMacro("invoke", function(){
    var currentBits = Assembler.getCurrentBits(), currentTarget = Assembler.getCurrentTarget();
    if(currentBits == 32){
      // 32-bit x86 stdcall invoke
      var functionName = arguments[0];
      for(var i = arguments.length - 1; i > 0; i--){
        var functionParameter = arguments[i];
        Assembler.parse("push "+functionParameter);
      }
      if(currentTarget == "coff32"){
        // At least Microsoft's linker writes here redirected JMP sub-routines
        Assembler.parse("call "+functionName);
      }else if(currentTarget == "pe32"){
        Assembler.parse("call dword ptr ["+functionName+"]");
      }else{
        Assembler.error("invoke isn't suppported on " + currentTarget + " target");
      }
    }else{
      Assembler.error("invoke isn't (yet) suppported on " + currentBits + " bits");
    }    
  });
  
}
