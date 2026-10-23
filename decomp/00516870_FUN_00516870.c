// FUN_00516870 @ 516870 size=26

int FUN_00516870(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = _rand();
    return iVar1 % (param_1 + 1);
  }
  return 0;
}


