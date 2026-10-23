// FUN_00533d40 @ 533d40 size=80

undefined4 * __thiscall FUN_00533d40(undefined4 *param_1,char param_2)

{
  undefined **local_c;
  
  *param_1 = 0x526;
  if (param_2 == '\0') {
    local_c = (undefined **)&DAT_00850b00;
  }
  else {
    local_c = &PTR_LAB_00850afc;
  }
  FUN_007a630a(param_1 + 1,&DAT_00850b04,local_c);
  return param_1;
}


