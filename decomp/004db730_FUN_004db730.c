// FUN_004db730 @ 4db730 size=638

void FUN_004db730(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar7 = param_3 + -2;
  while( true ) {
    iVar8 = 1 << ((byte)param_3 & 0x1f);
    uVar5 = (uint)*(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & DAT_00aa0cd4 & 0xff;
    bVar10 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar10;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar10;
    if ((uVar5 == 0) || (param_3 < 2)) break;
    bVar4 = *(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & (byte)DAT_00aa0cd4;
    bVar10 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar10;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar10;
    if (bVar4 == 0) {
      DAT_00aa7334 = DAT_00aa7334 + 1;
      DAT_00aa7338 = DAT_00aa7338 + 1;
    }
    else if (iVar7 + 1 < 2) {
      DAT_00aa7334 = DAT_00aa7334 + 4;
      DAT_00aa7338 = DAT_00aa7338 + 4;
    }
    else {
      FUN_004dc870(iVar7);
      FUN_004dc870(iVar7);
      FUN_004dc870(iVar7);
      FUN_004dc870(iVar7);
    }
    pbVar2 = (byte *)(DAT_00aa0cd0 + DAT_00aa0cc4);
    uVar5 = DAT_00aa0cd4 & 0xff;
    bVar10 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar10;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar10;
    if ((*pbVar2 & uVar5) == 0) {
      DAT_00aa7334 = DAT_00aa7334 + 1;
      DAT_00aa7338 = DAT_00aa7338 + 1;
    }
    else if (iVar7 + 1 < 2) {
      DAT_00aa7334 = DAT_00aa7334 + 4;
      DAT_00aa7338 = DAT_00aa7338 + 4;
    }
    else {
      FUN_004dc870(iVar7);
      FUN_004dc870(iVar7);
      FUN_004dc870(iVar7);
      FUN_004dc870(iVar7);
    }
    FUN_004db730((iVar8 >> 1) + param_1,param_2,iVar7 + 1);
    param_3 = param_3 + -1;
    iVar7 = iVar7 + -1;
  }
  if (uVar5 == 0) {
    bVar4 = (&DAT_00aa6324)[DAT_00aa7334];
    DAT_00aa7334 = DAT_00aa7334 + 1;
    iVar9 = (param_2 + 0x20) * 0x40;
    iVar6 = (uint)bVar4 * 0x1000000;
    bVar3 = PTR_DAT_00847864[param_1 + iVar8 + iVar9];
    iVar7 = 0;
    if (0 < iVar8) {
      do {
        PTR_DAT_00847864[param_1 + iVar7 + iVar9] = (char)((uint)iVar6 >> 0x18);
        iVar6 = iVar6 + ((int)((uint)bVar3 * 0x1000000 + (uint)bVar4 * -0x1000000) >>
                        ((byte)param_3 & 0x1f));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar8);
    }
    return;
  }
  puVar1 = &DAT_00aa6326 + DAT_00aa7334;
  DAT_00aa7334 = DAT_00aa7334 + 3;
  iVar7 = (param_2 + 0x20) * 0x40;
  PTR_DAT_00847864[param_1 + iVar7 + 1] = *puVar1;
  puVar1 = &DAT_00aa6324 + DAT_00aa7334;
  DAT_00aa7334 = DAT_00aa7334 + 1;
  PTR_DAT_00847864[param_1 + iVar7] = *puVar1;
  return;
}


