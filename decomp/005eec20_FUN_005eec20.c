// FUN_005eec20 @ 5eec20 size=2617

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005eec20(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  float10 fVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  int iStack_238;
  undefined4 uStack_234;
  int iStack_230;
  float fStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int aiStack_128 [73];
  
  if (DAT_00d0ca90 == *(int *)(DAT_00ab27b4 + DAT_008477ac * 0x4b2 + 0x3d8)) {
    uStack_224 = param_3;
    iStack_228 = param_2;
    fStack_22c = 8.717513e-39;
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xbc) + 0x3c))();
    if (puVar3 != (undefined4 *)0x0) {
      return puVar3;
    }
  }
  else {
    uStack_224 = param_3;
    iStack_228 = param_2;
    fStack_22c = 8.717353e-39;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x140) + 0x20))();
    if (cVar1 != '\0') {
      fStack_22c = 1.4013e-45;
      iStack_230 = 0x5eec84;
      piVar2 = (int *)FUN_0044c640();
      if (piVar2 != (int *)0x0) {
        fStack_22c = 8.717398e-39;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
        return puVar3;
      }
    }
    fStack_22c = (float)param_3;
    iStack_230 = param_2;
    uStack_234 = 0x5eeca5;
    cVar1 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x20))();
    if (cVar1 != '\0') {
      uStack_234 = 0;
      iStack_238 = 0x5eecba;
      piVar2 = (int *)FUN_0044c640();
      if (piVar2 != (int *)0x0) {
        uStack_234 = 0x5eecc5;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
        return puVar3;
      }
    }
  }
  uStack_234 = param_3;
  iStack_238 = param_2;
  cVar1 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x20))();
  if (cVar1 != '\0') {
    puVar3 = (undefined4 *)FUN_0042b6c9(s_KPVALUE_0085d4dc);
    return puVar3;
  }
  iVar9 = param_2;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    pcVar4 = (char *)FUN_004d1730();
    uVar7 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_00cdf95c;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar4 = &DAT_00839650;
    do {
      pcVar13 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar9 = -1;
    pcVar4 = (char *)&DAT_00cdf95c;
    do {
      pcVar12 = pcVar4;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    pcVar4 = pcVar13 + -uVar7;
    pcVar13 = pcVar12 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    fVar14 = (float10)FUN_0044aaf0();
    fStack_22c = (float)fVar14;
    fVar14 = (float10)FUN_004ecea0();
    dVar16 = (double)((fVar14 + (float10)fStack_22c) * (float10)_DAT_007e34c0 *
                     (float10)_DAT_007e4088);
    uVar5 = FUN_0042b6c9(s_PROV_ESE_0085d4d0);
    FUN_007a630a(aiStack_128,uVar5,dVar16);
    pcVar4 = (char *)aiStack_128;
    goto LAB_005ef4f9;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x134) + 0x20))();
  if (cVar1 != '\0') {
    puVar3 = (undefined4 *)FUN_0042b6c9(s_BEACH_IRO_0085d4c4);
    return puVar3;
  }
  iVar10 = param_2;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x130) + 0x20))(param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x148) + 0x20))(param_2);
    if (cVar1 != '\0') {
      pcVar4 = (char *)FUN_0042b6c9();
      uVar7 = 0xffffffff;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar4 = pcVar13 + -uVar7;
      pcVar13 = (char *)&DAT_00cdf95c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar4 = &DAT_00839650;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar4 = (char *)&DAT_00cdf95c;
      do {
        pcVar12 = pcVar4;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar4 = pcVar13 + -uVar7;
      pcVar13 = pcVar12 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
      pcVar4 = (char *)FUN_004e8930();
      goto LAB_005ef4f9;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x20))(param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x10c) + 0x20))(param_2,param_3);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x110) + 0x20))(param_2,param_3);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x20))(param_2,param_3);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(**(int **)(param_1 + 0x118) + 0x20))(param_2,param_3);
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x20))(param_2,param_3);
              if (cVar1 == '\0') {
                cVar1 = (**(code **)(**(int **)(param_1 + 0xd0) + 0x20))(param_2,param_3);
                if (cVar1 == '\0') {
                  cVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x20))(param_2,param_3);
                  if (cVar1 == '\0') {
                    cVar1 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x20))(param_2,param_3);
                    if (cVar1 == '\0') {
                      cVar1 = (**(code **)(**(int **)(param_1 + 0x120) + 0x20))(param_2);
                      if (cVar1 == '\0') {
                        cVar1 = (**(code **)(**(int **)(param_1 + 0x124) + 0x20))(param_2);
                        if (cVar1 == '\0') {
                          cVar1 = (**(code **)(**(int **)(param_1 + 0x128) + 0x20))(param_2);
                          if (cVar1 == '\0') {
                            cVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x20))(param_2);
                            if (cVar1 == '\0') {
                              uVar17 = CONCAT44(param_3,param_2);
                              cVar1 = (**(code **)(**(int **)(param_1 + 0xdc) + 0x20))();
                              iVar9 = (int)uVar17;
                              if (cVar1 != '\0') {
                                puVar3 = (undefined4 *)FUN_0042b6c9();
                                return puVar3;
                              }
                              for (puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x138) + 4);
                                  puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[2]) {
                                cVar1 = (**(code **)(*(int *)*puVar3 + 0x2c))(param_2,param_3);
                                iVar9 = (int)uVar17;
                                if (cVar1 != '\0') {
                                  puVar3 = (undefined4 *)
                                           (**(code **)(*(int *)*puVar3 + 0x44))(param_2,param_3);
                                  return puVar3;
                                }
                              }
                              cVar1 = FUN_004355a0(param_2,param_3);
                              if (cVar1 != '\0') {
                                puVar3 = (undefined4 *)
                                         (**(code **)(**(int **)(param_1 + 0x11c) + 0x3c))
                                                   (param_2,param_3);
                                return puVar3;
                              }
                              cVar1 = (**(code **)(**(int **)(param_1 + 0x154) + 0x20))
                                                (param_2,param_3);
                              if ((cVar1 == '\0') ||
                                 (*(int *)(iVar10 + 0x3d4) == *(int *)(iVar10 + 0x3d8))) {
                                cVar1 = (**(code **)(**(int **)(param_1 + 0x150) + 0x20))
                                                  (param_2,param_3);
                                if (cVar1 == '\0') {
                                  return (undefined4 *)0x0;
                                }
                                uVar5 = (**(code **)(*(int *)(*(int *)(iVar9 + 0x3d4) + 0xe) + 0xc))
                                                  ();
                                pcVar4 = s_HRPOV_OWNER_IRO_0085d350;
                              }
                              else {
                                uVar5 = (**(code **)(*(int *)(*(int *)(iVar10 + 0x3d8) + 0xe) + 0xc)
                                        )();
                                pcVar4 = s_HRPOV_CONTROLLER_IRO_0085d360;
                              }
                              uVar6 = FUN_0042b6c9(pcVar4);
                              FUN_007a630a(&DAT_00cdf95c,uVar6,uVar5);
                              goto LAB_005ef640;
                            }
                            pcVar4 = (char *)FUN_0042b6c9();
                            uVar7 = 0xffffffff;
                            do {
                              pcVar13 = pcVar4;
                              if (uVar7 == 0) break;
                              uVar7 = uVar7 - 1;
                              pcVar13 = pcVar4 + 1;
                              cVar1 = *pcVar4;
                              pcVar4 = pcVar13;
                            } while (cVar1 != '\0');
                            uVar7 = ~uVar7;
                            pcVar4 = pcVar13 + -uVar7;
                            pcVar13 = (char *)&DAT_00cdf95c;
                            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                              pcVar4 = pcVar4 + 4;
                              pcVar13 = pcVar13 + 4;
                            }
                            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                              *pcVar13 = *pcVar4;
                              pcVar4 = pcVar4 + 1;
                              pcVar13 = pcVar13 + 1;
                            }
                            fVar14 = (float10)FUN_004ecd50();
                            dVar16 = (double)fVar14;
                            fVar14 = (float10)FUN_004ec900(dVar16);
                          }
                          else {
                            pcVar4 = (char *)FUN_0042b6c9();
                            uVar7 = 0xffffffff;
                            do {
                              pcVar13 = pcVar4;
                              if (uVar7 == 0) break;
                              uVar7 = uVar7 - 1;
                              pcVar13 = pcVar4 + 1;
                              cVar1 = *pcVar4;
                              pcVar4 = pcVar13;
                            } while (cVar1 != '\0');
                            uVar7 = ~uVar7;
                            pcVar4 = pcVar13 + -uVar7;
                            pcVar13 = (char *)&DAT_00cdf95c;
                            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                              pcVar4 = pcVar4 + 4;
                              pcVar13 = pcVar13 + 4;
                            }
                            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                              *pcVar13 = *pcVar4;
                              pcVar4 = pcVar4 + 1;
                              pcVar13 = pcVar13 + 1;
                            }
                            fVar14 = (float10)FUN_004ecb30();
                            dVar16 = (double)fVar14;
                            fVar14 = (float10)FUN_004ec6c0(dVar16);
                          }
                        }
                        else {
                          pcVar4 = (char *)FUN_0042b6c9();
                          uVar7 = 0xffffffff;
                          do {
                            pcVar13 = pcVar4;
                            if (uVar7 == 0) break;
                            uVar7 = uVar7 - 1;
                            pcVar13 = pcVar4 + 1;
                            cVar1 = *pcVar4;
                            pcVar4 = pcVar13;
                          } while (cVar1 != '\0');
                          uVar7 = ~uVar7;
                          pcVar4 = pcVar13 + -uVar7;
                          pcVar13 = (char *)&DAT_00cdf95c;
                          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                            pcVar4 = pcVar4 + 4;
                            pcVar13 = pcVar13 + 4;
                          }
                          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                            *pcVar13 = *pcVar4;
                            pcVar4 = pcVar4 + 1;
                            pcVar13 = pcVar13 + 1;
                          }
                          fVar14 = (float10)FUN_004eca20();
                          dVar16 = (double)fVar14;
                          fVar14 = (float10)FUN_004ec5a0(dVar16);
                        }
                      }
                      else {
                        pcVar4 = (char *)FUN_0042b6c9();
                        uVar7 = 0xffffffff;
                        do {
                          pcVar13 = pcVar4;
                          if (uVar7 == 0) break;
                          uVar7 = uVar7 - 1;
                          pcVar13 = pcVar4 + 1;
                          cVar1 = *pcVar4;
                          pcVar4 = pcVar13;
                        } while (cVar1 != '\0');
                        uVar7 = ~uVar7;
                        pcVar4 = pcVar13 + -uVar7;
                        pcVar13 = (char *)&DAT_00cdf95c;
                        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                          pcVar4 = pcVar4 + 4;
                          pcVar13 = pcVar13 + 4;
                        }
                        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                          *pcVar13 = *pcVar4;
                          pcVar4 = pcVar4 + 1;
                          pcVar13 = pcVar13 + 1;
                        }
                        fVar14 = (float10)FUN_004ecc40();
                        dVar16 = (double)fVar14;
                        fVar14 = (float10)FUN_004ec7e0(dVar16);
                      }
                      dVar15 = (double)fVar14;
                    }
                    else {
                      pcVar4 = (char *)FUN_0042b6c9();
                      uVar7 = 0xffffffff;
                      do {
                        pcVar13 = pcVar4;
                        if (uVar7 == 0) break;
                        uVar7 = uVar7 - 1;
                        pcVar13 = pcVar4 + 1;
                        cVar1 = *pcVar4;
                        pcVar4 = pcVar13;
                      } while (cVar1 != '\0');
                      uVar7 = ~uVar7;
                      pcVar4 = pcVar13 + -uVar7;
                      pcVar13 = (char *)&DAT_00cdf95c;
                      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                        pcVar4 = pcVar4 + 4;
                        pcVar13 = pcVar13 + 4;
                      }
                      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                        *pcVar13 = *pcVar4;
                        pcVar4 = pcVar4 + 1;
                        pcVar13 = pcVar13 + 1;
                      }
                      dVar16 = (double)*(float *)(*(int *)(iVar9 + 0x1ca) + 0x10);
                      dVar15 = (double)*(float *)(*(int *)(iVar9 + 0x1ca) + 0x14);
                    }
                    FUN_007a630a(&iStack_238,s___2f___2f_0085d3dc,dVar15,dVar16);
                    goto LAB_005ef4f5;
                  }
                  if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1ce) + 0x10))
                  goto LAB_005ef2b5;
                  pcVar4 = s_HPROV_IRO_CFORT_0085d404;
                }
                else {
                  if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1d2) + 0x10))
                  goto LAB_005ef2b5;
                  pcVar4 = s_HPROV_IRO_FORT_0085d414;
                }
              }
              else {
                if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1d6) + 0x10)) goto LAB_005ef2b5;
                pcVar4 = s_HPROV_IRO_AAR_0085d424;
              }
            }
            else {
              if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1ea) + 0x10)) goto LAB_005ef2b5;
              pcVar4 = s_HPROV_IRO_NUCLEAR_0085d434;
            }
          }
          else {
            if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1ee) + 0x10)) goto LAB_005ef2b5;
            pcVar4 = s_HPROV_IRO_ROCKET_0085d448;
          }
        }
        else {
          if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1e6) + 0x10)) goto LAB_005ef2b5;
          pcVar4 = s_HPROV_IRO_RADAR_0085d45c;
        }
      }
      else {
        if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1e2) + 0x10)) goto LAB_005ef2b5;
        pcVar4 = s_HPROV_IRO_NAVAL_BASE_0085d46c;
      }
    }
    else {
      if (_DAT_007e3374 <= *(float *)(*(int *)(iVar10 + 0x1de) + 0x10)) {
LAB_005ef2b5:
        puVar3 = (undefined4 *)FUN_004d1730();
        return puVar3;
      }
      pcVar4 = s_HPROV_IRO_AIR_BASE_0085d484;
    }
    pcVar4 = (char *)FUN_0042b6c9(pcVar4);
    uVar7 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_00cdf95c;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pcVar4 = s_0_0_0_0_0085d3f8;
  }
  else {
    pcVar4 = (char *)FUN_0042b6c9();
    uVar7 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_00cdf95c;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (_DAT_007e3380 < *(float *)(iVar9 + 0x270)) {
      dVar16 = (double)*(float *)(iVar9 + 0x270);
      uVar5 = FUN_0042b6c9();
      FUN_007a630a(&iStack_238,s__s____2f_0085d4ac,uVar5,dVar16);
      uVar7 = 0xffffffff;
      piVar2 = &iStack_238;
      do {
        piVar11 = piVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        piVar11 = (int *)((int)piVar2 + 1);
        iVar10 = *piVar2;
        piVar2 = piVar11;
      } while ((char)iVar10 != '\0');
      uVar7 = ~uVar7;
      iVar10 = -1;
      pcVar4 = (char *)&DAT_00cdf95c;
      do {
        pcVar13 = pcVar4;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      pcVar4 = (char *)((int)piVar11 - uVar7);
      pcVar13 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    if (_DAT_007e3380 < *(float *)(iVar9 + 0x278)) {
      dVar16 = (double)*(float *)(iVar9 + 0x278);
      uVar5 = FUN_0042b6c9();
      FUN_007a630a(&iStack_238,s__s____2f_0085d4ac,uVar5,dVar16);
      uVar7 = 0xffffffff;
      piVar2 = &iStack_238;
      do {
        piVar11 = piVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        piVar11 = (int *)((int)piVar2 + 1);
        iVar10 = *piVar2;
        piVar2 = piVar11;
      } while ((char)iVar10 != '\0');
      uVar7 = ~uVar7;
      iVar10 = -1;
      pcVar4 = (char *)&DAT_00cdf95c;
      do {
        pcVar13 = pcVar4;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      pcVar4 = (char *)((int)piVar11 - uVar7);
      pcVar13 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    if (_DAT_007e3380 < *(float *)(iVar9 + 0x280)) {
      dVar16 = (double)*(float *)(iVar9 + 0x280);
      uVar5 = FUN_0042b6c9();
      FUN_007a630a(&iStack_238,s__s____2f_0085d4ac,uVar5,dVar16);
      uVar7 = 0xffffffff;
      piVar2 = &iStack_238;
      do {
        piVar11 = piVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        piVar11 = (int *)((int)piVar2 + 1);
        iVar10 = *piVar2;
        piVar2 = piVar11;
      } while ((char)iVar10 != '\0');
      uVar7 = ~uVar7;
      iVar10 = -1;
      pcVar4 = (char *)&DAT_00cdf95c;
      do {
        pcVar13 = pcVar4;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      pcVar4 = (char *)((int)piVar11 - uVar7);
      pcVar13 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    if (_DAT_007e3380 < *(float *)(iVar9 + 0x274)) {
      dVar16 = (double)*(float *)(iVar9 + 0x274);
      uVar5 = FUN_0042b6c9();
      FUN_007a630a(&iStack_238,s__s____2f_0085d4ac,uVar5,dVar16);
      uVar7 = 0xffffffff;
      piVar2 = &iStack_238;
      do {
        piVar11 = piVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        piVar11 = (int *)((int)piVar2 + 1);
        iVar10 = *piVar2;
        piVar2 = piVar11;
      } while ((char)iVar10 != '\0');
      uVar7 = ~uVar7;
      iVar10 = -1;
      pcVar4 = (char *)&DAT_00cdf95c;
      do {
        pcVar13 = pcVar4;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      pcVar4 = (char *)((int)piVar11 - uVar7);
      pcVar13 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    if (*(float *)(iVar9 + 0x27c) <= _DAT_007e3380) {
LAB_005ef640:
      return &DAT_00cdf95c;
    }
    dVar16 = (double)*(float *)(iVar9 + 0x27c);
    uVar5 = FUN_0042b6c9();
    FUN_007a630a(&iStack_238,s__s____2f_0085d4ac,uVar5,dVar16);
LAB_005ef4f5:
    pcVar4 = (char *)&iStack_238;
  }
LAB_005ef4f9:
  uVar7 = 0xffffffff;
  do {
    piVar2 = (int *)pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    piVar2 = (int *)((int)pcVar4 + 1);
    iVar9 = *(int *)pcVar4;
    pcVar4 = (char *)piVar2;
  } while ((char)iVar9 != '\0');
  uVar7 = ~uVar7;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_00cdf95c;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = (char *)((int)piVar2 - uVar7);
  pcVar13 = pcVar13 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar13 = pcVar13 + 1;
  }
  return &DAT_00cdf95c;
}


