// FUN_007b7fed @ 7b7fed size=429

undefined4 FUN_007b7fed(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_007aae71(0x19);
  CodePage = FUN_007b819a(param_1);
  if (CodePage != DAT_00dc58f4) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_00880328;
LAB_007b802a:
      if (*pUVar5 != CodePage) goto code_r0x007b802e;
      local_8 = 0;
      puVar15 = &DAT_00dc5a20;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x880338);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_00880320)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_00dc5a20 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_00dc590c = 1;
      DAT_00dc58f4 = CodePage;
      DAT_00dc5b24 = FUN_007b81e4(CodePage);
      DAT_00dc5900 = *(undefined4 *)(iVar12 + 0x88032c);
      DAT_00dc5904 = *(undefined4 *)(iVar12 + 0x880330);
      DAT_00dc5908 = *(undefined4 *)(iVar12 + 0x880334);
      goto LAB_007b817e;
    }
    goto LAB_007b8179;
  }
  goto LAB_007b8014;
code_r0x007b802e:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x880417 < pUVar5) goto code_r0x007b8039;
  goto LAB_007b802a;
code_r0x007b8039:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_00dc5b24 = 0;
    puVar15 = &DAT_00dc5a20;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_00dc590c = 0;
      DAT_00dc58f4 = CodePage;
    }
    else {
      DAT_00dc58f4 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_00dc5a20 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_00dc5a20 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_00dc5b24 = FUN_007b81e4(CodePage);
      DAT_00dc590c = 1;
    }
    DAT_00dc5900 = 0;
    DAT_00dc5904 = 0;
    DAT_00dc5908 = 0;
  }
  else {
    if (DAT_00dc54b0 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_007b818b;
    }
LAB_007b8179:
    FUN_007b8217();
  }
LAB_007b817e:
  FUN_007b8240();
LAB_007b8014:
  uVar14 = 0;
LAB_007b818b:
  FUN_007aaed2(0x19);
  return uVar14;
}


