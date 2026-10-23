// FUN_00402160 @ 402160 size=926

void __thiscall
FUN_00402160(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = param_6;
  iVar10 = param_3;
  iVar9 = param_2;
  if ((param_4 < param_2) && (param_3 < param_5)) {
LAB_00402189:
    param_2 = param_4;
    param_3 = param_5;
    param_4 = iVar9;
    param_5 = iVar10;
    param_6 = param_7;
    param_7 = uVar2;
LAB_004021b5:
    if (param_4 <= param_2) goto LAB_004021bf;
    iVar9 = param_4 - param_2;
  }
  else {
    if (param_2 < param_4) {
      if (param_5 < param_3) goto LAB_00402189;
      goto LAB_004021b5;
    }
LAB_004021bf:
    iVar9 = param_2 - param_4;
  }
  if (param_3 < param_5) {
    iVar10 = param_5 - param_3;
  }
  else {
    iVar10 = param_3 - param_5;
  }
  iVar7 = param_1[6];
  iVar3 = (**(code **)(*param_1 + 8))();
  pbVar5 = (byte *)(iVar7 * param_3 + param_2 + iVar3);
  if (iVar10 != 0) {
    if (iVar9 == 0) {
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      if ((param_6 & 1) == 0) {
        if ((param_6 & 2) == 0) {
          *pbVar5 = *(byte *)(param_1 + 0x96);
        }
        else {
          *pbVar5 = 0;
        }
      }
      else {
        *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
      }
      iVar9 = iVar10 + -1;
      if ((param_7 & 1) == 0) {
        if ((param_7 & 2) == 0) {
          pbVar5[iVar7 * iVar9 + iVar7] = *(byte *)(param_1 + 0x96);
        }
        else {
          pbVar5[iVar7 * iVar9 + iVar7] = 0;
        }
      }
      else {
        pbVar5[iVar7 * iVar9 + iVar7] = pbVar5[iVar7 * iVar9 + iVar7] ^ *(byte *)(param_1 + 0x96);
      }
      iVar9 = iVar10 + -2;
      if (iVar9 != 0) {
        pbVar5 = pbVar5 + iVar7 * (iVar10 + -3) + iVar7;
        do {
          *pbVar5 = 0;
          iVar9 = iVar9 + -1;
          pbVar5 = pbVar5 + -iVar7;
        } while (iVar9 != 0);
      }
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if ((param_6 & 1) == 0) {
      if ((param_6 & 2) == 0) {
        *pbVar5 = *(byte *)(param_1 + 0x96);
      }
      else {
        *pbVar5 = 0;
      }
    }
    else {
      *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
    }
    if (iVar9 < iVar10) {
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      iVar3 = iVar7 + 1;
      if (param_4 <= param_2) {
        iVar3 = iVar7 + -1;
      }
      iVar8 = iVar9 + -1;
      iVar4 = iVar10 - iVar9;
      while (iVar8 != 0) {
        iVar4 = iVar4 - iVar9;
        if (iVar4 < 0) {
          pbVar5 = pbVar5 + iVar3;
          iVar4 = iVar4 + iVar10;
          *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
          iVar8 = iVar8 + -1;
        }
        else {
          pbVar5 = pbVar5 + iVar7;
          *pbVar5 = 0;
        }
      }
      for (iVar4 = iVar4 - iVar9; -1 < iVar4; iVar4 = iVar4 - iVar9) {
        pbVar5 = pbVar5 + iVar7;
      }
      pbVar5 = pbVar5 + iVar3;
    }
    else {
      iVar3 = ((param_4 <= param_2) - 1 & 2) - 1;
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      iVar4 = iVar9 - iVar10;
      iVar8 = iVar9;
      while (iVar8 = iVar8 + -1, iVar8 != 0) {
        iVar4 = iVar4 - iVar10;
        iVar1 = iVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + iVar9;
          iVar1 = iVar3 + iVar7;
        }
        pbVar5 = pbVar5 + iVar1;
        *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
      }
      if (iVar4 - iVar10 < 0) {
        pbVar5 = pbVar5 + iVar3 + iVar7;
      }
      else {
        pbVar5 = pbVar5 + iVar3;
      }
    }
    if ((param_7 & 1) == 0) {
      if ((param_7 & 2) != 0) {
        *pbVar5 = 0;
        goto LAB_004024b9;
      }
      bVar6 = *(byte *)(param_1 + 0x96);
    }
    else {
      bVar6 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
    }
    *pbVar5 = bVar6;
LAB_004024b9:
    FUN_00402500(0,s_p1_x__d__p2_x__d__w__d__h__d_0082c3a0,param_2,param_4,iVar9,iVar10);
    FUN_00402500(0,s_p1_y__d__p2_y__d__w__d__h__d_0082c380,param_3,param_5,iVar9,iVar10);
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  if (param_2 < param_4) {
    if ((param_6 & 1) == 0) {
      if ((param_6 & 2) == 0) {
        *pbVar5 = *(byte *)(param_1 + 0x96);
      }
      else {
        *pbVar5 = 0;
      }
    }
    else {
      *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
    }
    pbVar5 = pbVar5 + 1;
    iVar10 = iVar9 + -1;
    if ((param_7 & 1) != 0) {
      pbVar5[iVar10] = pbVar5[iVar10] ^ *(byte *)(param_1 + 0x96);
      goto joined_r0x004022c0;
    }
    if ((param_7 & 2) != 0) {
      pbVar5[iVar10] = 0;
      goto joined_r0x004022c0;
    }
  }
  else {
    pbVar5 = pbVar5 + -iVar9;
    if ((param_7 & 1) == 0) {
      if ((param_7 & 2) == 0) {
        *pbVar5 = *(byte *)(param_1 + 0x96);
      }
      else {
        *pbVar5 = 0;
      }
    }
    else {
      *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
    }
    pbVar5 = pbVar5 + 1;
    iVar10 = iVar9 + -1;
    if ((param_6 & 1) != 0) {
      pbVar5[iVar10] = pbVar5[iVar10] ^ *(byte *)(param_1 + 0x96);
      goto joined_r0x004022c0;
    }
    if ((param_6 & 2) != 0) {
      pbVar5[iVar10] = 0;
      goto joined_r0x004022c0;
    }
  }
  pbVar5[iVar9 + -1] = *(byte *)(param_1 + 0x96);
joined_r0x004022c0:
  while (iVar9 = iVar9 + -1, iVar9 != 0) {
    *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 0x96);
    pbVar5 = pbVar5 + 1;
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


