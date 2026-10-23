// FUN_007616a0 @ 7616a0 size=1301

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_007616a0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 uVar17;
  float local_224;
  char local_208 [256];
  undefined1 local_108 [260];
  
  DAT_00d570d4._0_1_ = 0;
  if (param_2 == 0) {
    cVar5 = FUN_00763e80();
    if (cVar5 == '\0') {
      uVar6 = FUN_0042b6c9();
      uVar17 = CONCAT44(uVar6,local_208);
    }
    else {
      uVar6 = FUN_0042b6c9();
      uVar17 = CONCAT44(uVar6,local_208);
    }
    FUN_007a630a(uVar17);
    pcVar7 = local_208;
  }
  else {
    if (param_2 != 1) goto LAB_007617ee;
    cVar5 = FUN_00763e80();
    if (cVar5 == '\0') {
      uVar6 = FUN_0042b6c9();
      uVar17 = CONCAT44(uVar6,local_208);
    }
    else {
      uVar6 = FUN_0042b6c9();
      uVar17 = CONCAT44(uVar6,local_208);
    }
    FUN_007a630a(uVar17);
    uVar9 = 0xffffffff;
    pcVar7 = local_208;
    do {
      pcVar16 = pcVar7;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar16 = pcVar7 + 1;
      cVar5 = *pcVar7;
      pcVar7 = pcVar16;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar10 = -1;
    pcVar7 = (char *)&DAT_00d570d4;
    do {
      pcVar15 = pcVar7;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar15 = pcVar7 + 1;
      cVar5 = *pcVar7;
      pcVar7 = pcVar15;
    } while (cVar5 != '\0');
    pcVar7 = pcVar16 + -uVar9;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar16 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar16 = pcVar16 + 1;
    }
    pcVar7 = (char *)FUN_0042b6c9();
  }
  uVar9 = 0xffffffff;
  do {
    pcVar16 = pcVar7;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar16 = pcVar7 + 1;
    cVar5 = *pcVar7;
    pcVar7 = pcVar16;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  pcVar7 = (char *)&DAT_00d570d4;
  do {
    pcVar15 = pcVar7;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar15 = pcVar7 + 1;
    cVar5 = *pcVar7;
    pcVar7 = pcVar15;
  } while (cVar5 != '\0');
  pcVar7 = pcVar16 + -uVar9;
  pcVar16 = pcVar15 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar16 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar16 = pcVar16 + 1;
  }
LAB_007617ee:
  iVar10 = 0;
  do {
    iVar13 = param_2 * 0x24 + iVar10;
    iVar3 = *(int *)(param_1 + 0xe + param_2 * 4);
    iVar12 = iVar3 + iVar13 * 10;
    fVar1 = (float)(&DAT_00d546cc)[iVar12 + param_3];
    fVar2 = *(float *)(param_1 + 0x2a + iVar10 * 4);
    local_224 = fVar1 - (float)(&DAT_00d546cc)[iVar12];
    if (param_3 == 0) {
      local_224 = fVar1;
    }
    if ((fVar1 != _DAT_007e3380) || (bVar4 = false, local_224 != _DAT_007e3380)) {
      bVar4 = true;
    }
    switch(iVar10) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      if ((-1 < iVar10) && (iVar10 < 5)) {
        iVar12 = 0;
        pfVar14 = (float *)(&DAT_00d546cc + iVar13 * 10);
        do {
          if (*pfVar14 != _DAT_007e3380) {
            FUN_00760360(iVar10);
            FUN_007a630a(local_208);
            goto LAB_00761b6d;
          }
          iVar12 = iVar12 + 1;
          pfVar14 = pfVar14 + 1;
        } while (iVar12 < 10);
      }
      break;
    default:
      if (bVar4) {
        uVar6 = FUN_00761540();
        FUN_007a630a(local_108,s____1f___s_s_00875a7c,(double)(fVar2 * _DAT_007e4088),uVar6);
        uVar17 = CONCAT44(local_108,iVar10);
        fVar1 = _DAT_007e4088;
LAB_00761b57:
        uVar6 = FUN_007600d0(uVar17,(double)(local_224 * fVar1));
LAB_00761b65:
        FUN_007a630a(local_208,uVar6);
LAB_00761b6d:
        uVar9 = 0xffffffff;
        pcVar7 = local_208;
        do {
          pcVar16 = pcVar7;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar7 + 1;
          cVar5 = *pcVar7;
          pcVar7 = pcVar16;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar12 = -1;
        pcVar7 = (char *)&DAT_00d570d4;
        do {
          pcVar15 = pcVar7;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar15 = pcVar7 + 1;
          cVar5 = *pcVar7;
          pcVar7 = pcVar15;
        } while (cVar5 != '\0');
        pcVar7 = pcVar16 + -uVar9;
        pcVar16 = pcVar15 + -1;
        for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      break;
    case 0xe:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      if (bVar4) {
        if ((iVar10 == 0x20) || (iVar10 == 0x22)) {
          puVar8 = &DAT_0083d360;
          if (local_224 <= _DAT_007e3380) {
            puVar8 = &DAT_0088ebf8;
          }
          uVar6 = FUN_00761540();
          uVar17 = CONCAT44(puVar8,uVar6);
          pcVar7 = s____0f___s_s_00875a88;
        }
        else {
          puVar8 = &DAT_0083d360;
          if (local_224 <= _DAT_007e3380) {
            puVar8 = &DAT_0088ebf8;
          }
          uVar6 = FUN_00761540();
          uVar17 = CONCAT44(puVar8,uVar6);
          pcVar7 = s____1f___s_s_00875a7c;
        }
        FUN_007a630a(local_108,pcVar7,(double)fVar2,uVar17);
        uVar17 = CONCAT44(local_108,iVar10);
LAB_00761a62:
        uVar6 = FUN_007600d0(uVar17,(double)local_224);
        goto LAB_00761b65;
      }
      break;
    case 0x1c:
      if (bVar4) {
        uVar6 = FUN_00761540();
        FUN_007a630a(local_108,s____1f___s_s_00875a7c,(double)(fVar2 * _DAT_007e3848),uVar6);
        uVar17 = CONCAT44(local_108,0x1c);
        fVar1 = _DAT_007e3848;
        goto LAB_00761b57;
      }
      break;
    case 0x1e:
      break;
    case 0x1f:
      if ((bVar4) &&
         (iVar3 = iVar3 + param_2 * 0x168,
         _DAT_007e3374 <=
         (*(float *)(&DAT_00d54b7c + (iVar3 + param_3) * 4) + *(float *)(param_1 + 0xa2)) -
         *(float *)(&DAT_00d54b7c + iVar3 * 4))) {
        uVar6 = FUN_00761540();
        FUN_007a630a(local_108,s____0f___s_s_00875a88,(double)fVar2,uVar6);
        uVar17 = CONCAT44(local_108,0x1f);
        goto LAB_00761a62;
      }
    }
    iVar10 = iVar10 + 1;
    if (0x23 < iVar10) {
      return &DAT_00d570d4;
    }
  } while( true );
}


