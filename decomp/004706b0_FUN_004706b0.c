// FUN_004706b0 @ 4706b0 size=968

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004706b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  float10 fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  float fStack_20;
  float fStack_1c;
  float fStack_c;
  
  piVar1 = DAT_00d615f6;
  do {
    do {
      do {
        if (piVar1 == (int *)0x0) {
          return;
        }
        iVar10 = *piVar1;
        piVar1 = (int *)piVar1[2];
      } while (*(int *)(iVar10 + 0x1e) != 0);
      iVar15 = (&DAT_0089cad8)[*(int *)(iVar10 + 0x16)];
      iVar2 = (&DAT_0089cad8)[*(int *)(iVar10 + 0x1a)];
      iVar13 = iVar2;
    } while ((((param_1 != iVar15) && (iVar13 = iVar15, param_1 != iVar2)) || (iVar13 == 0)) ||
            (((*(char *)(*(int *)(param_1 + 0x12da) + *(int *)(iVar13 + 6) * 0x2c + 0x2c) == '\0' &&
              (*(char *)(iVar10 + 0x4b) == '\0')) ||
             (cVar9 = FUN_0042dd70((short)(DAT_00893530 + 0x14)), cVar9 != '\0'))));
    cVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0x120) + 0x1c0) + 0x24))
                      ((short)*(undefined4 *)(iVar13 + 6));
    bVar8 = false;
    if ((cVar9 != '\0') || (*(float *)(iVar10 + 0x46) < _DAT_00877604)) goto LAB_00470a34;
    iVar3 = *(int *)(*(int *)(iVar13 + 0x12da) + 0x3b30);
    if ((iVar3 == 0) || (iVar3 != *(int *)(param_1 + 6))) {
      fStack_1c = -1.0;
      if (param_1 != iVar15) {
        fStack_1c = 1.0;
      }
      bVar7 = true;
      iVar13 = 0;
      pfVar16 = (float *)(param_1 + 0x3b8c);
      pfVar14 = (float *)(iVar10 + 0x2e);
      fStack_20 = (_DAT_007e3374 / *(float *)(iVar10 + 0x46) - _DAT_007e3374) * _DAT_007e67d4;
      do {
        fVar6 = *pfVar14 * fStack_1c;
        fVar4 = pfVar16[0x12];
        if (fVar6 <= _DAT_007e3380) {
          if (fVar6 < _DAT_007e3380) {
            if ((_DAT_007e3380 <= *pfVar16) || (3 < iVar13)) {
              fStack_20 = fVar6 * fVar4 + fStack_20;
            }
            else if (_DAT_007e3380 < pfVar16[-0x1b]) {
              bVar8 = true;
            }
            else {
              fVar5 = *pfVar16 - fVar6;
              if (*pfVar16 - fVar6 < _DAT_007e3380) {
                fVar5 = _DAT_007e3380;
              }
              fStack_20 = fStack_20 - fVar5 * fVar4;
            }
          }
        }
        else {
          bVar7 = false;
          if ((_DAT_007e3380 < *pfVar16) && (iVar13 != 5)) {
            fVar5 = *pfVar16;
            if (fVar6 < *pfVar16) {
              fVar5 = fVar6;
            }
            fStack_20 = fVar5 * fVar4 + fStack_20;
          }
        }
        iVar13 = iVar13 + 1;
        pfVar14 = pfVar14 + 1;
        pfVar16 = pfVar16 + 1;
      } while (iVar13 < 6);
      if (iVar15 == param_1) {
        fStack_20 = fStack_20 * _DAT_007e34c0;
        if ((*(int *)(iVar15 + 0x3350) != 0) &&
           (*(int *)(iVar15 + 0x3350) == *(int *)(iVar2 + 0x3350))) {
          fStack_20 = fStack_20 * _DAT_007e34c0;
        }
      }
      if (*(char *)(iVar10 + 0x4a) == '\0') {
        iVar10 = _rand();
        if (iVar10 % 100 < 0x32) {
          bVar8 = true;
        }
        else {
          fStack_20 = fStack_20 * _DAT_007e67d4;
        }
      }
      if ((*(float *)(*(int *)(param_1 + 0x120) + 0x1e4) < fStack_20) && (!bVar7))
      goto LAB_00470a34;
    }
    else {
      fStack_1c = -1.0;
      if (param_1 != iVar15) {
        fStack_1c = 1.0;
      }
      iVar15 = 0;
      pfVar16 = (float *)(iVar10 + 0x2e);
      pfVar14 = (float *)(iVar13 + 0x3bbc);
      do {
        fVar4 = *pfVar16 * fStack_1c;
        if (((*(char *)(param_1 + 0x3bec + iVar15) != '\0') && (_DAT_007e3380 < fVar4)) ||
           (fVar4 < _DAT_007e3380)) {
LAB_00470869:
          bVar8 = true;
        }
        else if ((_DAT_007e3380 < fVar4) && (pfVar14[-0xc] < _DAT_007e68dc)) {
          fVar4 = *pfVar14 + *pfVar14;
          fStack_c = pfVar14[-6] * _DAT_007e68d8;
          if (fVar4 < fStack_c) {
            fStack_c = fVar4;
          }
          fVar17 = (float10)FUN_0049ea70((short)iVar15);
          if ((float10)fStack_c < fVar17) goto LAB_00470869;
        }
        iVar15 = iVar15 + 1;
        pfVar16 = pfVar16 + 1;
        pfVar14 = pfVar14 + 1;
      } while (iVar15 < 6);
    }
    if (bVar8) {
LAB_00470a34:
      puVar11 = (undefined2 *)FUN_00447250();
      uVar20 = *puVar11;
      uVar19 = 0;
      uVar18 = 0;
      uVar21 = (undefined2)((uint)*(undefined4 *)(puVar11 + 1) >> 0x10);
      uVar12 = FUN_00458280(0,0,uVar20,uVar21);
      FUN_0045d220(0x16,3,uVar12,uVar18,uVar19,uVar20,uVar21);
    }
  } while( true );
}


