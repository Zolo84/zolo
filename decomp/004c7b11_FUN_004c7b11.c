// FUN_004c7b11 @ 4c7b11 size=71

int FUN_004c7b11(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x97 < local_8) {
      return 0;
    }
    iVar1 = FUN_007a8730((&PTR_DAT_008401a4)[local_8],param_1);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}


