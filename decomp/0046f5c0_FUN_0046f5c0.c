// FUN_0046f5c0 @ 46f5c0 size=4279

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0046f5c0(int param_1)

{
  float fVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined2 uVar9;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined3 uVar8;
  int iVar7;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST0;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  
  bVar12 = false;
  *(undefined1 *)(param_1 + 0x3bf2) = 0;
  *(undefined1 *)(param_1 + 0x3c0e) = 0;
  *(undefined1 *)(param_1 + 0x3c0f) = 1;
  local_48 = 0.0;
  local_3c = 0.0;
  bVar11 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) != 0;
  local_40 = 0.0;
  fVar6 = *(float *)(*(int *)(param_1 + 0x244) + 0x9e);
  local_44 = 0.0;
  fVar13 = (float10)FUN_0076bbb0(param_1,10);
  local_30 = 0.0;
  fVar13 = (fVar13 + (float10)_DAT_007e3374) * (float10)fVar6;
  local_14 = 1.0;
  cVar2 = FUN_0044beb0();
  if (cVar2 == '\0') {
    local_28 = *(float *)(param_1 + 0x13c78) * *(float *)(param_1 + 0x3812);
    local_24 = *(float *)(param_1 + 0x13c80) * *(float *)(param_1 + 0x381a);
  }
  else {
    local_28 = *(float *)(param_1 + 0x13c74) * *(float *)(param_1 + 0x3816);
    local_14 = DAT_00877608;
    local_24 = *(float *)(param_1 + 0x13c7c) * *(float *)(param_1 + 0x381e);
  }
  local_24 = local_24 * (float)fVar13;
  local_28 = local_28 * (float)fVar13;
  if (bVar11) {
    iVar10 = 0;
    do {
      *(undefined1 *)(param_1 + 0x3bec + iVar10) = 0;
      fVar13 = (float10)FUN_00468960(iVar10);
      *(float *)(param_1 + 0x3bd4 + iVar10 * 4) = (float)fVar13;
      local_34 = 1.0;
      if (*(char *)(param_1 + 0x3bff + iVar10) != '\0') {
        local_34 = DAT_00dc18a0 + _DAT_007e3374;
      }
      uVar9 = extraout_var;
      switch(iVar10) {
      case 0:
        local_38 = *(float *)(param_1 + 0x409e) + *(float *)(param_1 + 0x4096);
        fVar6 = *(float *)(param_1 + 0x408a) + *(float *)(param_1 + 0x4082);
        if (local_38 < fVar6) {
          local_38 = fVar6;
        }
        fVar6 = *(float *)(param_1 + 0x3958) - *(float *)(param_1 + 0x3a18);
        local_2c = *(float *)(param_1 + 0x3a30);
        if (fVar6 < local_2c) {
          local_2c = fVar6;
        }
        fVar13 = (float10)FUN_00442c00(0);
        fVar13 = ((((float10)*(float *)(param_1 + 0x3aa8) + (float10)*(float *)(param_1 + 0x3a90) +
                    (float10)*(float *)(param_1 + 0x3a78) + (float10)*(float *)(param_1 + 0x3a18) +
                   (float10)local_2c) - (float10)*(float *)(param_1 + 0x3a60)) + fVar13 +
                 (float10)*(float *)(param_1 + 0x3b50)) - (float10)local_38;
        if (DAT_00dc18cc == '\0') {
          if (DAT_008775fc <= _DAT_007e68d4) {
            local_44 = DAT_008775fc;
          }
          else {
            local_44 = 250.0;
          }
          local_40 = DAT_008775fc * _DAT_007e5390;
          bVar12 = local_40 <= _DAT_007e4088;
        }
        else {
          local_44 = _DAT_00dc18a8 * *(float *)(param_1 + 0x3c06) * local_34 * local_14;
          if (local_44 <= _DAT_007e68d4) {
            local_44 = 250.0;
          }
          local_40 = _DAT_00dc18c4 * *(float *)(param_1 + 0x3c06);
          bVar12 = _DAT_007e4088 < local_40;
        }
        if (!bVar12) {
          local_40 = 100.0;
        }
        local_30 = _DAT_00dc18a8 * *(float *)(param_1 + 0x3c06);
        local_3c = *(float *)(param_1 + 0x39b4);
        uVar9 = (undefined2)((uint)local_3c >> 0x10);
        if (local_40 < _DAT_007e4088) {
          local_40 = 100.0;
          local_44 = 250.0;
        }
        fVar6 = *(float *)(param_1 + 0x39b4);
        goto LAB_0046f9d1;
      case 1:
      case 2:
      case 3:
        local_20 = 0.0;
        if (iVar10 == 1) {
          local_20 = *(float *)(param_1 + 0x3960);
          local_3c = *(float *)(param_1 + 0x39bc);
        }
        else if (iVar10 == 2) {
          local_20 = *(float *)(param_1 + 0x395c);
          local_3c = *(float *)(param_1 + 0x39b8);
        }
        else if (iVar10 == 3) {
          local_20 = *(float *)(param_1 + 0x3964);
          local_3c = *(float *)(param_1 + 0x39c0);
        }
        local_30 = *(float *)(param_1 + 0x3af0 + iVar10 * 4);
        fVar13 = (float10)FUN_00442c00(iVar10);
        fVar15 = (float10)*(float *)(param_1 + 0x3a30 + iVar10 * 4);
        fVar14 = (float10)local_20 - (float10)*(float *)(param_1 + 0x3a18 + iVar10 * 4);
        if (fVar14 < fVar15) {
          fVar15 = (float10)(float)fVar14;
        }
        fVar13 = ((float10)*(float *)(param_1 + 0x3b50 + iVar10 * 4) +
                  (float10)*(float *)(param_1 + 0x3aa8 + iVar10 * 4) +
                  (float10)*(float *)(param_1 + 0x3a78 + iVar10 * 4) + fVar15 +
                 fVar13 + (float10)*(float *)(param_1 + 0x3a90 + iVar10 * 4) +
                 (float10)*(float *)(param_1 + 0x3a18 + iVar10 * 4)) - (float10)local_30;
        local_44 = _DAT_00dc1890 * local_34 * local_14 * local_30;
        if (DAT_00dc18cc == '\0') {
          if (DAT_008775fc <= local_44) {
            local_44 = DAT_008775fc;
          }
          local_40 = _DAT_00dc1894 * local_30;
          fVar6 = DAT_008775fc * _DAT_007e5390;
          if (DAT_008775fc * _DAT_007e5390 <= local_40) goto LAB_0046f99a;
        }
        else {
          fVar6 = _DAT_00dc1894 * local_30;
LAB_0046f99a:
          local_40 = fVar6;
        }
        local_30 = _DAT_00dc1890 * local_30;
        fVar6 = local_3c;
        uVar9 = extraout_var_00;
        if (local_40 < _DAT_007e4088) {
          local_40 = 100.0;
          local_44 = 250.0;
        }
LAB_0046f9d1:
        local_48 = (float)fVar13;
        if ((fVar6 < local_40) && (local_48 <= _DAT_007e3380)) {
          fVar13 = (float10)local_48 - (float10)_DAT_007e34c0;
          *(undefined1 *)(param_1 + 0x3bec + iVar10) = 1;
          break;
        }
        goto switchD_0046f714_default;
      case 4:
        fVar6 = *(float *)(param_1 + 0x3a88);
        local_3c = *(float *)(param_1 + 0x39c8);
        fVar1 = *(float *)(param_1 + 0x3a70);
        local_44 = 1.0;
        local_40 = 0.0;
        fVar13 = (float10)FUN_004a3450();
        fVar14 = (float10)FUN_0049dd20((float)fVar13);
        fVar13 = (float10)_DAT_00dc18a4;
        fVar15 = (float10)FUN_00442c00(4);
        fVar13 = fVar15 + (float10)(float)((fVar14 * fVar13 + (float10)fVar6) - (float10)fVar1) +
                 (float10)*(float *)(param_1 + 0x3ab8);
        uVar9 = extraout_var_01;
        break;
      case 5:
        local_3c = *(float *)(param_1 + 0x39c4);
        local_30 = _DAT_00dc18ac * *(float *)(param_1 + 0x3c0a);
        local_44 = local_30 * local_34 * local_14;
        if (local_44 <= _DAT_007e68d4) {
          local_44 = 250.0;
        }
        local_40 = _DAT_00dc18c8 * *(float *)(param_1 + 0x3c0a);
        if (local_40 <= _DAT_007e4088) {
          local_40 = 100.0;
        }
        if (local_40 <= local_3c) {
          uVar5 = 0;
          fVar13 = (float10)FUN_004a3450(0);
          fVar14 = (float10)FUN_0049b210((float)((float10)_DAT_007e3374 - fVar13),uVar5);
          fVar13 = (float10)_DAT_00dc189c;
          fVar15 = (float10)FUN_00442c00(5);
          fVar13 = ((fVar15 + (float10)*(float *)(param_1 + 0x3a8c) +
                    (float10)(float)(fVar14 * fVar13)) - (float10)*(float *)(param_1 + 0x3a74)) +
                   (float10)*(float *)(param_1 + 0x3b64) + (float10)*(float *)(param_1 + 0x3abc);
          uVar9 = extraout_var_03;
        }
        else {
          fVar13 = (float10)FUN_00442c00(5);
          fVar13 = ((fVar13 + (float10)*(float *)(param_1 + 0x3a8c) +
                    (float10)*(float *)(param_1 + 0x3a2c)) - (float10)*(float *)(param_1 + 0x3a74))
                   - (float10)*(float *)(param_1 + 0x3c0a);
          uVar9 = extraout_var_02;
        }
        break;
      default:
        goto switchD_0046f714_default;
      }
      local_48 = (float)fVar13;
switchD_0046f714_default:
      if ((local_48 < _DAT_007e3380) && (local_3c < local_40)) {
        *(undefined1 *)(param_1 + 0x3c0e) = 1;
      }
      *(float *)(param_1 + 0x3ba4 + iVar10 * 4) = local_44;
      *(float *)(param_1 + 0x3bbc + iVar10 * 4) = local_40;
      uVar5 = CONCAT22(uVar9,(ushort)(local_3c < local_44) << 8 |
                             (ushort)(NAN(local_3c) || NAN(local_44)) << 10 |
                             (ushort)(local_3c == local_44) << 0xe);
      if ((local_3c < local_44 == 0 && (local_3c == local_44) == 0) &&
         (uVar5 = CONCAT22(uVar9,(ushort)(local_48 < _DAT_007e3380) << 8 |
                                 (ushort)(NAN(local_48) || NAN(_DAT_007e3380)) << 10 |
                                 (ushort)(local_48 == _DAT_007e3380) << 0xe),
         local_48 < _DAT_007e3380 != 0)) {
        local_48 = 0.0;
      }
      uVar3 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_00dc1860);
      if (((DAT_00dc1860 != '\0') && (0 < iVar10)) && (iVar10 < 4)) {
        fVar6 = _DAT_00877594 * local_30 * local_28;
        uVar9 = (undefined2)((uint)uVar5 >> 0x10);
        if (fVar6 <= _DAT_007e67e8) {
          fVar6 = _DAT_007e67e8;
        }
        *(float *)(param_1 + 0x3b08 + iVar10 * 4) = fVar6;
        if (DAT_00dc18cc == '\0') {
          if (fVar6 <= DAT_008775fc * _DAT_007e67f8) {
            *(float *)(param_1 + 0x3b08 + iVar10 * 4) = DAT_008775fc * _DAT_007e67f8;
          }
          else {
            *(float *)(param_1 + 0x3b08 + iVar10 * 4) = fVar6;
          }
        }
        fVar6 = *(float *)(param_1 + 0x3b08 + iVar10 * 4) * _DAT_007e40a4;
        if (fVar6 < local_44) {
          local_44 = fVar6;
        }
        fVar6 = *(float *)(param_1 + 0x3b08 + iVar10 * 4);
        uVar3 = CONCAT22(uVar9,(ushort)(local_3c < fVar6) << 8 |
                               (ushort)(NAN(local_3c) || NAN(fVar6)) << 10 |
                               (ushort)(local_3c == fVar6) << 0xe);
        if ((local_3c < fVar6 == 0 && (local_3c == fVar6) == 0) &&
           (uVar3 = CONCAT22(uVar9,(ushort)(local_48 < _DAT_007e3380) << 8 |
                                   (ushort)(NAN(local_48) || NAN(_DAT_007e3380)) << 10 |
                                   (ushort)(local_48 == _DAT_007e3380) << 0xe),
           local_48 < _DAT_007e3380 != 0)) {
          local_48 = 0.0;
        }
      }
      uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),DAT_00dc1885);
      if ((DAT_00dc1885 != '\0') && ((iVar10 == 0 || (iVar10 == 5)))) {
        fVar6 = _DAT_008775e4 * local_30 * local_24;
        uVar9 = (undefined2)((uint)uVar3 >> 0x10);
        if (fVar6 <= _DAT_007e67e8) {
          fVar6 = _DAT_007e67e8;
        }
        *(float *)(param_1 + 0x3b08 + iVar10 * 4) = fVar6;
        if (DAT_00dc18cc == '\0') {
          if (fVar6 <= DAT_008775fc * _DAT_007e67f8) {
            *(float *)(param_1 + 0x3b08 + iVar10 * 4) = DAT_008775fc * _DAT_007e67f8;
          }
          else {
            *(float *)(param_1 + 0x3b08 + iVar10 * 4) = fVar6;
          }
        }
        fVar6 = *(float *)(param_1 + 0x3b08 + iVar10 * 4) * _DAT_007e40a4;
        if (fVar6 < local_44) {
          local_44 = fVar6;
        }
        fVar6 = *(float *)(param_1 + 0x3b08 + iVar10 * 4);
        uVar4 = CONCAT22(uVar9,(ushort)(local_3c < fVar6) << 8 |
                               (ushort)(NAN(local_3c) || NAN(fVar6)) << 10 |
                               (ushort)(local_3c == fVar6) << 0xe);
        if ((local_3c < fVar6 == 0 && (local_3c == fVar6) == 0) &&
           (uVar4 = CONCAT22(uVar9,(ushort)(local_48 < _DAT_007e3380) << 8 |
                                   (ushort)(NAN(local_48) || NAN(_DAT_007e3380)) << 10 |
                                   (ushort)(local_48 == _DAT_007e3380) << 0xe),
           local_48 < _DAT_007e3380 != 0)) {
          local_48 = 0.0;
        }
      }
      *(float *)(param_1 + 0x3b8c + iVar10 * 4) = -local_48;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 6);
  }
  else {
    iVar10 = 0;
    do {
      *(undefined1 *)(param_1 + 0x3bec + iVar10) = 0;
      uVar5 = FUN_00468960(iVar10);
      *(float *)(param_1 + 0x3bd4 + iVar10 * 4) = (float)extraout_ST0;
      cVar2 = *(char *)(param_1 + 0x3bff + iVar10);
      local_2c = 0.0;
      local_34 = 1.0;
      fVar6 = (float)CONCAT31((int3)((uint)uVar5 >> 8),cVar2);
      if (cVar2 != '\0') {
        local_34 = DAT_00dc18a0 + _DAT_007e3374;
        local_2c = DAT_00dc18a0;
        fVar6 = DAT_00dc18a0;
      }
      uVar9 = (undefined2)((uint)fVar6 >> 0x10);
      switch(iVar10) {
      case 0:
        local_38 = *(float *)(param_1 + 0x409e) + *(float *)(param_1 + 0x4096);
        fVar6 = *(float *)(param_1 + 0x408a) + *(float *)(param_1 + 0x4082);
        if (local_38 < fVar6) {
          local_38 = fVar6;
        }
        fVar13 = (float10)FUN_00442c00(0);
        fVar15 = (float10)*(float *)(param_1 + 0x3a30);
        fVar14 = (float10)*(float *)(param_1 + 0x3958) - (float10)*(float *)(param_1 + 0x3a18);
        if (fVar14 < fVar15) {
          fVar15 = (float10)(float)fVar14;
        }
        local_48 = (float)((((float10)*(float *)(param_1 + 0x3b50) +
                             (float10)*(float *)(param_1 + 0x3aa8) +
                             (float10)*(float *)(param_1 + 0x3a78) + fVar15 +
                            fVar13 + (float10)*(float *)(param_1 + 0x3a90) +
                            (float10)*(float *)(param_1 + 0x3a18)) -
                           (float10)*(float *)(param_1 + 0x3a60)) - (float10)local_38);
        uVar5 = FUN_0044beb0();
        fVar6 = _DAT_0087760c;
        if ((char)uVar5 != '\0') {
          fVar6 = _DAT_00877610;
        }
        local_30 = _DAT_00dc18a8 * *(float *)(param_1 + 0x3c06);
        local_3c = *(float *)(param_1 + 0x39b4);
        local_44 = local_30 * local_34 * local_14;
        uVar9 = (undefined2)((uint)uVar5 >> 0x10);
        if (local_44 <= _DAT_007e68d4) {
          local_44 = 250.0;
        }
        local_40 = _DAT_00dc18c4 * *(float *)(param_1 + 0x3c06);
        if (local_40 <= _DAT_007e4088) {
          local_40 = 100.0;
        }
        if (*(char *)(param_1 + 0x3bf9) != '\0') {
          if (local_44 <= local_3c) {
            fVar13 = (float10)local_48;
            goto LAB_004701f9;
          }
          local_38 = (fVar6 + local_2c + _DAT_00dc1898) * local_38;
          local_48 = local_48 - local_38;
          if (local_3c < local_40) {
            if ((_DAT_007e3380 <= local_48) || (_DAT_007e3380 <= local_38 + local_48)) {
LAB_00470190:
              local_48 = local_48 * _DAT_007e34c0;
            }
            else {
              *(undefined1 *)(param_1 + 0x3bec + iVar10) = 1;
              *(undefined1 *)(param_1 + 0x3bf2) = 1;
            }
          }
        }
        break;
      case 1:
      case 2:
      case 3:
        local_18 = 0.0;
        if (iVar10 == 1) {
          local_18 = *(float *)(param_1 + 0x3960);
          local_3c = *(float *)(param_1 + 0x39bc);
        }
        else if (iVar10 == 2) {
          local_18 = *(float *)(param_1 + 0x395c);
          local_3c = *(float *)(param_1 + 0x39b8);
        }
        else if (iVar10 == 3) {
          local_18 = *(float *)(param_1 + 0x3964);
          local_3c = *(float *)(param_1 + 0x39c0);
        }
        fVar6 = *(float *)(param_1 + 0x3af0 + iVar10 * 4);
        fVar13 = (float10)FUN_00442c00(iVar10);
        fVar15 = (float10)*(float *)(param_1 + 0x3a30 + iVar10 * 4);
        fVar14 = (float10)local_18 - (float10)*(float *)(param_1 + 0x3a18 + iVar10 * 4);
        if (fVar14 < fVar15) {
          fVar15 = (float10)(float)fVar14;
        }
        local_48 = (float)((((float10)*(float *)(param_1 + 0x3b50 + iVar10 * 4) +
                             (float10)*(float *)(param_1 + 0x3aa8 + iVar10 * 4) +
                             (float10)*(float *)(param_1 + 0x3a78 + iVar10 * 4) + fVar15 +
                            fVar13 + (float10)*(float *)(param_1 + 0x3a90 + iVar10 * 4) +
                            (float10)*(float *)(param_1 + 0x3a18 + iVar10 * 4)) -
                           (float10)*(float *)(param_1 + 0x3a60 + iVar10 * 4)) - (float10)fVar6);
        local_44 = _DAT_00dc1890 * local_34 * local_14 * fVar6;
        local_40 = _DAT_00dc1894 * fVar6;
        local_30 = _DAT_00dc1890 * fVar6;
        uVar9 = extraout_var_04;
        if (*(char *)(iVar10 + 0x3bf9 + param_1) != '\0') {
          if (local_44 <= local_3c) goto LAB_004703ca;
          fVar6 = (_DAT_00dc1898 + local_2c) * fVar6;
          local_48 = local_48 - fVar6;
          if (local_3c < local_40) {
            if ((_DAT_007e3380 <= local_48) || (_DAT_007e3380 <= fVar6 + local_48))
            goto LAB_00470190;
            *(undefined1 *)(param_1 + 0x3bec + iVar10) = 1;
            *(undefined1 *)(param_1 + 0x3bf2) = 1;
            *(undefined1 *)(param_1 + 0x3c0f) = 0;
          }
        }
        break;
      case 4:
        local_44 = 1.0;
        local_40 = 0.0;
        if ((bVar12) && (*(char *)(param_1 + 0x3c03) == '\0')) {
          fVar6 = *(float *)(param_1 + 0x3a70);
          fVar1 = *(float *)(param_1 + 0x3a88);
          fVar13 = (float10)FUN_004a3450();
          fVar13 = (float10)FUN_0049dd20((float)fVar13);
          fVar13 = (fVar13 * (float10)_DAT_00dc18a4 + (float10)fVar1) - (float10)fVar6;
          local_48 = (float)fVar13;
          uVar9 = extraout_var_05;
LAB_004701f9:
          if (fVar13 < (float10)_DAT_007e3380) {
            local_48 = 0.0;
          }
        }
        else {
          fVar13 = (float10)FUN_0049c570();
          local_48 = (float)(((float10)*(float *)(param_1 + 0x3a88) -
                             (float10)*(float *)(param_1 + 0x3a70)) -
                            ((float10)_DAT_00dc1898 + (float10)local_2c + (float10)_DAT_007e3374) *
                            (fVar13 + (float10)*(float *)(param_1 + 0x3950)));
          uVar9 = extraout_var_06;
        }
        break;
      case 5:
        fVar6 = *(float *)(param_1 + 0x409a) + *(float *)(param_1 + 0x4092);
        fVar1 = *(float *)(param_1 + 0x408e) + *(float *)(param_1 + 0x4086);
        if (fVar6 < fVar1) {
          fVar6 = fVar1;
        }
        local_30 = _DAT_00dc18ac * *(float *)(param_1 + 0x3c0a);
        local_3c = *(float *)(param_1 + 0x39c4);
        local_44 = local_30 * local_34 * local_14;
        if (local_44 <= _DAT_007e68d4) {
          local_44 = 250.0;
        }
        local_40 = _DAT_00dc18c8 * *(float *)(param_1 + 0x3c0a);
        if (local_40 <= _DAT_007e4088) {
          local_40 = 100.0;
        }
        if ((bVar12) && (*(char *)(param_1 + 0x3c04) == '\0')) {
          uVar5 = 0;
          fVar13 = (float10)FUN_004a3450(0);
          fVar13 = (float10)FUN_0049b210((float)((float10)_DAT_007e3374 - fVar13),uVar5);
          fVar13 = (fVar13 * (float10)_DAT_00dc189c + (float10)*(float *)(param_1 + 0x3a8c)) -
                   (float10)*(float *)(param_1 + 0x3a74);
          local_48 = (float)fVar13;
          uVar9 = extraout_var_07;
          if (fVar13 < (float10)_DAT_007e3380) {
            local_48 = 0.0;
          }
        }
        else {
          local_48 = (*(float *)(param_1 + 0x3a8c) -
                     (_DAT_00dc1898 + local_2c + _DAT_007e3374) * fVar6) -
                     *(float *)(param_1 + 0x3a74);
        }
        if (local_44 < local_3c) {
LAB_004703ca:
          fVar13 = (float10)local_48;
          goto LAB_004701f9;
        }
        if (((local_3c < local_40) && (_DAT_007e3380 < local_48)) && (!bVar12)) {
          local_48 = 0.0;
          *(undefined1 *)(param_1 + 0x3bf1) = 1;
        }
      }
      if (((DAT_00dc1860 != '\0') && (0 < iVar10)) && (iVar10 < 4)) {
        fVar6 = _DAT_00877594 * local_30 * local_28;
        if (fVar6 <= _DAT_007e6818) {
          fVar6 = _DAT_007e6818;
        }
        *(float *)(param_1 + 0x3b08 + iVar10 * 4) = fVar6;
        if (fVar6 * _DAT_007e40a4 < local_44) {
          local_44 = fVar6 * _DAT_007e40a4;
        }
        if (fVar6 < local_3c) {
          if (local_48 < _DAT_007e3380) {
            local_48 = 0.0;
          }
          *(float *)(param_1 + 0x3bd4 + iVar10 * 4) =
               *(float *)(param_1 + 0x3bd4 + iVar10 * 4) * _DAT_007e34c0;
        }
      }
      if ((DAT_00dc1885 != '\0') && ((iVar10 == 0 || (iVar10 == 5)))) {
        fVar6 = _DAT_008775e4 * local_30 * local_24;
        if (fVar6 <= _DAT_007e67e8) {
          fVar6 = _DAT_007e67e8;
        }
        *(float *)(param_1 + 0x3b08 + iVar10 * 4) = fVar6;
        if (fVar6 * _DAT_007e40a4 < local_44) {
          local_44 = fVar6 * _DAT_007e40a4;
        }
        if (fVar6 < local_3c) {
          if (local_48 < _DAT_007e3380) {
            local_48 = 0.0;
          }
          *(float *)(param_1 + 0x3bd4 + iVar10 * 4) =
               *(float *)(param_1 + 0x3bd4 + iVar10 * 4) * _DAT_007e34c0;
        }
      }
      uVar5 = CONCAT22(uVar9,(ushort)(local_48 < _DAT_007e3380) << 8 |
                             (ushort)(NAN(local_48) || NAN(_DAT_007e3380)) << 10 |
                             (ushort)(local_48 == _DAT_007e3380) << 0xe);
      if ((local_48 < _DAT_007e3380 == 0) ||
         (cVar2 = *(char *)(iVar10 + 0x3bf9 + param_1),
         uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),cVar2), cVar2 != '\0')) {
        uVar5 = CONCAT22((short)((uint)uVar5 >> 0x10),
                         (ushort)(local_48 < _DAT_007e3380) << 8 |
                         (ushort)(NAN(local_48) || NAN(_DAT_007e3380)) << 10 |
                         (ushort)(local_48 == _DAT_007e3380) << 0xe);
        if ((local_48 < _DAT_007e3380 == 0 && (local_48 == _DAT_007e3380) == 0) &&
           (cVar2 = *(char *)(iVar10 + 0x3bf3 + param_1),
           uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),cVar2), cVar2 == '\0')) {
          local_48 = 0.0;
        }
        else {
          uVar5 = CONCAT22((short)((uint)uVar5 >> 0x10),
                           (ushort)(local_48 < _DAT_007e3380) << 8 |
                           (ushort)(NAN(local_48) || NAN(_DAT_007e3380)) << 10 |
                           (ushort)(local_48 == _DAT_007e3380) << 0xe);
          if (((local_48 < _DAT_007e3380 != 0) &&
              (*(undefined1 *)(param_1 + 0x3c0e) = 1, iVar10 < 4)) &&
             (cVar2 = *(char *)(iVar10 + 0x3bf9 + param_1),
             uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),cVar2), cVar2 != '\0')) {
            bVar12 = true;
          }
        }
      }
      else {
        local_48 = 0.0;
      }
      *(float *)(param_1 + 0x3b8c + iVar10 * 4) = -local_48;
      *(float *)(param_1 + 0x3ba4 + iVar10 * 4) = local_44;
      *(float *)(param_1 + 0x3bbc + iVar10 * 4) = local_40;
      uVar4 = uVar5;
      if (iVar10 != 4) {
        cVar2 = *(char *)(param_1 + 0x3bec + iVar10);
        uVar4 = CONCAT31((int3)((uint)uVar5 >> 8),cVar2);
        if (cVar2 == '\0') {
          fVar6 = local_44 / local_3c;
          uVar4 = CONCAT22((short)((uint)uVar5 >> 0x10),
                           (ushort)(fVar6 < _DAT_007e34e0) << 8 |
                           (ushort)(NAN(fVar6) || NAN(_DAT_007e34e0)) << 10 |
                           (ushort)(fVar6 == _DAT_007e34e0) << 0xe);
          if (fVar6 < _DAT_007e34e0 == 0) {
            fVar6 = _DAT_007e34e0;
          }
          fVar6 = (fVar6 + _DAT_007e40a4) * *(float *)(param_1 + 0x3bd4 + iVar10 * 4);
        }
        else {
          fVar6 = *(float *)(param_1 + 0x3bd4 + iVar10 * 4) * _DAT_007e67fc;
        }
        *(float *)(param_1 + 0x3bd4 + iVar10 * 4) = fVar6;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 6);
  }
  uVar8 = (undefined3)((uint)uVar4 >> 8);
  iVar10 = CONCAT31(uVar8,*(char *)(param_1 + 0x3c0e));
  if (((*(char *)(param_1 + 0x3c0e) != '\0') &&
      (iVar10 = CONCAT31(uVar8,*(char *)(param_1 + 0x3bf2)), *(char *)(param_1 + 0x3bf2) == '\0'))
     && (iVar10 = CONCAT31(uVar8,bVar11), !bVar11)) {
    iVar7 = _rand();
    iVar10 = iVar7 / 100;
    *(bool *)(param_1 + 0x3c0e) = iVar7 % 100 < 0x32;
  }
  iVar10 = CONCAT31((int3)((uint)iVar10 >> 8),DAT_00dc1909);
  if (DAT_00dc1909 != '\0') {
    if (DAT_00dc190c == -1) {
      if (DAT_00d0ca90 == param_1) {
        iVar10 = FUN_004a6780();
        return iVar10;
      }
    }
    else {
      iVar7 = (int)*(char *)(DAT_00893530 + 0x15) +
              ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) * 0x1e;
      iVar10 = iVar7 / DAT_00dc190c;
      if (iVar7 % DAT_00dc190c == 0) {
        iVar10 = FUN_004a6780();
      }
    }
  }
  return iVar10;
}


