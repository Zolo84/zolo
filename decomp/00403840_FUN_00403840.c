// FUN_00403840 @ 403840 size=636

void __thiscall
FUN_00403840(int *param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6,
            uint param_7,undefined1 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int iStack_14;
  int iStack_8;
  
  iVar4 = param_4;
  iVar3 = (**(code **)(*param_1 + 8))();
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = param_5;
  uVar10 = param_3;
  if ((int)param_5 < (int)param_3) {
    param_4 = param_2;
    param_2 = iVar4;
    uVar9 = param_3;
    uVar10 = param_5;
  }
  iVar4 = param_6;
  uVar5 = param_7;
  if ((int)param_7 < (int)uVar10) {
    iVar4 = param_2;
    uVar5 = uVar10;
    param_2 = param_6;
    uVar10 = param_7;
  }
  iVar11 = iVar4;
  uVar6 = uVar5;
  if ((int)uVar5 < (int)uVar9) {
    iVar11 = param_4;
    uVar6 = uVar9;
    uVar9 = uVar5;
    param_4 = iVar4;
  }
  iVar8 = uVar6 - uVar9;
  iVar7 = (param_4 - param_2) * 0x10000;
  iVar4 = (iVar11 - param_2) * 0x10000;
  iStack_14 = uVar9 - uVar10;
  param_3 = param_2 * 0x10000;
  iStack_8 = (iVar11 - param_4) * 0x10000;
  param_4 = iVar7;
  if (iStack_14 != 0) {
    param_4 = iVar7 / iStack_14;
  }
  if (iVar8 != 0) {
    iStack_8 = iStack_8 / iVar8;
  }
  if (uVar6 - uVar10 != 0) {
    iVar4 = iVar4 / (int)(uVar6 - uVar10);
  }
  param_2 = uVar10;
  if (iStack_14 < 1) {
    uVar9 = param_3 + iVar4;
    param_3 = param_4 + param_3;
  }
  else {
    iVar11 = uVar10 << 6;
    uVar9 = param_3;
    do {
      if (param_2 < uVar2) {
        if ((int)param_3 < (int)uVar9) {
          iVar7 = (int)(uVar9 - param_3) >> 0x10;
          do {
            if (param_3 >> 0x10 < uVar1) {
              *(undefined1 *)((param_3 >> 0x10) + iVar11 + iVar7 + iVar3) = param_8;
            }
            bVar12 = iVar7 != 0;
            iVar7 = iVar7 + -1;
          } while (bVar12);
        }
        else {
          iVar7 = (int)(param_3 - uVar9) >> 0x10;
          do {
            if (uVar9 >> 0x10 < uVar1) {
              *(undefined1 *)(iVar3 + iVar11 + (uVar9 >> 0x10) + iVar7) = param_8;
            }
            bVar12 = iVar7 != 0;
            iVar7 = iVar7 + -1;
          } while (bVar12);
        }
      }
      uVar9 = uVar9 + iVar4;
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      iVar11 = iVar11 + 0x40;
      iStack_14 = iStack_14 + -1;
    } while (iStack_14 != 0);
  }
  if (0 < iVar8) {
    iVar11 = param_2 << 6;
    param_4 = iVar8;
    do {
      if (param_2 < uVar2) {
        if ((int)param_3 < (int)uVar9) {
          iVar7 = (int)(uVar9 - param_3) >> 0x10;
          do {
            if (param_3 >> 0x10 < uVar1) {
              *(undefined1 *)(iVar3 + iVar11 + (param_3 >> 0x10) + iVar7) = param_8;
            }
            bVar12 = iVar7 != 0;
            iVar7 = iVar7 + -1;
          } while (bVar12);
        }
        else {
          iVar7 = (int)(param_3 - uVar9) >> 0x10;
          do {
            if (uVar9 >> 0x10 < uVar1) {
              *(undefined1 *)(iVar3 + iVar11 + (uVar9 >> 0x10) + iVar7) = param_8;
            }
            bVar12 = iVar7 != 0;
            iVar7 = iVar7 + -1;
          } while (bVar12);
        }
      }
      uVar9 = uVar9 + iVar4;
      param_3 = param_3 + iStack_8;
      param_2 = param_2 + 1;
      iVar11 = iVar11 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


