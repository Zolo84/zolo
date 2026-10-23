// FUN_004a1d90 @ 4a1d90 size=68

uint __thiscall FUN_004a1d90(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_2 + 4);
  do {
    if (piVar2 == (int *)0x0) {
      return param_2 & 0xffffff00;
    }
    piVar1 = piVar2 + 2;
    iVar3 = *piVar2;
    param_2 = 0;
    piVar2 = (int *)*piVar1;
  } while (((&DAT_0089cad8)[iVar3] == 0) ||
          (iVar3 = *(int *)((&DAT_0089cad8)[iVar3] + 6) + 1, param_2 = iVar3 * 0xb,
          *(char *)(*(int *)(param_1 + 0x12da) + iVar3 * 0x2c) == '\0'));
  return CONCAT31((int3)(param_2 >> 8),1);
}


