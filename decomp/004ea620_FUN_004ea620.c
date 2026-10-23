// FUN_004ea620 @ 4ea620 size=104

uint __thiscall FUN_004ea620(int param_1,uint param_2)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    piVar1 = *(int **)(param_1 + 0x298);
    do {
      if (piVar1[1] != 4) {
        in_EAX = *(uint *)(DAT_00ab27b4 + 0x3d4 + *piVar1 * 0x4b2);
        if (((in_EAX != 0) && (in_EAX == param_2)) &&
           (*(uint *)(DAT_00ab27b4 + *piVar1 * 0x4b2 + 0x3d8) == param_2)) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x290));
  }
  return in_EAX & 0xffffff00;
}


