// FUN_004c7b58 @ 4c7b58 size=68

int FUN_004c7b58(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return 0;
    }
    iVar1 = FUN_007a8730((&PTR_DAT_00840164)[local_8],param_1);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}


