// FUN_0043a1f0 @ 43a1f0 size=476

undefined4 * __thiscall FUN_0043a1f0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bab18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414ed0(param_2,param_3,0x10);
  local_4 = 0;
  *param_1 = &PTR_FUN_007e43c0;
  param_1[2] = &PTR_LAB_007e43bc;
  FUN_00407da0();
  if (param_4 == 0) {
    uVar1 = FUN_00584270(0x74,0x65,0x5e);
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(param_2,0,param_2,param_3);
    FUN_004012e0(0,param_3,param_2,param_3);
    uVar1 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(0,0,0,param_3);
    FUN_004012e0(0,0,param_2,0);
  }
  else {
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_004129c4(param_4);
    uVar1 = FUN_00584270(0x74,0x65,0x5e);
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(param_2,6,param_2,param_3);
    FUN_004012e0(0,param_3,param_2,param_3);
    uVar1 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(*(int *)((int)param_1 + 0x62) + 0x25a) = uVar1;
    FUN_004012e0(0,6,0,param_3);
    uVar4 = 0;
    uVar3 = FUN_00584270(0x74,0x65,0x5e);
    FUN_004133fd(param_4,5,0,*(undefined4 *)((int)param_1 + 0x62),uVar3,uVar4);
    FUN_004012e0(0,6,4,6);
    FUN_004012e0(iVar2 + 5,6,param_2,6);
  }
  *(undefined1 *)(*(int *)((int)param_1 + 0x62) + 0x252) = 1;
  ExceptionList = local_c;
  return param_1;
}


