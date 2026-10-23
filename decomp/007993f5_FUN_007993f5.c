// FUN_007993f5 @ 7993f5 size=78

void __fastcall FUN_007993f5(int param_1)

{
  uint uVar1;
  
  FUN_00798acc();
  uVar1 = *(uint *)(param_1 + 0x24);
  while (uVar1 < 8) {
    if ((*(int *)(&DAT_00dc4f98 + *(int *)(param_1 + 0x24) * 4) == 0) ||
       (*(int *)(&DAT_00dc4f98 + *(int *)(param_1 + 0x24) * 4) == param_1)) break;
    uVar1 = *(int *)(param_1 + 0x24) + 1;
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  *(int *)(&DAT_00dc4f98 + *(int *)(param_1 + 0x24) * 4) = param_1;
  (&DAT_00dc4fbc)[*(int *)(param_1 + 0x24)] = (&DAT_00dc4fbc)[*(int *)(param_1 + 0x24)] + '\x01';
  FUN_00798b68();
  return;
}


