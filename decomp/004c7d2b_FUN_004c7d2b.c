// FUN_004c7d2b @ 4c7d2b size=516

void FUN_004c7d2b(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_18;
  int local_8;
  
  for (local_8 = 1; local_8 < DAT_00877690; local_8 = local_8 + 1) {
    iVar3 = DAT_00ab27b4 + local_8 * 0x4b2;
    iVar4 = *(int *)(iVar3 + 0x288);
    iVar1 = *(int *)(iVar3 + 0x28c);
    if ((iVar4 != 0) && (iVar4 != 0x1c5)) {
      for (local_18 = 0; local_18 < *(int *)(iVar3 + 0x290); local_18 = local_18 + 1) {
        iVar5 = DAT_00ab27b4 + *(int *)(*(int *)(iVar3 + 0x298) + local_18 * 0xc) * 0x4b2;
        if (iVar4 != *(int *)(iVar5 + 0x288)) {
          cVar2 = (**(code **)(*(int *)(&DAT_008ed068 + iVar4 * 0x12) + 0x24))
                            (*(undefined4 *)(iVar5 + 0x288));
          if (cVar2 == '\0') {
            FUN_004ce9f0(*(undefined4 *)(iVar5 + 0x288));
          }
        }
      }
    }
    if ((iVar1 != 0) && (iVar1 != 0x62)) {
      for (local_20 = 0; local_20 < *(int *)(iVar3 + 0x290); local_20 = local_20 + 1) {
        iVar4 = DAT_00ab27b4 + *(int *)(*(int *)(iVar3 + 0x298) + local_20 * 0xc) * 0x4b2;
        if (iVar1 != *(int *)(iVar4 + 0x28c)) {
          cVar2 = (**(code **)(*(int *)(&DAT_008e8330 + iVar1 * 0x12) + 0x24))
                            (*(undefined4 *)(iVar4 + 0x28c));
          if (cVar2 == '\0') {
            FUN_004ceaf0(*(undefined4 *)(iVar4 + 0x28c));
          }
        }
      }
    }
  }
  return;
}


