// FUN_006e1e50 @ 6e1e50 size=108

undefined4 * __thiscall
FUN_006e1e50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  FUN_0043eb30(param_5,param_2);
  *param_1 = &PTR_FUN_007f7dbc;
  param_1[2] = &PTR_LAB_007f7db8;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = param_5;
  uVar1 = FUN_007a8d6d(param_4);
  *(undefined4 *)((int)param_1 + 0xa2) = uVar1;
  uVar1 = FUN_007a8d6d(param_3);
  *(undefined4 *)((int)param_1 + 0xa6) = uVar1;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  return param_1;
}


