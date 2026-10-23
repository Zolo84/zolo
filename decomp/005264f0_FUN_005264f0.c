// FUN_005264f0 @ 5264f0 size=1158

void __thiscall FUN_005264f0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 in_stack_ffffffe0;
  
  if (DAT_00dc191a == '\0') {
    return;
  }
  if ((char)param_1[0x33] == '\0') {
    return;
  }
  switch(param_1[0x32]) {
  case 3:
    iVar10 = FUN_004e9370(param_1[3]);
    if (*(int *)(iVar10 + 0x3d8) == 0) break;
    cVar1 = FUN_00444290();
    if ((cVar1 != '\0') || (cVar1 = FUN_00444270(), cVar1 != '\0')) {
      iVar10 = FUN_004e9370(param_1[3]);
      uVar11 = *(undefined4 *)(iVar10 + 0x12);
      piVar3 = (int *)FUN_004e9370(param_1[3]);
      iVar10 = FUN_004e9370(param_1[3]);
      iVar10 = *(int *)(iVar10 + 0x3d8);
      uVar8 = *(undefined4 *)(param_1[0x92] + 6);
      uVar9 = FUN_005262b0(1);
      uVar13 = (**(code **)(*piVar3 + 0xc))(uVar9,uVar11);
      uVar4 = (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))(uVar13);
      uVar5 = (**(code **)(*param_1 + 0xc))(uVar4);
      FUN_006eaf00(0x85,uVar8,&DAT_0088ebf8,uVar5,uVar4,uVar13,uVar9,uVar11);
      break;
    }
    FUN_004e9370(param_1[3]);
    cVar1 = FUN_00444290();
    if (cVar1 == '\0') {
      FUN_004e9370(param_1[3]);
      cVar1 = FUN_00444270();
      if (cVar1 == '\0') {
        iVar10 = FUN_004e9370(param_1[3]);
        uVar11 = *(undefined4 *)(iVar10 + 0x12);
        iVar10 = param_1[0x92];
        piVar3 = (int *)FUN_004e9370(param_1[3]);
        iVar6 = FUN_004e9370(param_1[3]);
        iVar6 = *(int *)(iVar6 + 0x3d8);
        iVar2 = FUN_004e9370(param_1[3]);
        uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x3d8) + 6);
        uVar9 = FUN_005262b0(2);
        uVar13 = (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))(uVar9,uVar11);
        uVar4 = (**(code **)(*piVar3 + 0xc))(uVar13);
        uVar5 = (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))(uVar4);
        FUN_006eaf00(0x97,uVar8,&DAT_0088ebf8,uVar5,uVar4,uVar13,uVar9,uVar11);
        break;
      }
    }
    iVar10 = FUN_004e9370(param_1[3]);
    iVar10 = *(int *)(iVar10 + 0x12);
    iVar6 = param_1[0x92];
    piVar3 = (int *)FUN_004e9370(param_1[3]);
    iVar2 = FUN_004e9370(param_1[3]);
    uVar11 = *(undefined4 *)(*(int *)(iVar2 + 0x3d8) + 6);
    puVar7 = (undefined1 *)FUN_005262b0(0);
    uVar8 = (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))(puVar7,iVar10);
    uVar9 = (**(code **)(*piVar3 + 0xc))(uVar8);
    uVar13 = 0x86;
    goto LAB_0052694c;
  case 5:
    cVar1 = FUN_00444290();
    if ((cVar1 != '\0') || (cVar1 = FUN_00444270(), cVar1 != '\0')) {
      iVar10 = FUN_004e9370(param_1[3]);
      uVar11 = *(undefined4 *)(iVar10 + 0x12);
      iVar10 = FUN_004e9370(param_1[3]);
      iVar10 = *(int *)(iVar10 + 0x3d8);
      piVar3 = (int *)FUN_004e9370(param_1[3]);
      uVar8 = *(undefined4 *)(param_1[0x92] + 6);
      uVar9 = FUN_005262b0(1);
      uVar13 = (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))(uVar9,uVar11);
      uVar4 = (**(code **)(*piVar3 + 0xc))(uVar13);
      uVar5 = (**(code **)(*param_1 + 0xc))(uVar4);
      FUN_006eaf00(0x90,uVar8,&DAT_0088ebf8,uVar5,uVar4,uVar13,uVar9,uVar11);
    }
    break;
  case 6:
    cVar1 = FUN_00444290();
    if ((cVar1 != '\0') || (cVar1 = FUN_00444270(), cVar1 != '\0')) {
      uVar11 = 0x89;
      if (param_2 == 0x3d) {
        uVar11 = 0x8a;
      }
      if (DAT_00dc191c == '\0') {
        piVar3 = (int *)FUN_0051b230();
        uVar13 = 5;
        uVar9 = 0x526867;
        uVar8 = FUN_00447250(5);
        FUN_00446d10(uVar8);
        puVar7 = &DAT_0088ebf8;
      }
      else {
        piVar3 = (int *)FUN_0051b230();
        uVar13 = 5;
        uVar9 = 0x52680d;
        uVar8 = FUN_00447250(5);
        FUN_00446d10(uVar8);
        puVar7 = (undefined1 *)FUN_005262b0(1);
      }
      uVar8 = (**(code **)(*piVar3 + 0xc))(puVar7);
      uVar4 = (**(code **)(*param_1 + 0xc))(uVar8);
      puVar12 = &DAT_0088ebf8;
      FUN_00494b80(&DAT_0088ebf8,uVar4);
      uVar5 = FUN_00458280();
      FUN_006eb970(uVar11,uVar5,puVar12,uVar4,uVar8,puVar7,in_stack_ffffffe0,uVar9,uVar13);
    }
    break;
  case 8:
    cVar1 = FUN_00444290();
    if ((cVar1 == '\0') && (cVar1 = FUN_00444270(), cVar1 == '\0')) break;
    iVar10 = param_1[3];
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if ((cVar1 != '\0') && (iVar6 = (**(code **)(*param_1 + 0x10))(), *(int *)(iVar6 + 0x2ae) != 0))
    {
      iVar10 = (**(code **)(*param_1 + 0x10))();
      iVar10 = *(int *)(*(int *)(iVar10 + 0x2ae) + 0xc);
    }
    if (DAT_00dc191b == '\0') {
      uVar11 = *(undefined4 *)(param_1[0x92] + 6);
      puVar7 = &DAT_0088ebf8;
      uVar8 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar10 * 0x4b2) + 0xc))(&DAT_0088ebf8,iVar10);
      uVar9 = (**(code **)(*param_1 + 0xc))(uVar8);
    }
    else {
      uVar11 = *(undefined4 *)(param_1[0x92] + 6);
      piVar3 = (int *)(DAT_00ab27b4 + iVar10 * 0x4b2);
      puVar7 = (undefined1 *)FUN_005262b0(1);
      uVar8 = (**(code **)(*piVar3 + 0xc))(puVar7,iVar10);
      uVar9 = (**(code **)(*param_1 + 0xc))(uVar8);
    }
    uVar13 = 0x8b;
LAB_0052694c:
    FUN_006ead30(uVar13,uVar11,&DAT_0088ebf8,uVar9,uVar8,puVar7,iVar10);
  }
  piVar3 = param_1 + 0xd;
  for (iVar10 = 0x25; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  return;
}


