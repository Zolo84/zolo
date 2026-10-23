// FUN_006b0510 @ 6b0510 size=93

void __fastcall FUN_006b0510(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x16) = &PTR_LAB_007e4b64;
  iVar2 = *(int *)(param_1 + 0x1a);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_007e3ff0;
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


