// FUN_005172f0 @ 5172f0 size=228

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005172f0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_8;
  
  fVar5 = (float10)_DAT_007e82b8;
  local_8 = _DAT_007e82b8;
  piVar4 = *(int **)(param_1 + 0x26);
  if (*(int **)(param_1 + 0x26) != (int *)0x0) {
    do {
      piVar1 = piVar4 + 2;
      if ((float10)*(float *)(*piVar4 + 0x2f8) < fVar5) {
        fVar5 = (float10)*(float *)(*piVar4 + 0x2f8);
      }
      piVar4 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    local_8 = (float)fVar5;
  }
  if (param_2 == 0x17) {
    fVar5 = fVar5 * (float10)_DAT_008774f4;
  }
  else if (param_2 == 0x1c) {
    fVar5 = fVar5 * (float10)_DAT_00877520;
  }
  else {
    if (param_2 != 0x20) goto LAB_00517358;
    fVar5 = fVar5 * (float10)_DAT_00877540;
  }
  local_8 = (float)fVar5;
LAB_00517358:
  if (DAT_00dc1740 != '\0') {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
    fVar2 = DAT_0087733c;
    if (DAT_00877338 < iVar3) {
      iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
      fVar5 = (float10)_DAT_007e3374 - (float10)(iVar3 - DAT_00877338) * (float10)_DAT_00dc173c;
      if (fVar5 <= (float10)fVar2) {
        fVar5 = (float10)fVar2;
      }
      return fVar5 * (float10)local_8 * (float10)_DAT_007e543c;
    }
    fVar5 = (float10)local_8;
  }
  return fVar5 * (float10)_DAT_007e543c;
}


