// FUN_005ddef0 @ 5ddef0 size=3114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __thiscall FUN_005ddef0(uint param_1,float param_2,uint param_3)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 unaff_EDI;
  uint *puVar16;
  char *pcVar17;
  float10 fVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  float fStack_240;
  uint uStack_23c;
  int iVar22;
  undefined4 *puStack_228;
  uint local_218 [2];
  char acStack_210 [248];
  char acStack_118 [8];
  uint auStack_110 [67];
  
  uStack_23c = param_1 + 0x4e;
  fStack_240 = 8.620718e-39;
  local_218[0] = param_1;
  iVar5 = FUN_00428ee0();
  if (iVar5 == 0) {
    return (uint *)0x0;
  }
  piVar1 = (int *)(iVar5 + -8);
  if (piVar1 == (int *)0x0) {
    return (uint *)0x0;
  }
  uStack_23c = param_3;
  fStack_240 = param_2;
  cVar4 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
  if (cVar4 != '\0') {
    if (*(char *)(iVar5 + 0x14f) != '\0') {
      puVar6 = (uint *)FUN_0042b6c9();
      return puVar6;
    }
    dVar20 = (double)(*(float *)(iVar5 + 0x104) * *(float *)(iVar5 + 0xe8) * _DAT_007e543c);
    fVar18 = (float10)FUN_004fd5d0(1);
    dVar19 = (double)fVar18;
    uVar7 = FUN_0042b6c9(s_OIL_USAGE_0085ba30);
    FUN_007a630a(&DAT_00cd4d50,uVar7,dVar19,dVar20);
    return (uint *)&DAT_00cd4d50;
  }
  if ((*(char *)(iVar5 + 0x14d) != '\0') &&
     (cVar4 = (**(code **)(**(int **)(param_1 + 100) + 0x20))(param_2,param_3), cVar4 != '\0')) {
    puVar6 = (uint *)FUN_0042b6c9();
    return puVar6;
  }
  iVar22 = 0;
  if (0 < *(int *)(iVar5 + 0x134)) {
    puStack_228 = (undefined4 *)(param_1 + 0x32);
    do {
      cVar4 = (**(code **)(*(int *)*puStack_228 + 0x20))(param_2,param_3);
      if (cVar4 != '\0') {
        uVar7 = FUN_004ff3c0();
        FUN_007a630a(auStack_110,&DAT_0083f5a0,uVar7);
        iVar12 = *(int *)(iVar5 + 0x94 + iVar22 * 4);
        uVar7 = *(undefined4 *)(iVar5 + 0x80 + iVar22 * 4);
        uVar9 = FUN_004ff3a0(uVar7,iVar12 + 1);
        FUN_005045e0(uVar7,iVar12,uVar9);
        uVar7 = FUN_0044e100(uVar7,iVar12);
        FUN_007a630a(acStack_210,s__s___s__d__0085afb4,uVar7);
        uVar13 = 0xffffffff;
        pcVar15 = acStack_210;
        goto code_r0x005de14d;
      }
      iVar22 = iVar22 + 1;
      puStack_228 = puStack_228 + 1;
    } while (iVar22 < *(int *)(iVar5 + 0x134));
  }
  cVar4 = (**(code **)(**(int **)(param_1 + 0x2e) + 0x20))(param_2,param_3);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(**(int **)(param_1 + 0x46) + 0x20))(param_2,param_3);
    if (cVar4 != '\0') {
      fStack_240 = *(float *)(DAT_00893530 + 0x14);
      uStack_23c = CONCAT22(uStack_23c._2_2_,*(undefined2 *)(DAT_00893530 + 0x18));
      puVar10 = (undefined4 *)FUN_0042e060(&stack0xfffffdc8,&fStack_240);
      iVar5 = (int)(char)((uint)*puVar10 >> 8) +
              ((int)(char)((uint)*puVar10 >> 0x10) + *(short *)(puVar10 + 1) * 0xc) * 0x1e;
      uVar7 = FUN_0042b6c9(s_DIW_OFFENSIVE_0085ab68);
      FUN_007a630a(&DAT_00cd4d50,uVar7,iVar5);
      return (uint *)&DAT_00cd4d50;
    }
    cVar4 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x20))(param_2,param_3);
    if (cVar4 == '\0') {
      uVar13 = param_3;
      cVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x20))(param_2);
      if (cVar4 != '\0') {
        fVar18 = (float10)FUN_00503610(0);
        fVar2 = (float)(fVar18 * (float10)_DAT_007e6c58);
        fStack_240 = *(float *)(iVar5 + 0xec) + _DAT_007e46cc;
        fVar18 = (float10)FUN_004fd510();
        if (fVar18 <= (float10)fStack_240) {
          fVar2 = _DAT_007e3380;
        }
        fStack_240 = *(float *)(iVar5 + 0xec);
        dVar20 = (double)fVar2;
        uVar7 = FUN_0042b6c9(s_ORG_REGAIN_IRO_0085b10c);
        fVar18 = (float10)FUN_004fd510(uVar7,dVar20);
        dVar20 = (double)fVar18;
        dVar19 = (double)fStack_240;
        uVar7 = FUN_0042b6c9(s_UIW_ORG_0085b104);
        FUN_007a630a(&DAT_00cd4d50,s__s_____0f___0f__s_____2f_0085b0e8,uVar7,dVar19,dVar20);
        return (uint *)&DAT_00cd4d50;
      }
      cVar4 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x20))(param_2,param_3);
      if (cVar4 != '\0') {
        if (*(char *)(iVar5 + 0x15a) != '\0') {
          uVar7 = 2;
          uVar21 = CONCAT44(*(undefined4 *)(iVar5 + 0x94),*(undefined4 *)(iVar5 + 0x80));
          FUN_005045e0(*(undefined4 *)(iVar5 + 0x80),*(undefined4 *)(iVar5 + 0x94),2);
          puVar6 = (uint *)FUN_00457670(uVar21,uVar7);
          return puVar6;
        }
        FUN_005045e0();
        puVar6 = (uint *)FUN_00457910();
        return puVar6;
      }
      if ((*(int *)(param_1 + 0x12) + 0x1f <= (int)param_3) &&
         ((int)param_3 < *(int *)(param_1 + 0x12) + 0x2d)) {
        if (*(char *)(iVar5 + 0x157) == '\0') {
          if (*(char *)(iVar5 + 0x159) == '\0') {
            if (*(char *)(iVar5 + 0x158) != '\0') {
              iVar22 = *(int *)(param_1 + 0xe);
              if ((int)param_2 < iVar22 + 0x50) {
                return (uint *)0x0;
              }
              if ((int)param_2 < iVar22 + 100) {
                puVar6 = (uint *)FUN_0042b6c9(s_UIW_AIRATTACK_0085b204);
                return puVar6;
              }
              if ((int)param_2 < iVar22 + 0x78) {
                puVar6 = (uint *)FUN_0042b6c9(s_UIW_NAVALATTACK_0085b174);
                return puVar6;
              }
              if ((int)param_2 < iVar22 + 0x8c) {
                puVar6 = (uint *)FUN_0042b6c9(s_UIW_SOFTATTACK_0085b214);
                return puVar6;
              }
              if ((int)param_2 < iVar22 + 0xa0) {
                puVar6 = (uint *)FUN_0042b6c9(s_UIW_HARDATTACK_0085b224);
                return puVar6;
              }
              if ((int)param_2 < iVar22 + 0xb4) {
                puVar6 = (uint *)FUN_0042b6c9(s_UIW_STRATATTACK_0085b164);
                return puVar6;
              }
              if ((int)param_2 < iVar22 + 200) goto LAB_005de763;
              if ((int)param_2 < iVar22 + 0xdc) {
                if (DAT_00dc1749 != '\0') {
                  puVar6 = (uint *)FUN_0042b6c9(s_UIW_2_SURFACEDEFENCE_0084a010);
                  return puVar6;
                }
                puVar6 = (uint *)FUN_0042b6c9(s_UIW_SURFACEDEFENCE_0085b140);
                return puVar6;
              }
            }
          }
          else {
            iVar22 = *(int *)(param_1 + 0xe);
            if ((int)param_2 < iVar22 + 0x50) {
              return (uint *)0x0;
            }
            if ((int)param_2 < iVar22 + 100) {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_SEAATTACK_0085b1c8);
              return puVar6;
            }
            if ((int)param_2 < iVar22 + 0x78) {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_CONVOYATTACK_0085b1b4);
              return puVar6;
            }
            if ((int)param_2 < iVar22 + 0x8c) {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_SUBATTACK_0085b1a4);
              return puVar6;
            }
            if ((int)param_2 < iVar22 + 0xa0) {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_SHOREBOMB_0085b194);
              return puVar6;
            }
            if ((int)param_2 < iVar22 + 0xb4) {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_AIRATTACK_0085b204);
              return puVar6;
            }
            if ((int)param_2 < iVar22 + 200) {
              if (DAT_00dc1749 != '\0') {
                puVar6 = (uint *)FUN_0042b6c9(s_UIW_2_SEADEFENCE_0084a064);
                return puVar6;
              }
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_SEADEFENCE_0085b184);
              return puVar6;
            }
            if ((int)param_2 < iVar22 + 0xdc) goto LAB_005de763;
          }
        }
        else {
          iVar22 = *(int *)(param_1 + 0xe);
          if ((int)param_2 < iVar22 + 0x50) {
            return (uint *)0x0;
          }
          if ((int)param_2 < iVar22 + 100) {
            puVar6 = (uint *)FUN_0042b6c9(s_UIW_HARDATTACK_0085b224);
            return puVar6;
          }
          if ((int)param_2 < iVar22 + 0x78) {
            puVar6 = (uint *)FUN_0042b6c9(s_UIW_SOFTATTACK_0085b214);
            return puVar6;
          }
          if ((int)param_2 < iVar22 + 0x8c) {
            puVar6 = (uint *)FUN_0042b6c9(s_UIW_AIRATTACK_0085b204);
            return puVar6;
          }
          if ((int)param_2 < iVar22 + 0xa0) {
            if (DAT_00dc1749 != '\0') {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_2_DEFENCE_00849f70);
              return puVar6;
            }
            puVar6 = (uint *)FUN_0042b6c9(s_UIW_DEFENCE_0085b1f8);
            return puVar6;
          }
          if ((int)param_2 < iVar22 + 0xb4) {
            if (DAT_00dc1749 != '\0') {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_2_TOUGHNESS_00849f54);
              return puVar6;
            }
            puVar6 = (uint *)FUN_0042b6c9(s_UIW_TOUGHNESS_0085b1e8);
            return puVar6;
          }
          if ((int)param_2 < iVar22 + 200) {
LAB_005de763:
            if (DAT_00dc1749 != '\0') {
              puVar6 = (uint *)FUN_0042b6c9(s_UIW_2_AIRDEFENCE_00849f34);
              return puVar6;
            }
            puVar6 = (uint *)FUN_0042b6c9(s_UIW_AIRDEFENCE_0085b154);
            return puVar6;
          }
          if ((int)param_2 < iVar22 + 0xdc) {
            puVar6 = (uint *)FUN_0042b6c9(s_UIW_MAXSPEED_0085b1d8);
            return puVar6;
          }
        }
      }
      __ftol();
      __ftol();
      fStack_240 = 0.0;
      (**(code **)(**(int **)(param_1 + 0x74) + 0x28))(&stack0xfffffdd0);
      iVar22 = 0;
      if (0 < (int)uVar13) {
        do {
          cVar4 = (**(code **)(**(int **)(param_1 + 0x74) + 0x20))(param_2,param_3);
          if (cVar4 != '\0') {
            __ftol();
            uVar7 = FUN_0042b6c9(s_UIW_EXPERIENCE_VALUE_0085b9e8);
            FUN_007a630a(&DAT_00cd4d50,s__s__d_0085b9e0,uVar7);
            return (uint *)&DAT_00cd4d50;
          }
          uVar13 = uVar13 - 10;
          (**(code **)(**(int **)(param_1 + 0x74) + 0x18))(uStack_23c + uVar13,unaff_EDI);
          iVar22 = iVar22 + 1;
          param_1 = uStack_23c;
        } while (iVar22 < (int)uVar13);
      }
      if ((*(int *)(DAT_00d0ca90 + 0x21e62) != 0x13) || (*(int *)(iVar5 + 100) == 0)) {
        return (uint *)0x0;
      }
      piVar11 = (int *)FUN_0051b230();
      piVar3 = *(int **)(iVar5 + 100);
      (**(code **)(*piVar11 + 0xc))();
      uVar7 = (**(code **)(*piVar3 + 0xc))();
      (**(code **)(*piVar1 + 0xc))(uVar7);
      uVar7 = FUN_0042b6c9(s_LOCATED_IN_0085ba00);
      FUN_007a630a(&DAT_00cd4d50,uVar7);
