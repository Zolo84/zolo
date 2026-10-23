// FUN_004a5a30 @ 4a5a30 size=170

int __fastcall FUN_004a5a30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(char *)(DAT_00893530 + 0x15) == *(char *)(param_1 + 0x11843)) &&
       (*(char *)(DAT_00893530 + 0x16) == *(char *)(param_1 + 0x11844))) &&
      (*(short *)(DAT_00893530 + 0x18) == *(short *)(param_1 + 0x11846))) &&
     (*(char *)(DAT_00893530 + 0x14) == *(char *)(param_1 + 0x11842))) {
    return param_1 + 0x11848;
  }
  (**(code **)(*(int *)(param_1 + 0x11848) + 0x10))();
  iVar2 = DAT_00893530;
  for (puVar1 = *(undefined4 **)(param_1 + 0xe8a4); DAT_00893530 = iVar2,
      puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    FUN_004e9370(*puVar1);
    iVar2 = FUN_004ece80();
    if (iVar2 != 0) {
      FUN_004a7c30(iVar2);
    }
    iVar2 = DAT_00893530;
  }
  *(undefined4 *)(param_1 + 0x11842) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined2 *)(param_1 + 0x11846) = *(undefined2 *)(iVar2 + 0x18);
  return param_1 + 0x11848;
}


