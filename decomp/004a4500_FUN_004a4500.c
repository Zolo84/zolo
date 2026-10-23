// FUN_004a4500 @ 4a4500 size=106

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a4500(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = FUN_0044beb0();
  if (cVar2 != '\0') {
    piVar3 = &DAT_0089cad8;
    do {
      if ((*piVar3 != 0) &&
         (iVar1 = *(int *)(*piVar3 + 6),
         *(char *)(*(int *)(param_1 + 0x12da) + iVar1 * 0x2c + 0x2c) != '\0')) {
        cVar2 = FUN_005861c0(iVar1);
        if (cVar2 != '\0') {
          return (float10)_DAT_007e3380;
        }
      }
      piVar3 = piVar3 + 1;
    } while ((int)piVar3 < 0x89d038);
  }
  return (float10)*(float *)(*(int *)(param_2 + 0x244) + 0x62);
}


