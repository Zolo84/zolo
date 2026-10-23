// FUN_004715f0 @ 4715f0 size=1737

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004715f0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  bool bVar12;
  float10 fVar13;
  float *local_204;
  float local_1f4;
  float local_1ec;
  int *local_1e0;
  int *local_1dc;
  int local_1d8;
  float local_1c4;
  undefined1 local_1b4 [44];
  undefined1 local_188;
  undefined1 local_e0 [44];
  undefined1 local_b4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bcc5b;
  local_c = ExceptionList;
  if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) == 0) {
    local_1e0 = (int *)0x0;
    local_1dc = (int *)0x0;
    local_1d8 = 0;
    local_4 = 0;
    iVar9 = 0;
    piVar11 = &DAT_0089cad8;
    ExceptionList = &local_c;
    do {
      piVar5 = local_1e0;
      piVar7 = local_1dc;
      if (((*(int *)(param_1 + 6) != iVar9) && (iVar8 = *piVar11, iVar8 != 0)) &&
         (((*(char *)(param_1 + 0x3c0f) != '\0' &&
           ((cVar6 = FUN_0044b300(), cVar6 != '\0' && (*(char *)(iVar8 + 0x3bf2) != '\0')))) ||
          ((iVar1 = *(int *)(*(int *)(iVar8 + 0x12da) + 0x3b30), iVar1 != 0 &&
           ((iVar1 == *(int *)(param_1 + 6) && (*(char *)(iVar8 + 0x3c0e) != '\0')))))))) {
        piVar7 = operator_new(0xe);
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          *piVar7 = iVar9;
          piVar7[1] = (int)local_1dc;
          piVar7[2] = 0;
          *(undefined1 *)(piVar7 + 3) = 0;
        }
        iVar8 = local_1d8 + 1;
        bVar12 = local_1d8 != 0;
        piVar5 = piVar7;
        local_1d8 = iVar8;
        if (bVar12) {
          local_1dc[2] = (int)piVar7;
          piVar5 = local_1e0;
        }
      }
      local_1dc = piVar7;
      local_1e0 = piVar5;
      piVar11 = piVar11 + 1;
      iVar9 = iVar9 + 1;
    } while ((int)piVar11 < 0x89d038);
    piVar11 = local_1e0;
    if (local_1d8 < 1) {
      local_4 = 0xffffffff;
      FUN_004309c0();
    }
    else {
joined_r0x0047172d:
      if (piVar11 != (int *)0x0) {
        iVar9 = *piVar11;
        piVar11 = (int *)piVar11[2];
        iVar9 = (&DAT_0089cad8)[iVar9];
        cVar6 = FUN_004a09c0();
        if (((cVar6 != '\0') &&
            (fVar2 = *(float *)(param_1 + 0x39c8), iVar8 = FUN_00585e50(), (float)iVar8 <= fVar2))
           && (fVar2 = *(float *)(param_1 + 0xf4ee + *(int *)(iVar9 + 6) * 4),
              _DAT_00877600 <= fVar2)) {
          bVar12 = false;
          iVar8 = *(int *)(*(int *)(iVar9 + 0x12da) + 0x3b30);
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(param_1 + 6)) goto joined_r0x0047172d;
            bVar12 = true;
          }
          FUN_00442b90();
          iVar8 = 0;
          local_188 = 1;
          bVar4 = false;
          pfVar10 = (float *)(param_1 + 0x3b8c);
          do {
            if (((_DAT_007e3380 < *(float *)((iVar9 - param_1) + (int)pfVar10)) &&
                (*(char *)(iVar8 + 0x3bec + param_1) == '\0')) &&
               ((bVar12 ||
                (((_DAT_007e34e0 < -*pfVar10 && (*(char *)(iVar8 + 0x3bf3 + param_1) != '\0')) &&
                 ((*(char *)(iVar8 + 0x3bec + iVar9) != '\0' &&
                  (fVar13 = (float10)FUN_0049ea70(), (float10)pfVar10[6] < fVar13)))))))) {
              FUN_00442c60();
              bVar4 = true;
            }
            iVar8 = iVar8 + 1;
            pfVar10 = pfVar10 + 1;
          } while (iVar8 < 4);
          if ((((*(char *)(param_1 + 0x3bf1) == '\0') &&
               (*(char *)(*(int *)(iVar9 + 0x12da) + 0x3b38) != '\0')) &&
              (*(char *)(iVar9 + 0x3bf1) != '\0')) &&
             ((_DAT_007e34e0 < *(float *)(iVar9 + 0x3ba0) &&
              (_DAT_007e34e0 < -*(float *)(param_1 + 0x3ba0))))) {
            FUN_00442c60();
            bVar4 = true;
          }
          if (((DAT_00dc18cd != '\0') &&
              (fVar3 = *(float *)(param_1 + 0x39c8), iVar8 = FUN_00585e50(), fVar3 < (float)iVar8))
             && ((((!bVar4 || (iVar8 = _rand(), iVar8 % 10 < 2)) &&
                  ((_DAT_00877614 < fVar2 && (*(char *)(*(int *)(iVar9 + 0x12da) + 0x3b38) != '\0'))
                  )) && ((!bVar12 || (_DAT_008775f0 == _DAT_007e3374)))))) {
            bVar12 = false;
            local_1ec = 0.0;
            FUN_00442b90();
            local_204 = (float *)(iVar9 + 0x3bd4);
            local_b4 = 0;
            iVar8 = 0;
            pfVar10 = (float *)(param_1 + 0x3b8c);
            do {
              if ((((iVar8 != 4) && (_DAT_007e3380 < *(float *)((int)pfVar10 + (iVar9 - param_1))))
                  && (*(char *)(iVar8 + 0x3bec + param_1) == '\0')) &&
                 ((*(char *)(iVar8 + 0x3bf3 + param_1) != '\0' &&
                  (*(char *)(iVar8 + 0x3bec + iVar9) != '\0')))) {
                if (_DAT_007e3380 <= *pfVar10) {
                  local_1c4 = 0.0;
                }
                else {
                  local_1c4 = _DAT_008775f0 * *pfVar10;
                }
                fVar2 = local_204[-6];
                fVar13 = (float10)FUN_0049ea70();
                local_1f4 = (float)((float10)fVar2 - fVar13);
                fVar13 = (float10)FUN_0049ea70();
                fVar13 = (fVar13 + (float10)local_1c4) -
                         (float10)pfVar10[0xc] * (float10)_DAT_007e67f8;
                if (fVar13 < (float10)local_1f4) {
                  local_1f4 = (float)fVar13;
                }
                if (_DAT_007e3380 < local_1f4) {
                  FUN_00442c60();
                  bVar12 = true;
                  local_1ec = *local_204 * local_1f4 + local_1ec;
                }
              }
              iVar8 = iVar8 + 1;
              pfVar10 = pfVar10 + 1;
              local_204 = local_204 + 1;
            } while (iVar8 < 6);
            if ((bVar12) && (_DAT_007e68c8 < local_1ec)) {
              FUN_00471500(local_e0);
              FUN_0045cad0(iVar9);
              goto joined_r0x0047172d;
            }
          }
          if (bVar4) {
            FUN_00471500(local_1b4);
            FUN_0045cad0(iVar9);
            iVar9 = 0;
            pfVar10 = (float *)(param_1 + 0x3b8c);
            do {
              fVar13 = (float10)FUN_00442c00();
              if ((float10)_DAT_007e3380 < fVar13) {
                fVar13 = (float10)FUN_00442c00();
                fVar2 = *pfVar10;
                *pfVar10 = (float)(fVar13 + (float10)fVar2);
                if ((fVar13 + (float10)fVar2 < (float10)_DAT_007e3380) &&
                   (*(char *)(iVar9 + 0x3bf9 + param_1) == '\0')) {
                  *pfVar10 = 0.0;
                }
                if ((_DAT_007e3380 < *pfVar10) && (*(char *)(iVar9 + 0x3bf3 + param_1) == '\0')) {
                  *pfVar10 = 0.0;
                }
              }
              iVar9 = iVar9 + 1;
              pfVar10 = pfVar10 + 1;
            } while (iVar9 < 6);
          }
        }
        goto joined_r0x0047172d;
      }
      while (local_1e0 != (int *)0x0) {
        local_1e0 = (int *)local_1e0[2];
        FUN_00796cd8();
      }
    }
  }
  ExceptionList = local_c;
  return;
}


