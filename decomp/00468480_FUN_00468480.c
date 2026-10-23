// FUN_00468480 @ 468480 size=219

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00468480(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x11836) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1183a) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1183e) = 0x3dcccccd;
  piVar3 = *(int **)(param_1 + 0x4508);
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    piVar5 = *(int **)(*piVar3 + 0x26);
    while (piVar3 = piVar2, piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[2];
      iVar4 = *piVar5;
      iVar6 = *(int *)(iVar4 + 0x13c);
      fVar1 = *(float *)(&DAT_00dbe9be + *(int *)(iVar4 + 0x130) * 4);
      if (0 < iVar6) {
        piVar5 = (int *)(iVar4 + 0x9c);
        do {
          iVar6 = iVar6 + -1;
          fVar1 = (float)*piVar5 * _DAT_007e67d8 + *(float *)(&DAT_00dbfdfa + piVar5[-5] * 4) +
                  fVar1;
          piVar5 = piVar5 + 1;
        } while (iVar6 != 0);
      }
      fVar1 = (float)*(int *)(iVar4 + 0x138) * _DAT_007e6808 + fVar1;
      piVar5 = piVar3;
      if (*(char *)(iVar4 + 0x15f) == '\0') {
        if (*(char *)(iVar4 + 0x161) == '\0') {
          *(float *)(param_1 + 0x1183e) = fVar1 + *(float *)(param_1 + 0x1183e);
        }
        else {
          *(float *)(param_1 + 0x1183a) = fVar1 + *(float *)(param_1 + 0x1183a);
        }
      }
      else {
        *(float *)(param_1 + 0x11836) = fVar1 + *(float *)(param_1 + 0x11836);
      }
    }
  }
  return;
}


