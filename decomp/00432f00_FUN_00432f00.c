// FUN_00432f00 @ 432f00 size=273

int * __thiscall
FUN_00432f00(int *param_1,undefined4 param_2,int param_3,undefined2 *param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba598;
  local_c = ExceptionList;
  uVar3 = 0x10;
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  ExceptionList = &local_c;
  iVar1 = FUN_004129c4(param_2);
  FUN_00414ed0(iVar1 << 2,uVar2,uVar3);
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e4130;
  param_1[0x22] = (int)param_5;
  *(undefined1 *)((int)param_1 + 0x87) = 1;
  local_4 = 0;
  *(undefined2 *)(param_1 + 0x23) = *param_4;
  *(undefined4 *)((int)param_1 + 0x8e) = *(undefined4 *)(param_4 + 1);
  *param_1 = (int)&PTR_FUN_007e40cc;
  param_1[2] = (int)&PTR_LAB_007e40c8;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e40c4;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  (*(code *)PTR_FUN_007e4100)(4);
  if (*(char *)((int)param_1 + 0x86) != '\0') {
    (**(code **)(*param_1 + 0x54))();
  }
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  (**(code **)(*param_1 + 0x54))();
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  param_1[0x26] = -1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  param_1[0x29] = 0x10;
  *(undefined1 *)((int)param_1 + 0xa2) = 1;
  FUN_00433740(param_2,param_3,0);
  ExceptionList = param_1;
  return param_1;
}


