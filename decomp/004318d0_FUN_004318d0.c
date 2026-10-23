// FUN_004318d0 @ 4318d0 size=727

undefined1 FUN_004318d0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_4 == *(int *)(param_3 + 0x474)) {
    return 0;
  }
  if (*(int *)(param_4 + 0x12) == 0) {
    return 0;
  }
  if (*(char *)(param_4 + 0x180) != '\0') {
    return 0;
  }
  if (((param_1 != (int *)0x0) && (cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 != '\0')) &&
     (*(int *)(param_5 + 4) == 4)) {
    return 0;
  }
  iVar4 = *(int *)(param_5 + 8);
  if ((((0 < iVar4) && (iVar4 < DAT_00877690)) &&
      ((*(int *)(param_5 + 4) == 1 || (*(int *)(param_5 + 4) == 2)))) && (param_1 != (int *)0x0)) {
    iVar4 = FUN_004e9370(iVar4);
    iVar5 = (**(code **)(**(int **)(iVar4 + 0x1c2) + 4))();
    if (iVar5 != 0) {
      piVar2 = *(int **)(*(int *)(iVar4 + 0x1c2) + 4);
      while (piVar2 != (int *)0x0) {
        piVar6 = (int *)piVar2[2];
        piVar1 = (int *)*piVar2;
        cVar3 = (**(code **)(*piVar1 + 0x2c))();
        piVar2 = piVar6;
        if (((cVar3 != '\0') &&
            (cVar3 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar3 != '\0')) &&
           (*(char *)((int)piVar1 + 0x17b) == '\0')) {
          iVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
          if (iVar4 != 0) {
            piVar6 = (int *)(**(code **)(*piVar1 + 0x14))();
            iVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
            iVar5 = (**(code **)(*piVar6 + 200))();
            if (iVar5 < iVar4) {
              return 0;
            }
          }
        }
      }
    }
  }
  iVar4 = *(int *)(param_5 + 8);
  if ((((0 < iVar4) && (iVar4 < DAT_00877690)) && (*(int *)(param_5 + 4) == 3)) &&
     (param_1 != (int *)0x0)) {
    iVar4 = FUN_004e9370(iVar4);
    if ((*(int *)(iVar4 + 0x3d8) != 0) &&
       (cVar3 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar3 != '\0')) {
      return 0;
    }
    iVar5 = (**(code **)(**(int **)(iVar4 + 0x1c2) + 4))();
    if (iVar5 != 0) {
      piVar2 = *(int **)(*(int *)(iVar4 + 0x1c2) + 4);
      while (piVar2 != (int *)0x0) {
        piVar6 = (int *)piVar2[2];
        piVar1 = (int *)*piVar2;
        cVar3 = (**(code **)(*piVar1 + 0x28))();
        piVar2 = piVar6;
        if (((cVar3 != '\0') &&
            (cVar3 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar3 != '\0')) &&
           ((*(char *)((int)piVar1 + 0x17b) == '\0' &&
            (iVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))(), iVar4 != 0)))) {
          return 0;
        }
      }
    }
  }
  if (((((*(int *)(param_3 + 0x3d8) != 0) && (*(int *)(param_4 + 0x3d8) != 0)) &&
       (param_1 != (int *)0x0)) &&
      ((cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(param_4 + 0x3d8) + 6)), cVar3 != '\0' &&
       (cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(param_3 + 0x3d8) + 6)), cVar3 == '\0')))) &&
     ((*(int *)(param_3 + 0x3d8) != *(int *)(param_4 + 0x3d8) &&
      (cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(param_4 + 0x3d8) + 6)), cVar3 == '\0')))) {
    return 0;
  }
  if (((*(int *)(param_4 + 0x3d8) != 0) && (param_1 != (int *)0x0)) &&
     ((cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(param_4 + 0x3d8) + 6)), cVar3 == '\0' &&
      ((cVar3 = FUN_0044a690(*(undefined4 *)(*(int *)(param_4 + 0x3d8) + 6)), cVar3 == '\0' &&
       (cVar3 = FUN_005861a0(*(undefined4 *)(*(int *)(param_4 + 0x3d8) + 6)), cVar3 == '\0')))))) {
    return 0;
  }
  return 1;
}


