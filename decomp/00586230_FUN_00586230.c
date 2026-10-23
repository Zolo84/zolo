// FUN_00586230 @ 586230 size=22

undefined4 __thiscall FUN_00586230(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)(param_2 * 0xb) >> 8),
                  *(char *)(param_1 + 0x31 + param_2 * 0x2c) != '\0');
}


