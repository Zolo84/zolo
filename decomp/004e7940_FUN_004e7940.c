// FUN_004e7940 @ 4e7940 size=47

uint __thiscall FUN_004e7940(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    piVar2 = *(int **)(param_1 + 0x298);
    do {
      if (*piVar2 == param_2) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 < *(int *)(param_1 + 0x290));
  }
  return uVar1 & 0xffffff00;
}


