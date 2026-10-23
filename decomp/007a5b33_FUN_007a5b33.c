// FUN_007a5b33 @ 7a5b33 size=60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007a5b33(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_007a83c0(param_1,param_2);
  bVar2 = param_3 < 0;
  iVar1 = param_3;
  if (0 < param_3) {
    iVar1 = 0;
    do {
      fVar3 = fVar3 * (float10)_DAT_007e7f28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar2 = false;
  }
  if (bVar2) {
    iVar1 = -iVar1;
    do {
      fVar3 = fVar3 * (float10)_DAT_007e3428;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return fVar3;
}


