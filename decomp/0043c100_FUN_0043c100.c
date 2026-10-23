// FUN_0043c100 @ 43c100 size=1291

void __thiscall FUN_0043c100(int param_1,byte *param_2,char *param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  int local_20c;
  byte *local_208;
  byte local_200 [256];
  char local_100 [256];
  
  pcVar9 = local_100;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  pbVar10 = local_200;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10 = pbVar10 + 4;
  }
  uVar5 = 0xffffffff;
  pcVar9 = param_3;
  do {
    pcVar12 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar4 = 0;
  pcVar9 = pcVar12 + -uVar5;
  pcVar12 = local_100;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  local_20c = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  bVar3 = *param_2;
  iVar8 = 0;
  while (bVar3 != 0) {
    local_208 = param_2 + 1;
    switch(bVar3) {
    case 10:
    case 0xd:
      uVar5 = 0xffffffff;
      pbVar10 = local_200;
      do {
        pbVar13 = pbVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pbVar13 = pbVar10 + 1;
        bVar3 = *pbVar10;
        pbVar10 = pbVar13;
      } while (bVar3 != 0);
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar9 = local_100;
      do {
        pcVar12 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar12 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      pbVar10 = pbVar13 + -uVar5;
      pbVar13 = (byte *)(pcVar12 + -1);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar13 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar13 = pbVar13 + 1;
      }
      FUN_0043c810(local_100,0,1,&DAT_0088f28c,0);
      iVar7 = 0;
      pbVar10 = local_200;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10 = pbVar10 + 4;
      }
      local_200[0] = 0;
      iVar4 = FUN_004129c4(local_200);
      pcVar9 = local_100;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + 4;
      }
      uVar5 = 0xffffffff;
      pcVar9 = param_3;
      do {
        pcVar12 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar12 = pcVar12 + -uVar5;
LAB_0043c535:
      pcVar9 = local_100;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar9 = pcVar9 + 4;
      }
      local_20c = 0;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar9 = pcVar9 + 1;
      }
      break;
    case 0x20:
      uVar5 = 0xffffffff;
      pbVar10 = local_200;
      do {
        pbVar13 = pbVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pbVar13 = pbVar10 + 1;
        bVar3 = *pbVar10;
        pbVar10 = pbVar13;
      } while (bVar3 != 0);
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar9 = local_100;
      do {
        pcVar12 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      pbVar10 = pbVar13 + -uVar5;
      pbVar13 = (byte *)(pcVar12 + -1);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar13 = pbVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar13 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar13 = pbVar13 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_0083bf1c;
      do {
        pcVar12 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar9 = local_100;
      do {
        pcVar11 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      pcVar9 = pcVar12 + -uVar5;
      pcVar12 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar12 = pcVar12 + 4;
      }
      iVar7 = 0;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar12 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pbVar10 = local_200;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10 = pbVar10 + 4;
      }
      iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x36) + 8) + 0x80);
      if (iVar8 == 0) {
        iVar4 = iVar4 + *(int *)(*(int *)(param_1 + 0x36) + 4);
        local_20c = local_20c + 1;
      }
      else {
        iVar4 = iVar4 + *(short *)(iVar8 + 6);
        local_20c = local_20c + 1;
      }
      break;
    case 0x5c:
      bVar3 = *local_208;
      local_208 = param_2 + 2;
      if (bVar3 == 0x6e) {
        uVar5 = 0xffffffff;
        pbVar10 = local_200;
        do {
          pbVar13 = pbVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pbVar13 = pbVar10 + 1;
          bVar3 = *pbVar10;
          pbVar10 = pbVar13;
        } while (bVar3 != 0);
        uVar5 = ~uVar5;
        iVar4 = -1;
        pcVar9 = local_100;
        do {
          pcVar12 = pcVar9;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar12 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar12;
        } while (cVar1 != '\0');
        pbVar10 = pbVar13 + -uVar5;
        pbVar13 = (byte *)(pcVar12 + -1);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
          pbVar10 = pbVar10 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar13 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar13 = pbVar13 + 1;
        }
        FUN_0043c810(local_100,0,1,&DAT_0088f28c,0);
        iVar7 = 0;
        pbVar10 = local_200;
        for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          pbVar10 = pbVar10 + 4;
        }
        local_200[0] = 0;
        iVar4 = FUN_004129c4(local_200);
        pcVar9 = local_100;
        for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
          pcVar9[0] = '\0';
          pcVar9[1] = '\0';
          pcVar9[2] = '\0';
          pcVar9[3] = '\0';
          pcVar9 = pcVar9 + 4;
        }
        uVar5 = 0xffffffff;
        pcVar9 = param_3;
        do {
          pcVar12 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar12;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar12 = pcVar12 + -uVar5;
        goto LAB_0043c535;
      }
    case 0xa7:
    case 0x25:
      bVar2 = *local_208;
      local_200[iVar8] = bVar3;
      bVar3 = local_208[1];
      local_200[iVar8 + 1] = bVar2;
      local_200[iVar8 + 2] = bVar3;
      local_200[iVar8 + 3] = local_208[2];
      iVar7 = iVar8 + 4;
      local_208 = local_208 + 3;
      break;
    default:
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x36) + 8) + (uint)bVar3 * 4);
      if (iVar7 == 0) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x36) + 4);
      }
      else {
        iVar7 = (int)*(short *)(iVar7 + 6);
      }
      local_200[iVar8] = bVar3;
      iVar4 = iVar4 + iVar7;
      iVar7 = iVar8 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar4) {
        if (local_20c == 0) {
          uVar5 = 0xffffffff;
          pcVar9 = param_3;
          do {
            pcVar12 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          local_200[iVar8] = 0;
          pcVar9 = pcVar12 + -uVar5;
          pcVar12 = local_100;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar12 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar12 = pcVar12 + 1;
          }
          uVar5 = 0xffffffff;
          pbVar10 = local_200;
          do {
            pbVar13 = pbVar10;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pbVar13 = pbVar10 + 1;
            bVar2 = *pbVar10;
            pbVar10 = pbVar13;
          } while (bVar2 != 0);
          uVar5 = ~uVar5;
          iVar4 = -1;
          pcVar9 = local_100;
          do {
            pcVar12 = pcVar9;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar12 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar12;
          } while (cVar1 != '\0');
          pbVar10 = pbVar13 + -uVar5;
          pbVar13 = (byte *)(pcVar12 + -1);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
            pbVar10 = pbVar10 + 4;
            pbVar13 = pbVar13 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pbVar13 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            pbVar13 = pbVar13 + 1;
          }
          FUN_0043c810(local_100,0,1,&DAT_0088f28c,0);
          pbVar10 = local_200;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            pbVar10[0] = 0;
            pbVar10[1] = 0;
            pbVar10[2] = 0;
            pbVar10[3] = 0;
            pbVar10 = pbVar10 + 4;
          }
          iVar7 = 1;
          local_200[0] = bVar3;
          iVar4 = FUN_004129c4(local_200);
          pcVar9 = local_100;
          for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
            pcVar9[0] = '\0';
            pcVar9[1] = '\0';
            pcVar9[2] = '\0';
            pcVar9[3] = '\0';
            pcVar9 = pcVar9 + 4;
          }
          uVar5 = 0xffffffff;
          pcVar9 = param_3;
          do {
            pcVar12 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar12 = pcVar12 + -uVar5;
        }
        else {
          FUN_0043c810(local_100,0,1,&DAT_0088f28c,0);
          iVar4 = FUN_004129c4(local_200);
          pcVar9 = local_100;
          for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
            pcVar9[0] = '\0';
            pcVar9[1] = '\0';
            pcVar9[2] = '\0';
            pcVar9[3] = '\0';
            pcVar9 = pcVar9 + 4;
          }
          uVar5 = 0xffffffff;
          pcVar9 = param_3;
          do {
            pcVar12 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar12 = pcVar12 + -uVar5;
        }
        goto LAB_0043c535;
      }
    }
    iVar8 = iVar7;
    param_2 = local_208;
    bVar3 = *local_208;
  }
  if (local_200[0] != 0) {
    uVar5 = 0xffffffff;
    pbVar10 = local_200;
    do {
      pbVar13 = pbVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar13 = pbVar10 + 1;
      bVar3 = *pbVar10;
      pbVar10 = pbVar13;
    } while (bVar3 != 0);
    uVar5 = ~uVar5;
    iVar4 = -1;
    pcVar9 = local_100;
    do {
      pcVar12 = pcVar9;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar12 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar1 != '\0');
    pbVar10 = pbVar13 + -uVar5;
    pbVar13 = (byte *)(pcVar12 + -1);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar13 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar13 = pbVar13 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_0083bf1c;
    do {
      pcVar12 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar4 = -1;
    pcVar9 = local_100;
    do {
      pcVar11 = pcVar9;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    pcVar9 = pcVar12 + -uVar5;
    pcVar12 = pcVar11 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar12 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  if (local_100[0] != '\0') {
    FUN_0043c810(local_100,0,1,&DAT_0088f28c,0);
  }
  if (param_4 == '\0') {
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  return;
}


