// FUN_004e8a10 @ 4e8a10 size=43

void __thiscall FUN_004e8a10(int param_1,char param_2)

{
  *(char *)(param_1 + 0x46e) = param_2;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x142) = *(uint *)(param_1 + 0x142) & 0x1f;
    return;
  }
  *(uint *)(param_1 + 0x142) = *(uint *)(param_1 + 0x142) | 0x20;
  return;
}


