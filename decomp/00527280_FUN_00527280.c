// FUN_00527280 @ 527280 size=377

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00527280(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float local_8;
  float local_4;
  
  if (DAT_00dc1743 != '\0') {
    local_8 = 0.0;
    local_4 = 0.0;
    piVar6 = *(int **)(param_1 + 4);
    while (piVar6 != (int *)0x0) {
      piVar1 = (int *)piVar6[2];
      piVar2 = *(int **)(*piVar6 + 0x26);
      while (piVar6 = piVar1, piVar2 != (int *)0x0) {
        piVar6 = (int *)piVar2[2];
        iVar3 = *piVar2;
        piVar2 = piVar6;
        if (*(int *)(iVar3 + 0x134) != 0x1e) {
          iVar3 = FUN_004fccd0();
          if (iVar3 == 0) {
            local_4 = local_4 + _DAT_007e3374;
          }
          else if (iVar3 == 2) {
            local_8 = local_8 + _DAT_007e3374;
          }
        }
      }
    }
    local_8 = _DAT_00877348 * local_8;
    if ((local_8 < local_4) && (local_4 != _DAT_007e3380)) {
      if (local_8 == _DAT_007e3380) {
        return (float10)_DAT_007e3380;
      }
      return (float10)local_8 / (float10)local_4;
    }
LAB_005273c9:
    return (float10)_DAT_007e3374;
  }
  iVar5 = 0;
  iVar3 = 0;
  piVar6 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    do {
      piVar1 = (int *)piVar6[2];
      piVar6 = *(int **)(*piVar6 + 0x26);
      while (piVar6 != (int *)0x0) {
        piVar2 = (int *)piVar6[2];
        iVar4 = *piVar6;
        piVar6 = piVar2;
        if (*(int *)(iVar4 + 0x134) != 0x1e) {
          iVar4 = FUN_004fccd0();
          if (iVar4 == 0) {
            iVar3 = iVar3 + 1;
          }
          else if (iVar4 == 2) {
            iVar5 = iVar5 + 1;
          }
        }
      }
      piVar6 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (iVar5 < iVar3) {
      if (iVar3 != 0) {
        if (iVar5 == 0) {
          return (float10)_DAT_007e3380;
        }
        return (float10)iVar5 / (float10)iVar3;
      }
      goto LAB_005273c9;
    }
  }
  return (float10)_DAT_007e3374;
}


