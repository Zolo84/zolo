// FUN_0047a2f0 @ 47a2f0 size=813

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047a2f0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_EBX;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint *in_stack_fffffecc;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_114;
  float fStack_10c;
  uint auStack_104 [65];
  
  iVar4 = FUN_00428ee0(*(int *)(param_2 + 4) + 0xe);
  if (iVar4 == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)(iVar4 + -0x14);
  }
  iVar4 = FUN_00428ee0(*(int *)(param_2 + 4) + 0x14);
  if (iVar4 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)(iVar4 + -8);
  }
  if (piVar11 == (int *)0x0) {
    return 3;
  }
  if (piVar10 == (int *)0x0) {
    return 3;
  }
  (**(code **)(*piVar11 + 0x28))();
  (**(code **)(*piVar11 + 0x2c))();
  (**(code **)(*piVar11 + 0x30))();
  cVar3 = (**(code **)(*piVar11 + 0x2c))();
  if (cVar3 != '\0') {
    (**(code **)(*piVar11 + 0x14))();
    iVar4 = FUN_00518b70();
    if (iVar4 == 0) {
      (**(code **)(*piVar11 + 0x98))(0);
    }
  }
  piVar1 = (int *)piVar10[0x1b];
  piVar10[0x17] = param_1;
  if ((piVar1 != (int *)0x0) && (iVar4 = piVar11[3], piVar1[3] != iVar4)) {
    if (DAT_00dc4b5e != '\0') {
      piVar5 = (int *)FUN_0051b230();
      auStack_104[0] = piVar1[3];
      piVar6 = (int *)FUN_0051b230();
      uVar7 = (**(code **)(*piVar5 + 0xc))(iVar4);
      uVar7 = (**(code **)(*piVar11 + 0xc))(uVar7);
      uVar7 = (**(code **)(*piVar6 + 0xc))(auStack_104[0],uVar7);
      uVar7 = (**(code **)(*piVar1 + 0xc))(uVar7);
      uVar7 = (**(code **)(*piVar10 + 0xc))(uVar7);
      uVar7 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar7);
      FUN_00429a00(s__s__Unable_to_transfer_division___0083ce28,uVar7);
    }
    return 0;
  }
  local_114 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)((int)piVar1 + 0x22) + 0x18))(piVar10);
    (**(code **)(*piVar1 + 0x94))();
    local_114 = *(uint *)((int)piVar1 + 0x212);
    cVar3 = FUN_00444290();
    if ((cVar3 != '\0') || (cVar3 = FUN_00444270(), cVar3 != '\0')) {
      (**(code **)(*piVar1 + 0x80))();
    }
  }
  cVar3 = (**(code **)(*(int *)(param_1 + 0x4518) + 0x18))(piVar10);
  if ((cVar3 != '\0') && (*(int *)(param_1 + 6) != 0x157)) {
    fVar2 = (float)piVar10[0x3d] * _DAT_007e34c0;
    if ((float)piVar10[0x3d] * _DAT_007e34c0 < _DAT_007e3380) {
      fVar2 = _DAT_007e3380;
    }
    piVar10[0x3d] = (int)fVar2;
  }
  cVar3 = (**(code **)(*piVar11 + 0x28))();
  if (cVar3 != '\0') {
    fStack_10c = 0.0;
    if (piVar1 != (int *)0x0) {
      fStack_10c = *(float *)((int)piVar1 + 0x29e);
    }
    fVar2 = *(float *)((int)piVar11 + 0x29e);
    iVar4 = (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
    local_114 = iVar4 + 1;
    *(float *)((int)piVar11 + 0x29e) =
         (fStack_10c - fVar2) / (float)(int)local_114 + *(float *)((int)piVar11 + 0x29e);
  }
  if ((*(int *)((int)piVar11 + 0x212) == 0) &&
     (cVar3 = (**(code **)(*piVar11 + 0x28))(), cVar3 == '\0')) {
    (**(code **)(*piVar11 + 0x98))(unaff_EBX);
  }
  FUN_0046a350(piVar10);
  piVar10[0x52] = 0;
  piVar10[0x53] = 0;
  (**(code **)(*piVar11 + 0x94))();
  local_114 = local_114 & 0xff000000;
  piVar10[0x18] = local_114;
  piVar10[0x1b] = (int)piVar11;
  *(undefined2 *)(piVar10 + 0x19) = 0;
  cVar3 = FUN_00444290();
  if ((cVar3 == '\0') && (cVar3 = FUN_00444270(), cVar3 == '\0')) {
    return 3;
  }
  auStack_104[0] = auStack_104[0] & 0xffffff00;
  if (piVar1 != (int *)0x0) {
    uVar7 = (**(code **)(*piVar1 + 0xc))();
    uVar8 = FUN_0042b6c9(s_DIVFROM_0083ce20);
    in_stack_fffffecc = auStack_104;
    FUN_007a630a(in_stack_fffffecc,uVar8,uVar7);
  }
  uVar15 = 0x15;
  uVar14 = 0x47a5c7;
  uVar7 = FUN_00447250(0x15);
  FUN_00446d10(uVar7);
  puVar13 = auStack_104;
  uVar7 = (**(code **)(*piVar11 + 0xc))(puVar13);
  uVar8 = (**(code **)(*piVar10 + 0xc))(uVar7);
  puVar12 = &DAT_0088ebf8;
  uVar9 = FUN_00458280(&DAT_0088ebf8,uVar8);
  FUN_006eb970(0x6b,uVar9,puVar12,uVar8,uVar7,puVar13,in_stack_fffffecc,uVar14,uVar15);
  (**(code **)(*piVar11 + 0x80))();
  return 3;
}


