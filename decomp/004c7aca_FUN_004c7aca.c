// FUN_004c7aca @ 4c7aca size=71

int FUN_004c7aca(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x25d < local_8) {
      return 0;
    }
    iVar1 = FUN_007a8730((&PTR_DAT_0083f7ec)[local_8],param_1);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}


