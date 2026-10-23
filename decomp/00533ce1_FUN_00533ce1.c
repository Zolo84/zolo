// FUN_00533ce1 @ 533ce1 size=95

undefined4 * __thiscall FUN_00533ce1(undefined4 *param_1,float param_2)

{
  int iVar1;
  undefined **local_10;
  
  *param_1 = 0x525;
  iVar1 = __ftol();
  if ((float)iVar1 == param_2) {
    local_10 = &PTR_PTR_00850af0;
  }
  else {
    local_10 = (undefined **)&DAT_00850af4;
  }
  FUN_007a630a(param_1 + 1,local_10,(double)param_2);
  return param_1;
}