LAB_005deac5:
      return (uint *)&DAT_00cd4d50;
    }
    local_218[0] = local_218[0] & 0xffffff00;
    if (*(float *)(iVar5 + 0xe8) != _DAT_007e4088) {
      FUN_007a630a(local_218,s____0f_0085b138,(double)*(float *)(iVar5 + 0xe8));
    }
    FUN_0042b6c9(s_UIW_STRENGTH_0085b128);
    FUN_007a630a();
    if (DAT_00dc191a == '\0') goto LAB_005deac5;
    uVar7 = FUN_00506430();
    puVar6 = (uint *)&DAT_00cd4d50;
    goto LAB_005de50e;
  }
  if (*(char *)(iVar5 + 0x15a) == '\0') {
    uVar7 = FUN_004ff340(*(undefined4 *)(iVar5 + 0x128));
    FUN_007a630a(local_218,&DAT_0083f5a0,uVar7);
    iVar22 = *(int *)(iVar5 + 0x130);
    uVar7 = *(undefined4 *)(iVar5 + 0x128);
    uVar9 = FUN_004ff320(uVar7,iVar22 + 1);
    FUN_005045e0(uVar7,iVar22,uVar9);
    uVar7 = FUN_0044e050(uVar7,iVar22);
    FUN_007a630a(acStack_118,s__s___s__d__0085afb4,uVar7);
    uVar13 = 0xffffffff;
    pcVar15 = acStack_118;
    do {
      pcVar17 = pcVar15;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar15 + 1;
      cVar4 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar4 != '\0');
    fVar2 = *(float *)(iVar5 + 0xfc);
    uVar13 = ~uVar13;
    iVar22 = -1;
    puVar6 = local_218;
    do {
      puVar16 = puVar6;
      if (iVar22 == 0) break;
      iVar22 = iVar22 + -1;
      puVar16 = (uint *)((int)puVar6 + 1);
      uVar14 = *puVar6;
      puVar6 = puVar16;
    } while ((char)uVar14 != '\0');
    pcVar15 = pcVar17 + -uVar13;
    pcVar17 = (char *)((int)puVar16 + -1);
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar17 = pcVar17 + 1;
    }
    if (_DAT_007e3380 < fVar2) {
      FUN_007a630a(acStack_118,s____2f_____0085afa8,
                   (double)(*(float *)(iVar5 + 0xfc) * _DAT_007e4088));
      uVar13 = 0xffffffff;
      pcVar15 = acStack_118;
      do {
        pcVar17 = pcVar15;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar17 = pcVar15 + 1;
        cVar4 = *pcVar15;
        pcVar15 = pcVar17;
      } while (cVar4 != '\0');
      uVar13 = ~uVar13;
      iVar22 = -1;
      puVar6 = local_218;
      do {
        puVar16 = puVar6;
        if (iVar22 == 0) break;
        iVar22 = iVar22 + -1;
        puVar16 = (uint *)((int)puVar6 + 1);
        uVar14 = *puVar6;
        puVar6 = puVar16;
      } while ((char)uVar14 != '\0');
      pcVar15 = pcVar17 + -uVar13;
      pcVar17 = (char *)((int)puVar16 + -1);
      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar17 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar17 = pcVar17 + 1;
      }
    }
    if (*(char *)(iVar5 + 0x158) == '\0') {
      if (*(char *)(iVar5 + 0x159) == '\0') goto LAB_005de3a6;
      fVar2 = *(float *)(iVar5 + 0x2f0);
    }
    else if (*(float *)(iVar5 + 0x2e8) <= *(float *)(iVar5 + 0x2ec)) {
      fVar2 = *(float *)(iVar5 + 0x2e8);
    }
    else {
      fVar2 = *(float *)(iVar5 + 0x2ec);
    }
    dVar20 = (double)fVar2;
    uVar7 = FUN_0042b6c9(s_BINFO_RANGE_00849fe0);
    (**(code **)(*piVar1 + 0x28))(uVar7,dVar20);
    FUN_0042b6c9();
    FUN_007a630a();
