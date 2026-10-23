// FUN_004e8a40 @ 4e8a40 size=43

void __thiscall FUN_004e8a40(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x142) = param_2;
  if (*(char *)(param_1 + 0x46e) != '\0') {
    *(uint *)(param_1 + 0x142) = param_2 & 0x1f;
    return;
  }
  *(uint *)(param_1 + 0x142) = param_2 | 0x20;
  return;
}


