// FUN_005d3e10 @ 5d3e10 size=2641

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005d3e10(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  int aiStack_138 [4];
  undefined1 auStack_128 [4];
  undefined4 uStack_124;
  char acStack_120 [8];
  char acStack_118 [276];
  
  aiStack_138[1] = param_1;
  iVar2 = FUN_00428ee0(param_1 + 0x2e);
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  if (iVar2 == 8) {
    return (undefined4 *)0x0;
  }
  if ((*(char *)(iVar2 + 0x15a) != '\0') &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(param_2,param_3), cVar1 != '\0')) {
    puVar3 = (undefined4 *)FUN_0042b6c9(s_DISBAND_BRIGADE_0085b244);
    return puVar3;
  }
  iVar5 = param_3;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x20))(param_2);
  if (cVar1 != '\0') {
    if (*(char *)(iVar2 + 0x15a) != '\0') {
      uVar4 = *(undefined4 *)(iVar2 + 0x94);
      uVar20 = *(undefined4 *)(iVar2 + 0x80);
      uVar19 = 2;
      FUN_005045e0(uVar20,uVar4,2);
      puVar3 = (undefined4 *)FUN_00457670(uVar20,uVar4,uVar19);
      return puVar3;
    }
    piVar8 = (int *)(iVar2 + 0x94);
    piVar11 = aiStack_138;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
    piVar8 = aiStack_138;
    uVar4 = *(undefined4 *)(iVar2 + 0x130);
    uVar20 = 2;
    puVar3 = &uStack_124;
    puVar9 = (undefined4 *)(iVar2 + 0x80);
    puVar12 = &uStack_124;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar19 = *(undefined4 *)(iVar2 + 0x128);
    FUN_005045e0(uVar19,uVar4,puVar3,piVar8,2);
    puVar3 = (undefined4 *)FUN_00457ba0(uVar19,uVar4,puVar3,piVar8,uVar20);
    return puVar3;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(param_2,param_3);
  if ((cVar1 == '\0') || (*(char *)(iVar2 + 0x15a) == '\0')) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))(param_2,param_3);
    if ((cVar1 == '\0') || (*(char *)(iVar2 + 0x15a) != '\0')) {
      iVar21 = 0;
      if (0 < *(int *)(iVar2 + 0x134)) {
        puVar3 = (undefined4 *)(iVar5 + 0x54);
        param_1 = iVar5;
        do {
          cVar1 = (**(code **)(*(int *)*puVar3 + 0x20))(param_2,param_3);
          if (cVar1 != '\0') {
            iVar5 = iVar21;
            uVar4 = FUN_004ff3c0(*(undefined4 *)(iVar2 + 0x80 + iVar21 * 4));
            FUN_007a630a(&DAT_00cc0874,&DAT_0083f5a0,uVar4);
            uVar4 = FUN_004ff3a0(*(undefined4 *)(iVar2 + 0x80 + iVar21 * 4),
                                 *(int *)(iVar2 + 0x94 + iVar21 * 4) + 1);
            FUN_005045e0();
            uVar20 = FUN_0044e100();
            FUN_007a630a(acStack_120,s__s___s__d__0085afb4,uVar20,uVar4);
            uVar6 = 0xffffffff;
            pcVar10 = acStack_120;
            goto code_r0x005d423a;
          }
          iVar21 = iVar21 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar21 < *(int *)(iVar2 + 0x134));
      }
      if ((*(int *)(param_1 + 0x12) + 0x1f <= param_3) &&
         (param_3 < *(int *)(param_1 + 0x12) + 0x2d)) {
        if (*(char *)(iVar2 + 0x157) == '\0') {
          if (*(char *)(iVar2 + 0x159) == '\0') {
            if (*(char *)(iVar2 + 0x158) != '\0') {
              iVar5 = *(int *)(param_1 + 0xe);
              if (param_2 < iVar5 + 0x50) {
                return (undefined4 *)0x0;
              }
              if (param_2 < iVar5 + 100) {
                puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_AIRATTACK_0085b204);
                return puVar3;
              }
              if (param_2 < iVar5 + 0x78) {
                puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_NAVALATTACK_0085b174);
                return puVar3;
              }
              if (param_2 < iVar5 + 0x8c) {
                puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_SOFTATTACK_0085b214);
                return puVar3;
              }
              if (param_2 < iVar5 + 0xa0) {
                puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_HARDATTACK_0085b224);
                return puVar3;
              }
              if (param_2 < iVar5 + 0xb4) {
                puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_STRATATTACK_0085b164);
                return puVar3;
              }
              if (param_2 < iVar5 + 200) goto LAB_005d439d;
              if (param_2 < iVar5 + 0xdc) {
                if (DAT_00dc1749 != '\0') {
                  puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_2_SURFACEDEFENCE_0084a010);
                  return puVar3;
                }
                puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_SURFACEDEFENCE_0085b140);
                return puVar3;
              }
            }
          }
          else {
            iVar5 = *(int *)(param_1 + 0xe);
            if (param_2 < iVar5 + 0x50) {
              return (undefined4 *)0x0;
            }
            if (param_2 < iVar5 + 100) {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_SEAATTACK_0085b1c8);
              return puVar3;
            }
            if (param_2 < iVar5 + 0x78) {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_CONVOYATTACK_0085b1b4);
              return puVar3;
            }
            if (param_2 < iVar5 + 0x8c) {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_SUBATTACK_0085b1a4);
              return puVar3;
            }
            if (param_2 < iVar5 + 0xa0) {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_SHOREBOMB_0085b194);
              return puVar3;
            }
            if (param_2 < iVar5 + 0xb4) {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_AIRATTACK_0085b204);
              return puVar3;
            }
            if (param_2 < iVar5 + 200) {
              if (DAT_00dc1749 != '\0') {
                puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_2_SEADEFENCE_0084a064);
                return puVar3;
              }
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_SEADEFENCE_0085b184);
              return puVar3;
            }
            if (param_2 < iVar5 + 0xdc) goto LAB_005d439d;
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0xe);
          if (param_2 < iVar5 + 0x50) {
            return (undefined4 *)0x0;
          }
          if (param_2 < iVar5 + 100) {
            puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_HARDATTACK_0085b224);
            return puVar3;
          }
          if (param_2 < iVar5 + 0x78) {
            puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_SOFTATTACK_0085b214);
            return puVar3;
          }
          if (param_2 < iVar5 + 0x8c) {
            puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_AIRATTACK_0085b204);
            return puVar3;
          }
          if (param_2 < iVar5 + 0xa0) {
            if (DAT_00dc1749 != '\0') {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_2_DEFENCE_00849f70);
              return puVar3;
            }
            puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_DEFENCE_0085b1f8);
            return puVar3;
          }
          if (param_2 < iVar5 + 0xb4) {
            if (DAT_00dc1749 != '\0') {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_2_TOUGHNESS_00849f54);
              return puVar3;
            }
            puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_TOUGHNESS_0085b1e8);
            return puVar3;
          }
          if (param_2 < iVar5 + 200) {
LAB_005d439d:
            if (DAT_00dc1749 != '\0') {
              puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_2_AIRDEFENCE_00849f34);
              return puVar3;
            }
            puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_AIRDEFENCE_0085b154);
            return puVar3;
          }
          if (param_2 < iVar5 + 0xdc) {
            puVar3 = (undefined4 *)FUN_0042b6c9(s_UIW_MAXSPEED_0085b1d8);
            return puVar3;
          }
        }
      }
      if (*(char *)(iVar2 + 0x15a) == '\0') {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x20))(param_2,param_3);
        if (cVar1 != '\0') {
          acStack_118[0] = '\0';
          if (*(float *)(iVar2 + 0xe8) != _DAT_007e4088) {
            FUN_007a630a(acStack_118,s____0f_0085b138,(double)*(float *)(iVar2 + 0xe8));
          }
          FUN_0042b6c9(s_UIW_STRENGTH_0085b128);
          FUN_007a630a();
          if (DAT_00dc191a != '\0') {
            uVar4 = FUN_00506430();
            goto LAB_005d46aa;
          }
          goto LAB_005d47ec;
        }
        cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(param_2,param_3);
        if (cVar1 != '\0') {
          fVar15 = (float10)FUN_00503610(0);
          fVar22 = (float)(fVar15 * (float10)_DAT_007e6c58);
          fVar23 = *(float *)(iVar2 + 0xec) + _DAT_007e46cc;
          fVar15 = (float10)FUN_004fd510();
          if (fVar15 <= (float10)fVar23) {
            fVar22 = _DAT_007e3380;
          }
          fVar23 = *(float *)(iVar2 + 0xec);
          dVar17 = (double)fVar22;
          uVar4 = FUN_0042b6c9(s_ORG_REGAIN_IRO_0085b10c);
          fVar15 = (float10)FUN_004fd510(uVar4,dVar17);
          dVar17 = (double)fVar15;
          dVar16 = (double)fVar23;
          uVar4 = FUN_0042b6c9(s_UIW_ORG_0085b104);
          FUN_007a630a(&DAT_00cc0874,s__s_____0f___0f__s_____2f_0085b0e8,uVar4,dVar16,dVar17);
          return &DAT_00cc0874;
        }
      }
      cVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(param_2,param_3);
      if (cVar1 == '\0') {
        return (undefined4 *)0x0;
      }
      cVar1 = FUN_0042dd70(DAT_00893530 + 0x14);
      if (cVar1 == '\0') {
        if (*(int *)(iVar2 + 0x144) != 0) {
          puVar3 = (undefined4 *)FUN_0042b6c9(s_DEV_REDEPLOY_T_IRO_0085b0d4);
          return puVar3;
        }
        if (*(char *)(iVar2 + 0x15a) == '\0') {
          puVar3 = (undefined4 *)FUN_0042b6c9(s_DEV_DEPLOY_IRO_2_0085b0c0);
          return puVar3;
        }
        puVar3 = (undefined4 *)FUN_0042b6c9(s_DEV_DEPLOY_IRO_0085b0b0);
        return puVar3;
      }
      FUN_0079168d();
      puVar18 = auStack_128;
      uVar4 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00cc0874,uVar4,puVar18);
    }
    else {
      FUN_004ff320(*(undefined4 *)(iVar2 + 0x128),*(int *)(iVar2 + 0x130) + 1);
      FUN_005045e0();
      FUN_0044e050();
      FUN_004ff300();
      FUN_007a630a();
      if (_DAT_007e3380 < *(float *)(iVar2 + 0xfc)) {
        FUN_007a630a();
        uVar6 = 0xffffffff;
        pcVar10 = acStack_120;
        do {
          pcVar14 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar14 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar14;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar2 = -1;
        pcVar10 = (char *)&DAT_00cc0874;
        do {
          pcVar13 = pcVar10;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar13 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar1 != '\0');
        pcVar10 = pcVar14 + -uVar6;
        pcVar14 = pcVar13 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar14 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
      if (DAT_00dc191a != '\0') {
        FUN_00506430();
        FUN_007a630a();
        return (undefined4 *)&DAT_00cc0a6c;
      }
    }
  }
  else {
    iVar5 = *(int *)(iVar2 + 0x94);
    uVar4 = *(undefined4 *)(iVar2 + 0x80);
    uVar19 = FUN_004ff3a0(uVar4,iVar5 + 1);
    uVar20 = uVar4;
    FUN_005045e0(uVar4,iVar5,uVar19);
    uVar20 = FUN_0044e100(uVar20,iVar5);
    FUN_004ff380(uVar4,uVar20);
    FUN_007a630a();
    if (_DAT_007e3380 < *(float *)(iVar2 + 0xa8)) {
      FUN_007a630a(acStack_118,s____2f_____0085afa8,
                   (double)(*(float *)(iVar2 + 0xa8) * _DAT_007e4088));
      uVar6 = 0xffffffff;
      pcVar10 = acStack_118;
      do {
        pcVar14 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar14 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar14;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar10 = (char *)&DAT_00cc0874;
      do {
        pcVar13 = pcVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      pcVar10 = pcVar14 + -uVar6;
      pcVar14 = pcVar13 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar14 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    if (DAT_00dc191a != '\0') {
      uVar4 = FUN_005068d0(0x8c,0,0x42c80000,*(undefined4 *)(iVar2 + 0x80),
                           *(undefined4 *)(iVar2 + 0x94),0,0,0,0,0,0,0,0);
LAB_005d46aa:
      FUN_007a630a(&DAT_00cc0a6c,&DAT_0083ca0c,&DAT_00cc0874,uVar4);
      return (undefined4 *)&DAT_00cc0a6c;
    }
  }
LAB_005d47ec:
  return &DAT_00cc0874;
  while( true ) {
    uVar6 = uVar6 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
    if (cVar1 == '\0') break;
code_r0x005d423a:
    pcVar14 = pcVar10;
    if (uVar6 == 0) break;
  }
  uVar6 = ~uVar6;
  iVar21 = -1;
  pcVar10 = (char *)&DAT_00cc0874;
  do {
    pcVar13 = pcVar10;
    if (iVar21 == 0) break;
    iVar21 = iVar21 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar6;
  pcVar14 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  if (_DAT_007e3380 < *(float *)(iVar2 + 0xa8 + iVar5 * 4)) {
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar10 = acStack_120;
    do {
      pcVar14 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar14 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar14;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar2 = -1;
    pcVar10 = (char *)&DAT_00cc0874;
    do {
      pcVar13 = pcVar10;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    pcVar10 = pcVar14 + -uVar6;
    pcVar14 = pcVar13 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  return &DAT_00cc0874;
}


