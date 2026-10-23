// FUN_006e2330 @ 6e2330 size=463

void __thiscall FUN_006e2330(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9e66;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006e9c10(&local_18,*(undefined4 *)(param_1 + 0x9e));
  uVar4 = FUN_00584270(local_18,local_14,local_10);
  FUN_0043e5d0(uVar4);
  iVar8 = *(int *)(param_1 + 0x24);
  pvVar1 = *(void **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x9a) = param_4;
  pvVar5 = operator_new(0x1aa);
  piVar6 = (int *)0x0;
  local_4 = 0;
  if (pvVar5 != (void *)0x0) {
    uVar10 = 0;
    uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    piVar6 = (int *)FUN_0043acc0(param_3,uVar4,uVar10);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x96) = piVar6;
  iVar9 = *piVar6;
  local_4 = 0xffffffff;
  iVar7 = FUN_00415be0();
  iVar8 = FUN_00415bd0(((iVar8 + iVar2) - iVar7) + -0x10);
  (**(code **)(iVar9 + 0x18))
            ((((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) - iVar8 / 2) + (int)pvVar1);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  pvVar5 = operator_new(0x1aa);
  pvStack_c = (void *)0x1;
  if (pvVar5 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar10 = 0;
    uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    piVar6 = (int *)FUN_0043acc0(local_4,uVar4,uVar10);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x8e) = piVar6;
  iVar3 = *piVar6;
  pvStack_c = (void *)0xffffffff;
  iVar9 = FUN_00415be0();
  iVar8 = FUN_00415bd0(((unaff_EBP + iVar8) - iVar9) + -0x10);
  (**(code **)(iVar3 + 0x18))
            ((((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) * 3 - iVar8 / 2) + unaff_EBX);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  ExceptionList = pvVar1;
  return;
}


