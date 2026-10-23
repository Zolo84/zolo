// FUN_004dfe00 @ 4dfe00 size=536

void FUN_004dfe00(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = (DAT_00a98438 - DAT_00a98430) + -0x20;
  iVar3 = (DAT_00a9843c - DAT_00a98434) + -0x20;
  iVar4 = 0;
  if (0 < DAT_00a44c30) {
    do {
      iVar4 = iVar4 + 1;
      *(undefined1 *)(DAT_00a9840c + -1 + iVar4) = 0;
    } while (iVar4 < DAT_00a44c30);
  }
  iVar4 = 0;
  if (param_3 != 0) {
    iVar4 = ((param_3 < 1) - 1 & 0x40) - 0x20;
  }
  iVar5 = 0;
  if (param_4 != 0) {
    iVar5 = ((param_4 < 1) - 1 & 0x40) - 0x20;
  }
  if ((iVar4 != 0) || (iVar5 != 0)) {
    iVar7 = *(int *)(DAT_00a98460 + 0x246);
    iVar1 = *(int *)(DAT_00a98460 + 0x24a);
    FUN_00407cc0(iVar4,iVar5);
    if (iVar4 < 0) {
      iVar2 = 0;
      if (0 < DAT_008f00d0) {
        do {
          iVar4 = DAT_00a4ccd0 * iVar2;
          iVar2 = iVar2 + 1;
          *(undefined1 *)(iVar4 + DAT_00a9840c) = 1;
        } while (iVar2 < DAT_008f00d0);
      }
      *param_1 = *param_1 + 0x20;
    }
    else if (0 < iVar4) {
      iVar4 = 0;
      if (0 < DAT_008f00d0) {
        do {
          iVar6 = DAT_00a4ccd0 * iVar4;
          iVar4 = iVar4 + 1;
          *(undefined1 *)(iVar6 + DAT_00a9840c + ((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5)) = 1;
        } while (iVar4 < DAT_008f00d0);
      }
      param_1[2] = param_1[2] + -0x20;
    }
    if (iVar5 < 0) {
      iVar7 = *(int *)(DAT_00a98460 + 0x246);
      local_c = *(int *)(DAT_00a98460 + 0x24a);
      local_8 = *(int *)(DAT_00a98460 + 4) + iVar7;
      iVar2 = 0;
      local_4 = local_c + 0x20;
      if (0 < DAT_00a4ccd0) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined1 *)(DAT_00a9840c + -1 + iVar2) = 1;
        } while (iVar2 < DAT_00a4ccd0);
      }
      param_1[1] = param_1[1] + 0x20;
    }
    else if (0 < iVar5) {
      iVar7 = *(int *)(DAT_00a98460 + 0x246);
      local_8 = *(int *)(DAT_00a98460 + 4) + iVar7;
      local_4 = iVar1 + 0x20;
      iVar2 = 0;
      if (0 < DAT_00a4ccd0) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined1 *)
           (DAT_00a4ccd0 * ((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) + DAT_00a9840c + -1 + iVar2
           ) = 1;
        } while (iVar2 < DAT_00a4ccd0);
      }
      param_1[3] = param_1[3] + -0x20;
      local_c = iVar1;
    }
    FUN_004df7a0(DAT_00847858,DAT_0084785c,iVar7,local_c,local_8,local_4);
  }
  return;
}


