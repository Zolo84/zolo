// FUN_00501710 @ 501710 size=444

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00501710(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *in_EAX;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  if (param_2 != 0) {
    iVar9 = param_4;
    if (param_4 < 0) {
      iVar8 = *(int *)(param_1 + 0x13c);
      iVar7 = 0;
      if (0 < iVar8) {
        in_EAX = (int *)(param_1 + 0x9c);
        do {
          if ((in_EAX[-5] == param_2) && (iVar9 = iVar7, *in_EAX == param_3)) break;
          iVar7 = iVar7 + 1;
          in_EAX = in_EAX + 1;
          iVar9 = param_4;
        } while (iVar7 < iVar8);
      }
      if (iVar9 < 0) {
        iVar9 = iVar8 + -1;
      }
    }
    if ((iVar9 < *(int *)(param_1 + 0x13c)) && (-1 < iVar9)) {
      uVar5 = FUN_00789ce0(param_2,param_3);
      FUN_005018d0(uVar5);
      if (*(int *)(param_1 + 0x5c) != 0) {
        uVar5 = FUN_0044c630(param_2);
        FUN_005018d0(uVar5);
      }
      puVar6 = (undefined4 *)(param_1 + 0x88 + iVar9 * 4);
      *puVar6 = 0;
      *(undefined4 *)(param_1 + 0x9c + iVar9 * 4) = 0;
      *(undefined4 *)(param_1 + 0xb0 + iVar9 * 4) = 0;
      iVar8 = *(int *)(param_1 + 0x13c) + -1;
      *(int *)(param_1 + 0x13c) = iVar8;
      if (iVar9 < iVar8) {
        do {
          iVar9 = iVar9 + 1;
          *puVar6 = puVar6[1];
          puVar6[5] = puVar6[6];
          puVar6[10] = puVar6[0xb];
          puVar6 = puVar6 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x13c));
        *(undefined4 *)(param_1 + 0x88 + *(int *)(param_1 + 0x13c) * 4) = 0;
        *(undefined4 *)(param_1 + 0x9c + *(int *)(param_1 + 0x13c) * 4) = 0;
        *(undefined4 *)(param_1 + 0xb0 + *(int *)(param_1 + 0x13c) * 4) = 0;
      }
      iVar9 = *(int *)(param_1 + 0x13c);
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      *(undefined4 *)(param_1 + 0x2f4) = 0x7f7fffff;
      if (0 < iVar9) {
        piVar10 = (int *)(param_1 + 0x88);
        do {
          iVar9 = FUN_00789ce0(*piVar10,piVar10[5]);
          fVar1 = *(float *)(iVar9 + 0x9c);
          if (*(int *)(param_1 + 0x5c) != 0) {
            iVar9 = FUN_0044c630(*piVar10);
            fVar1 = *(float *)(iVar9 + 0x9c) + fVar1;
          }
          if (fVar1 < *(float *)(param_1 + 0x2f4)) {
            *(float *)(param_1 + 0x2f4) = fVar1;
          }
          if (*(int *)(&DAT_00dc002a + *piVar10 * 4) == 2) {
            *(undefined4 *)(param_1 + 0x2f8) = 0x3f800000;
          }
          iVar9 = *(int *)(param_1 + 0x13c);
          iVar8 = iVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar8 < iVar9);
      }
      fVar1 = *(float *)(param_1 + 0x2f4);
      bVar2 = NAN(_DAT_007e3380);
      bVar3 = fVar1 < _DAT_007e3380;
      bVar4 = fVar1 == _DAT_007e3380;
      if (bVar3 != 0) {
        *(undefined4 *)(param_1 + 0x2f4) = 0;
      }
      *(undefined1 *)(param_1 + 0x230) = 1;
      return CONCAT31((int3)(CONCAT22((short)((uint)iVar9 >> 0x10),
                                      (ushort)bVar3 << 8 | (ushort)(NAN(fVar1) || bVar2) << 10 |
                                      (ushort)bVar4 << 0xe) >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


