// FUN_0043a650 @ 43a650 size=491

undefined4 * __thiscall
FUN_0043a650(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bab58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414ed0(param_2,param_3,0x10);
  local_4 = 0;
  *param_1 = &PTR_FUN_007e4458;
  param_1[2] = &PTR_LAB_007e4454;
  FUN_00407da0();
  bVar8 = param_5 == -1;
  param_5 = param_6;
  if (bVar8) {
    iVar1 = FUN_00584270(0x74,0x65,0x5e);
  }
  if (param_6 == -1) {
    param_5 = FUN_00584270(0xd0,200,0xa0);
  }
  uVar6 = (undefined2)iVar1;
  if (param_4 == 0) {
    iVar2 = param_2 + -1;
    iVar1 = param_3 + -1;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar6;
    FUN_004012e0(iVar2,0,iVar2,iVar1);
    FUN_004012e0(0,iVar1,iVar2,iVar1);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar6;
    FUN_004012e0(0,0,0,iVar1);
    uVar3 = 0;
    iVar2 = 0;
    uVar4 = 0;
  }
  else {
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_004129c4(param_4);
    iVar7 = param_2 + -1;
    iVar5 = param_3 + -1;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar6;
    FUN_004012e0(iVar7,6,iVar7,iVar5);
    FUN_004012e0(0,iVar5,iVar7,iVar5);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar6;
    FUN_004012e0(0,6,0,iVar5);
    FUN_004133fd(param_4,5,0,*(undefined4 *)((int)param_1 + 0x62),iVar1,0);
    FUN_004012e0(0,6,4,6);
    uVar3 = 6;
    iVar2 = iVar2 + 5;
    uVar4 = 6;
  }
  FUN_004012e0(iVar2,uVar4,param_2 + -1,uVar3);
  FUN_00404a40(param_2 / 2,param_3 / 2,param_5);
  *(undefined1 *)(*(int *)((int)param_1 + 0x62) + 0x252) = 1;
  ExceptionList = local_c;
  return param_1;
}


