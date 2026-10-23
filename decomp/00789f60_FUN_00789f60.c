// FUN_00789f60 @ 789f60 size=109

undefined4 __fastcall FUN_00789f60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x242) + 0x22) + 4))();
  if (0 < iVar1) {
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x246) + 0x22) + 4))();
    if (0 < iVar1) {
      iVar1 = FUN_00584c90();
      iVar1 = (&DAT_0089cad8)[iVar1];
      iVar2 = FUN_00584c90();
      if ((iVar1 != 0) && ((&DAT_0089cad8)[iVar2] != 0)) {
        uVar3 = FUN_005862f0(*(undefined4 *)((&DAT_0089cad8)[iVar2] + 6));
        return uVar3;
      }
    }
  }
  return 0;
}