LAB_005de376:
    uVar13 = 0xffffffff;
    pcVar15 = acStack_118;
    do {
      pcVar17 = pcVar15;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar15 + 1;
      cVar4 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar4 != '\0');
    uVar13 = ~uVar13;
    iVar5 = -1;
    puVar6 = local_218;
    do {
      puVar16 = puVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      puVar16 = (uint *)((int)puVar6 + 1);
      uVar14 = *puVar6;
      puVar6 = puVar16;
    } while ((char)uVar14 != '\0');
    pcVar15 = pcVar17 + -uVar13;
    pcVar17 = (char *)((int)puVar16 + -1);
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar17 = pcVar17 + 1;
    }
  }
  else {
    iVar22 = *(int *)(iVar5 + 0x94);
    uVar7 = *(undefined4 *)(iVar5 + 0x80);
    uVar8 = FUN_004ff3a0(uVar7,iVar22 + 1);
    uVar9 = uVar7;
    FUN_005045e0(uVar7,iVar22,uVar8);
    uVar9 = FUN_0044e100(uVar9,iVar22);
    FUN_004ff3c0(uVar7,uVar9);
    FUN_007a630a();
    if (_DAT_007e3380 < *(float *)(iVar5 + 0xa8)) {
      FUN_007a630a(acStack_118,s____2f_____0085afa8,
                   (double)(*(float *)(iVar5 + 0xa8) * _DAT_007e4088));
      goto LAB_005de376;
    }
  }
