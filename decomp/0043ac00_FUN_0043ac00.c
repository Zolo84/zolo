// FUN_0043ac00 @ 43ac00 size=179

undefined4 * __thiscall
FUN_0043ac00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bab98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433660();
  uVar3 = 0;
  *param_1 = &PTR_FUN_007e44a8;
  param_1[2] = &PTR_LAB_007e44a4;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e44a0;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_0043ade0(param_2,uVar1,param_6,uVar3);
  *(undefined4 *)((int)param_1 + 0x92) = param_3;
  if (param_4 < 0) {
    iVar2 = FUN_00415bd0();
    param_4 = -(iVar2 / 2) - param_4;
  }
  FUN_00433970(param_4,param_5);
  FUN_00415d30(param_7);
  ExceptionList = local_c;
  return param_1;
}


