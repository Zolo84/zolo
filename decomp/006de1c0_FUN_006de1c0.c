// FUN_006de1c0 @ 6de1c0 size=265

void __fastcall FUN_006de1c0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d9acb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x20))();
  iVar10 = param_1[9];
  pvVar1 = (void *)param_1[8];
  pvVar5 = operator_new(0x1aa);
  piVar6 = (int *)0x0;
  uStack_4 = 0;
  if (pvVar5 != (void *)0x0) {
    uVar11 = 0;
    uVar7 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar8 = FUN_0042b6c9(s_END_BUTTON_0086d480);
    piVar6 = (int *)FUN_0043acc0(uVar8,uVar7,uVar11);
  }
  iVar2 = param_1[7];
  iVar3 = param_1[6];
  param_1[0x25] = (int)piVar6;
  iVar4 = *piVar6;
  uStack_4 = 0xffffffff;
  iVar9 = FUN_00415be0();
  iVar10 = FUN_00415bd0(((iVar10 + iVar2) - iVar9) + -0x10);
  (**(code **)(iVar4 + 0x18))((iVar3 / 2 - iVar10 / 2) + (int)pvVar1);
  FUN_00415d30(param_1[4]);
  *(undefined4 *)(param_1[0x25] + 0x88) = 0xd;
  FUN_006d4270(param_1);
  ExceptionList = pvVar1;
  return;
}


