// FUN_005d0240 @ 5d0240 size=2921

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d0240(int param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  int *piStack_13c;
  undefined4 *puStack_134;
  int iStack_128;
  int iStack_124;
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [252];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007cd49a;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar7 = FUN_0064ec20();
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar7 + 0xc);
  *(undefined2 *)(param_1 + 0xd4) = *(undefined2 *)(iVar7 + 0x10);
  iVar7 = FUN_00428ee0((undefined4 *)(param_1 + 0xd0));
  iVar12 = 0;
  if (iVar7 == 0) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)(iVar7 + -8);
  }
  if (*(undefined4 **)(param_1 + 0xee) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xee))(1);
    *(undefined4 *)(param_1 + 0xee) = 0;
  }
  if (((byte)DAT_00a98444 & 1) == 0) {
    FUN_004dcb20();
    FUN_004d87c0();
  }
  *(undefined1 *)(param_1 + 0x112) = 0;
  if (piVar14 != (int *)0x0) {
    switch(piVar14[0x4d]) {
    case 0x16:
      *(bool *)(param_1 + 0x112) = 0 < DAT_00dc187c;
      break;
    default:
switchD_005d02f6_caseD_17:
      *(undefined1 *)(param_1 + 0x112) = 0;
      break;
    case 0x19:
      *(bool *)(param_1 + 0x112) = 0 < DAT_00dc1878;
      break;
    case 0x1b:
      *(bool *)(param_1 + 0x112) = 0 < DAT_00dc1880;
      break;
    case 0x1e:
      bVar3 = 0 < DAT_00dc1874;
      *(bool *)(param_1 + 0x112) = 0 < DAT_00dc1874;
      if ((bVar3) && ((int *)piVar14[0x1b] != (int *)0x0)) {
        (**(code **)(*(int *)piVar14[0x1b] + 0x14))();
        iVar7 = FUN_00516f50();
        iVar8 = FUN_00516cc0();
        if (iVar8 - iVar7 < 1) goto switchD_005d02f6_caseD_17;
      }
    }
    if (((*(char *)(param_1 + 0x112) != '\0') && (piVar14[0x1b] != 0)) &&
       (0 < *(int *)(piVar14[0x1b] + 0xc))) {
      iVar7 = FUN_0051b230();
      if (((*(int *)(iVar7 + 0x254) == 8) || (*(int *)(iVar7 + 0x254) == 9)) ||
         (cVar6 = FUN_00524000(), cVar6 == '\0')) {
        *(undefined1 *)(param_1 + 0x112) = 0;
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0xe2) + 0x3b) = 0;
  FUN_004388d0();
  uVar9 = (**(code **)(*piVar14 + 0xc))();
  FUN_00438900(uVar9);
  iVar7 = *(int *)(param_1 + 0xe2);
  *(undefined1 *)(iVar7 + 0x39) = 0;
  *(undefined1 *)(iVar7 + 0x3a) = 0;
  if (*(undefined4 **)(param_1 + 0xe6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xe6))(1);
  }
  if (*(undefined4 **)(param_1 + 0xea) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xea))(1);
  }
  pvVar10 = operator_new(0x54);
  uStack_c = 0;
  if (pvVar10 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_005efbe0();
  }
  uStack_c = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe6) = uVar9;
  pvVar10 = operator_new(0x98);
  uStack_c = 1;
  if (pvVar10 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_005c79d0();
  }
  *(undefined4 *)(param_1 + 0xea) = uVar9;
  uStack_c = 0xffffffff;
  FUN_005045e0();
  FUN_0044f970();
  (**(code **)(**(int **)(param_1 + 0xf2) + 0x2c))(auStack_114);
  if (0 < piVar14[0x4f]) {
    puStack_134 = (undefined4 *)(param_1 + 0xf6);
    piVar15 = piVar14 + 0x22;
    do {
      uVar17 = CONCAT44(piVar15[5],*piVar15);
      uVar16 = CONCAT44(&DAT_0085aedc,auStack_118);
      FUN_005045e0(auStack_118,&DAT_0085aedc,*piVar15);
      FUN_0044f970(uVar16,uVar17);
      (**(code **)(*(int *)*puStack_134 + 0x2c))();
      iVar12 = iVar12 + 1;
      piVar15 = piVar15 + 1;
      puStack_134 = puStack_134 + 1;
    } while (iVar12 < piVar14[0x4f]);
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11e) = 0x8c;
  if (piVar14 != (int *)0x0) {
    *(int *)(param_1 + 0x11a) = piVar14[0x51];
    *(int *)(param_1 + 0x11e) = piVar14[0x50];
    iVar7 = FUN_005045e0();
    if (iVar7 == DAT_00d0ca90) {
      *(undefined1 *)(param_1 + 0x119) = 1;
      iVar7 = 0;
      if (0 < DAT_0087769c) {
        pfVar13 = (float *)(param_1 + 0x126);
        do {
          if (*(float *)(&DAT_00d96a66 + (iVar7 + piVar14[0x4c] * 0x8c) * 8) < _DAT_007e3380) {
            pfVar13[-1] = 0.0;
            *pfVar13 = -1.0;
            pfVar13[1] = 1.0;
            pfVar13[2] = 1.0;
            pfVar13[3] = 0.0;
          }
          else {
            pfVar13[-1] = 1.0;
            iVar12 = FUN_0044c450();
            *pfVar13 = (float)iVar12;
            pfVar13[1] = *(float *)(&DAT_00d96a66 + (iVar7 + piVar14[0x4c] * 0x8c) * 8);
            pfVar13[2] = *(float *)(&DAT_00d96a6a + (iVar7 + piVar14[0x4c] * 0x8c) * 8);
            pfVar13[3] = 0.0;
            *(undefined1 *)(param_1 + 0x118) = 1;
          }
          iVar7 = iVar7 + 1;
          pfVar13 = pfVar13 + 5;
        } while (iVar7 < DAT_0087769c);
      }
      *(undefined4 *)(param_1 + 0x122 + DAT_0087769c * 0x14) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x126 + DAT_0087769c * 0x14) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x12a + DAT_0087769c * 0x14) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x12e + DAT_0087769c * 0x14) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x132 + DAT_0087769c * 0x14) = 0;
      iVar7 = FUN_00789c90(piVar14[0x4c],piVar14[0x4e]);
      if ((iVar7 != 0) && (-1 < *(int *)(iVar7 + 0xb8))) {
        iVar12 = param_1 + *(int *)(iVar7 + 0xb4) * 0x14;
        *(undefined4 *)(iVar12 + 0x122) = 0x3f800000;
        *(float *)(iVar12 + 0x126) = (float)*(int *)(iVar7 + 0xb8);
        *(undefined4 *)(iVar12 + 0x12a) = 0x3f800000;
        *(undefined4 *)(iVar12 + 0x12e) = 0x3f800000;
        fVar4 = _DAT_007e3380;
        if (*(char *)(iVar7 + 0xbc) != '\0') {
          fVar4 = _DAT_007e3374;
        }
        *(float *)(iVar12 + 0x132) = fVar4;
        *(undefined1 *)(param_1 + 0x118) = 1;
        if ((*(char *)(iVar7 + 0xbd) != '\0') ||
           (iVar7 = FUN_00789c90(*(undefined4 *)(iVar7 + 0xb4),*(undefined4 *)(iVar7 + 0xb8)),
           iVar7 != 0)) {
          *(undefined4 *)(iVar12 + 0x12a) = *(undefined4 *)(iVar7 + 0x38);
          *(undefined4 *)(iVar12 + 0x12e) = *(undefined4 *)(iVar7 + 0x34);
        }
      }
      if ((-1 < *(int *)(param_1 + 0x11a)) && (*(int *)(param_1 + 0x11e) != 0x8c)) {
        *(undefined4 *)(param_1 + 0x122 + *(int *)(param_1 + 0x11e) * 0x14) = 0x3f800000;
        *(float *)(param_1 + 0x126 + *(int *)(param_1 + 0x11e) * 0x14) =
             (float)*(int *)(param_1 + 0x11a);
        *(int *)(param_1 + 0x12a + *(int *)(param_1 + 0x11e) * 0x14) = piVar14[0x4a];
        *(int *)(param_1 + 0x12e + *(int *)(param_1 + 0x11e) * 0x14) = piVar14[0x4b];
        fVar4 = _DAT_007e3380;
        if (*(char *)((int)piVar14 + 0x163) != '\0') {
          fVar4 = _DAT_007e3374;
        }
        *(float *)(param_1 + 0x132 + *(int *)(param_1 + 0x11e) * 0x14) = fVar4;
LAB_005d07f9:
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
    }
    else if (-1 < *(int *)(param_1 + 0x11a)) goto LAB_005d07f9;
  }
  if (*(undefined4 **)(param_1 + 0x114) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x114))();
  }
  pvVar10 = operator_new(0x3e);
  puStack_10 = (undefined1 *)0x2;
  if (pvVar10 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00437040();
  }
  *(undefined4 *)(param_1 + 0x114) = uVar9;
  puStack_10 = (undefined1 *)0xffffffff;
  if (*(char *)(param_1 + 0x118) == '\0') {
    uVar9 = FUN_0042b6c9();
    FUN_007a630a(auStack_118,uVar9);
    FUN_00437a20();
  }
  else {
    if (DAT_0087769c < *(int *)(param_1 + 0x11e)) {
      *(int *)(param_1 + 0x11e) = DAT_0087769c;
    }
    if (*(char *)(param_1 + 0x119) != '\0') {
      iVar7 = 0;
      piStack_13c = (int *)0x0;
      fVar4 = (float)piVar14[0x3c] * _DAT_007e543c *
              *(float *)(*(int *)(DAT_00d0ca90 + 0x244) + 0x76) *
              *(float *)(*(int *)(DAT_00d0ca90 + 0x244) + 0x4e) * *(float *)(DAT_00d0ca90 + 0x11a94)
              * _DAT_00dc183c;
      if (-1 < DAT_0087769c) {
        pfVar13 = (float *)(param_1 + 0x12a);
        iStack_128 = 0;
        iStack_124 = 0;
        iVar12 = DAT_0087769c;
        do {
          if (pfVar13[-2] == 1.0) {
            if (iVar7 < iVar12) {
              puStack_134 = (undefined4 *)0x0;
              uVar9 = __ftol();
              iVar12 = FUN_0044c3d0(iVar7,uVar9);
              if (iVar12 != 0) {
                puStack_134 = *(undefined4 **)(iVar12 + 0xc);
              }
              iVar12 = FUN_0044c620();
              if (iVar12 != 0) {
                puStack_134 = (undefined4 *)(*(float *)(iVar12 + 0xc) + (float)puStack_134);
              }
              fVar2 = *(float *)(iStack_124 + 0x11a9c + DAT_00d0ca90) * *pfVar13 *
                      (float)puStack_134 * fVar4;
              if (pfVar13[2] == 1.0) {
                FUN_0044c450();
              }
              iVar12 = __ftol();
              fVar5 = (float)iVar12 + _DAT_007e3374;
              if (*(char *)(DAT_00d0ca90 + 0x4ad0 + iVar7) == '\0') {
LAB_005d0a44:
                puVar18 = &DAT_0083d364;
              }
              else {
                iVar12 = *(int *)(iStack_128 + 0x4be8 + DAT_00d0ca90);
                __ftol();
                cVar6 = (**(code **)(iVar12 + 0x24))();
                if (cVar6 == '\0') goto LAB_005d0a44;
                puVar18 = &DAT_0083d360;
              }
              uVar9 = FUN_004ff320(iVar7,(double)(pfVar13[-1] + _DAT_007e3374),(double)fVar2,
                                   (double)fVar5,(double)(fVar5 * fVar2));
              uVar11 = FUN_0042b6c9(s_UPGRADE_PATH_OWN_0085aec8);
              FUN_007a630a(auStack_118,uVar11,puVar18,uVar9);
            }
            else {
              uVar9 = FUN_0042b6c9();
              FUN_007a630a(auStack_118,uVar9);
            }
            FUN_00437a20();
            piStack_13c = (int *)((int)piStack_13c + 1);
            iVar12 = DAT_0087769c;
          }
          iVar7 = iVar7 + 1;
          iStack_124 = iStack_124 + 0x18;
          iStack_128 = iStack_128 + 0x12;
          pfVar13 = pfVar13 + 5;
        } while (iVar7 <= iVar12);
      }
      if (((int)piStack_13c + 1) * 0x10 < 0xfc) {
        FUN_00437480();
      }
      FUN_004378e0();
      goto LAB_005d0c36;
    }
    iVar7 = piVar14[0x50];
    iVar12 = FUN_005045e0();
    if (*(char *)(iVar12 + 0x4ad0 + iVar7) != '\0') {
      iVar7 = piVar14[0x50];
      iVar12 = FUN_005045e0();
      (**(code **)(*(int *)(iVar12 + 0x4be8 + iVar7 * 0x12) + 0x24))();
    }
    FUN_004ff320(piVar14[0x50],piVar14[0x51] + 1);
    FUN_0042b6c9(s_UPGRADE_PATH_FOREIGN_0085ae9c);
    FUN_007a630a();
    FUN_00437a20();
  }
  FUN_004378e0();
  FUN_00437480();
