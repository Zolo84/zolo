// FUN_006a1d30 @ 6a1d30 size=186

int __thiscall FUN_006a1d30(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  iVar5 = FUN_0051b230();
  if (*(int *)(iVar5 + 0x254) == 8) {
    piVar7 = *(int **)(*(int *)(param_2 + 0x2aa) + 4);
    while (piVar7 != (int *)0x0) {
      piVar1 = (int *)piVar7[2];
      cVar4 = (**(code **)(*(int *)(*piVar7 + 0x22e) + 8))();
      piVar7 = piVar1;
      if (cVar4 == '\0') {
        return 3;
      }
    }
  }
  uVar8 = 0;
  uVar6 = FUN_004e9370(param_3,0);
  iVar5 = FUN_006aaee0(param_2,uVar6,uVar8);
  if ((iVar5 != 0) && (cVar4 = FUN_005177f0(), cVar4 != '\0')) {
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 0x2aa) + 4);
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar3[2];
      uVar6 = *puVar3;
      (**(code **)(*param_1 + 0x1ac))(uVar6);
      piVar7 = (int *)(**(code **)(*param_1 + 0xe0))();
      (**(code **)(*piVar7 + 0x1a8))(uVar6);
      puVar3 = puVar2;
    }
  }
  return iVar5;
}


