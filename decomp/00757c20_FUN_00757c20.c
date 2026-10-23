// FUN_00757c20 @ 757c20 size=165

undefined4 __fastcall FUN_00757c20(int param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  
  *(undefined1 *)(param_1 + 0x114) = 1;
  pvVar1 = *(LPVOID *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)((int)pvVar1 + 0x1c);
  *(undefined4 *)((int)pvVar1 + 0x1c) = 4;
  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00743f00,pvVar1,0,
                        (LPDWORD)((int)pvVar1 + 0x10));
  *(HANDLE *)((int)pvVar1 + 0x18) = pvVar3;
  if (pvVar3 == (HANDLE)0x0) {
    GetLastError();
    *(undefined4 *)((int)pvVar1 + 0x1c) = uVar2;
    return 0;
  }
  if (*(int *)((int)pvVar1 + 0xc) != 0) {
    SetThreadPriority(pvVar3,*(int *)((int)pvVar1 + 0xc));
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x60);
  uVar2 = *(undefined4 *)((int)pvVar1 + 0x1c);
  *(undefined4 *)((int)pvVar1 + 0x1c) = 4;
  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00743f00,pvVar1,0,
                        (LPDWORD)((int)pvVar1 + 0x10));
  *(HANDLE *)((int)pvVar1 + 0x18) = pvVar3;
  if (pvVar3 == (HANDLE)0x0) {
    GetLastError();
    *(undefined4 *)((int)pvVar1 + 0x1c) = uVar2;
    return 0;
  }
  if (*(int *)((int)pvVar1 + 0xc) != 0) {
    SetThreadPriority(pvVar3,*(int *)((int)pvVar1 + 0xc));
  }
  return 1;
}


