// FUN_00781d60 @ 781d60 size=813

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00781d60(int param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float *local_2c;
  char cStack_7;
  char cStack_6;
  
  bVar11 = _DAT_008775f0 != _DAT_007e3374;
  piVar6 = *(int **)(param_1 + 0x276);
  do {
    do {
      if (piVar6 == (int *)0x0) {
        return;
      }
      iVar7 = *piVar6;
      piVar6 = (int *)piVar6[2];
      iVar8 = (&DAT_0089cad8)[*(int *)(iVar7 + 0x16)];
      iVar9 = (&DAT_0089cad8)[*(int *)(iVar7 + 0x1a)];
    } while (((iVar8 == 0) || (iVar9 == 0)) || (*(int *)(iVar7 + 0x1e) != 0));
    bVar13 = false;
    *(undefined1 *)(*(int *)(iVar8 + 0x12da) + 0x35 + *(int *)(iVar9 + 6) * 0x2c) = 1;
    *(undefined1 *)(*(int *)(iVar9 + 0x12da) + 0x35 + *(int *)(iVar8 + 6) * 0x2c) = 1;
    if ((bVar11) && (*(char *)(iVar7 + 0x4b) == '\0')) {
      sVar3 = *(short *)(iVar7 + 0x26);
      sVar4 = *(short *)(DAT_00893530 + 0x18);
      cVar1 = *(char *)(DAT_00893530 + 0x16);
      cStack_6 = (char)((uint)*(undefined4 *)(iVar7 + 0x22) >> 0x10);
      cVar2 = *(char *)(DAT_00893530 + 0x15);
      cStack_7 = (char)((uint)*(undefined4 *)(iVar7 + 0x22) >> 8);
      iVar14 = __ftol();
      if ((((((int)sVar3 - (int)sVar4) * 0xc - (int)cVar1) + (int)cStack_6) * 0x1e - (int)cVar2) +
          (int)cStack_7 <= iVar14) {
        bVar13 = true;
      }
    }
    bVar12 = true;
    iVar14 = 0;
    pfVar16 = (float *)(iVar7 + 0x2e);
    do {
      if (_DAT_007e3380 <= *pfVar16) {
LAB_00781eb4:
        if (_DAT_007e3380 < *pfVar16) {
          FUN_0049ea70(iVar14);
          uVar15 = __ftol();
          if (extraout_ST0_00 <
              (float10)(int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f)))
          goto LAB_00781ef2;
        }
      }
      else {
        FUN_0049ea70(iVar14);
        uVar15 = __ftol();
        if ((float10)(int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f)) <= extraout_ST0)
        goto LAB_00781eb4;
LAB_00781ef2:
        bVar12 = false;
      }
      iVar14 = iVar14 + 1;
      pfVar16 = pfVar16 + 1;
    } while (iVar14 < 6);
    if (bVar12) {
      *(undefined1 *)(iVar7 + 0x4a) = 1;
      iVar14 = 0;
      pfVar17 = (float *)(iVar8 + 0x3a60);
      local_2c = (float *)(iVar9 + 0x3ad8);
      pfVar16 = (float *)(iVar7 + 0x2e);
      *(float *)(iVar7 + 0x46) =
           (*(float *)(iVar9 + 0xf4ee + *(int *)(iVar8 + 6) * 4) +
           *(float *)(iVar8 + 0xf4ee + *(int *)(iVar9 + 6) * 4)) * _DAT_007e34c0;
      do {
        if (_DAT_007e3380 <= *pfVar16) {
          if (_DAT_007e3380 < *pfVar16) {
            FUN_0049ec10(iVar14,-*pfVar16);
            FUN_0049ec10(iVar14,*pfVar16 * *(float *)(iVar7 + 0x46));
            *local_2c = *pfVar16 + *local_2c;
            if (!bVar13) {
              *(float *)((iVar9 - iVar8) + (int)pfVar17) =
                   *pfVar16 + *(float *)((iVar9 - iVar8) + (int)pfVar17);
              pfVar17[6] = *pfVar16 * *(float *)(iVar7 + 0x46) + pfVar17[6];
            }
          }
        }
        else {
          FUN_0049ec10(iVar14,*pfVar16);
          FUN_0049ec10(iVar14,-(*pfVar16 * *(float *)(iVar7 + 0x46)));
          uVar15 = __ftol();
          pfVar17[0x1e] =
               (float)(int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f)) + pfVar17[0x1e];
          if (!bVar13) {
            local_2c[-0x18] = local_2c[-0x18] - *pfVar16 * *(float *)(iVar7 + 0x46);
            *pfVar17 = *pfVar17 - *pfVar16;
          }
        }
        iVar14 = iVar14 + 1;
        local_2c = local_2c + 1;
        pfVar17 = pfVar17 + 1;
        pfVar16 = pfVar16 + 1;
      } while (iVar14 < 6);
    }
    else {
      *(undefined1 *)(iVar7 + 0x4a) = 0;
      if (bVar13) {
        uVar10 = *(undefined4 *)(iVar7 + 0x22);
        uVar5 = *(undefined2 *)(iVar7 + 0x26);
        FUN_0042dc20(1);
        *(undefined4 *)(iVar7 + 0x22) = uVar10;
        *(undefined2 *)(iVar7 + 0x26) = uVar5;
      }
    }
  } while( true );
}


