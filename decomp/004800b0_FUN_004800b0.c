// FUN_004800b0 @ 4800b0 size=1028

undefined4 __fastcall FUN_004800b0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd516;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar4 = (int *)FUN_004e9370();
  iVar1 = piVar4[0xf6];
  iVar5 = FUN_004ece80();
  if (iVar5 != 0) {
    iVar5 = FUN_004ece80();
    iVar5 = *(int *)(iVar5 + 0x20);
    while (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 10);
      FUN_00446d10();
      FUN_00446d10();
      FUN_00428ee0();
    }
    iVar5 = FUN_004ece80();
    (**(code **)(*(int *)(iVar5 + 0x1c) + 0x10))();
  }
  iVar5 = piVar4[0xd];
  while (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 8);
    FUN_00447250();
    FUN_00462950();
  }
  FUN_00586250();
  iVar5 = FUN_00428ee0();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -8;
  }
  FUN_00444290();
  iVar2 = DAT_00893530;
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 6) == 0x157) {
      cVar3 = FUN_0042e980();
      if (((cVar3 != '\0') && (*(int *)((int)piVar4 + 0x46a) != 0)) &&
         (iVar5 = (**(code **)(*(int *)(*(int *)((int)piVar4 + 0x46a) + 0x30) + 4))(), 0 < iVar5)) {
        puVar6 = operator_new(0xc);
        uStack_4 = 1;
        if (puVar6 != (undefined4 *)0x0) {
          uVar8 = *(undefined4 *)(param_1 + 6);
          uVar7 = *(undefined4 *)((int)piVar4 + 0x12);
          FUN_00499240();
          *puVar6 = &PTR_FUN_007e6b8c;
          *(undefined4 *)(puVar6[1] + 0xe) = uVar7;
          *(undefined4 *)(puVar6[1] + 0x12) = uVar8;
          *(undefined1 *)(puVar6[1] + 0x16) = 0;
        }
        goto LAB_00480325;
      }
      goto LAB_00480336;
    }
LAB_0048036e:
    cVar3 = FUN_00586230();
    if ((cVar3 != '\x01') ||
       ((param_1 == piVar4[0xf5] ||
        (*(char *)(*(int *)(param_1 + 0x12da) + (*(int *)(piVar4[0xf5] + 6) + 1) * 0x2c) != '\0'))))
    {
      cVar3 = FUN_00444290();
      iVar5 = param_1;
      goto joined_r0x004803e7;
    }
    iVar5 = FUN_004e8b50();
    cVar3 = FUN_00444290();
    if ((cVar3 == '\0') || (iVar5 == iVar1)) goto LAB_00480418;
    uVar8 = *(undefined4 *)(iVar1 + 6);
    (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
    uVar7 = (**(code **)(*piVar4 + 0xc))();
  }
  else {
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(iVar2 + 0x18);
    FUN_0058b630();
    FUN_00486150();
    FUN_00462370();
    cVar3 = FUN_0042e980();
    if (((cVar3 != '\0') && (*(int *)((int)piVar4 + 0x46a) != 0)) &&
       (iVar5 = (**(code **)(*(int *)(*(int *)((int)piVar4 + 0x46a) + 0x30) + 4))(), 0 < iVar5)) {
      puVar6 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar6 != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)((int)piVar4 + 0x12);
        uVar7 = *(undefined4 *)(param_1 + 6);
        FUN_00499240();
        *puVar6 = &PTR_FUN_007e6b8c;
        *(undefined4 *)(puVar6[1] + 0xe) = uVar8;
        *(undefined4 *)(puVar6[1] + 0x12) = uVar7;
        *(undefined1 *)(puVar6[1] + 0x16) = 0;
      }
LAB_00480325:
      uStack_4 = 0xffffffff;
      FUN_00565c30();
    }
LAB_00480336:
    if ((*(int *)(param_1 + 6) != 0x157) || (iVar5 = piVar4[0xf5], iVar5 == piVar4[0xf6]))
    goto LAB_0048036e;
    cVar3 = FUN_00444290();
joined_r0x004803e7:
    if ((cVar3 == '\0') || (iVar5 == iVar1)) goto LAB_00480418;
    uVar8 = *(undefined4 *)(iVar1 + 6);
    (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
    uVar7 = (**(code **)(*piVar4 + 0xc))();
  }
  FUN_006eab80(0x75,uVar8,&DAT_0088ebf8,uVar7);
LAB_00480418:
  FUN_004e7300();
  FUN_004dcb20();
  FUN_004d87c0();
  cVar3 = FUN_0042e980();
  if (cVar3 != '\0') {
    if (*(int *)((int)piVar4 + 0x46a) != 0) {
      FUN_0052aed0(*(undefined4 *)(*(int *)((int)piVar4 + 0x46a) + 0x44));
    }
    FUN_006ad7c0(0x19,&LAB_00498db0);
  }
  ExceptionList = pvStack_c;
  return 3;
}


