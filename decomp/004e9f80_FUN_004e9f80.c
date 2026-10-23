// FUN_004e9f80 @ 4e9f80 size=634

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e9f80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar4 = param_2;
  if ((((*(int *)(param_1 + 0x3d8) != 0) && (*(undefined4 **)(param_1 + 0x482) != (undefined4 *)0x0)
       ) && (iVar6 = (**(code **)**(undefined4 **)(param_1 + 0x482))(), *(int *)(iVar6 + 0x6c) != 0)
      ) && (iVar6 = FUN_0044e1d0(), iVar6 != 0)) {
    puVar7 = *(undefined4 **)(param_1 + 0x482);
    if ((puVar7 != (undefined4 *)0x0) && (puVar7[0x13] == 0)) {
      (**(code **)*puVar7)();
      cVar5 = FUN_004cce42(param_2);
      if (cVar5 != '\0') {
        puVar7 = (undefined4 *)FUN_0044e1d0();
        iVar6 = (**(code **)*puVar7)();
        iVar6 = *(int *)(iVar6 + 0x6c);
        iVar8 = (**(code **)**(undefined4 **)(param_1 + 0x482))();
        if (iVar6 == *(int *)(iVar8 + 0x6c)) {
          uVar9 = FUN_0044e1b0();
          return uVar9;
        }
        iVar6 = (**(code **)**(undefined4 **)(param_1 + 0x482))();
        for (piVar2 = *(int **)(*(int *)(iVar6 + 0x6c) + 4); piVar2 != (int *)0x0;
            piVar2 = (int *)piVar2[2]) {
          iVar6 = *piVar2;
          iVar8 = FUN_004c9f81();
          if ((iVar8 == param_2) &&
             (iVar6 = *(int *)(**(int **)(iVar6 + 0x2c) + 0x18a),
             _DAT_007e46cc < *(float *)(DAT_00ab27b4 + 0x270 + iVar6 * 0x4b2))) {
            return *(undefined4 *)(DAT_00ab27b4 + iVar6 * 0x4b2 + 0x12);
          }
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x3d8);
    if (iVar6 == param_2) {
      return *(undefined4 *)(param_1 + 0x18a);
    }
    iVar8 = 0;
    if ((*(int *)(param_2 + 0x3350) != 0) &&
       (*(int *)(iVar6 + 0x3350) == *(int *)(param_2 + 0x3350))) {
      return *(undefined4 *)(param_1 + 0x18a);
    }
    cVar5 = FUN_005861a0(*(undefined4 *)(iVar6 + 6));
    if (cVar5 != '\0') {
      return *(undefined4 *)(param_1 + 0x18a);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x3d8) + 0x12da) + 0x3b30) == *(int *)(param_2 + 6)) {
      return *(undefined4 *)(param_1 + 0x18a);
    }
    if (*(int *)(*(int *)(param_2 + 0x12da) + 0x3b30) == *(int *)(*(int *)(param_1 + 0x3d8) + 6)) {
      return *(undefined4 *)(param_1 + 0x18a);
    }
    iVar6 = *(int *)(param_1 + 0x290);
    param_2 = 0;
    if (0 < iVar6) {
      do {
        iVar1 = DAT_00ab27b4 + *(int *)(iVar8 + *(int *)(param_1 + 0x298)) * 0x4b2;
        iVar3 = *(int *)(iVar1 + 0x3d8);
        if (((iVar3 != *(int *)(param_1 + 0x3d8)) && (iVar3 != 0)) &&
           ((iVar3 == iVar4 ||
            ((((*(int *)(iVar4 + 0x3350) != 0 &&
               (*(int *)(iVar3 + 0x3350) == *(int *)(iVar4 + 0x3350))) ||
              (cVar5 = FUN_005861a0(*(undefined4 *)(iVar3 + 6)), cVar5 != '\0')) ||
             ((*(int *)(*(int *)(*(int *)(iVar1 + 0x3d8) + 0x12da) + 0x3b30) == *(int *)(iVar4 + 6)
              || (*(int *)(*(int *)(iVar4 + 0x12da) + 0x3b30) ==
                  *(int *)(*(int *)(iVar1 + 0x3d8) + 6))))))))) {
          return *(undefined4 *)(iVar1 + 0x18a);
        }
        iVar8 = iVar8 + 0xc;
        param_2 = param_2 + 1;
      } while (param_2 < iVar6);
    }
  }
  return 0xffffffff;
}


