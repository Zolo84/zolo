// FUN_004c8b41 @ 4c8b41 size=129

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8b41(void)

{
  int iVar1;
  int local_8;
  
  if ((DAT_008e8de1 & 2) == 0) {
    DAT_008e8de1 = DAT_008e8de1 | 2;
    _DAT_008ea350 = &PTR_FUN_007e7c98;
    local_8 = DAT_008ea354;
    while (local_8 != 0) {
      iVar1 = *(int *)(local_8 + 8);
      FUN_00796cd8(local_8);
      local_8 = iVar1;
    }
    DAT_008ea354 = 0;
    DAT_008ea358 = 0;
    DAT_008ea35c = 0;
  }
  return;
}


