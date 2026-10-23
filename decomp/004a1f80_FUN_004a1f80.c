// FUN_004a1f80 @ 4a1f80 size=85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004a1f80(int param_1)

{
  int *piVar1;
  char cVar2;
  
  if (_DAT_007e3374 <= *(float *)(*(int *)(param_1 + 0x244) + 0x2a)) {
    return 1;
  }
  cVar2 = FUN_0044beb0();
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_1 + 0x3350);
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    cVar2 = (**(code **)(*piVar1 + 0x14))();
    if (((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 0x18))(), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*piVar1 + 0x1c))(), cVar2 == '\0')) {
      return 1;
    }
  }
  return 0;
}


