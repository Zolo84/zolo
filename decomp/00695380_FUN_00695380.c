// FUN_00695380 @ 695380 size=404

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00695380(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  
  local_c = 0;
  puVar5 = *(undefined4 **)(param_2 + 0x3e);
  while (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar5[2];
    piVar2 = (int *)*puVar5;
    puVar5 = puVar1;
    if ((*(int *)(*piVar2 + 0x4c) == 0) && (iVar7 = FUN_004c9f81(), iVar7 != 0)) {
      iVar7 = FUN_004c9f81();
      iVar7 = *(int *)(iVar7 + 6);
      iVar8 = FUN_004c9f81();
      if (*(char *)(*(int *)(iVar8 + 0x12da) + iVar7 * 0x2c + 0x2c) != '\0') {
        iVar7 = *(int *)(*piVar2 + 0x2c);
        while (iVar7 != 0) {
          iVar7 = *(int *)(iVar7 + 8);
          iVar8 = FUN_00527630(0);
          local_c = local_c + iVar8;
        }
      }
    }
  }
  iVar7 = 0;
  iVar8 = *(int *)(param_2 + 0x2c);
  while (iVar8 != 0) {
    iVar8 = *(int *)(iVar8 + 8);
    iVar9 = FUN_00527630(0);
    iVar7 = iVar7 + iVar9;
  }
  iVar8 = (**(code **)(**(int **)(param_1 + 0x7e) + 0x1a4))();
  piVar2 = *(int **)(iVar8 + 4);
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[2];
    piVar4 = (int *)*piVar2;
    iVar8 = (**(code **)(*piVar4 + 0x10))();
    piVar2 = piVar3;
    if (*(int *)(DAT_00ab27b4 + 0x482 + *(int *)(iVar8 + 0x298) * 0x4b2) == param_2) {
      iVar8 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
      iVar7 = iVar7 + iVar8;
    }
  }
  iVar8 = FUN_004c9f81();
  piVar2 = *(int **)(iVar8 + 0x4508);
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[2];
    piVar4 = (int *)*piVar2;
    cVar6 = (**(code **)(*piVar4 + 0x28))();
    piVar2 = piVar3;
    if ((cVar6 != '\0') &&
       (iVar8 = (**(code **)(*piVar4 + 0x10))(),
       *(int *)(DAT_00ab27b4 + 0x482 + *(int *)(iVar8 + 0x298) * 0x4b2) == param_2)) {
      iVar8 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
      iVar7 = iVar7 + iVar8;
    }
  }
  return (int)ROUND((float)local_c * _DAT_007e3650 - (float)iVar7);
}


