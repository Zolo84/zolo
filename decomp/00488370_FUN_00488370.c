// FUN_00488370 @ 488370 size=713

undefined4 __thiscall FUN_00488370(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *local_824;
  int *local_820;
  int local_81c;
  undefined1 local_80c [1024];
  undefined1 local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd78b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_00428ee0(*(int *)(param_2 + 4) + 0xe);
  if ((iVar6 != 0) && (iVar6 + -8 != 0)) {
    iVar8 = *(int *)(iVar6 + 0x1e);
    iVar9 = *(int *)(iVar6 + 0x1a);
    cVar5 = FUN_00584e20(*(undefined4 *)(DAT_00d0ca90 + 6));
    if (cVar5 != '\0') {
      iVar8 = *(int *)(iVar6 + 0x1a);
      iVar9 = *(int *)(iVar6 + 0x1e);
    }
    local_40c[0] = 0;
    local_80c[0] = 0;
    FUN_0043ea10(local_40c,*(undefined4 *)(iVar8 + 0x22),0,0);
    FUN_0043ea10(local_80c,*(undefined4 *)(iVar9 + 0x22),0,0);
    cVar5 = FUN_00584e20(*(undefined4 *)(DAT_00d0ca90 + 6));
    if ((cVar5 == '\0') && (cVar5 = FUN_00584e20(*(undefined4 *)(DAT_00d0ca90 + 6)), cVar5 == '\0'))
    {
      uVar11 = *(undefined4 *)(param_1 + 6);
      uVar10 = 0x2b;
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 6);
      uVar10 = 0x2a;
    }
    FUN_006ea3b0(uVar10,uVar11,&DAT_0088ebf8,local_40c,local_80c);
    FUN_004734e0();
    local_4 = 0;
    for (piVar1 = *(int **)(*(int *)(*(int *)(iVar6 + 0x1a) + 0x22) + 4); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[2]) {
      piVar3 = local_824;
      piVar4 = local_820;
      iVar8 = local_81c;
      for (piVar2 = *(int **)(*(int *)(*(int *)(iVar6 + 0x1e) + 0x22) + 4); piVar2 != (int *)0x0;
          piVar2 = (int *)piVar2[2]) {
        FUN_004623c0(*piVar2);
        FUN_004623c0(*piVar1);
        FUN_00461830(*piVar1,*piVar2);
        FUN_00461830(*piVar2,*piVar1);
        FUN_006ad630(0x16,&LAB_00466b60,(&DAT_0089cad8)[*piVar1],(&DAT_0089cad8)[*piVar2]);
        iVar9 = *piVar2;
        piVar7 = operator_new(0xe);
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          *piVar7 = iVar9;
          piVar7[1] = (int)piVar4;
          piVar7[2] = 0;
          *(undefined1 *)(piVar7 + 3) = 0;
        }
        local_824 = piVar7;
        if (iVar8 != 0) {
          piVar4[2] = (int)piVar7;
          local_824 = piVar3;
        }
        piVar3 = local_824;
        piVar4 = piVar7;
        iVar8 = iVar8 + 1;
      }
      iVar9 = *piVar1;
      local_820 = operator_new(0xe);
      if (local_820 == (int *)0x0) {
        local_820 = (int *)0x0;
      }
      else {
        *local_820 = iVar9;
        local_820[1] = (int)piVar4;
        local_820[2] = 0;
        *(undefined1 *)(local_820 + 3) = 0;
      }
      local_81c = iVar8 + 1;
      local_824 = local_820;
      if (iVar8 != 0) {
        piVar4[2] = (int)local_820;
        local_824 = piVar3;
      }
    }
    FUN_00425cb0(iVar6 + -8);
    FUN_005886c0();
    piVar1 = local_824;
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[2];
      iVar6 = *piVar1;
      piVar1 = piVar2;
      if ((&DAT_0089cad8)[iVar6] != 0) {
        FUN_0044bb10();
      }
    }
    while (local_824 != (int *)0x0) {
      piVar1 = (int *)local_824[2];
      FUN_00796cd8(local_824);
      local_824 = piVar1;
    }
  }
  ExceptionList = local_c;
  return 3;
}


