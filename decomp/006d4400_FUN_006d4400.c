// FUN_006d4400 @ 6d4400 size=99

undefined4 FUN_006d4400(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((((-1 < param_1) && (iVar1 = FUN_005841a0(), param_1 < iVar1)) && (-1 < param_2)) &&
     (iVar1 = FUN_005841b0(), param_2 < iVar1)) {
    iVar3 = 0;
    iVar1 = *(int *)(DAT_0089c0b0 + param_2 * 8);
    if (0 < iVar1) {
      piVar2 = *(int **)(DAT_0089c0b0 + (param_2 * 2 + 1) * 4);
      do {
        if ((*piVar2 <= param_1 * 2) && (param_1 * 2 <= piVar2[1])) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar3 < iVar1);
    }
    return 1;
  }
  return 0;
}


