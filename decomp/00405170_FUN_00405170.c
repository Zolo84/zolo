// FUN_00405170 @ 405170 size=246

void __thiscall FUN_00405170(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int *piVar6;
  int *piVar7;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  iVar3 = param_1[6] / 2;
  puVar5 = (ushort *)(iVar2 + iVar3 * param_3 * 2);
  param_4 = param_4 - param_3;
  piVar6 = (int *)(param_2 + param_3 * 8);
  piVar7 = (int *)(param_2 + 0x6400 + param_3 * 8);
  param_3 = param_4;
  if (DAT_00857744 != 0) {
    do {
      iVar2 = *piVar6;
      iVar1 = *piVar7;
      if (iVar2 < iVar1) {
        puVar5 = puVar5 + iVar2;
        iVar2 = iVar1 - iVar2;
        puVar4 = puVar5;
        if (-1 < iVar2 + -1) {
          do {
            puVar5 = puVar4 + 1;
            iVar2 = iVar2 + -1;
            *puVar4 = *puVar4 >> 1 & 0x3def;
            puVar4 = puVar5;
          } while (iVar2 != 0);
        }
        puVar5 = puVar5 + (iVar3 - iVar1);
      }
      else {
        puVar5 = puVar5 + iVar3;
      }
      piVar6 = piVar6 + 2;
      piVar7 = piVar7 + 2;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  do {
    iVar2 = *piVar6;
    iVar1 = *piVar7;
    if (iVar2 < iVar1) {
      puVar5 = puVar5 + iVar2;
      iVar2 = iVar1 - iVar2;
      puVar4 = puVar5;
      if (-1 < iVar2 + -1) {
        do {
          puVar5 = puVar4 + 1;
          iVar2 = iVar2 + -1;
          *puVar4 = *puVar4 >> 1 & 0x7bef;
          puVar4 = puVar5;
        } while (iVar2 != 0);
      }
      puVar5 = puVar5 + (iVar3 - iVar1);
    }
    else {
      puVar5 = puVar5 + iVar3;
    }
    piVar6 = piVar6 + 2;
    piVar7 = piVar7 + 2;
    param_3 = param_3 + -1;
  } while (-1 < param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}


