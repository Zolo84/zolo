// FUN_004cc25e @ 4cc25e size=537

void FUN_004cc25e(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *local_34;
  int local_2c;
  int local_28;
  int *local_1c;
  int local_10;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x25e; local_8 = local_8 + 1) {
    *(undefined4 *)(&DAT_008e8de4 + local_8 * 4) = 0;
  }
  for (local_8 = 0; local_8 < 0x98; local_8 = local_8 + 1) {
    *(undefined4 *)(&DAT_008ece04 + local_8 * 4) = 0;
  }
  for (local_8 = 1; local_8 < 0x25e; local_8 = local_8 + 1) {
    local_10 = -1;
    local_c = 3;
    while (local_10 == -1) {
      bVar3 = true;
      local_1c = *(int **)(&DAT_008ed06c + local_8 * 0x12);
      while ((local_1c != (int *)0x0 && (bVar3))) {
        piVar1 = local_1c + 2;
        iVar2 = *local_1c;
        local_1c = (int *)*piVar1;
        if (*(int *)(&DAT_008e8de4 + iVar2 * 4) == local_c) {
          bVar3 = false;
        }
      }
      if (bVar3) {
        local_10 = local_c;
      }
      else {
        local_c = local_c + 1;
      }
    }
    *(int *)(&DAT_008e8de4 + local_8 * 4) = local_c;
  }
  for (local_8 = 1; local_8 < 0x98; local_8 = local_8 + 1) {
    local_2c = -1;
    local_28 = 3;
    while (local_2c == -1) {
      bVar3 = true;
      local_34 = *(int **)(local_8 * 0x12 + 0x8e8334);
      while ((local_34 != (int *)0x0 && (bVar3))) {
        piVar1 = local_34 + 2;
        iVar2 = *local_34;
        local_34 = (int *)*piVar1;
        if (*(int *)(&DAT_008ece04 + iVar2 * 4) == local_28) {
          bVar3 = false;
        }
      }
      if (bVar3) {
        local_2c = local_28;
      }
      else {
        local_28 = local_28 + 1;
      }
    }
    *(int *)(&DAT_008ece04 + local_8 * 4) = local_28;
  }
  return;
}


