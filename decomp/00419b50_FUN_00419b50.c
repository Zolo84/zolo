// FUN_00419b50 @ 419b50 size=342

void FUN_00419b50(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_10;
  
  iVar4 = param_1;
  piVar8 = *(int **)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  piVar1 = (int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x268);
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar6 < 10000) {
    uVar10 = *(undefined4 *)(param_1 + 0x14);
    uVar9 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    uVar7 = iVar6 + 0x22;
    if ((uVar7 & 1) != 0) {
      uVar7 = iVar6 + 0x23;
    }
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    else if (100 < iVar5) {
      iVar5 = 100;
    }
    iVar5 = ((iVar5 + -1) / 3) * iVar6;
    param_1 = iVar5;
    FUN_0041a4d0(piVar8,*piVar1,uVar7 + *piVar1,uVar2,iVar6,iVar3,&param_1);
    if (2 < iVar3) {
      local_10 = 1;
      if (iVar6 != 0) {
        local_10 = iVar6;
      }
      iVar5 = iVar5 - param_1;
      FUN_007a6628(&DAT_0087cb88,s__d_work___d_block__ratio__5_2f_008391a4,iVar5,iVar6,
                   (double)iVar5 / (double)local_10);
    }
    if (-1 < param_1) goto LAB_00419c65;
    if (1 < iVar3) {
      FUN_007a6628(&DAT_0087cb88,s_too_repetitive__using_fallback_s_0083916c);
    }
    uVar10 = *(undefined4 *)(iVar4 + 0x14);
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
  }
  FUN_00419cb0(uVar9,uVar10,uVar2,CONCAT44(iVar3,iVar6));
LAB_00419c65:
  iVar6 = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
  if (0 < *(int *)(iVar4 + 0x44)) {
    do {
      if (*piVar8 == 0) {
        *(int *)(iVar4 + 0x1c) = iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *(int *)(iVar4 + 0x44));
  }
  if (*(int *)(iVar4 + 0x1c) == -1) {
    FUN_0041b650(0x3eb);
  }
  return;
}


