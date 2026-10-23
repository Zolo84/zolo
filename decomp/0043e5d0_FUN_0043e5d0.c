// FUN_0043e5d0 @ 43e5d0 size=424

void __thiscall FUN_0043e5d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_90;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bae3b;
  pvStack_c = ExceptionList;
  iVar4 = 0x56;
  ExceptionList = &pvStack_c;
  FUN_00415020();
  local_4 = 0;
  if (param_1[0x16] != 0) {
    FUN_004159f0(param_1[0x16]);
    iVar4 = param_1[6];
    uVar6 = 0x10;
    iVar1 = FUN_00415bd0(0x10);
    FUN_00415760(iVar4 / 2 - iVar1 / 2,uVar6);
    iVar4 = FUN_00415be0();
    iVar4 = iVar4 + 0x56;
  }
  piVar5 = param_1 + 0x1b;
  local_90 = 7;
  do {
    iVar1 = *(int *)(*(int *)(*piVar5 + 0x56) + 0x10);
    iVar2 = (**(code **)(*(int *)*piVar5 + 4))();
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + 5 + iVar2 * iVar1;
    local_90 = local_90 + -1;
  } while (local_90 != 0);
  if (DAT_0087721c + -0x20 < iVar4) {
    iVar4 = DAT_0087721c + -0x20;
  }
  FUN_00441c10(0,0x140,iVar4,0x10,param_2,(short)param_2 != 0);
  piVar5 = param_1 + 0x1a;
  iVar4 = 8;
  do {
    FUN_00434f70(param_1[4]);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0x11;
  if (param_1[0x16] != 0) {
    FUN_00415d30(param_1[4]);
    FUN_00415680(0);
    iVar4 = FUN_00415be0();
    iVar4 = iVar4 + 0x11;
  }
  (**(code **)(*param_1 + 0x24))(param_1[0x19]);
  iVar1 = 8;
  do {
    (**(code **)(*(int *)*piVar5 + 0x34))((0x140 - *(int *)(*piVar5 + 0x2e)) / 2,iVar4);
    (**(code **)(*(int *)(*piVar5 + 0x12) + 0x10))(0);
    iVar2 = *(int *)(*(int *)(*piVar5 + 0x56) + 0x10);
    iVar3 = (**(code **)(*(int *)*piVar5 + 4))();
    piVar5 = piVar5 + 1;
    iVar1 = iVar1 + -1;
    iVar4 = iVar4 + 5 + iVar3 * iVar2;
  } while (iVar1 != 0);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_10;
  return;
}


