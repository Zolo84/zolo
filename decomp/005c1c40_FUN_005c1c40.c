// FUN_005c1c40 @ 5c1c40 size=1437

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c1c40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  if (DAT_00cba870 == '\0') {
    iVar5 = 0;
    do {
      if (DAT_00dc1720 == '\0') {
switchD_005c1c6f_caseD_6:
        (&DAT_00cb9dea)[iVar5 * 0x14] = 0xffffffff;
      }
      else {
        switch(iVar5) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 0x11:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
          (&DAT_00cb9dea)[iVar5 * 0x14] = 1;
          break;
        default:
          goto switchD_005c1c6f_caseD_6;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x12:
        case 0x13:
        case 0x17:
        case 0x18:
        case 0x19:
          (&DAT_00cb9dea)[iVar5 * 0x14] = 2;
          break;
        case 0x1d:
          (&DAT_00cb9dea)[iVar5 * 0x14] = 3;
        }
      }
      iVar4 = DAT_00893530;
      iVar7 = iVar5 * 0x50;
      puVar6 = (undefined4 *)(DAT_00893530 + 0x14);
      *(undefined4 *)(&DAT_00cb9dd0 + iVar7) = *puVar6;
      (&DAT_00cb9dd4)[iVar5 * 0x28] = *(undefined2 *)(iVar4 + 0x18);
      *(undefined4 *)(&DAT_00cb9dd6 + iVar7) = *puVar6;
      (&DAT_00cb9dda)[iVar5 * 0x28] = *(undefined2 *)(iVar4 + 0x18);
      (&DAT_00cb9ddc)[iVar5 * 0x14] = 0x2d0;
      FUN_0042db80(0x2d0);
      (&DAT_00cb9de1)[iVar7] = 1;
      (&DAT_00cb9de0)[iVar7] = 0;
      (&DAT_00cb9de2)[iVar7] = 0;
      (&DAT_00cb9de3)[iVar7] = 0;
      (&DAT_00cb9de4)[iVar7] = 1;
      (&DAT_00cb9de6)[iVar5 * 0x14] = 0xffffffff;
      (&DAT_00cb9dee)[iVar5 * 0x14] = 0x3f000000;
      (&DAT_00cb9df2)[iVar5 * 0x14] = 0x3f000000;
      iVar4 = DAT_00dc1718;
      (&DAT_00cb9df6)[iVar7] = 1;
      (&DAT_00cb9df7)[iVar7] = 0;
      if (iVar4 == 2) {
        switch(iVar5) {
        case 0x10:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1d:
          (&DAT_00cb9de3)[iVar7] = 1;
        }
      }
      if (((DAT_00dc171c == 2) && (0x1a < iVar5)) && (iVar5 < 0x1d)) {
        (&DAT_00cb9de4)[iVar7] = 0;
      }
      if (iVar5 == 0x17) {
        uRam00cba527 = 1;
      }
      iVar5 = iVar5 + 1;
      puVar6 = (undefined4 *)(&DAT_00cb9dd0 + iVar7);
      puVar8 = (undefined4 *)(&DAT_00cb9df8 + iVar7);
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    } while (iVar5 < 0x22);
    DAT_00cba870 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined2 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x88) = param_4;
  *(undefined2 *)(param_1 + 0x82) = uVar1;
  *(int *)(param_1 + 0x84) = param_3;
  iVar5 = param_3 * 0x50;
  *(undefined4 *)(param_1 + 0x106) = (&DAT_00cb9dea)[param_3 * 0x14];
  if ((&DAT_00cb9e1e)[iVar5] == '\0') {
    *(undefined4 *)(param_1 + 0x9c) = (&DAT_00cb9df2)[param_3 * 0x14];
    fVar2 = *(float *)(param_1 + 0x9c) * _DAT_007e4088;
    iVar5 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x10e) = (&DAT_00cb9dee)[param_3 * 0x14];
    *(float *)(iVar5 + 0xa0) = fVar2;
    if (*(float *)(iVar5 + 0xb0) < fVar2) {
      *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar5 + 0xb0);
    }
    if (*(float *)(iVar5 + 0xa0) < *(float *)(iVar5 + 0xac)) {
      *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar5 + 0xac);
    }
    fVar2 = *(float *)(param_1 + 0x10e) * _DAT_007e4088;
    iVar5 = *(int *)(param_1 + 0x10a);
    *(float *)(iVar5 + 0xa0) = fVar2;
    if (*(float *)(iVar5 + 0xb0) < fVar2) {
      *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar5 + 0xb0);
    }
    if (*(float *)(iVar5 + 0xa0) < *(float *)(iVar5 + 0xac)) {
      *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar5 + 0xac);
    }
    iVar5 = *(int *)(param_1 + 0x84);
    iVar4 = iVar5 * 0x50;
    *(undefined1 *)(param_1 + 0x117) = (&DAT_00cb9de1)[iVar4];
    *(undefined1 *)(param_1 + 0x116) = (&DAT_00cb9de0)[iVar4];
    *(undefined1 *)(param_1 + 0xf6) = (&DAT_00cb9de3)[iVar4];
    *(undefined1 *)(param_1 + 0xfc) = (&DAT_00cb9de4)[iVar4];
    *(undefined4 *)(param_1 + 0x102) = (&DAT_00cb9dea)[iVar5 * 0x14];
    *(undefined1 *)(param_1 + 0xf0) = (&DAT_00cb9de2)[iVar4];
    iVar4 = DAT_00893530;
    puVar6 = (undefined4 *)(DAT_00893530 + 0x14);
    *(undefined4 *)(param_1 + 0xa0) = *puVar6;
    *(undefined2 *)(param_1 + 0xa4) = *(undefined2 *)(iVar4 + 0x18);
    *(undefined4 *)(param_1 + 0xa6) = *puVar6;
    *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(iVar4 + 0x18);
    FUN_0042db80((&DAT_00cb9ddc)[iVar5 * 0x14]);
    *(undefined1 *)(param_1 + 0x118) = (&DAT_00cb9df7)[*(int *)(param_1 + 0x84) * 0x50];
  }
  else {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(&DAT_00cb9e1a + iVar5);
    fVar2 = *(float *)(param_1 + 0x9c) * _DAT_007e4088;
    iVar4 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x10e) = *(undefined4 *)(&DAT_00cb9e16 + iVar5);
    *(float *)(iVar4 + 0xa0) = fVar2;
    if (*(float *)(iVar4 + 0xb0) < fVar2) {
      *(undefined4 *)(iVar4 + 0xa0) = *(undefined4 *)(iVar4 + 0xb0);
    }
    if (*(float *)(iVar4 + 0xa0) < *(float *)(iVar4 + 0xac)) {
      *(undefined4 *)(iVar4 + 0xa0) = *(undefined4 *)(iVar4 + 0xac);
    }
    fVar2 = *(float *)(param_1 + 0x10e) * _DAT_007e4088;
    iVar5 = *(int *)(param_1 + 0x10a);
    *(float *)(iVar5 + 0xa0) = fVar2;
    if (*(float *)(iVar5 + 0xb0) < fVar2) {
      *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar5 + 0xb0);
    }
    if (*(float *)(iVar5 + 0xa0) < *(float *)(iVar5 + 0xac)) {
      *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar5 + 0xac);
    }
    iVar5 = *(int *)(param_1 + 0x84);
    iVar4 = iVar5 * 0x50;
    *(undefined *)(param_1 + 0x117) = (&DAT_00cb9e09)[iVar4];
    *(undefined *)(param_1 + 0x116) = (&DAT_00cb9e08)[iVar4];
    *(undefined *)(param_1 + 0xf6) = (&DAT_00cb9e0b)[iVar4];
    *(undefined *)(param_1 + 0xfc) = (&DAT_00cb9e0c)[iVar4];
    *(undefined4 *)(param_1 + 0x102) = *(undefined4 *)(&DAT_00cb9e12 + iVar4);
    *(undefined *)(param_1 + 0xf0) = (&DAT_00cb9e0a)[iVar4];
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(&DAT_00cb9df8 + iVar4);
    puVar6 = (undefined4 *)(param_1 + 0xa6);
    *(undefined2 *)(param_1 + 0xa4) = (&DAT_00cb9dfc)[iVar5 * 0x28];
    *puVar6 = *(undefined4 *)(&DAT_00cb9dfe + iVar4);
    *(undefined2 *)(param_1 + 0xaa) = (&DAT_00cb9e02)[iVar5 * 0x28];
    *(undefined *)(param_1 + 0x118) = (&DAT_00cb9e1f)[iVar4];
    iVar5 = DAT_00893530;
    if (*(char *)(param_1 + 0xf0) == '\0') {
      cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
      iVar5 = DAT_00893530;
      if (cVar3 == '\0') {
        *puVar6 = *(undefined4 *)(DAT_00893530 + 0x14);
        *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(iVar5 + 0x18);
        FUN_0042db80(*(undefined4 *)(&DAT_00cb9e04 + *(int *)(param_1 + 0x84) * 0x50));
      }
    }
    else {
      *puVar6 = *(undefined4 *)(DAT_00893530 + 0x14);
      *(undefined2 *)(param_1 + 0xaa) = *(undefined2 *)(iVar5 + 0x18);
      FUN_0042dd60(100);
    }
    cVar3 = FUN_0042ddd0(DAT_00893530 + 0x14);
    iVar5 = DAT_00893530;
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(DAT_00893530 + 0x14);
      *(undefined2 *)(param_1 + 0xa4) = *(undefined2 *)(iVar5 + 0x18);
    }
  }
  if (*(float *)(param_1 + 0x10e) == *(float *)(param_1 + 0x9c)) {
    FUN_004406a0();
  }
  else {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x10a) + 0x8c) + 0x50))();
  }
  FUN_0043fcc0(*(undefined4 *)(param_1 + 0x102));
  if (*(char *)(param_1 + 0x116) != '\0') {
    if (*(char *)(param_1 + 0x117) != '\0') {
      uVar9 = 3;
      goto LAB_005c21c3;
    }
    if (*(char *)(param_1 + 0x116) != '\0') {
      uVar9 = 2;
      goto LAB_005c21c3;
    }
  }
  uVar9 = 1;
LAB_005c21c3:
  FUN_0043fcc0(uVar9);
  DAT_008599a0 = 1;
  return;
}


