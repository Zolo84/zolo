// FUN_0079c25c @ 79c25c size=245

int FUN_0079c25c(int param_1,int *param_2,int param_3,undefined *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_8;
  
  iVar2 = *param_2;
  local_8 = 0;
  if (param_4 == (undefined *)0x0) {
    param_4 = &DAT_00dc5010;
  }
  InterlockedIncrement(&DAT_00dc5c70);
  bVar3 = DAT_00dc5c6c == 0;
  if (!bVar3) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  if (param_1 == 0) {
    while( true ) {
      iVar1 = FUN_0079c00c((int)&param_1 + 2,iVar2,0x7fffffff,param_4,0);
      if (iVar1 < 0) break;
      if (iVar1 == 0) goto LAB_0079c332;
      local_8 = local_8 + 1;
      iVar2 = iVar2 + iVar1;
    }
    if (bVar3) {
      InterlockedDecrement(&DAT_00dc5c70);
    }
    else {
      FUN_007aaed2(0x13);
    }
    local_8 = -1;
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = FUN_0079c00c(param_1,iVar2,0x7fffffff,param_4,0);
      if (iVar1 < 0) {
        local_8 = -1;
        break;
      }
      if (iVar1 == 0) {
        iVar2 = 0;
        break;
      }
      local_8 = local_8 + 1;
      param_1 = param_1 + 2;
      iVar2 = iVar2 + iVar1;
    }
    *param_2 = iVar2;
LAB_0079c332:
    if (bVar3) {
      InterlockedDecrement(&DAT_00dc5c70);
    }
    else {
      FUN_007aaed2(0x13);
    }
  }
  return local_8;
}


