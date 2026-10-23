// FUN_00584050 @ 584050 size=278

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00584050(int *param_1)

{
  int iVar1;
  int iVar2;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (DAT_0087b63c != 0) {
    if (DAT_0088fae8 == 0) {
      local_20.top = 0;
      _DAT_00bd153c = *(int *)(DAT_00bd1bac + 8);
      local_20.left = 0;
      _DAT_00bd1538 = *(int *)(DAT_00bd1bac + 4);
    }
    else {
      GetWindowRect(DAT_00dc4a58,&local_20);
      iVar1 = GetSystemMetrics(8);
      iVar2 = GetSystemMetrics(4);
      local_20.top = iVar2 + local_20.top + iVar1;
      local_20.left = local_20.left + 4;
      _DAT_00bd153c = *(int *)(DAT_00bd1bac + 8) + local_20.top;
      _DAT_00bd1538 = *(int *)(DAT_00bd1bac + 4) + local_20.left;
    }
    local_10 = *param_1 + local_20.left;
    local_c = param_1[1] + local_20.top;
    local_8 = param_1[2] + local_20.left;
    local_4 = param_1[3] + local_20.top;
    DAT_00bd1530 = local_20.left;
    DAT_00bd1534 = local_20.top;
    local_20.right = _DAT_00bd1538;
    local_20.bottom = _DAT_00bd153c;
    FUN_00584750(param_1);
    FUN_00406300(*param_1 + DAT_00bd1530,param_1[1] + DAT_00bd1534);
    FUN_0057ab40();
  }
  return;
}


