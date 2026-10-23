// FUN_005906e0 @ 5906e0 size=67

void __fastcall FUN_005906e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x2c) = &PTR_LAB_007e3b70;
  iVar2 = *(int *)(param_1 + 0x30);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_0043fb30();
  return;
}


