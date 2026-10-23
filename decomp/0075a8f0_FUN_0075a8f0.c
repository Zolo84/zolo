// FUN_0075a8f0 @ 75a8f0 size=1043

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0075a8f0(int param_1)

{
  char cVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_30;
  short local_2c;
  float local_28 [2];
  float local_20 [2];
  float local_18;
  int local_14;
  float local_10;
  float local_c;
  char local_5;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_2c = 0;
    local_30 = (float)((uint)local_30 & 0xff000000);
    FUN_0042dd60((short)*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x28));
    cVar1 = FUN_0042dd70((short)(DAT_00893530 + 0x14));
    if (cVar1 == '\0') {
      local_28[0] = (float)((uint)local_28[0] & 0xff000000);
      local_30 = local_28[0];
      local_2c = 0;
    }
    else {
      FUN_0042dee0((short)(DAT_00893530 + 0x14));
    }
    local_14 = (int)local_30._1_1_ + ((int)local_30._2_1_ + local_2c * 0xc) * 0x1e;
    FUN_004988c0();
    puVar2 = (undefined2 *)FUN_0044df10();
    FUN_0075ad10(*puVar2,(short)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10));
    piVar3 = (int *)FUN_004582d0();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x28))(local_28);
    local_5 = *piVar3 != 0;
    fVar8 = (float10)FUN_0076bbb0(*(undefined4 *)(param_1 + 0x20),3);
    local_28[0] = (float)((float10)_DAT_007e3374 / (fVar8 + (float10)_DAT_007e3374));
    local_20[0] = _DAT_007e3374 / *(float *)(*(int *)(param_1 + 0x20) + 0xe860);
    if (*(int *)(param_1 + 0x1c) != 0) {
      local_18 = *(float *)(*(int *)(param_1 + 0x1c) + 0x16);
      local_10 = (float)(int)ROUND(local_18);
      local_c = local_10;
      fVar8 = (float10)FUN_0075b2d0();
      iVar4 = *(int *)(param_1 + 0x20);
      local_10 = (float)fVar8;
      if ((&DAT_00dc0fd4)[*(int *)(iVar4 + 6)] == 0) {
        *(undefined1 *)(param_1 + 0x16) = 1;
      }
      else if (local_10 <= *(float *)(iVar4 + 0x39c8)) {
        *(undefined1 *)(param_1 + 0x16) = 1;
        *(float *)(iVar4 + 0x3950) = local_10 + *(float *)(iVar4 + 0x3950);
        FUN_0049ebd0(-local_10);
      }
      else {
        *(undefined1 *)(param_1 + 0x16) = 0;
        local_c = 0.0;
      }
      if (0 < *(int *)(*(int *)(param_1 + 0x18) + 0x13a)) {
        pfVar6 = (float *)(param_1 + 0x24);
        while( true ) {
          iVar4 = FUN_0075a0f0(iVar7);
          local_18 = (float)((-(uint)(*(char *)(iVar4 + 0x1e) != '\0') & 100) + 100);
          if (*pfVar6 < (float)(int)local_18) break;
          iVar7 = iVar7 + 1;
          pfVar6 = pfVar6 + 1;
          if (*(int *)(*(int *)(param_1 + 0x18) + 0x13a) <= iVar7) {
            return;
          }
        }
        iVar4 = FUN_0075a0f0(iVar7);
        local_10 = local_20[0] * local_28[0] *
                   ((float)*(int *)(iVar4 + 0x1a) * _DAT_007e6868 + (float)_DAT_007e8b38) *
                   *(float *)(*(int *)(param_1 + 0x20) + 0x119cc +
                             *(int *)(*(int *)(param_1 + 0x18) + 0x7e) * 8) *
                   *(float *)(*(int *)(*(int *)(param_1 + 0x20) + 0x244) + 0x5a);
        if (_DAT_007e34e0 <= local_10) {
          if (_DAT_007e682c < local_10) {
            local_10 = 20.0;
          }
        }
        else {
          local_10 = 0.1;
        }
        local_c = (float)(int)local_c * _DAT_007e34e0 + _DAT_007e7bc0;
        iVar4 = FUN_0075a0f0(iVar7);
        if (*(char *)(*(int *)(iVar4 + 0x16) + 0x1a + *(int *)(param_1 + 0x1c)) != '\0') {
          local_c = local_c + local_c;
        }
        iVar4 = FUN_0075a0f0(iVar7);
        if (*(int *)(iVar4 + 0x16) == 9) {
          fVar8 = (float10)FUN_0044e660();
          local_c = (float)(fVar8 + (float10)local_c);
        }
        iVar4 = FUN_0075a0f0(iVar7);
        if (*(int *)(iVar4 + 0x16) == 10) {
          fVar8 = (float10)FUN_0044e660();
          local_c = (float)(fVar8 + (float10)local_c);
        }
        iVar4 = FUN_0075a0f0(iVar7);
        if (*(int *)(iVar4 + 0x16) == 6) {
          fVar8 = (float10)FUN_0044e6b0();
          fVar8 = fVar8 + (float10)local_c;
        }
        else {
          fVar8 = (float10)local_c;
        }
        fVar8 = fVar8 / (float10)local_10;
        local_10 = (float)fVar8;
        if (local_14 < 1) {
          local_28[0] = _DAT_00dc1778;
          if (_DAT_007e3380 < _DAT_00dc1778) {
            iVar4 = FUN_0075a0f0(iVar7);
            iVar4 = *(int *)(iVar4 + 0x16);
            if (((iVar4 == 6) || (iVar4 == 9)) || (iVar4 == 10)) {
              fVar8 = (float10)local_10;
            }
            else {
              FUN_0042dd60(*(int *)(*(int *)(param_1 + 0x18) + 0x28) + 1);
              cVar1 = FUN_0042ddd0(DAT_00893530 + 0x14);
              if (cVar1 == '\0') {
                puVar5 = (undefined4 *)FUN_0042e060(local_20,&local_30);
                local_30._2_1_ = (char)((uint)*puVar5 >> 0x10);
                local_30._1_1_ = (char)((uint)*puVar5 >> 8);
                local_14 = (int)local_30._1_1_ +
                           ((int)local_30._2_1_ + *(short *)(puVar5 + 1) * 0xc) * 0x1e;
              }
              fVar8 = (float10)local_14 * (float10)local_28[0] + (float10)_DAT_007e3374;
              if ((float10)_DAT_00dc1770 < fVar8) {
                fVar8 = (float10)_DAT_00dc1770;
              }
              fVar8 = fVar8 * (float10)local_10;
            }
          }
        }
        else {
          fVar9 = (float10)local_14 * (float10)_DAT_00dc1774 + (float10)_DAT_007e3374;
          if (fVar9 < (float10)_DAT_007e34e0) {
            fVar9 = (float10)_DAT_007e34e0;
          }
          fVar8 = fVar9 * fVar8;
        }
        if (local_5 != '\0') {
          fVar8 = fVar8 * (float10)_DAT_00dc1770;
        }
        if ((float10)_DAT_007e3380 < fVar8 * (float10)_DAT_007e384c) {
          *(float *)(param_1 + 0x24 + iVar7 * 4) =
               (float)(fVar8 * (float10)_DAT_007e384c +
                      (float10)*(float *)(param_1 + 0x24 + iVar7 * 4));
        }
        if ((float)(int)local_18 < *(float *)(param_1 + 0x24 + iVar7 * 4)) {
          *(float *)(param_1 + 0x24 + iVar7 * 4) = (float)(int)local_18;
          return;
        }
      }
    }
  }
  return;
}


