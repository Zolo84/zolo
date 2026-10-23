// FUN_00439ba0 @ 439ba0 size=1563

undefined4 * __thiscall FUN_00439ba0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_24;
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007baaf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00432df0(param_2 * 4,param_3,0x10);
  local_4 = 0;
  *param_1 = &PTR_FUN_007e4358;
  param_1[2] = &PTR_LAB_007e4354;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e4350;
  FUN_00407da0();
  local_1c = 0;
  if (param_4 == 0) {
    uVar2 = FUN_00584270(200,0xb9,0xb2);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    FUN_004012e0(0,0,param_2 + -1,0);
    iVar6 = param_2 * 3;
    FUN_004012e0(iVar6,0,param_2 * 4 + -1,0);
    uVar2 = FUN_00584270(0xe1,0xd2,200);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    FUN_004012e0(param_2,0,param_2 * 2 + -1,0);
    iVar5 = param_3 + -1;
    FUN_004012e0(param_2,0,param_2,iVar5);
    uVar2 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    local_24 = param_2 * 3 + -1;
    FUN_004012e0(param_2 * 2,0,local_24,0);
    uVar2 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    iVar7 = param_2 * 4 + -1;
    FUN_004012e0(iVar7,0,iVar7,iVar5);
    FUN_004012e0(iVar6,iVar5,param_2 * 4 + -1,iVar5);
    uVar2 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    FUN_004012e0(iVar6,0,iVar6,iVar5);
    uVar8 = 0;
    iVar7 = param_2 * 4 + -1;
    uVar4 = 0;
  }
  else {
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar3 = FUN_004129c4(param_4);
    local_1c = 6;
    uVar2 = FUN_00584270(200,0xb9,0xb2);
    uVar8 = 0;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    uVar4 = FUN_00584270(0,0,0);
    FUN_004133fd(param_4,5,0,*(undefined4 *)((int)param_1 + 0x62),uVar4,uVar8);
    FUN_004012e0(0,6,4,6);
    FUN_004012e0(iVar3 + 5,6,param_2 + -1,6);
    uVar8 = 0;
    iVar1 = param_2 * 3;
    uVar4 = FUN_00584270(0,0,0);
    FUN_004133fd(param_4,iVar1 + 5,0,*(undefined4 *)((int)param_1 + 0x62),uVar4,uVar8);
    FUN_004012e0(iVar1,6,iVar1 + 4,6);
    iVar7 = param_2 * 4 + -1;
    iVar6 = iVar3 + 5 + iVar1;
    FUN_004012e0(iVar6,6,iVar7,6);
    uVar2 = FUN_00584270(0xe1,0xd2,200);
    uVar8 = 0;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    uVar4 = FUN_00584270(0x74,0x65,0x5e);
    FUN_004133fd(param_4,param_2 + 5,0,*(undefined4 *)((int)param_1 + 0x62),uVar4,uVar8);
    FUN_004012e0(param_2,6,param_2 + 4,6);
    FUN_004012e0(iVar3 + 5 + param_2,6,param_2 * 2 + -1,6);
    iVar5 = param_2 * 2;
    uVar8 = 0;
    uVar4 = FUN_00584270(0x74,0x65,0x5e);
    FUN_004133fd(param_4,iVar5 + 5,0,*(undefined4 *)((int)param_1 + 0x62),uVar4,uVar8);
    uVar2 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    FUN_004012e0(iVar5,6,param_2 * 2 + 4,6);
    local_24 = param_2 * 3 + -1;
    FUN_004012e0(iVar5 + 5 + iVar3,6,local_24,6);
    uVar2 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    iVar5 = param_3 + -1;
    FUN_004012e0(iVar7,6,iVar7,iVar5);
    FUN_004012e0(iVar1,iVar5,iVar7,iVar5);
    uVar2 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
    FUN_004012e0(iVar1,6,iVar1,iVar5);
    uVar8 = 0;
    uVar4 = FUN_00584270(0x74,0x65,0x5e);
    FUN_004133fd(param_4,5,0,*(undefined4 *)((int)param_1 + 0x62),uVar4,uVar8);
    FUN_004012e0(iVar1,6,iVar1 + 4,6);
    uVar8 = 6;
    uVar4 = 6;
  }
  param_3 = param_3 + -1;
  FUN_004012e0(iVar6,uVar4,iVar7,uVar8);
  uVar2 = FUN_00584270(0x74,0x65,0x5e);
  *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
  FUN_004012e0(param_2 + -1,local_1c,param_2 + -1,param_3);
  FUN_004012e0(0,param_3,param_2 + -1,param_3);
  uVar2 = FUN_00584270(200,0xb9,0xb2);
  *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
  FUN_004012e0(0,local_1c,0,param_3);
  uVar2 = FUN_00584270(0,0,0);
  *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
  iVar7 = param_2 * 2;
  FUN_004012e0(iVar7 + -1,local_1c,iVar7 + -1,param_3);
  FUN_004012e0(param_2,param_3,param_2 * 2 + -1,param_3);
  uVar2 = FUN_00584270(0xe1,0xd2,200);
  *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
  FUN_004012e0(param_2,local_1c,param_2,param_3);
  uVar2 = FUN_00584270(200,0xb9,0xb2);
  *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
  FUN_004012e0(local_24,local_1c,local_24,param_3);
  FUN_004012e0(iVar7,param_3,local_24,param_3);
  uVar2 = FUN_00584270(0x74,0x65,0x5e);
  *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar2;
  FUN_004012e0(iVar7,local_1c,iVar7,param_3);
  *(undefined1 *)(*(int *)((int)param_1 + 0x62) + 0x252) = 1;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  ExceptionList = local_c;
  return param_1;
}


