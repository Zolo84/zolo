// FUN_005b6960 @ 5b6960 size=378

int FUN_005b6960(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cbfe6;
  local_c = ExceptionList;
  iVar9 = 0;
  iVar1 = (&DAT_0089cad8)[param_1];
  if (iVar1 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  pvVar5 = operator_new(0x68);
  local_4 = 0;
  if (pvVar5 != (void *)0x0) {
    iVar9 = FUN_00509d30();
  }
  local_4 = 0xffffffff;
  iVar8 = (&DAT_008ca218)[param_1 * 0x47];
  iVar2 = *(int *)(&DAT_00bdc11c + iVar8 * 0x12);
  if (iVar2 == 0) {
    uVar6 = (**(code **)(*(int *)((&DAT_0089cad8)[param_1] + 0xe) + 0xc))();
  }
  else {
    iVar7 = _rand();
    puVar3 = *(undefined4 **)(&DAT_00bdc114 + iVar8 * 0x12);
    for (iVar7 = iVar7 % iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = (undefined4 *)puVar3[2];
    }
    uVar6 = *puVar3;
  }
  FUN_00425ba0(uVar6);
  (**(code **)(*(int *)(iVar9 + 0xc) + 0xc))();
  iVar8 = param_4;
  if (param_4 == -1) {
    FUN_0050ad30(0);
    iVar8 = FUN_00428ee0(&param_2);
    if (((iVar8 == 0) || ((int *)(iVar8 + -0x14) == (int *)0x0)) ||
       (cVar4 = (**(code **)(*(int *)(iVar8 + -0x14) + 0x2c))(), cVar4 == '\0')) goto LAB_005b6a59;
    iVar8 = 1;
  }
  FUN_0050ad30(iVar8);
LAB_005b6a59:
  FUN_0050ad50(param_1);
  FUN_0050a420(iVar1);
  pvVar5 = operator_new(0xc);
  local_4 = 1;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00566690(0x8d,*(int *)(iVar9 + 0x62) + 4,iVar9);
  }
  local_4 = 0xffffffff;
  FUN_00565c70(uVar6);
  ExceptionList = local_c;
  return iVar9;
}


