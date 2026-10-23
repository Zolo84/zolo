// FUN_0068a2b0 @ 68a2b0 size=558

void __thiscall FUN_0068a2b0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d4ed6;
  local_c = ExceptionList;
  piVar1 = (int *)((int)param_2 + 0x12);
  ExceptionList = &local_c;
  iVar5 = FUN_006a9d50();
  iVar6 = FUN_006a9d50();
  if (iVar6 == iVar5) {
    piVar4 = (int *)param_2[1];
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      puVar3 = (undefined4 *)*piVar4;
      *(int *)(DAT_00ab27b4 + puVar3[1] * 0x4b2 + 0x4a8) = param_1;
      (**(code **)(*param_2 + 0x18))();
      pvVar7 = operator_new(0x8e);
      iVar5 = 0;
      uStack_4 = 0;
      if (pvVar7 != (void *)0x0) {
        iVar5 = FUN_006af940();
      }
      *(undefined4 *)(iVar5 + 4) = puVar3[1];
      iVar6 = *(int *)(param_1 + 8);
      uStack_4 = 0xffffffff;
      pvVar7 = operator_new(0xe);
      uStack_4 = 1;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_0068ad00(iVar5);
      }
      iVar5 = *(int *)(param_1 + 0xc);
      uStack_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 8) = uVar8;
      *(int *)(param_1 + 0xc) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 4) = uVar8;
      }
      else {
        *(undefined4 *)(iVar6 + 8) = uVar8;
      }
      piVar4 = piVar2;
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)();
      }
    }
    iVar5 = param_2[0x33];
    while (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 10);
      iVar6 = FUN_00428ee0();
      if ((iVar6 != 0) && (iVar6 != 0x14)) {
        FUN_00447250();
        FUN_0049a190();
      }
    }
    iVar5 = (**(code **)(*piVar1 + 0x1a4))();
    iVar5 = *(int *)(iVar5 + 4);
    while (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      (**(code **)(*(int *)(param_1 + 0x12) + 0x1a8))();
    }
    iVar5 = (**(code **)(*piVar1 + 0x1b4))();
    iVar5 = *(int *)(iVar5 + 4);
    while (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      (**(code **)(*(int *)(param_1 + 0x12) + 0x1b8))();
    }
    (**(code **)(*piVar1 + 0xcc))();
    iVar5 = FUN_004e9370();
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar5 + 0x482);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe) + 0xc))();
    FUN_00458570();
  }
  ExceptionList = local_c;
  return;
}


