// FUN_004284e0 @ 4284e0 size=277

void FUN_004284e0(ushort *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  
  uVar6 = 0;
  iVar3 = 0;
  DAT_0088f224 = param_1;
  DAT_0088f240 = param_2;
  if (0 < param_2) {
    iVar4 = 0;
    do {
      sVar2 = (short)iVar3;
      iVar3 = iVar3 + 1;
      *(short *)(iVar4 + (int)DAT_0088f224) = sVar2 + 0x1268;
      *(undefined4 *)(iVar4 + 2 + (int)DAT_0088f224) = 0;
      iVar4 = iVar4 + 6;
    } while (iVar3 < param_2);
  }
  iVar3 = DAT_0088f2cc;
  puVar7 = DAT_0088f224;
  if (*(int *)(DAT_0088f2cc + 4) != 0) {
    do {
      for (piVar1 = *(int **)(*(int *)(iVar3 + 8) + uVar6 * 4); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[1]) {
        uVar5 = (uint)*(ushort *)(*piVar1 + 4);
        iVar4 = uVar5 - *puVar7;
        if ((*puVar7 <= uVar5) && (iVar4 < DAT_0088f240)) {
          uVar5 = *(uint *)(*piVar1 + 6);
          if (*(uint *)(puVar7 + iVar4 * 3 + 1) < uVar5) {
            *(uint *)(puVar7 + iVar4 * 3 + 1) = uVar5;
            puVar7 = DAT_0088f224;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar3 + 4));
  }
  iVar3 = DAT_0088f2d0;
  uVar6 = 0;
  if (*(int *)(DAT_0088f2d0 + 4) != 0) {
    do {
      for (piVar1 = *(int **)(*(int *)(iVar3 + 8) + uVar6 * 4); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[1]) {
        uVar5 = (uint)*(ushort *)(*piVar1 + 4);
        iVar4 = uVar5 - *puVar7;
        if ((*puVar7 <= uVar5) && (iVar4 < DAT_0088f240)) {
          uVar5 = *(uint *)(*piVar1 + 6);
          if (*(uint *)(puVar7 + iVar4 * 3 + 1) < uVar5) {
            *(uint *)(puVar7 + iVar4 * 3 + 1) = uVar5;
            puVar7 = DAT_0088f224;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar3 + 4));
  }
  return;
}


