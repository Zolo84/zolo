// FUN_004c9366 @ 4c9366 size=395

void FUN_004c9366(void)

{
  int iVar1;
  int local_30;
  int local_24;
  int local_8;
  
  FUN_004cc738();
  for (local_8 = 1; local_8 < DAT_00877690; local_8 = local_8 + 1) {
    iVar1 = FUN_004e9370(local_8);
    if (*(int *)(iVar1 + 0x482) != 0) {
      iVar1 = *(int *)(iVar1 + 0x482);
      FUN_004c9eab();
      if (iVar1 != 0) {
        FUN_004c8bc2();
        FUN_00796cd8(iVar1);
      }
    }
  }
  for (local_8 = 1; local_8 < 0x158; local_8 = local_8 + 1) {
    if ((&DAT_0089cad8)[local_8] != 0) {
      (**(code **)(*(int *)((&DAT_0089cad8)[local_8] + 0xe86a) + 0x10))();
    }
  }
  local_24 = DAT_008e9764;
  while (local_24 != 0) {
    iVar1 = *(int *)(local_24 + 8);
    FUN_00796cd8(local_24);
    local_24 = iVar1;
  }
  DAT_008e9764 = 0;
  DAT_008e9768 = 0;
  DAT_008e976c = 0;
  local_30 = DAT_008ea354;
  while (local_30 != 0) {
    iVar1 = *(int *)(local_30 + 8);
    FUN_00796cd8(local_30);
    local_30 = iVar1;
  }
  DAT_008ea354 = 0;
  DAT_008ea358 = 0;
  DAT_008ea35c = 0;
  return;
}


