// FUN_004045f0 @ 4045f0 size=361

void __thiscall FUN_004045f0(int *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint local_24;
  
  if (param_1[3] != 1) {
    local_24 = param_2[1];
    uVar6 = *param_2;
    uVar10 = param_2[2];
    uVar8 = param_2[3];
    if ((int)local_24 < 0) {
      local_24 = 0;
    }
    iVar2 = FUN_005841b0();
    if (iVar2 + -1 < (int)local_24) {
      iVar2 = FUN_005841b0();
      local_24 = iVar2 - 1;
    }
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    iVar2 = FUN_005841b0();
    if (iVar2 < (int)uVar8) {
      uVar8 = FUN_005841b0();
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    iVar2 = FUN_005841a0();
    if (iVar2 + -1 < (int)uVar6) {
      iVar2 = FUN_005841a0();
      uVar6 = iVar2 - 1;
    }
    if ((int)uVar10 < 1) {
      uVar10 = 1;
    }
    iVar2 = FUN_005841a0();
    if (iVar2 < (int)uVar10) {
      uVar10 = FUN_005841a0();
    }
    iVar2 = param_1[6];
    iVar3 = (**(code **)(*param_1 + 4))(uVar6 & 0xfffffffe,local_24);
    param_2 = (uint *)0x3def3def;
    if (DAT_00857744 == 0) {
      param_2 = (uint *)0x7bef7bef;
    }
    iVar7 = 0;
    iVar5 = 0;
    iVar4 = 0;
    do {
      do {
        puVar1 = (uint *)(iVar3 + iVar5);
        iVar4 = iVar4 + 2;
        puVar9 = (uint *)(iVar3 + iVar5);
        iVar5 = iVar5 + 4;
        *puVar9 = *puVar1 >> 1 & (uint)param_2;
      } while (iVar4 != (uVar10 & 0xfffffffe) - (uVar6 & 0xfffffffe));
      iVar5 = 0;
      iVar4 = 0;
      iVar7 = iVar7 + iVar2;
      iVar3 = iVar3 + iVar2;
    } while (iVar7 != (uVar8 - local_24) * iVar2);
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}


