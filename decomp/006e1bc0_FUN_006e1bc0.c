// FUN_006e1bc0 @ 6e1bc0 size=651

void __thiscall FUN_006e1bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *unaff_EBP;
  undefined4 unaff_retaddr;
  undefined4 uVar11;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007d9e01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006e9c10(&local_18,*(undefined4 *)(param_1 + 0x9e));
  uVar3 = FUN_00584270(local_18,local_14,local_10);
  FUN_0043e5d0(uVar3);
  iVar10 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x9a) = param_4;
  pvVar4 = operator_new(0x1aa);
  piVar5 = (int *)0x0;
  local_4 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    uVar11 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar6 = FUN_0042b6c9(s_HISTORY_0086d52c);
    piVar5 = (int *)FUN_0043acc0(uVar6,uVar3,uVar11);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar9 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x96) = piVar5;
  iVar2 = *piVar5;
  local_4 = (void *)0xffffffff;
  iVar7 = FUN_00415be0();
  iVar8 = FUN_00415bd0(((iVar10 + iVar8) - iVar7) + -0x10);
  (**(code **)(iVar2 + 0x18))((((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) - iVar8 / 2) + iVar1);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  pvVar4 = operator_new(0x1aa);
  pvStack_c = (void *)0x1;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar6 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    piVar5 = (int *)FUN_0043acc0(unaff_retaddr,uVar3,uVar6);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar9 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x92) = piVar5;
  iVar2 = *piVar5;
  pvStack_c = (void *)0xffffffff;
  iVar7 = FUN_00415be0();
  iVar8 = FUN_00415bd0(((iVar10 + iVar8) - iVar7) + -0x10);
  (**(code **)(iVar2 + 0x18))((((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) + iVar1) * 3 - iVar8 / 2);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  local_4 = operator_new(0x1aa);
  local_14 = 2;
  if (local_4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar6 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    piVar5 = (int *)FUN_0043acc0(pvStack_c,uVar3,uVar6);
  }
  puStack_8 = *(undefined1 **)(param_1 + 0x18);
  local_4 = *(void **)(param_1 + 0x1c);
  *(int **)(param_1 + 0x8e) = piVar5;
  iVar8 = *piVar5;
  local_14 = 0xffffffff;
  iVar9 = FUN_00415be0();
  iVar10 = FUN_00415bd0((((int)local_4 + iVar10) - iVar9) + -0x10);
  (**(code **)(iVar8 + 0x18))(((int)puStack_8 / 2 - iVar10 / 2) + iVar1);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  ExceptionList = unaff_EBP;
  return;
}