LAB_005de3a6:
  if (DAT_00dc191a == '\0') {
    return local_218;
  }
  uVar7 = FUN_00506430();
  puVar6 = local_218;
LAB_005de50e:
  FUN_007a630a(&DAT_00cd7250,&DAT_0083ca0c,puVar6,uVar7);
  return (uint *)&DAT_00cd7250;
  while( true ) {
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar15 + 1;
    cVar4 = *pcVar15;
    pcVar15 = pcVar17;
    if (cVar4 == '\0') break;
code_r0x005de14d:
    pcVar17 = pcVar15;
    if (uVar13 == 0) break;
  }
  uVar13 = ~uVar13;
  iVar12 = -1;
  puVar6 = auStack_110;
  do {
    puVar16 = puVar6;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    puVar16 = (uint *)((int)puVar6 + 1);
    uVar14 = *puVar6;
    puVar6 = puVar16;
  } while ((char)uVar14 != '\0');
  fVar2 = *(float *)(iVar5 + 0xa8 + iVar22 * 4);
  pcVar15 = pcVar17 + -uVar13;
  pcVar17 = (char *)((int)puVar16 + -1);
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar17 = pcVar17 + 1;
  }
  if (_DAT_007e3380 < fVar2) {
    FUN_007a630a(acStack_210,s____2f_____0085afa8,
                 (double)(*(float *)(iVar5 + 0xa8 + iVar22 * 4) * _DAT_007e4088));
    uVar13 = 0xffffffff;
    pcVar15 = acStack_210;
    do {
      pcVar17 = pcVar15;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar15 + 1;
      cVar4 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar4 != '\0');
    uVar13 = ~uVar13;
    iVar5 = -1;
    puVar6 = auStack_110;
    do {
      puVar16 = puVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      puVar16 = (uint *)((int)puVar6 + 1);
      uVar14 = *puVar6;
      puVar6 = puVar16;
    } while ((char)uVar14 != '\0');
    pcVar15 = pcVar17 + -uVar13;
    pcVar17 = (char *)((int)puVar16 + -1);
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar17 = pcVar17 + 1;
    }
  }
  return auStack_110;
}


