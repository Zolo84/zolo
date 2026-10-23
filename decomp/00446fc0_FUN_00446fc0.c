// FUN_00446fc0 @ 446fc0 size=643

int * __thiscall
FUN_00446fc0(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,short *param_5,
            char *param_6)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *unaff_EBX;
  int *piVar7;
  undefined4 *unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bba01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x2aa);
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (pvVar3 != (void *)0x0) {
    piVar7 = (int *)FUN_004ef550();
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar7[5] + 4))();
  *(undefined2 *)(piVar7 + 0x96) = param_4._0_2_;
  *(undefined1 *)((int)piVar7 + 0x256) = param_3._2_1_;
  *(undefined1 *)((int)piVar7 + 0x255) = param_3._1_1_;
  *(undefined1 *)(piVar7 + 0x95) = (undefined1)param_3;
  (**(code **)(*piVar7 + 0x38))();
  cVar2 = FUN_004a0780();
  if (cVar2 == '\0') {
    piVar7[0x60] = 0x3f800000;
    (**(code **)(*piVar7 + 0x80))();
  }
  else {
    piVar7[0x60] = 0x3f000000;
    (**(code **)(*piVar7 + 0x80))();
  }
  cVar2 = FUN_0042e980();
  if ((cVar2 != '\0') && ((*(int *)(param_5 + 1) != DAT_0088f28e || (*param_5 != DAT_0088f28c)))) {
    FUN_00428460();
    FUN_00524610();
  }
  if ((*(int *)(param_4 + 1) != DAT_0088f28e) || (*param_4 != DAT_0088f28c)) {
    puVar4 = operator_new(0xc);
    pvStack_c = (void *)0x1;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_004583b0();
      iVar6 = puVar4[1];
      *puVar4 = &PTR_FUN_007e5310;
      *(undefined4 *)(iVar6 + 0xe) = *unaff_retaddr;
      *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(unaff_retaddr + 1);
      iVar6 = puVar4[1];
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)param_4;
      *(short *)(iVar6 + 0x18) = param_4[2];
    }
    pvStack_c = (void *)0xffffffff;
    FUN_00565c30();
  }
  iVar6 = *(int *)(param_1 + 0x450c);
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = piVar7;
    puVar4[1] = iVar6;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x4510);
  *(undefined4 **)(param_1 + 0x450c) = puVar4;
  *(int *)(param_1 + 0x4510) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x4508) = puVar4;
  }
  else {
    *(undefined4 **)(iVar6 + 8) = puVar4;
  }
  FUN_004f00e0();
  FUN_004f0af0();
  pvVar3 = operator_new(0xc);
  pvStack_c = (void *)0x2;
  if (pvVar3 != (void *)0x0) {
    uVar5 = FUN_00447250();
    FUN_00446d10(uVar5);
    FUN_0044a560(0x48);
  }
  pvStack_c = (void *)0xffffffff;
  FUN_00565c30();
  if (param_6 != &DAT_0088ebf8) {
    iVar6 = -1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar2 = *param_6;
      param_6 = param_6 + 1;
    } while (cVar2 != '\0');
    if (iVar6 != -2) {
      FUN_00425ba0();
      ExceptionList = unaff_EBX;
      return piVar7;
    }
  }
  FUN_005bf525();
  ExceptionList = unaff_EBX;
  return piVar7;
}