LAB_005d0c36:
  piStack_13c = (int *)(param_1 + 0xc26);
  iVar7 = 0;
  do {
    *(undefined1 *)(param_1 + 0xc3a + iVar7) = 0;
    piVar15 = (int *)*piStack_13c;
    if (*(char *)((int)piVar15 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar15 + 0x60))();
    iVar7 = iVar7 + 1;
    piStack_13c = piStack_13c + 1;
    *(undefined1 *)((int)piVar15 + 0x86) = 1;
  } while (iVar7 < 5);
  piVar15 = (int *)(param_1 + 0xc26);
  piStack_13c = piVar14 + 0x22;
  *(undefined1 *)(param_1 + 0xc3f) = 0;
  *(undefined4 *)(param_1 + 0xc40) = 0xffffffff;
  iVar7 = 0;
  do {
    if (*piStack_13c != 0) {
      if ((&DAT_00dbcee6)[*piStack_13c] == '\0') {
        piVar1 = (int *)*piVar15;
        if (*(char *)((int)piVar1 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar1 + 0x60))();
        *(undefined1 *)((int)piVar1 + 0x86) = 1;
      }
      else {
        (**(code **)(*(int *)*piVar15 + 0x50))();
        if (*(char *)(param_1 + 0xc3a + iVar7) == '\0') {
          FUN_00433930();
        }
        else {
          FUN_00433950();
        }
        if (*(int *)(param_1 + 0xc40) == -1) {
          *(int *)(param_1 + 0xc40) = iVar7;
        }
        else {
          *(undefined4 *)(param_1 + 0xc40) = 0xfffffffe;
        }
      }
    }
    iVar7 = iVar7 + 1;
    piStack_13c = piStack_13c + 1;
    piVar15 = piVar15 + 1;
  } while (iVar7 < 5);
  if (-1 < *(int *)(param_1 + 0xc40)) {
    *(undefined1 *)(*(int *)(param_1 + 0xc40) + 0xc3a + param_1) = 1;
    *(undefined1 *)(param_1 + 0xc3f) = 1;
  }
  if (((*(char *)(param_1 + 0xc3f) != '\0') && (_DAT_007e3380 < _DAT_00dc1968)) &&
     ((float)piVar14[0x3b] / (float)piVar14[0x3c] < _DAT_00dc1968)) {
    *(undefined1 *)(param_1 + 0xc3f) = 0;
  }
  ExceptionList = pvStack_18;
  return;
}


