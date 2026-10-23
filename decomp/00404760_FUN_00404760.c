// FUN_00404760 @ 404760 size=574

void __thiscall FUN_00404760(int *param_1,uint *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  int unaff_EBX;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int unaff_retaddr;
  ushort *local_4;
  
  if (param_1[3] != 1) {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar8 = param_2[3];
    uVar9 = param_2[2];
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    iVar3 = FUN_005841b0();
    if (iVar3 + -1 < (int)uVar6) {
      iVar3 = FUN_005841b0();
      uVar6 = iVar3 - 1;
    }
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    iVar3 = FUN_005841b0();
    if (iVar3 < (int)uVar8) {
      uVar8 = FUN_005841b0();
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    iVar3 = FUN_005841a0();
    if (iVar3 + -1 < (int)uVar5) {
      iVar3 = FUN_005841a0();
      uVar5 = iVar3 - 1;
    }
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    iVar3 = FUN_005841a0();
    if (iVar3 < (int)uVar9) {
      uVar9 = FUN_005841a0();
    }
    iVar3 = param_1[6];
    piVar10 = (int *)((uVar9 & 0xfffffffe) - (uVar5 & 0xfffffffe));
    puVar4 = (ushort *)(**(code **)(*param_1 + 4))(uVar5 & 0xfffffffe,uVar6);
    uVar5 = (uint)param_1 >> 1;
    uVar6 = (uVar8 - uVar6) * iVar3 >> 1;
    if (DAT_00857744 == 1) {
      uVar8 = 0;
      iVar3 = unaff_EBX;
      uVar2 = 1;
      local_4 = puVar4;
      if (uVar6 != 0) {
        do {
          for (; DAT_00857744 = uVar2, iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar1 = *puVar4;
            *puVar4 = ((ushort)(byte)(&DAT_0088ceec)[unaff_retaddr + (uVar1 >> 5 & 0x3e0)] * 0x20 +
                      (ushort)(byte)(&DAT_0088ceec)[(uVar1 & 0x3e0) + unaff_retaddr]) * 0x20 +
                      (ushort)(byte)(&DAT_0088ceec)[unaff_retaddr + (uVar1 & 0x1f) * 0x20];
            uVar2 = DAT_00857744;
            puVar4 = puVar4 + 1;
          }
          uVar8 = uVar8 + uVar5;
          puVar4 = local_4 + uVar5;
          iVar3 = unaff_EBX;
          uVar2 = DAT_00857744;
          local_4 = puVar4;
        } while (uVar8 < uVar6);
        (**(code **)(*piVar10 + 0xc))();
        return;
      }
    }
    else {
      uVar8 = 0;
      iVar3 = unaff_EBX;
      puVar7 = puVar4;
      if (uVar6 != 0) {
        do {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar1 = *puVar4;
            *puVar4 = ((ushort)(byte)(&DAT_0088ceec)[unaff_retaddr + (uVar1 >> 6 & 0x3e0)] * 0x20 +
                      (ushort)(byte)(&DAT_0088ceec)[unaff_retaddr + (uVar1 >> 1 & 0x3e0)]) * 0x40 +
                      (ushort)(byte)(&DAT_0088ceec)[unaff_retaddr + (uVar1 & 0x1f) * 0x20];
            puVar4 = puVar4 + 1;
          }
          uVar8 = uVar8 + uVar5;
          puVar4 = puVar7 + uVar5;
          iVar3 = unaff_EBX;
          puVar7 = puVar4;
        } while (uVar8 < uVar6);
      }
    }
    (**(code **)(*piVar10 + 0xc))();
  }
  return;
}


