// FUN_00679900 @ 679900 size=2478

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00679900(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  float10 fVar23;
  float10 fVar24;
  undefined4 in_stack_ffffff5c;
  undefined4 in_stack_ffffff60;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  int local_68;
  undefined4 local_64;
  int local_60;
  float *local_5c;
  float local_58;
  int local_54;
  int local_50;
  int local_48;
  int *local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_10 [8];
  undefined1 local_8 [8];
  
  pfVar8 = param_2;
  FUN_006794d0();
  FUN_00677b40(param_2);
  if (*(char *)(param_1 + 0x908) != '\0') {
    param_2 = (float *)0x3f800000;
    cVar9 = FUN_004a0a80();
    if (cVar9 != '\0') {
      param_2 = (float *)DAT_0087763c;
    }
    cVar9 = FUN_0044beb0();
    if (cVar9 == '\0') {
      if (_DAT_00877634 != _DAT_007e3d28) {
        iVar11 = *(int *)(param_1 + 10);
        fVar1 = *(float *)(iVar11 + 0x1183e);
        fVar2 = *(float *)(iVar11 + 0x1183a);
        fVar3 = *(float *)(iVar11 + 0x11836);
        iVar11 = FUN_0044ab40();
        if (_DAT_00877634 * (float)param_2 < (fVar1 + fVar2 + fVar3) / (float)iVar11) {
          return;
        }
      }
    }
    else if (_DAT_00877638 != _DAT_007e3d28) {
      iVar11 = *(int *)(param_1 + 10);
      fVar1 = *(float *)(iVar11 + 0x1183e);
      fVar2 = *(float *)(iVar11 + 0x1183a);
      fVar3 = *(float *)(iVar11 + 0x11836);
      iVar11 = FUN_0044ab40();
      if (_DAT_00877638 * (float)param_2 < (fVar1 + fVar2 + fVar3) / (float)iVar11) {
        return;
      }
    }
    FUN_00677460();
    bVar7 = false;
    local_60 = DAT_00dbd62e;
    fVar23 = (float10)FUN_00468560();
    if (fVar23 <= (float10)*(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x7c)) {
      local_60 = FUN_00677510();
      if (local_60 == 0x8c) {
        return;
      }
    }
    else {
      bVar7 = true;
    }
    local_58 = 0.0;
    piVar21 = *(int **)(*(int *)(param_1 + 10) + 0x3b7e);
    while (piVar21 != (int *)0x0) {
      piVar5 = (int *)piVar21[2];
      iVar11 = *piVar21;
      cVar9 = FUN_004f2390();
      piVar21 = piVar5;
      if (cVar9 == '\0') {
        local_58 = *(float *)(iVar11 + 0x28) + local_58;
      }
    }
    iVar12 = FUN_0044ab40();
    fVar1 = *pfVar8;
    cVar9 = FUN_0044beb0();
    fVar2 = *(float *)(*(int *)(param_1 + 10) + 0x39f8) * _DAT_00dc18fc;
    iVar11 = *(int *)(*(int *)(param_1 + 10) + 0x120);
    iVar19 = local_60;
    if (local_58 < (float)iVar12 * fVar1) {
      while ((cVar9 == '\0' || (fVar2 <= *(float *)(*(int *)(param_1 + 10) + 0x39cc)))) {
        iVar22 = 0;
        local_68 = 0;
        local_64 = 0xffffffff;
        local_50 = 0;
        local_30 = 0xffffffff;
        local_48 = 0;
        local_34 = 0xffffffff;
        local_40 = 0;
        local_38 = 0xffffffff;
        local_3c = 0xffffffff;
        iVar20 = 0;
        local_44 = (int *)0x0;
        iVar13 = FUN_004a5c30(iVar19);
        uVar17 = in_stack_ffffff5c;
        if (0 < iVar13) {
          do {
            local_54 = _rand();
            local_54 = local_54 % 100;
            if (iVar22 < DAT_008776b0) {
              local_5c = (float *)(iVar11 + 0x380 + iVar22 * 4);
              do {
                if ((((_DAT_007e3380 < *local_5c) &&
                     (*(char *)(*(int *)(param_1 + 10) + 0x4b5c + iVar22) != '\0')) &&
                    (cVar10 = FUN_004a4340(iVar22,iVar19), cVar10 != '\0')) &&
                   ((float)local_54 < *local_5c)) {
                  if (iVar20 == 0) {
                    local_64 = FUN_0044c4a0(iVar22);
                    iVar20 = 1;
                    local_68 = iVar22;
                    break;
                  }
                  if (iVar20 == 1) {
                    if (iVar22 != local_68) {
                      local_30 = FUN_0044c4a0(iVar22);
                      iVar20 = 2;
                      local_50 = iVar22;
                      break;
                    }
                  }
                  else if (iVar20 == 2) {
                    if ((iVar22 != local_68) && (iVar22 != local_50)) {
                      local_34 = FUN_0044c4a0(iVar22);
                      iVar20 = 3;
                      local_48 = iVar22;
                      break;
                    }
                  }
                  else if (iVar20 == 3) {
                    if (((iVar22 != local_68) && (iVar22 != local_50)) && (iVar22 != local_48)) {
                      local_38 = FUN_0044c4a0(iVar22);
                      iVar20 = 4;
                      local_40 = iVar22;
                      break;
                    }
                  }
                  else if (((iVar20 == 4) && (iVar22 != local_68)) &&
                          ((iVar22 != local_50 && ((iVar22 != local_48 && (iVar22 != local_40))))))
                  {
                    local_3c = FUN_0044c4a0(iVar22);
                    iVar20 = 5;
                    break;
                  }
                }
                local_54 = __ftol();
                iVar22 = iVar22 + 1;
                local_5c = local_5c + 1;
              } while (iVar22 < DAT_008776b0);
            }
            local_44 = (int *)((int)local_44 + 1);
            iVar13 = FUN_004a5c30(iVar19);
            uVar17 = in_stack_ffffff5c;
          } while ((int)local_44 < iVar13);
        }
        in_stack_ffffff5c = FUN_0044c450(iVar19);
        iVar13 = 99;
        iVar20 = FUN_0044ab40();
        if ((iVar20 < DAT_00877658) && (0xb < (int)(&DAT_00dbd1a2)[iVar19])) {
          iVar13 = 1;
        }
        if (((&DAT_00dbd602)[iVar19] == 9) || ((&DAT_00dbd602)[iVar19] == 0xb)) {
          iVar13 = DAT_00877654;
        }
        FUN_0044c3d0(iVar19,in_stack_ffffff5c);
        iVar20 = (((((int)DAT_00d61392 - (int)*(short *)(DAT_00893530 + 0x18)) * 0xc -
                   (int)*(char *)(DAT_00893530 + 0x16)) + -3 + (int)DAT_00d6138e._2_1_) * 0x1e -
                 (int)*(char *)(DAT_00893530 + 0x15)) + (int)DAT_00d6138e._1_1_;
        if (cVar9 == '\0') {
          iVar22 = *(int *)(iVar11 + 0x36c);
        }
        else {
          iVar22 = FUN_0044e1d0();
          iVar22 = *(int *)(iVar22 + 0x3e);
          do {
            do {
              if (iVar22 == 0) {
                iVar22 = *(int *)(iVar11 + 0x370);
                goto joined_r0x00679dfd;
              }
              iVar22 = *(int *)(iVar22 + 8);
              iVar14 = FUN_004c9f81();
            } while (iVar14 == 0);
            iVar14 = FUN_004c9f81();
            cVar10 = FUN_0044b280(*(undefined4 *)(iVar14 + 6));
          } while (cVar10 == '\0');
          iVar22 = *(int *)(iVar11 + 0x374);
        }
joined_r0x00679dfd:
        local_54 = iVar20;
        if (iVar22 <= iVar20) {
          local_54 = iVar22;
        }
        iVar22 = FUN_00466b90(iVar19,local_68,in_stack_ffffff5c,local_64,iVar13);
        while (local_54 < iVar22) {
          iVar13 = iVar13 + -1;
          if (iVar13 < 1) {
            iVar22 = FUN_00466b90(iVar19,local_68,in_stack_ffffff5c,local_64,1);
            if (iVar22 < iVar20) {
              iVar13 = 1;
            }
            break;
          }
          iVar22 = FUN_00466b90(iVar19,local_68,in_stack_ffffff5c,local_64,iVar13);
        }
        fVar24 = (float10)FUN_004673a0(iVar19,local_68,in_stack_ffffff5c,local_64);
        fVar3 = (float)fVar24;
        if (*(float *)(*(int *)(param_1 + 10) + 0x39cc) < fVar3) {
          return;
        }
        if (iVar13 < 1) {
          return;
        }
        iVar20 = FUN_00466b90(iVar19,local_68,in_stack_ffffff5c,local_64,iVar13);
        fVar24 = (float10)FUN_00467290(iVar19,local_68,in_stack_ffffff5c,local_64);
        fVar4 = (float)fVar24;
        if ((((0x14 < (int)(&DAT_00dbd1a2)[iVar19]) && ((&DAT_00dbd1a2)[iVar19] != 0x8c)) &&
            (iVar22 = FUN_004a5b50(iVar19), 5 < iVar22)) && (iVar22 = 0, 0 < DAT_008776b0)) {
          local_44 = &DAT_00dbf99a;
          do {
            if (((*(int *)(*local_44 + 0x18) == 2) &&
                (bVar6 = true, *(char *)(iVar22 + 0x4b5c + *(int *)(param_1 + 10)) != '\0')) &&
               (cVar10 = FUN_004a4340(iVar22,local_60), cVar10 != '\0')) {
              piVar21 = *(int **)(*(int *)(param_1 + 10) + 0x3b7e);
              if (piVar21 != (int *)0x0) {
                do {
                  piVar5 = (int *)*piVar21;
                  cVar10 = (**(code **)(*piVar5 + 0x18))();
                  if ((cVar10 != '\0') && (*(int *)((int)piVar5 + 0x5a) == iVar22)) {
                    bVar6 = false;
                  }
                  piVar21 = (int *)piVar21[2];
                } while (piVar21 != (int *)0x0);
                if (!bVar6) goto LAB_0067a035;
              }
              FUN_00428eb0(local_8);
              uVar25 = *(undefined4 *)(*(int *)(param_1 + 10) + 0x117de);
              uVar29 = 0;
              uVar15 = FUN_0044c4a0(iVar22);
              fVar24 = (float10)FUN_004672f0(iVar22,uVar15);
              fVar28 = (float)fVar24;
              uVar27 = 5;
              uVar15 = FUN_0044c4a0(iVar22);
              uVar15 = FUN_00467030(iVar22,uVar15,uVar27);
              uVar26 = 5;
              uVar27 = FUN_0044c4a0(iVar22);
              uVar16 = FUN_0044c4a0(iVar22);
              uVar16 = FUN_0044e100(iVar22,uVar16);
              iVar19 = iVar22;
              FUN_00446d10(local_8);
              FUN_00667670();
              FUN_0045df90(uVar17,in_stack_ffffff60,iVar19,uVar25,uVar16,uVar27,uVar26,uVar15,fVar28
                           ,uVar29);
            }
LAB_0067a035:
            iVar22 = iVar22 + 1;
            local_44 = local_44 + 1;
            iVar19 = local_60;
          } while (iVar22 < DAT_008776b0);
        }
        iVar22 = *(int *)(param_1 + 10);
        if (*(float *)(iVar22 + 0x39cc) < fVar3) {
          return;
        }
        uVar17 = FUN_004ff380(local_68);
        uVar17 = FUN_004ff300(iVar19,uVar17);
        uVar17 = (**(code **)(*(int *)(iVar22 + 0xe) + 0xc))(iVar13,uVar17);
        FUN_00458570(s__s_starts_building__d__s_with__s_00867be4,uVar17);
        *(int *)(param_1 + 0x4a8 + iVar19 * 4) = *(int *)(param_1 + 0x4a8 + iVar19 * 4) + iVar13;
        FUN_00428eb0(auStack_10);
        if (iVar13 < 2) {
          puVar18 = (undefined1 *)FUN_005bf284(*(undefined4 *)(param_1 + 10),iVar19);
        }
        else {
          puVar18 = &DAT_0088ebf8;
        }
        iVar22 = iVar20;
        if (iVar20 < 2) {
          iVar22 = 1;
        }
        fVar28 = fVar4;
        FUN_0044e1b0(puVar18,in_stack_ffffff5c,local_64,local_30,local_34,local_38,local_3c,iVar13,
                     iVar22,fVar4,fVar3);
        FUN_00446d10(auStack_10);
        FUN_00667670();
        FUN_0045dea0();
        local_58 = fVar4 + local_58;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar13;
        *(int *)(param_1 + 0x48 + iVar19 * 4) = *(int *)(param_1 + 0x48 + iVar19 * 4) + iVar13;
        in_stack_ffffff60 = local_64;
        if (((bVar7) || ((int)(&DAT_00dbd1a2)[iVar19] < 0xc)) &&
           (iVar13 = **(int **)(*(int *)(param_1 + 10) + 0x3b7e),
           iVar20 <= (((((int)*(short *)(iVar13 + 0x1e) - (int)*(short *)(DAT_00893530 + 0x18)) *
                        0xc - (int)*(char *)(DAT_00893530 + 0x16)) + (int)*(char *)(iVar13 + 0x1c))
                      * 0x1e - (int)*(char *)(DAT_00893530 + 0x15)) + (int)*(char *)(iVar13 + 0x1b))
           ) {
          uVar17 = 999;
          FUN_00446d10(auStack_10);
          FUN_00667670(iVar22,fVar28,uVar17);
          FUN_0045eef0(iVar22,fVar28,uVar17);
          in_stack_ffffff60 = local_64;
        }
        if (*(float *)(*(int *)(param_1 + 10) + 0x39cc) < _DAT_0087765c) {
          return;
        }
        if (bVar7) {
          iVar13 = _rand();
          fVar3 = (float)(iVar13 % 100) * _DAT_007e543c;
          if ((float)fVar23 * _DAT_007e34c0 <= fVar3) {
            if (fVar3 < (float)fVar23) {
              if (*(char *)(*(int *)(param_1 + 10) + 0x4ad0 + DAT_00dbd602) == '\0')
              goto LAB_0067a24b;
              local_60 = DAT_00dbd602;
              iVar19 = DAT_00dbd602;
            }
          }
          else {
LAB_0067a24b:
            local_60 = DAT_00dbd62e;
            iVar19 = DAT_00dbd62e;
          }
        }
        else {
          iVar19 = FUN_00677510();
          local_60 = iVar19;
          if (iVar19 == 0x8c) {
            return;
          }
        }
        if ((float)iVar12 * fVar1 <= local_58) {
          return;
        }
      }
    }
  }
  return;
}


