// FUN_004010a0 @ 4010a0 size=63

undefined4 * __thiscall
FUN_004010a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_00405680(param_2,param_3,param_4,param_5);
  *param_1 = &PTR_FUN_007e32fc;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[10] = &PTR_LAB_007e32f8;
  return param_1;
}


