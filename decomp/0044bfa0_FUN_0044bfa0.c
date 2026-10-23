// FUN_0044bfa0 @ 44bfa0 size=346

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044bfa0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float local_18;
  float local_14;
  int *local_10;
  int local_c;
  
  iVar4 = 0;
  local_c = 0;
  local_10 = &DAT_0089cad8;
  do {
    if (*local_10 != 0) {
      local_18 = 0.0;
      local_14 = 50.0;
      fVar6 = (float10)FUN_005885d0();
      iVar2 = FUN_00760760();
      if ((2 < iVar2) && (iVar2 < 7)) {
        iVar2 = FUN_00760760();
        if ((2 < iVar2) && (iVar2 < 7)) {
          local_14 = 200.0;
        }
      }
      if ((*(char *)(*(int *)(param_1 + 0x12da) + 0x35 + local_c) != '\0') &&
         (*(int **)(param_1 + 0x119be) != (int *)0x0)) {
        fVar7 = (float10)0.0;
        piVar5 = *(int **)(param_1 + 0x119be);
        do {
          piVar1 = (int *)piVar5[2];
          if ((*(int *)(*piVar5 + 0x16) == iVar4) || (*(int *)(*piVar5 + 0x1a) == iVar4)) {
            iVar2 = 6;
            do {
              uVar3 = __ftol();
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            fVar7 = (extraout_ST0 +
                    (float10)(int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) *
                    (float10)_DAT_007e40b0;
            if ((float10)_DAT_007e34e0 < fVar7) {
              fVar7 = (float10)_DAT_007e34e0;
            }
            fVar7 = fVar7 + extraout_ST1;
          }
          piVar5 = piVar1;
        } while (piVar1 != (int *)0x0);
        local_18 = (float)fVar7;
        if (((float10)_DAT_007e3380 < fVar7) && (local_14 < (float)fVar6)) {
          local_18 = 0.0;
        }
      }
      FUN_00488220(iVar4,local_18);
    }
    local_10 = local_10 + 1;
    iVar4 = iVar4 + 1;
    local_c = local_c + 0x2c;
  } while ((int)local_10 < 0x89d038);
  return;
}


