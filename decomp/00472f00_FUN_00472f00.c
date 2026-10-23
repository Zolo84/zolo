// FUN_00472f00 @ 472f00 size=334

int FUN_00472f00(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _rand();
  iVar2 = __ftol();
  if (iVar2 < 1) {
    return 0xc;
  }
  iVar1 = iVar1 % iVar2;
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 3;
  }
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 8;
  }
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 6;
  }
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 7;
  }
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 1;
  }
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 5;
  }
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 4;
  }
  iVar2 = __ftol();
  if (iVar1 < iVar2) {
    return 0;
  }
  iVar2 = __ftol();
  return ((iVar2 <= iVar1) - 1 & 0xfffffff6) + 0xc;
}


