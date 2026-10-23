// FUN_006a3df0 @ 6a3df0 size=186

void __fastcall FUN_006a3df0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x10c) = &PTR_FUN_007e6eac;
  iVar2 = *(int *)(param_1 + 0x110);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined ***)(param_1 + 0xfa) = &PTR_LAB_007e6edc;
  iVar2 = *(int *)(param_1 + 0xfe);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_007e6eac;
  iVar2 = *(int *)(param_1 + 0xec);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  FUN_006a61e0();
  return;
}


