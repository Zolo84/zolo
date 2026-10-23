// FUN_00512990 @ 512990 size=29

uint __thiscall FUN_00512990(int param_1,int param_2)

{
  uint in_EAX;
  
  if (*(int *)(param_1 + 4) != 0x14) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                  *(int *)(param_2 + 0xc) == *(int *)(param_1 + 8));
}


