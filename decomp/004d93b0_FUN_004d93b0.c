// FUN_004d93b0 @ 4d93b0 size=2043

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004d93b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  byte *pbVar15;
  void *pvVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int local_770;
  int local_76c;
  int local_768;
  int local_764;
  byte *local_760;
  int local_75c;
  int local_758;
  int local_754;
  int local_750;
  int local_74c;
  void *local_748;
  int local_744;
  int local_73c;
  int local_738;
  int iStack_72c;
  int iStack_720;
  byte local_490 [1156];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfb8f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00426f50(param_1);
  local_4 = 0;
  FUN_00426d70(param_2,&DAT_0082ef98);
  local_4._0_1_ = 1;
  FUN_0040e950(s_______build_files_bordermap_bmp_008478b0);
  local_4._0_1_ = 2;
  local_73c = 0;
  local_770 = 0;
  pvVar16 = (void *)0x0;
  local_74c = 0;
  local_748 = operator_new(0xb40c);
  local_4._0_1_ = 3;
  if (local_748 == (void *)0x0) {
    DAT_00a9dcb0 = (undefined4 *)0x0;
  }
  else {
    DAT_00a9dcb0 = (undefined4 *)FUN_004eed50();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004eee30(s_map_id_tbl_00847898);
  _DAT_00a9dc98 = 8;
  _DAT_00a9dc9c = 6;
  _DAT_00a9dca0 = 4;
  _DAT_00a9dca4 = 3;
  _DAT_00a9dca8 = 2;
  _DAT_00a9dcac = 1;
  DAT_00a98c78 = operator_new(30000000);
  DAT_00a9cc84 = operator_new(0x400000);
  iVar9 = (int)(0x7500 / (longlong)param_3);
  DAT_00a9dcb6 = param_3;
  local_768 = 0;
  iVar10 = (int)(0x2d00 / (longlong)param_3);
  local_76c = iVar9;
  local_754 = iVar10;
  if (0 < iVar10) {
    iVar13 = param_3 << 5;
    local_758 = 0;
    local_750 = iVar13;
    do {
      local_764 = 0;
      iVar17 = local_768;
      if (0 < iVar9) {
        uVar11 = iVar9 + 0x1fU >> 5;
        local_73c = local_73c + uVar11;
        local_744 = 0;
        local_748 = (void *)((int)pvVar16 + uVar11 * 4);
        local_75c = 1;
        do {
          iVar10 = local_764;
          DAT_00a9cc90 = local_764;
          DAT_00a9cc94 = iVar17;
          FUN_004d9bb0(local_744,local_758,&DAT_00a9cc98,iVar13);
          local_760 = local_490;
          iVar9 = 0;
          do {
            if ((((local_75c < 1) && (iVar10 < local_76c + -1)) && (0 < iVar17)) &&
               (iVar9 + iVar17 < local_754 + -1)) {
              FUN_004273c0((iVar9 + -1 + iVar17) * local_76c + -1 + iVar10);
              FUN_004271a0(local_760,0x22);
            }
            else {
              iVar13 = iVar10 + -1;
              pbVar15 = local_760;
              do {
                iVar10 = iVar9 + -1 + local_768;
                iVar17 = iVar13;
                if (iVar13 < 0) {
                  iVar17 = iVar13 + local_76c;
                }
                if (local_76c <= iVar17) {
                  iVar17 = iVar17 - local_76c;
                }
                if (iVar10 < 0) {
                  iVar10 = 0;
                }
                if (local_754 <= iVar10) {
                  iVar10 = local_754 + -1;
                }
                FUN_004273c0(iVar10 * local_76c + iVar17);
                FUN_004271a0(pbVar15,1);
                if ((iVar17 == 0) || (iVar17 == 1)) {
                  *pbVar15 = *local_760;
                }
                iVar13 = iVar13 + 1;
                pbVar15 = pbVar15 + 1;
                iVar17 = local_768;
                iVar10 = local_764;
              } while (iVar13 + local_75c < 0x22);
            }
            iVar9 = iVar9 + 1;
            local_760 = local_760 + 0x22;
          } while (iVar9 < 0x22);
          iVar9 = 0;
          iVar10 = 0;
          do {
            uVar11 = (int)(local_490[iVar10] + 2) >> 2;
            cVar8 = (char)uVar11;
            if (0x3f < uVar11) {
              cVar8 = '?';
            }
            local_490[iVar10] = 0x3f - cVar8;
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x484);
          FUN_004272b0(&local_770,4);
          iVar10 = 0;
          do {
            iVar13 = iVar10 + 4;
            *(undefined4 *)(iVar10 + (int)DAT_00a9cc84) = 0xffffffff;
            iVar10 = iVar13;
          } while (iVar13 < 0x400000);
          if (param_3 < 8) {
            puVar18 = &DAT_00a9bc7c;
            do {
              iVar13 = 0;
              iVar10 = iVar9 + local_768;
              puVar19 = puVar18;
              do {
                iVar12 = (**(code **)(local_738 + 8))();
                iVar17 = iVar13 + local_764;
                iVar13 = iVar13 + 1;
                puVar18 = (undefined4 *)((int)puVar19 + 1);
                *(undefined1 *)puVar19 =
                     *(undefined1 *)(iVar12 + (iVar17 * iStack_72c + iVar10 * iStack_720) * param_3)
                ;
                puVar19 = puVar18;
              } while (iVar13 < 0x20);
              iVar9 = iVar9 + 1;
              iVar17 = local_768;
            } while ((int)puVar18 < 0xa9c07c);
          }
          else {
            puVar18 = &DAT_00a9bc7c;
            for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
          }
          DAT_00a9cc88 = 0;
          DAT_00a9cc8c = 0;
          DAT_00a9cc80 = 0;
          DAT_00a9cc7c = 0;
          DAT_00a9dcb4 = '\0';
          FUN_004d9f00(1,1,5,local_490,2);
          if (local_74c < DAT_00a9cc80) {
            local_74c = DAT_00a9cc80;
          }
          iVar9 = 0;
          iVar10 = DAT_00a9cc80;
          if (0 < DAT_00a9cc80) {
            do {
              iVar13 = 0;
              piVar14 = DAT_00a9cc84;
              do {
                if (*piVar14 == iVar9) {
                  *(char *)((int)DAT_00a98c78 + local_770) = (char)iVar13;
                  *(char *)((int)DAT_00a98c78 + local_770 + 1) = (char)((uint)iVar13 >> 8);
                  local_770 = local_770 + 2;
                  iVar10 = DAT_00a9cc80;
                  break;
                }
                iVar13 = iVar13 + 1;
                piVar14 = piVar14 + 1;
              } while (iVar13 < 0x100000);
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar10);
          }
          *(byte *)((int)DAT_00a98c78 + local_770 + -1) =
               *(byte *)((int)DAT_00a98c78 + local_770 + -1) | 0x80;
          iVar10 = 0;
          if (0 < DAT_00a9cc88) {
            do {
              pcVar1 = &DAT_00a9ac83 + iVar10;
              pbVar15 = &DAT_00a9ac82 + iVar10;
              pbVar2 = &DAT_00a9ac81 + iVar10;
              pbVar3 = &DAT_00a9ac80 + iVar10;
              pbVar4 = &DAT_00a9ac7f + iVar10;
              pbVar5 = &DAT_00a9ac7e + iVar10;
              pbVar6 = &DAT_00a9ac7d + iVar10;
              pbVar7 = &DAT_00a9ac7c + iVar10;
              iVar10 = iVar10 + 8;
              *(byte *)((int)DAT_00a98c78 + local_770) =
                   ((((((*pcVar1 << 1 | *pbVar15) << 1 | *pbVar2) << 1 | *pbVar3) << 1 | *pbVar4) <<
                     1 | *pbVar5) << 1 | *pbVar6) << 1 | *pbVar7;
              local_770 = local_770 + 1;
            } while (iVar10 < DAT_00a9cc88);
          }
          if (DAT_00a9dcb4 != '\0') {
            DAT_00a9cc80 = 0x100;
            goto LAB_004d996e;
          }
          if (DAT_00a9cc80 == 2) {
            iVar10 = 0;
            if (0 < DAT_00a9cc7c) {
              do {
                pcVar1 = &DAT_00a99c83 + iVar10;
                pbVar15 = &DAT_00a99c82 + iVar10;
                pbVar2 = &DAT_00a99c81 + iVar10;
                pbVar3 = &DAT_00a99c80 + iVar10;
                pbVar4 = &DAT_00a99c7f + iVar10;
                pbVar5 = &DAT_00a99c7e + iVar10;
                pbVar6 = &DAT_00a99c7d + iVar10;
                pbVar7 = &DAT_00a99c7c + iVar10;
                iVar10 = iVar10 + 8;
                *(byte *)((int)DAT_00a98c78 + local_770) =
                     ((((((*pcVar1 << 1 | *pbVar15) << 1 | *pbVar2) << 1 | *pbVar3) << 1 | *pbVar4)
                       << 1 | *pbVar5) << 1 | *pbVar6) << 1 | *pbVar7;
                local_770 = local_770 + 1;
              } while (iVar10 < DAT_00a9cc7c);
            }
          }
          else if ((DAT_00a9cc80 == 3) || (DAT_00a9cc80 == 4)) {
            iVar10 = 0;
            if (0 < DAT_00a9cc7c) {
              do {
                pcVar1 = &DAT_00a99c7f + iVar10;
                pbVar15 = &DAT_00a99c7e + iVar10;
                pbVar2 = &DAT_00a99c7d + iVar10;
                pbVar3 = &DAT_00a99c7c + iVar10;
                iVar10 = iVar10 + 4;
                *(byte *)((int)DAT_00a98c78 + local_770) =
                     ((*pcVar1 << 2 | *pbVar15) << 2 | *pbVar2) << 2 | *pbVar3;
                local_770 = local_770 + 1;
              } while (iVar10 < DAT_00a9cc7c);
            }
          }
          else if (DAT_00a9cc80 < 5) {
            if (0x10 < DAT_00a9cc80) goto LAB_004d996e;
          }
          else if (DAT_00a9cc80 < 0x11) {
            iVar10 = 0;
            if (0 < DAT_00a9cc7c) {
              do {
                pcVar1 = &DAT_00a99c7d + iVar10;
                pbVar15 = &DAT_00a99c7c + iVar10;
                iVar10 = iVar10 + 2;
                *(byte *)((int)DAT_00a98c78 + local_770) = *pcVar1 << 4 | *pbVar15;
                local_770 = local_770 + 1;
              } while (iVar10 < DAT_00a9cc7c);
            }
          }
          else {
LAB_004d996e:
            iVar10 = 0;
            if (0 < DAT_00a9cc7c) {
              do {
                *(undefined1 *)((int)DAT_00a98c78 + local_770) = (&DAT_00a99c7c)[iVar10];
                local_770 = local_770 + 1;
                iVar10 = iVar10 + 1;
              } while (iVar10 < DAT_00a9cc7c);
            }
          }
          iVar10 = 0;
          if (0 < DAT_00a9cc8c) {
            do {
              iVar9 = iVar10 + 4;
              *(byte *)((int)DAT_00a98c78 + local_770) =
                   (&DAT_00a98c7c)[iVar10] & 0x3f | (&DAT_00a98c7d)[iVar10] << 6;
              *(byte *)((int)DAT_00a98c78 + local_770 + 1) =
                   (byte)(&DAT_00a98c7d)[iVar10] >> 2 & 0xf | (&DAT_00a98c7e)[iVar10] << 4;
              *(byte *)((int)DAT_00a98c78 + local_770 + 2) =
                   (&DAT_00a98c7f)[iVar10] << 2 | (byte)(&DAT_00a98c7e)[iVar10] >> 4 & 3;
              local_770 = local_770 + 3;
              iVar10 = iVar9;
            } while (iVar9 < DAT_00a9cc8c);
          }
          local_744 = local_744 + local_750;
          local_764 = local_764 + 0x20;
          local_75c = local_75c + -0x20;
          iVar10 = local_754;
          iVar13 = local_750;
          iVar9 = local_76c;
          pvVar16 = local_748;
        } while (local_764 < local_76c);
      }
      local_768 = iVar17 + 0x20;
      local_758 = local_758 + iVar13;
    } while (local_768 < iVar10);
  }
  FUN_00405ad0(s_IDMAX__d_008478a4,local_74c);
  FUN_004272b0(&local_770,4);
  FUN_004272b0(DAT_00a98c78,local_770);
  if (DAT_00a9dcb0 != (undefined4 *)0x0) {
    (**(code **)*DAT_00a9dcb0)(1);
  }
  FUN_00796cd8(DAT_00a9cc84);
  FUN_00796cd8(DAT_00a98c78);
  local_4._0_1_ = 1;
  FUN_0040e980();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00426f80();
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = pvStack_c;
  return 1;
}


