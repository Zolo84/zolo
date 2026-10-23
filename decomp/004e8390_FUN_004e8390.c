// FUN_004e8390 @ 4e8390 size=98

uint __fastcall FUN_004e8390(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    piVar3 = *(int **)(param_1 + 0x298);
    do {
      iVar1 = *(int *)(DAT_00ab27b4 + 0x254 + *piVar3 * 0x4b2);
      in_EAX = 0;
      if (((iVar1 != 8) && (in_EAX = 0, iVar1 != 9)) &&
         (in_EAX = *(uint *)(param_1 + 0x3d4),
         *(uint *)(DAT_00ab27b4 + *piVar3 * 0x4b2 + 0x3d4) != in_EAX)) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)(param_1 + 0x290));
  }
  return in_EAX & 0xffffff00;
}


