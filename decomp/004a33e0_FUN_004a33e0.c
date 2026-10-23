// FUN_004a33e0 @ 4a33e0 size=50

uint __thiscall FUN_004a33e0(int param_1,uint param_2)

{
  if ((&DAT_0089cad8)[param_2] == 0) {
    return param_2 & 0xffffff00;
  }
  return CONCAT31((int3)(param_2 * 0xb >> 8),
                  *(char *)(*(int *)(param_1 + 0x12da) + 0x32 + param_2 * 0x2c) != '\0');
}


