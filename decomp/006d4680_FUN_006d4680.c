// FUN_006d4680 @ 6d4680 size=516

int FUN_006d4680(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcStack_18;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d9356;
  local_c = ExceptionList;
  piVar2 = *(int **)(DAT_00d0ca90 + 0x13d90);
  iVar7 = 0;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &local_c;
    iVar4 = (**(code **)(*piVar2 + 4))(param_1);
    if (iVar4 == 1) {
      (**(code **)*piVar2)(1);
      *(undefined4 *)(DAT_00d0ca90 + 0x13d90) = 0;
      ExceptionList = pvStack_10;
      return 3;
    }
    if (iVar4 != 0) {
      if (*(char *)((int)piVar2 + 0x3b) != '\0') {
        *(undefined1 *)(DAT_00d37ed0 + 0x32) = *(undefined1 *)(DAT_00d37ed0 + 0x33);
        iVar3 = DAT_00bd1500;
        iVar1 = DAT_00bd1500 + 0x3b0;
        if (0 < *(int *)(DAT_00bd1500 + 0xb70)) {
          pcStack_18 = (char *)(DAT_00bd1500 + 0x3d7);
          param_1 = 0;
          do {
            if (*(int *)(iVar1 + *(int *)(DAT_00bd1500 + 900) * 0x3e) ==
                *(int *)(param_1 + 0x3b0 + DAT_00bd1500)) {
              pvVar5 = operator_new(0xc);
              uStack_4 = 0;
              if (pvVar5 == (void *)0x0) {
                uStack_4 = 0xffffffff;
                FUN_00565c50(0);
              }
              else {
                uVar6 = FUN_00566410(piVar2[6],*(undefined4 *)(DAT_00bd1500 + 900),
                                     *(undefined4 *)(DAT_00bd1500 + 900),DAT_00d12b44);
                uStack_4 = 0xffffffff;
                FUN_00565c50(uVar6);
              }
            }
            else if (*pcStack_18 != '\0') {
              pvVar5 = operator_new(0xc);
              uStack_4 = 1;
              if (pvVar5 == (void *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_00566410(piVar2[6],*(undefined4 *)(DAT_00bd1500 + 900),iVar7,
                                     DAT_00d12b44);
              }
              uStack_4 = 0xffffffff;
              FUN_00565c70(uVar6);
            }
            iVar7 = iVar7 + 1;
            param_1 = param_1 + 0x3e;
            pcStack_18 = pcStack_18 + 0x3e;
          } while (iVar7 < *(int *)(iVar3 + 0xb70));
        }
        (**(code **)*piVar2)(1);
        *(undefined4 *)(DAT_00d0ca90 + 0x13d90) = 0;
      }
      ExceptionList = local_c;
      return iVar4;
    }
  }
  ExceptionList = local_c;
  return 0;
}


