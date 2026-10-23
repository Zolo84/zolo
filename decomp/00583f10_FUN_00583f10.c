// FUN_00583f10 @ 583f10 size=318

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583f10(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  tagRECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  if (DAT_0087b63c != 0) {
    if (DAT_0088fae8 == 0) {
      local_20.top = 0;
      _DAT_00bd153c = *(int *)(DAT_00bd1bac + 8);
      piVar3 = (int *)(DAT_00bd1bac + 8);
      piVar4 = (int *)(DAT_00bd1bac + 4);
      local_20.left = 0;
      _DAT_00bd1538 = *piVar4;
    }
    else {
      GetWindowRect(DAT_00dc4a58,&local_20);
      iVar1 = GetSystemMetrics(8);
      iVar2 = GetSystemMetrics(4);
      local_20.top = iVar1 + iVar2 + local_20.top;
      piVar3 = (int *)(DAT_00bd1bac + 8);
      piVar4 = (int *)(DAT_00bd1bac + 4);
      _DAT_00bd153c = local_20.top + *piVar3;
      local_20.left = local_20.left + 4;
      _DAT_00bd1538 = *piVar4 + local_20.left;
    }
    local_4 = *piVar3;
    local_8 = *piVar4;
    local_10 = 0;
    local_c = 0;
    DAT_00bd1530 = local_20.left;
    DAT_00bd1534 = local_20.top;
    local_20.right = _DAT_00bd1538;
    local_20.bottom = _DAT_00bd153c;
    FUN_00584750(&local_10);
    FUN_00406300(DAT_00bd1530,DAT_00bd1534);
    if ((0 < DAT_00bd1bc0) && (DAT_00bd1bc0 < DAT_00bd1bbc)) {
      FUN_0057a250((&DAT_00bd1960)[DAT_00bd1bc0],DAT_00bd1960,1);
    }
    FUN_0057ab40();
  }
  return;
}


