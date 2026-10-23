// FUN_007b1e1a @ 7b1e1a size=339

void FUN_007b1e1a(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined1 *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_0087f648;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while (pDVar2 < &DAT_0087f6d8);
  if (param_1 == (&DAT_0087f648)[iVar5 * 2]) {
    if ((DAT_00dc519c == 1) || ((DAT_00dc519c == 0 && (DAT_0087d074 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x87f64c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined1 *)0x7b1f63;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined1 *)0x7b1f6a;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_007a74f0();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined1 *)0x7b1ee4;
        _strncpy(acStackY_1e3 + sVar4,"...",3);
      }
      FUN_007a74f0();
      puStackY_1c4 = (undefined1 *)0x7b1f05;
      FUN_007a7500();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_0086d414;
      uStackY_1cc = 0x7b1f16;
      FUN_007a7500();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x87f64c);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x7b1f28;
      FUN_007a7500();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      builtin_strncpy(acStackY_1e3 + 3,">\x1f{",4);
      FUN_007b67bc();
    }
  }
  return;
}


