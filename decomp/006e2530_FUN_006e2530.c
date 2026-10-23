// FUN_006e2530 @ 6e2530 size=94

undefined4 * __thiscall
FUN_006e2530(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5)

{
  FUN_0043eb30(param_5,param_2);
  *(undefined2 *)((int)param_1 + 0x9a) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  param_1[0x28] = param_5;
  *(undefined4 *)((int)param_1 + 0x9a) = param_3;
  *param_1 = &PTR_FUN_007f7de8;
  param_1[2] = &PTR_LAB_007f7de4;
  *(undefined2 *)((int)param_1 + 0x9e) = param_4;
  return param_1;
}


