// FUN_00438080 @ 438080 size=443

undefined4 __fastcall FUN_00438080(int param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iStack_210;
  int iStack_208;
  byte local_200 [512];
  
  pbVar10 = local_200;
  for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10 = pbVar10 + 4;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  iVar7 = *(int *)(param_1 + 0x40);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
  iVar6 = iVar4 - (iVar4 >> 0x1f);
  iStack_208 = 0;
  iVar8 = iVar7;
  if (iVar7 < *(int *)(param_1 + 0x30)) {
    while( true ) {
      bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + iVar8);
      iVar6 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),bVar2);
      if (bVar2 == 0) break;
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + (uint)bVar2 * 4);
      if (iVar6 == 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 4);
      }
      else {
        iVar6 = (int)*(short *)(iVar6 + 6);
      }
      iStack_208 = iStack_208 + iVar6;
      iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c);
      if ((iVar6 <= iStack_208) || (iVar8 = iVar8 + 1, *(int *)(param_1 + 0x30) <= iVar8)) break;
    }
  }
  cVar3 = *(char *)(param_1 + 0x52);
  pbVar10 = (byte *)(*(int *)(param_1 + 0x18) + iVar7);
  pbVar11 = local_200;
  for (uVar9 = (uint)(iVar8 - iVar7) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
    pbVar11 = pbVar11 + 4;
  }
  for (uVar9 = iVar8 - iVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pbVar11 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
  }
  if (cVar3 == '\0') {
    FUN_004133fd(local_200,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x54),0);
  }
  else {
    FUN_00413483(local_200,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x10),
                 CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(param_1 + 0x54)),0);
  }
  iVar8 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x40);
  iVar7 = 0;
  iStack_210 = 0;
  if (0 < iVar8) {
    while (local_200[iStack_210] != 0) {
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + (uint)local_200[iStack_210] * 4);
      if (iVar6 == 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 4);
      }
      else {
        iVar6 = (int)*(short *)(iVar6 + 6);
      }
      iVar7 = iVar7 + iVar6;
      if ((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c) <= iVar7) ||
         (iStack_210 = iStack_210 + 1, iVar8 <= iStack_210)) break;
    }
  }
  if ((*(char *)(param_1 + 0x3a) == '\x01') &&
     ((*(char *)(param_1 + 0x39) != '\0' &&
      (iVar8 = *(int *)(param_1 + 0x20), iVar8 < *(int *)(param_1 + 0x28) + -2)))) {
    iVar6 = (iVar4 / 2) * iVar8;
    do {
      *(undefined2 *)(iVar5 + (iVar6 + iVar7 + *(int *)(param_1 + 0x1c)) * 2) = 0xffff;
      iVar1 = iVar6 + iVar7;
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + iVar4 / 2;
      *(undefined2 *)(iVar5 + 2 + (iVar1 + *(int *)(param_1 + 0x1c)) * 2) = 0xffff;
    } while (iVar8 < *(int *)(param_1 + 0x28) + -2);
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  return 0;
}


