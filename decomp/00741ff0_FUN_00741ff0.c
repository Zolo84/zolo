// FUN_00741ff0 @ 741ff0 size=243

undefined4 __fastcall FUN_00741ff0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  int unaff_retaddr;
  short sStack_e;
  
  puVar10 = (undefined4 *)(param_1 + 0x26);
  *puVar10 = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined2 *)puVar10 = 2;
  uVar3 = Ordinal_9(CONCAT22((short)((uint)puVar10 >> 0x10),*(undefined2 *)(param_1 + 4)));
  *(undefined2 *)(param_1 + 0x28) = uVar3;
  uVar6 = 0xffffffff;
  pcVar11 = &DAT_0088ebf8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(unaff_retaddr + 8);
  uVar7 = ~uVar6 - 1;
  uVar6 = uVar2;
  if (uVar7 <= uVar2) {
    uVar6 = uVar7;
  }
  pbVar4 = *(byte **)(unaff_retaddr + 4);
  bVar14 = false;
  iVar8 = 0;
  bVar15 = true;
  pbVar9 = pbVar4;
  pbVar12 = &DAT_0088ebf8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar14 = *pbVar9 < *pbVar12;
    bVar15 = *pbVar9 == *pbVar12;
    pbVar9 = pbVar9 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar15);
  if (!bVar15) {
    iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
  }
  if (((iVar8 == 0) && (uVar7 <= uVar2)) && (uVar2 == uVar7)) {
    uVar5 = Ordinal_8(0);
    *(undefined4 *)(param_1 + 0x2a) = uVar5;
    return 0;
  }
  if (pbVar4 == (byte *)0x0) {
    pbVar4 = (byte *)&DAT_007f0c98;
  }
  iVar8 = Ordinal_52(pbVar4);
  if (iVar8 == 0) {
    uVar5 = Ordinal_111();
    *(undefined4 *)(param_1 + 0x36) = uVar5;
    return 0xffffffff;
  }
  sStack_e = (short)((uint)*(undefined4 *)(iVar8 + 8) >> 0x10);
  puVar10 = (undefined4 *)**(undefined4 **)(iVar8 + 0xc);
  puVar13 = (undefined4 *)(param_1 + 0x2a);
  for (uVar6 = (uint)(int)sStack_e >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar6 = (int)sStack_e & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  return 0;
}


