// FUN_006ac310 @ 6ac310 size=106

int FUN_006ac310(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 - (*(int *)(*DAT_00d12b40 + 0x362) * param_1) / 10;
  param_2 = param_2 - (*(int *)(*DAT_00d12b40 + 0x362) * param_2) / 10;
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  iVar1 = _rand();
  return iVar1 % param_2 + param_1;
}


