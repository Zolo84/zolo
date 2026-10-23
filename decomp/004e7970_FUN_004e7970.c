// FUN_004e7970 @ 4e7970 size=53

uint __thiscall FUN_004e7970(int param_1,int param_2)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    in_EAX = *(int **)(param_1 + 0x298);
    do {
      if ((*in_EAX == param_2) && (in_EAX[1] != 4)) {
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
      iVar1 = iVar1 + 1;
      in_EAX = in_EAX + 3;
    } while (iVar1 < *(int *)(param_1 + 0x290));
  }
  return (uint)in_EAX & 0xffffff00;
}


