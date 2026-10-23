// FUN_0069d750 @ 69d750 size=509

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069d750(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined **ppuStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_0051b230();
  if ((((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) ||
      (fVar7 = (float10)FUN_00525ba0(), fVar7 <= (float10)_DAT_007e67e0)) &&
     (cVar4 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar4 != '\0')) {
    FUN_0051b230();
    cVar4 = FUN_004e46e0();
    if ((cVar4 == '\0') && (cVar4 = (**(code **)(param_1[0x36] + 0x24))(param_2), cVar4 == '\0')) {
      piStack_1c = (int *)0x0;
      piStack_18 = (int *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      ppuStack_20 = &PTR_FUN_007e4c84;
      piVar6 = (int *)param_1[0x32];
      uStack_4 = 0;
      if (piVar6 != (int *)0x0) {
        do {
          piVar1 = (int *)piVar6[2];
          piVar6 = (int *)*piVar6;
          if (((piVar6[3] == param_2[3]) && (piVar6 != param_2)) &&
             (cVar4 = (**(code **)(*(int *)((int)piVar6 + 0x22e) + 8))(), cVar4 != '\0')) {
            (**(code **)(*piVar6 + 0x14))();
            iVar5 = FUN_0051b230();
            if (((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) ||
               (fVar7 = (float10)FUN_00525ba0(), fVar7 <= (float10)_DAT_007e67e0)) {
              cVar4 = FUN_005177f0();
              if (cVar4 != '\0') {
                (**(code **)(*piVar6 + 0x14))();
                cVar4 = FUN_005177f0();
                if (cVar4 != '\0') goto LAB_0069d908;
              }
              cVar4 = (**(code **)(param_1[0x36] + 0x24))(piVar6);
              piVar2 = piStack_18;
              if (cVar4 == '\0') {
                piStack_18 = operator_new(0xe);
                if (piStack_18 == (int *)0x0) {
                  piStack_18 = (int *)0x0;
                }
                else {
                  *piStack_18 = (int)piVar6;
                  piStack_18[1] = (int)piVar2;
                  piStack_18[2] = 0;
                  *(undefined1 *)(piStack_18 + 3) = 0;
                }
                piVar3 = piStack_18;
                if (iStack_14 != 0) {
                  piVar2[2] = (int)piStack_18;
                  piVar3 = piStack_1c;
                }
                piStack_1c = piVar3;
                iStack_14 = iStack_14 + 1;
                (**(code **)(*param_1 + 0x1cc))(piVar6);
              }
            }
          }
LAB_0069d908:
          piVar6 = piVar1;
        } while (piVar1 != (int *)0x0);
        if (0 < iStack_14) {
          FUN_006aa780(param_2,&ppuStack_20);
        }
      }
      uStack_4 = 0xffffffff;
      FUN_00527230();
    }
  }
  ExceptionList = local_c;
  return;
}


