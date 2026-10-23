// FUN_006e3920 @ 6e3920 size=291

void __thiscall FUN_006e3920(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9f7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006e9c10(&local_18,*(undefined4 *)(param_1 + 0x92));
  uVar5 = FUN_00584270(local_18,local_14,local_10);
  FUN_0043e5d0(uVar5);
  pvVar6 = operator_new(0x1aa);
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (pvVar6 != (void *)0x0) {
    uVar10 = 0;
    uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    piVar7 = (int *)FUN_0043acc0(param_2,uVar5,uVar10);
  }
  iVar9 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  *(int **)(param_1 + 0x8e) = piVar7;
  iVar4 = *piVar7;
  local_4 = 0xffffffff;
  iVar8 = FUN_00415be0();
  iVar9 = FUN_00415bd0(((iVar9 + iVar3) - iVar8) + -0x10);
  (**(code **)(iVar4 + 0x18))((iVar1 / 2 - iVar9 / 2) + iVar2);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 0x8e) + 0x88) = 0xd;
  ExceptionList = local_14;
  return;
}


