// FUN_004c8a6b @ 4c8a6b size=129

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8a6b(void)

{
  int iVar1;
  int local_8;
  
  if ((DAT_008e8de1 & 1) == 0) {
    DAT_008e8de1 = DAT_008e8de1 | 1;
    _DAT_008e9760 = &PTR_FUN_007e7c68;
    local_8 = DAT_008e9764;
    while (local_8 != 0) {
      iVar1 = *(int *)(local_8 + 8);
      FUN_00796cd8(local_8);
      local_8 = iVar1;
    }
    DAT_008e9764 = 0;
    DAT_008e9768 = 0;
    DAT_008e976c = 0;
  }
  return;
}


