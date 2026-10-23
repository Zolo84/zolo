// FUN_004a0b90 @ 4a0b90 size=123

undefined4 __thiscall FUN_004a0b90(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (&DAT_0089cad8)[param_2];
  if (((iVar3 == 0) || (*(char *)(*(int *)(param_1 + 0x12da) + param_2 * 0x2c + 0x2c) == '\0')) ||
     (iVar2 = FUN_004e9370(*(undefined4 *)(iVar3 + 0x117de)), *(int *)(iVar2 + 0x3d8) != param_1)) {
    return 0;
  }
  iVar2 = 0;
  puVar4 = *(undefined4 **)(iVar3 + 0xe8a4);
  if (*(undefined4 **)(iVar3 + 0xe8a4) != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar4[2];
      iVar3 = FUN_004e9370(*puVar4);
      iVar2 = iVar2 + *(int *)(iVar3 + 0x19e);
      puVar4 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    if (0 < iVar2) {
      return 0;
    }
  }
  return 1;
}


