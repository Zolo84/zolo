// FUN_0075d000 @ 75d000 size=43

uint __fastcall FUN_0075d000(int param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0xdc));
  if (*(char *)(param_1 + 0xdc) == '\0') {
    uVar1 = (uint)*(short *)(DAT_00893530 + 0x18);
    if ((*(int *)(param_1 + 0xd4) <= (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0xd0))) {
      return CONCAT31((int3)(char)((ushort)*(short *)(DAT_00893530 + 0x18) >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


