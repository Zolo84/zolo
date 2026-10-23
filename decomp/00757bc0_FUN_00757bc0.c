// FUN_00757bc0 @ 757bc0 size=35

undefined4 __fastcall FUN_00757bc0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  DVar2 = WaitForSingleObject(*(HANDLE *)(iVar1 + 0x18),0xffffffff);
  if (DVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 8;
    return 1;
  }
  return 0;
}


