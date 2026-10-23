// FUN_005342d1 @ 5342d1 size=151

int __fastcall FUN_005342d1(int param_1)

{
  int iVar1;
  char local_10;
  char *local_8;
  
  iVar1 = FUN_00429fa0(param_1 + 0x10);
  if (iVar1 < 0) {
    local_10 = *(char *)(param_1 + 0x10);
    local_8 = (char *)(param_1 + 0x11);
    while (local_10 != '\0') {
      iVar1 = FUN_007a8fb6((int)local_10);
      if (((iVar1 == 0) && (local_10 != '.')) && (local_10 != '-')) {
        return 0x527;
      }
      local_10 = *local_8;
      local_8 = local_8 + 1;
    }
    iVar1 = 0x524;
  }
  return iVar1;
}


