// FUN_0040f5a0 @ 40f5a0 size=288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0040f5a0(int param_1)

{
  HMODULE hModule;
  
  if (*(int *)(param_1 + 4) == 1) {
    return 1;
  }
  hModule = LoadLibraryExA(s_libbz2_dll_0082ef48,(HANDLE)0x0,0);
  if (hModule == (HMODULE)0x0) {
    FUN_007a6628(&DAT_0087cb88,s_Can_t_load__s_0082ef38,s_libbz2_dll_0082ef48);
    return 0;
  }
  DAT_0088eb78 = GetProcAddress(hModule,s_BZ2_bzlibVersion_0082ef24);
  DAT_0088eb84 = GetProcAddress(hModule,s_BZ2_bzopen_0082ef18);
  DAT_0088eb68 = GetProcAddress(hModule,s_BZ2_bzdopen_0082ef0c);
  DAT_0088eb88 = GetProcAddress(hModule,s_BZ2_bzread_0082ef00);
  DAT_0088eb8c = GetProcAddress(hModule,s_BZ2_bzwrite_0082eef4);
  DAT_0088eb54 = GetProcAddress(hModule,s_BZ2_bzflush_0082eee8);
  DAT_0088eb44 = GetProcAddress(hModule,s_BZ2_bzclose_0082eedc);
  _DAT_0088eb4c = GetProcAddress(hModule,s_BZ2_bzerror_0082eed0);
  if (((((DAT_0088eb78 != (FARPROC)0x0) && (DAT_0088eb84 != (FARPROC)0x0)) &&
       (DAT_0088eb68 != (FARPROC)0x0)) &&
      ((DAT_0088eb88 != (FARPROC)0x0 && (DAT_0088eb8c != (FARPROC)0x0)))) &&
     ((DAT_0088eb54 != (FARPROC)0x0 &&
      ((DAT_0088eb44 != (FARPROC)0x0 && (_DAT_0088eb4c != (FARPROC)0x0)))))) {
    *(HMODULE *)(param_1 + 8) = hModule;
    *(undefined4 *)(param_1 + 4) = 1;
    return 1;
  }
  FUN_007a6628(&DAT_0087cb88,s_GetProcAddress_failed__0082eeb8);
  return 0;
}


