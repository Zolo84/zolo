// FUN_00403ac0 @ 403ac0 size=657

void __thiscall
FUN_00403ac0(int *param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6,
            uint param_7,undefined2 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int iStack_8;
  
  iVar6 = param_4;
  iVar3 = (**(code **)(*param_1 + 8))();
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = param_3;
  if ((int)param_5 < (int)param_3) {
    param_4 = param_2;
    param_2 = iVar6;
    uVar7 = param_5;
    param_5 = param_3;
  }
  iVar6 = param_6;
  uVar9 = param_7;
  if ((int)param_7 < (int)uVar7) {
    iVar6 = param_2;
    uVar9 = uVar7;
    param_2 = param_6;
    uVar7 = param_7;
  }
  iVar4 = iVar6;
  uVar5 = uVar9;
  param_7 = param_5;
  if ((int)uVar9 < (int)param_5) {
    iVar4 = param_4;
    uVar5 = param_5;
    param_7 = uVar9;
    param_4 = iVar6;
  }
  iVar8 = uVar5 - param_7;
  iVar6 = (param_4 - param_2) * 0x10000;
  param_5 = (iVar4 - param_2) * 0x10000;
  param_7 = param_7 - uVar7;
  param_3 = param_2 * 0x10000;
  iStack_8 = (iVar4 - param_4) * 0x10000;
  param_4 = iVar6;
  if (param_7 != 0) {
    param_4 = iVar6 / (int)param_7;
  }
  if (iVar8 != 0) {
    iStack_8 = iStack_8 / iVar8;
  }
  if (uVar5 - uVar7 != 0) {
    param_5 = (int)param_5 / (int)(uVar5 - uVar7);
  }
  param_2 = uVar7;
  uVar9 = param_3;
  if ((int)param_7 < 1) {
    param_3 = param_4 + param_3;
  }
  else {
    iVar6 = uVar1 * uVar7;
    do {
      if (param_2 < uVar2) {
        if ((int)param_3 < (int)uVar9) {
          iVar4 = (int)(uVar9 - param_3) >> 0x10;
          do {
            if (param_3 >> 0x10 < uVar1) {
              *(undefined2 *)(iVar3 + ((param_3 >> 0x10) + iVar6 + iVar4) * 2) = param_8;
            }
            bVar10 = iVar4 != 0;
            iVar4 = iVar4 + -1;
          } while (bVar10);
        }
        else {
          iVar4 = (int)(param_3 - uVar9) >> 0x10;
          do {
            if (uVar9 >> 0x10 < uVar1) {
              *(undefined2 *)(iVar3 + ((uVar9 >> 0x10) + iVar6 + iVar4) * 2) = param_8;
            }
            bVar10 = iVar4 != 0;
            iVar4 = iVar4 + -1;
          } while (bVar10);
        }
      }
      uVar9 = uVar9 + param_5;
      param_3 = param_3 + param_4;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + uVar1;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  if (0 < iVar8) {
    iVar6 = param_2 * uVar1;
    param_4 = iVar8;
    do {
      if (param_2 < uVar2) {
        if ((int)param_3 < (int)uVar9) {
          iVar4 = (int)(uVar9 - param_3) >> 0x10;
          do {
            if (param_3 >> 0x10 < uVar1) {
              *(undefined2 *)(iVar3 + (iVar6 + (param_3 >> 0x10) + iVar4) * 2) = param_8;
            }
            bVar10 = iVar4 != 0;
            iVar4 = iVar4 + -1;
          } while (bVar10);
        }
        else {
          iVar4 = (int)(param_3 - uVar9) >> 0x10;
          do {
            if (uVar9 >> 0x10 < uVar1) {
              *(undefined2 *)(iVar3 + (iVar6 + (uVar9 >> 0x10) + iVar4) * 2) = param_8;
            }
            bVar10 = iVar4 != 0;
            iVar4 = iVar4 + -1;
          } while (bVar10);
        }
      }
      uVar9 = uVar9 + param_5;
      param_3 = param_3 + iStack_8;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + uVar1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


