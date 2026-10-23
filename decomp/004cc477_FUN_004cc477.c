// FUN_004cc477 @ 4cc477 size=94

undefined4 FUN_004cc477(int param_1,int param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = *(int **)(&DAT_008ed06c + param_1 * 0x12);
  do {
    if (local_8 == (int *)0x0) {
      return 0;
    }
    iVar1 = *local_8;
    local_8 = (int *)local_8[2];
  } while (iVar1 != param_2);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


