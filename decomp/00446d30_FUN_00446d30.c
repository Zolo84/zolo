// FUN_00446d30 @ 446d30 size=645

int * __thiscall
FUN_00446d30(int param_1,undefined4 param_2,undefined4 param_3,short *param_4,short *param_5)

{
  int iVar1;
  short sVar2;
  char cVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  void *unaff_ESI;
  int *piVar8;
  undefined4 *unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb9d1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar4 = operator_new(700);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    piVar8 = (int *)FUN_005169b0();
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar8[5] + 4))();
  *(undefined2 *)(piVar8 + 0x96) = param_4._0_2_;
  *(undefined1 *)((int)piVar8 + 0x256) = param_3._2_1_;
  *(undefined1 *)((int)piVar8 + 0x255) = param_3._1_1_;
  *(undefined1 *)(piVar8 + 0x95) = (undefined1)param_3;
  (**(code **)(*piVar8 + 0x38))();
  cVar3 = FUN_004a0780();
  if (cVar3 == '\0') {
    piVar8[0x60] = 0x3f800000;
    (**(code **)(*piVar8 + 0x80))();
  }
  else {
    piVar8[0x60] = 0x3f000000;
    (**(code **)(*piVar8 + 0x80))();
  }
  cVar3 = FUN_0042e980();
  if ((cVar3 != '\0') && ((*(int *)(param_5 + 1) != DAT_0088f28e || (*param_5 != DAT_0088f28c)))) {
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
    *puVar5 = piVar8;
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
  (**(code **)(*piVar8 + 0x60))();
  (**(code **)(*piVar8 + 0x98))();
  puStack_8 = operator_new(0xc);
  if (puStack_8 != (void *)0x0) {
    uVar6 = FUN_00447250();
    FUN_00446d10(uVar6);
    FUN_0044a560(0x48);
  }
  FUN_00565c30();
  if (param_4 != (short *)&DAT_0088ebf8) {
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      sVar2 = *param_4;
      param_4 = (short *)((int)param_4 + 1);
    } while ((char)sVar2 != '\0');
    if (iVar7 != -2) {
      FUN_00425ba0();
      ExceptionList = unaff_ESI;
      return piVar8;
    }
  }
  FUN_005bf525();
  ExceptionList = unaff_ESI;
  return piVar8;
}


