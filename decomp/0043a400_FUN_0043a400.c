// FUN_0043a400 @ 43a400 size=533

undefined4 * __thiscall FUN_0043a400(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bab38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414ed0(param_2,param_3,0x10);
  local_4 = 0;
  *param_1 = &PTR_FUN_007e440c;
  param_1[2] = &PTR_LAB_007e4408;
  FUN_00407da0();
  if (param_4 == 0) {
    uVar1 = FUN_00584270(0,0,0);
    iVar4 = param_2 + -1;
    iVar2 = param_3 + -1;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(iVar4,0,iVar4,iVar2);
    FUN_004012e0(0,iVar2,iVar4,iVar2);
    uVar1 = FUN_00584270(0,0,0);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(0,0,0,iVar2);
    FUN_004012e0(0,0,iVar4,0);
  }
  else {
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_004129c4(param_4);
    uVar1 = FUN_00584270(0,0,0);
    iVar5 = param_2 + -1;
    iVar4 = param_3 + -1;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(iVar5,6,iVar5,iVar4);
    FUN_004012e0(0,iVar4,iVar5,iVar4);
    uVar1 = FUN_00584270(0,0,0);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(0,6,0,iVar4);
    uVar6 = 0;
    uVar3 = FUN_00584270(0,0,0);
    FUN_004133fd(param_4,5,0,*(undefined4 *)((int)param_1 + 0x62),uVar3,uVar6);
    FUN_004012e0(0,6,4,6);
    FUN_004012e0(iVar2 + 5,6,iVar5,6);
  }
  uVar3 = FUN_00584270(0xa8,0x94,0x89);
  FUN_00404a40(param_2 / 2,param_3 / 2,uVar3);
  *(undefined1 *)(*(int *)((int)param_1 + 0x62) + 0x252) = 1;
  ExceptionList = local_c;
  return param_1;
}


