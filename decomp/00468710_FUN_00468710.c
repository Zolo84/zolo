// FUN_00468710 @ 468710 size=221

void __thiscall FUN_00468710(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  
  (**(code **)(*param_2 + 0x10))();
  param_2 = &DAT_0089cad8;
  do {
    iVar1 = *param_2;
    if (((iVar1 != 0) && (iVar1 != param_1)) &&
       ((param_3 != '\0' || (cVar7 = FUN_0044a690(*(undefined4 *)(param_1 + 6)), cVar7 != '\0')))) {
      piVar5 = *(int **)(iVar1 + 0x4508);
      while (piVar5 != (int *)0x0) {
        piVar2 = (int *)piVar5[2];
        piVar3 = (int *)*piVar5;
        cVar7 = (**(code **)(*piVar3 + 0x2c))();
        piVar5 = piVar2;
        if ((cVar7 == '\0') && (iVar8 = FUN_00522770(), iVar8 == param_1)) {
          puVar6 = *(undefined4 **)((int)piVar3 + 0x26);
          while (puVar6 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)puVar6[2];
            FUN_0046a350(*puVar6);
            puVar6 = puVar4;
          }
        }
      }
      piVar5 = *(int **)(iVar1 + 0x451c);
      while (piVar5 != (int *)0x0) {
        piVar2 = (int *)piVar5[2];
        iVar1 = *piVar5;
        piVar5 = piVar2;
        if (*(int *)(iVar1 + 0x58) == *(int *)(param_1 + 6)) {
          FUN_0046a350(iVar1);
        }
      }
    }
    param_2 = param_2 + 1;
  } while ((int)param_2 < 0x89d038);
  return;
}


