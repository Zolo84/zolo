// FUN_006a7060 @ 6a7060 size=203

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a7060(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  FUN_006a2900();
  bVar2 = _DAT_007e68dc <= *(float *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  if (bVar2) {
    iVar4 = FUN_00527fb0();
    iVar5 = FUN_00508160();
    if ((iVar5 <= iVar4) &&
       ((*(int *)(param_2 + 0xc) != 0 ||
        (*(int *)(param_2 + 500) == *(int *)(*(int *)(param_2 + 0x2ae) + 500))))) {
      uVar6 = FUN_0051b230();
      FUN_00431220(param_2,uVar6,param_3);
      cVar3 = (**(code **)(**(int **)(param_1 + 0xb8) + 8))();
      if ((cVar3 == '\0') &&
         (piVar1 = *(int **)(*(int *)(param_1 + 0xb8) + 4),
         *(int *)(*piVar1 + 0x12) == *(int *)(param_2 + 0xc))) {
        (**(code **)(**(int **)(param_1 + 0xb8) + 0x1c))(piVar1);
      }
      cVar3 = (**(code **)(**(int **)(param_1 + 0xb8) + 8))();
      if (cVar3 == '\0') {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0xbf800000;
  }
  return;
}


