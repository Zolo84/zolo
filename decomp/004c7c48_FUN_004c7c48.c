// FUN_004c7c48 @ 4c7c48 size=227

void FUN_004c7c48(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x25e; local_8 = local_8 + 1) {
    (**(code **)(*(int *)((int)&DAT_008ea368 + local_8 * 0x12) + 0x10))();
  }
  for (local_8 = 0; local_8 < 0x25e; local_8 = local_8 + 1) {
    (**(code **)(*(int *)(&DAT_008ed068 + local_8 * 0x12) + 0x10))();
  }
  for (local_8 = 0; local_8 < 0x98; local_8 = local_8 + 1) {
    (**(code **)(*(int *)((int)&DAT_008e9778 + local_8 * 0x12) + 0x10))();
  }
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    (**(code **)(*(int *)((int)&DAT_008ea228 + local_8 * 0x12) + 0x10))();
  }
  return;
}


