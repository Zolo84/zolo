// FUN_004469b0 @ 4469b0 size=853

int * __thiscall
FUN_004469b0(int param_1,int param_2,undefined4 param_3,short *param_4,short *param_5,char *param_6)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *unaff_retaddr;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bb9a1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 6) == 0x157) {
    iVar7 = *(int *)(DAT_00ab27b4 + 0x3d8 + param_2 * 0x4b2);
    piVar4 = (int *)(DAT_00ab27b4 + param_2 * 0x4b2);
    ExceptionList = &pvStack_c;
    if ((iVar7 != 0) &&
       ((iVar7 = *(int *)(iVar7 + 6), iVar7 == *(int *)(DAT_00d0ca90 + 6) ||
        ((ExceptionList = &pvStack_c, iVar7 == 0x157 &&
         (ExceptionList = &pvStack_c, DAT_00d0ca90 == piVar4[0xf5])))))) {
      ExceptionList = &pvStack_c;
      (**(code **)(*piVar4 + 0xc))();
      FUN_006eaa80();
    }
  }
  pvVar3 = operator_new(0x2b6);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00507bc0();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(piVar4[5] + 4))();
  pvStack_14 = (void *)((uint)pvStack_14 & 0xffff0000);
  puVar5 = (undefined4 *)FUN_0042df90();
  uVar6 = *puVar5;
  param_4 = (short *)CONCAT22(param_4._2_2_,*(undefined2 *)(puVar5 + 1));
  *(undefined2 *)(piVar4 + 0x96) = *(undefined2 *)(puVar5 + 1);
  param_3._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
  *(undefined1 *)((int)piVar4 + 0x256) = param_3._2_1_;
  param_3._1_1_ = (undefined1)((uint)uVar6 >> 8);
  *(undefined1 *)((int)piVar4 + 0x255) = param_3._1_1_;
  param_3._0_1_ = (undefined1)uVar6;
  *(undefined1 *)(piVar4 + 0x95) = (undefined1)param_3;
  (**(code **)(*piVar4 + 0x38))();
  cVar2 = FUN_004a0780();
  if (cVar2 == '\0') {
    piVar4[0x60] = 0x3f800000;
    (**(code **)(*piVar4 + 0x80))();
  }
  else {
    piVar4[0x60] = 0x3f000000;
    (**(code **)(*piVar4 + 0x80))();
  }
  cVar2 = FUN_0042e980();
  if ((cVar2 != '\0') && ((*(int *)(param_5 + 1) != DAT_0088f28e || (*param_5 != DAT_0088f28c)))) {
    FUN_00428460();
    FUN_00524610();
  }
  if ((*(int *)(param_4 + 1) != DAT_0088f28e) || (*param_4 != DAT_0088f28c)) {
    puVar5 = operator_new(0xc);
    pvStack_c = (void *)0x1;
    if (puVar5 != (undefined4 *)0x0) {
      FUN_004583b0();
      iVar7 = puVar5[1];
      *puVar5 = &PTR_FUN_007e5310;
      *(undefined4 *)(iVar7 + 0xe) = *unaff_retaddr;
      *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(unaff_retaddr + 1);
      iVar7 = puVar5[1];
      *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)param_4;
      *(short *)(iVar7 + 0x18) = param_4[2];
    }
    pvStack_c = (void *)0xffffffff;
    FUN_00565c30();
  }
  iVar7 = *(int *)(param_1 + 0x450c);
  puVar5 = operator_new(0xe);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = piVar4;
    puVar5[1] = iVar7;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x4510);
  *(undefined4 **)(param_1 + 0x450c) = puVar5;
  *(int *)(param_1 + 0x4510) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x4508) = puVar5;
  }
  else {
    *(undefined4 **)(iVar7 + 8) = puVar5;
  }
  FUN_005088c0();
  pvVar3 = operator_new(0xc);
  pvStack_c = (void *)0x2;
  if (pvVar3 != (void *)0x0) {
    uVar6 = FUN_00447250();
    FUN_00446d10(uVar6);
    FUN_0044a560(0x48);
  }
  pvStack_c = (void *)0xffffffff;
  FUN_00565c30();
  if (param_6 != &DAT_0088ebf8) {
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar2 = *param_6;
      param_6 = param_6 + 1;
    } while (cVar2 != '\0');
    if (iVar7 != -2) {
      FUN_00425ba0();
      ExceptionList = pvStack_14;
      return piVar4;
    }
  }
  FUN_005bf525();
  cVar2 = FUN_0042e980();
  if ((cVar2 != '\0') && (*(int *)(param_1 + 6) == 0x157)) {
    FUN_006ad940();
  }
  ExceptionList = pvStack_14;
  return piVar4;
}


