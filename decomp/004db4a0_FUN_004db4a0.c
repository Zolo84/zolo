// FUN_004db4a0 @ 4db4a0 size=649

void FUN_004db4a0(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = param_3 + -2;
  while( true ) {
    bVar6 = (byte)param_3;
    iVar7 = 1 << (bVar6 & 0x1f);
    uVar5 = (uint)*(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & DAT_00aa0cd4 & 0xff;
    bVar9 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar9;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar9;
    if ((uVar5 == 0) || (param_3 < 2)) break;
    bVar6 = *(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & (byte)DAT_00aa0cd4;
    bVar9 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar9;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar9;
    if (bVar6 == 0) {
      DAT_00aa7334 = DAT_00aa7334 + 1;
      DAT_00aa7338 = DAT_00aa7338 + 1;
    }
    else if (iVar8 + 1 < 2) {
      DAT_00aa7334 = DAT_00aa7334 + 4;
      DAT_00aa7338 = DAT_00aa7338 + 4;
    }
    else {
      FUN_004dc870(iVar8);
      FUN_004dc870(iVar8);
      FUN_004dc870(iVar8);
      FUN_004dc870(iVar8);
    }
    FUN_004db4a0(param_1,(iVar7 >> 1) + param_2,iVar8 + 1);
    pbVar2 = (byte *)(DAT_00aa0cd0 + DAT_00aa0cc4);
    uVar5 = DAT_00aa0cd4 & 0xff;
    bVar9 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar9;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar9;
    if ((*pbVar2 & uVar5) == 0) {
      DAT_00aa7334 = DAT_00aa7334 + 1;
      DAT_00aa7338 = DAT_00aa7338 + 1;
    }
    else if (iVar8 + 1 < 2) {
      DAT_00aa7334 = DAT_00aa7334 + 4;
      DAT_00aa7338 = DAT_00aa7338 + 4;
    }
    else {
      FUN_004dc870(iVar8);
      FUN_004dc870(iVar8);
      FUN_004dc870(iVar8);
      FUN_004dc870(iVar8);
    }
    param_3 = param_3 + -1;
    iVar8 = iVar8 + -1;
  }
  param_1 = param_1 + 0x20;
  if (uVar5 == 0) {
    bVar3 = (&DAT_00aa6324)[DAT_00aa7334];
    DAT_00aa7334 = DAT_00aa7334 + 1;
    bVar4 = PTR_DAT_00847864[param_1 + (iVar7 + param_2) * 0x40];
    if (0 < iVar7) {
      param_2 = param_2 << 6;
      iVar8 = (uint)bVar3 * 0x1000000;
      param_3 = iVar7;
      do {
        PTR_DAT_00847864[param_1 + param_2] = (char)((uint)iVar8 >> 0x18);
        param_2 = param_2 + 0x40;
        param_3 = param_3 + -1;
        iVar8 = iVar8 + ((int)((uint)bVar4 * 0x1000000 + (uint)bVar3 * -0x1000000) >> (bVar6 & 0x1f)
                        );
      } while (param_3 != 0);
    }
    return;
  }
  puVar1 = &DAT_00aa6325 + DAT_00aa7334;
  DAT_00aa7334 = DAT_00aa7334 + 2;
  PTR_DAT_00847864[param_1 + (param_2 + 1) * 0x40] = *puVar1;
  puVar1 = &DAT_00aa6325 + DAT_00aa7334;
  DAT_00aa7334 = DAT_00aa7334 + 2;
  PTR_DAT_00847864[param_1 + param_2 * 0x40] = *puVar1;
  return;
}


