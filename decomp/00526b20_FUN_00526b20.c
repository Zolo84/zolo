// FUN_00526b20 @ 526b20 size=25

bool __thiscall FUN_00526b20(int param_1,byte param_2)

{
  return (1 << (param_2 & 0x1f) & *(uint *)(param_1 + 0x1e)) != 0;
}


