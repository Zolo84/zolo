// FUN_0044c830 @ 44c830 size=531

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0044c830(int param_1,uint param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar5 = param_2;
  if (param_2 == 0) {
    fVar6 = (float10)_DAT_007e3374;
  }
  else {
    fVar6 = (float10)*(float *)(param_1 + 0x11a98 + (param_3 + *(int *)(param_2 + 0x130) * 6) * 4);
    switch(DAT_00dc16f8) {
    case 1:
      if ((fVar6 == (float10)_DAT_007e3380) && (iVar5 = *(int *)(param_2 + 0x13c), 0 < iVar5)) {
        piVar2 = (int *)(param_2 + 0x88);
        do {
          fVar1 = *(float *)(param_1 + 0x127b8 + (param_3 + *piVar2 * 6) * 4);
          if ((fVar1 != _DAT_007e3380) && (fVar6 < (float10)fVar1)) {
            fVar6 = (float10)fVar1;
          }
          piVar2 = piVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      break;
    case 2:
      iVar4 = *(int *)(param_2 + 0x13c);
      if (0 < iVar4) {
        param_2 = (uint)(fVar6 != (float10)_DAT_007e3380);
        uVar3 = (uint)(fVar6 != (float10)_DAT_007e3380);
        if (0 < iVar4) {
          piVar2 = (int *)(iVar5 + 0x88);
          do {
            fVar7 = (float10)*(float *)(param_1 + 0x127b8 + (param_3 + *piVar2 * 6) * 4);
            if (fVar7 != (float10)_DAT_007e3380) {
              fVar6 = fVar7 + fVar6;
              uVar3 = uVar3 + 1;
            }
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + -1;
            param_2 = uVar3;
          } while (iVar4 != 0);
        }
        fVar6 = fVar6 / (float10)(int)param_2;
      }
      break;
    case 3:
      iVar5 = *(int *)(param_2 + 0x13c);
      if (0 < iVar5) {
        piVar2 = (int *)(param_2 + 0x88);
        do {
          iVar4 = *piVar2;
          piVar2 = piVar2 + 1;
          iVar5 = iVar5 + -1;
          fVar6 = fVar6 + (float10)*(float *)(param_1 + 0x127b8 + (param_3 + iVar4 * 6) * 4);
        } while (iVar5 != 0);
      }
      break;
    case 4:
      iVar5 = *(int *)(param_2 + 0x13c);
      if (0 < iVar5) {
        piVar2 = (int *)(param_2 + 0x88);
        do {
          fVar1 = *(float *)(param_1 + 0x127b8 + (param_3 + *piVar2 * 6) * 4);
          if (((fVar1 != _DAT_007e3380) && (fVar6 != (float10)_DAT_007e3380)) &&
             ((float10)fVar1 < fVar6)) {
            fVar6 = (float10)fVar1;
          }
          piVar2 = piVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      break;
    case 5:
      iVar5 = *(int *)(param_2 + 0x13c);
      if (0 < iVar5) {
        piVar2 = (int *)(param_2 + 0x88);
        do {
          fVar1 = *(float *)(param_1 + 0x127b8 + (param_3 + *piVar2 * 6) * 4);
          if (((fVar1 != _DAT_007e3380) && (fVar6 != (float10)_DAT_007e3380)) &&
             (fVar6 < (float10)fVar1)) {
            fVar6 = (float10)fVar1;
          }
          piVar2 = piVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    fVar6 = fVar6 + (float10)_DAT_007e3374;
    if (fVar6 < (float10)_DAT_007e46cc) {
      return (float10)_DAT_007e46cc;
    }
  }
  return fVar6;
}


