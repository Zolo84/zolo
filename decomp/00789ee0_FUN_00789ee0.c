// FUN_00789ee0 @ 789ee0 size=121

uint __fastcall FUN_00789ee0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x242) + 0x22) + 4))();
  if (0 < (int)uVar1) {
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x246) + 0x22) + 4))();
    if (0 < (int)uVar1) {
      iVar2 = FUN_00584c90();
      iVar2 = (&DAT_0089cad8)[iVar2];
      iVar3 = FUN_00584c90();
      uVar1 = (&DAT_0089cad8)[iVar3];
      if ((iVar2 != 0) && (uVar1 != 0)) {
        iVar2 = *(int *)(iVar2 + 0x12da);
        return CONCAT31((int3)((uint)iVar2 >> 8),
                        *(char *)(iVar2 + (*(int *)(uVar1 + 6) + 1) * 0x2c) != '\0');
      }
    }
  }
  return uVar1 & 0xffffff00;
}


