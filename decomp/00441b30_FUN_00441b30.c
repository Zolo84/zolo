// FUN_00441b30 @ 441b30 size=220

undefined4 * __thiscall
FUN_00441b30(undefined4 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb1e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[2] = &PTR_LAB_007e48a0;
  local_4 = 1;
  *param_1 = &PTR_FUN_007e4880;
  if (param_2 != (int *)0x0) {
    if (*param_2 < 0x100) {
      *param_2 = 0x100;
    }
    if (*(int *)(DAT_00bd1bac + 4) < *param_2 + param_3 / 2) {
      *param_2 = *(int *)(DAT_00bd1bac + 4) - param_3 / 2;
    }
    if (param_2[1] < 0x20) {
      param_2[1] = 0x20;
    }
    if (*(int *)(DAT_00bd1bac + 8) < param_2[1] + param_4) {
      param_2[1] = *(int *)(DAT_00bd1bac + 8) - param_4;
    }
  }
  FUN_00441c10(param_2,param_3,param_4,param_5,0xff,0);
  ExceptionList = local_c;
  return param_1;
}


