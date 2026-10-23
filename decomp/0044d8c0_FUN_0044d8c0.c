// FUN_0044d8c0 @ 44d8c0 size=945

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044d8c0(int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint local_20;
  int local_18;
  float local_14;
  float local_10;
  
  iVar5 = FUN_00760760();
  local_18 = 0;
  do {
    iVar6 = FUN_00428ee0();
    if (iVar6 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = iVar6 - 8;
    }
    bVar14 = true;
    if (local_20 == 0) {
LAB_0044d949:
      bVar1 = false;
    }
    else {
      bVar14 = *(char *)(local_20 + 0xbe) == '\0' &&
               *(int *)(local_20 + 0x1a) <= (int)*(short *)(DAT_00893530 + 0x18);
      cVar4 = FUN_004a4810();
      if (cVar4 == '\0') goto LAB_0044d949;
      bVar1 = true;
    }
    if (((local_20 == 0) || (!bVar1)) || (!bVar14)) {
      bVar1 = false;
      uVar15 = -(uint)bVar14 & local_20;
      if (uVar15 == 0) {
        local_10 = 1000.0;
      }
      else {
        uVar7 = *(int *)(uVar15 + 0x26) - iVar5;
        uVar12 = (int)uVar7 >> 0x1f;
        local_10 = (float)(int)((uVar7 ^ uVar12) - uVar12);
      }
      iVar6 = *(int *)(param_1 + 0x2a0);
      while (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 8);
        iVar8 = FUN_00428ee0();
        if ((iVar8 != 0) && (uVar7 = iVar8 - 8, uVar7 != 0)) {
          if (uVar7 == local_20) {
            bVar1 = true;
          }
          else if ((*(int *)(iVar8 + 0x78) == local_18) ||
                  ((*(int *)(iVar8 + 0xb2) != 0 && (*(int *)(*(int *)(iVar8 + 0xb2) + 4) == 10)))) {
            bVar14 = true;
            iVar16 = 10;
            do {
              iVar9 = FUN_00428ee0();
              if (iVar9 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = iVar9 - 8;
              }
              if (uVar12 == uVar7) {
                bVar14 = false;
              }
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            if (((bVar14) && (*(int *)(iVar8 + 0x12) <= (int)*(short *)(DAT_00893530 + 0x18))) &&
               (*(char *)(iVar8 + 0xb6) == '\0')) {
              uVar12 = *(int *)(iVar8 + 0x1e) - iVar5;
              uVar13 = (int)uVar12 >> 0x1f;
              iVar16 = (uVar12 ^ uVar13) - uVar13;
              local_14 = (float)iVar16;
              if ((float)iVar16 < param_2) {
                local_14 = param_2;
              }
              if (((local_20 == 0) &&
                  (cVar4 = (**(code **)(*(int *)(iVar8 + 0x7c) + 0x24))(), cVar4 != '\0')) &&
                 (cVar4 = FUN_004a4a50(), cVar4 != '\0')) {
                local_14 = local_14 - _DAT_007e4090;
                if ((*(int *)(iVar8 + 0xb2) != 0) && (_DAT_00d7cc08 == _DAT_007e3374)) {
                  local_14 = (_DAT_007e3374 - local_14 * _DAT_007e40b8) *
                             (float)-*(int *)(*(int *)(iVar8 + 0xb2) + 0x2e);
                }
              }
              if (local_14 < local_10) {
                uVar15 = uVar7;
                local_10 = local_14;
              }
            }
          }
        }
      }
      if ((uVar15 != 0) && (uVar15 != local_20)) {
        if ((!bVar1) && (local_20 != 0)) {
          puVar10 = operator_new(10);
          puVar17 = (undefined4 *)0x0;
          if (puVar10 != (undefined4 *)0x0) {
            *(undefined2 *)puVar10 = 0;
            *(undefined4 *)((int)puVar10 + 2) = 0;
            puVar17 = puVar10;
          }
          *puVar17 = *(undefined4 *)(local_20 + 0xc);
          *(undefined2 *)(puVar17 + 1) = *(undefined2 *)(local_20 + 0x10);
          *(int *)((int)puVar17 + 6) = local_18;
          iVar6 = *(int *)(param_1 + 0x2a4);
          puVar10 = operator_new(0xe);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = puVar17;
            puVar10[1] = iVar6;
            puVar10[2] = 0;
            *(undefined1 *)(puVar10 + 3) = 0;
          }
          iVar8 = *(int *)(param_1 + 0x2a8);
          *(undefined4 **)(param_1 + 0x2a4) = puVar10;
          *(int *)(param_1 + 0x2a8) = iVar8 + 1;
          if (iVar8 == 0) {
            *(undefined4 **)(param_1 + 0x2a0) = puVar10;
          }
          else {
            *(undefined4 **)(iVar6 + 8) = puVar10;
          }
        }
        FUN_00447250();
        uVar11 = FUN_00458110();
        FUN_00458290(uVar11);
        fVar2 = *(float *)(param_1 + 0x234) - *(float *)(param_1 + 0x234) * _DAT_007e5dd0;
        fVar3 = _DAT_007e4088;
        if ((fVar2 <= _DAT_007e4088) && (fVar3 = fVar2, fVar2 < _DAT_007e3380)) {
          fVar3 = _DAT_007e3380;
        }
        *(float *)(param_1 + 0x234) = fVar3;
      }
    }
    local_18 = local_18 + 1;
    if (9 < local_18) {
      return;
    }
  } while( true );
}


