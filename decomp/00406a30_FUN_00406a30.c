// FUN_00406a30 @ 406a30 size=457

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00406a30(int *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,int param_7
            ,int *param_8)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = (**(code **)(*param_1 + 8))();
  iVar6 = (**(code **)(*param_8 + 8))();
  uVar4 = _DAT_0088cee8;
  iVar2 = param_8[6];
  param_2 = param_2 & 0xfffffffe;
  iVar5 = param_5 * param_1[6] + iVar5 + (param_4 & 0xfffffffe) * 2;
  bVar8 = (byte)*(int *)((int)param_1 + 0x23e);
  iVar7 = param_1[6] << (bVar8 & 0x1f);
  iVar10 = param_7 - param_5 >> (bVar8 & 0x1f);
  param_7 = (int)((param_6 & 0xfffffffe) - (param_4 & 0xfffffffe)) >> (bVar8 & 0x1f);
  if ((param_7 != 0) && (iVar10 != 0)) {
    iVar9 = param_7 + param_2;
    if (param_8[1] < iVar9) {
      param_7 = param_8[1] - param_2;
    }
    if (param_8[2] < param_3 + iVar10) {
      iVar10 = param_8[2] - param_3;
    }
    if ((param_7 != 0) && (iVar10 != 0)) {
      if ((*(char *)((int)param_1 + 0x252) == '\0') && (*(int *)((int)param_1 + 0x23e) == 0)) {
        param_7 = param_7 >> 2;
        iVar6 = iVar2 * param_3 + iVar6 + (param_2 + param_7 * 4) * 2;
        iVar5 = iVar5 + param_7 * 8;
        param_3 = iVar10;
        do {
          iVar10 = -param_7;
          do {
            uVar3 = *(undefined4 *)(iVar5 + 4 + iVar10 * 8);
            *(undefined4 *)(iVar6 + iVar10 * 8) = *(undefined4 *)(iVar5 + iVar10 * 8);
            *(undefined4 *)(iVar6 + 4 + iVar10 * 8) = uVar3;
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0);
          iVar6 = iVar6 + iVar2;
          iVar5 = iVar5 + iVar7;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      else {
        iVar6 = iVar2 * param_3 + iVar6 + iVar9 * 2;
        param_3 = iVar10;
        do {
          iVar9 = 0;
          iVar10 = -param_7;
          do {
            uVar1 = *(ushort *)(iVar5 + iVar9 * 2);
            iVar9 = iVar9 + (1 << (bVar8 & 0x1f));
            if (uVar1 != uVar4) {
              *(ushort *)(iVar6 + iVar10 * 2) = uVar1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != 0);
          iVar6 = iVar6 + iVar2;
          iVar5 = iVar5 + iVar7;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*param_8 + 0xc))();
  return;
}


