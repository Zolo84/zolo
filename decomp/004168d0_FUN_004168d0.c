// FUN_004168d0 @ 4168d0 size=197

undefined4 * __thiscall
FUN_004168d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9cc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414ed0(param_2,param_3,param_4);
  local_4 = 0;
  FUN_004d8990();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007e3738;
  param_1[2] = &PTR_LAB_007e3734;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e3730;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  iVar1 = FUN_00415be0();
  iVar1 = iVar1 / 2;
  iVar2 = FUN_00415bd0(iVar1);
  FUN_00415a20(iVar2 / 2,iVar1);
  FUN_00415ef0(&DAT_00a98430);
  FUN_00415d30(DAT_00bd1bac);
  *(undefined1 *)((int)param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  ExceptionList = local_c;
  return param_1;
}


