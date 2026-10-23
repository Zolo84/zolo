// FUN_00533e40 @ 533e40 size=265

undefined4 * __thiscall FUN_00533e40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined4 *)((int)param_1 + 0x212) = 0;
  *param_1 = &PTR_FUN_007e8d70;
  if (DAT_00dc3a00 == '\0') {
    FUN_007a74f0((int)param_1 + 0x216,param_2);
  }
  else {
    FUN_007a630a((int)param_1 + 0x216,s__s__s_00850b10,&DAT_00dc3a00,param_2);
  }
  uVar1 = FUN_007a6615((int)param_1 + 0x216,param_3);
  param_1[2] = uVar1;
  if ((param_1[2] == 0) && (DAT_00dc3a00 != '\0')) {
    FUN_007a74f0((int)param_1 + 0x216,param_2);
    uVar1 = FUN_007a6615((int)param_1 + 0x216,param_3);
    param_1[2] = uVar1;
  }
  if (param_1[2] == 0) {
    FUN_00429a50(s_Couldn_t_open_file__s_00850b18,param_2);
  }
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x211) = 0;
  return param_1;
}


