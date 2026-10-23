// FUN_004e9440 @ 4e9440 size=190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004e9440(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  undefined4 uStack_4;
  undefined3 uVar5;
  
  iVar6 = 0;
  uStack_4 = 0;
  uVar4 = *(uint *)(param_1 + 0x290);
  if (0 < (int)uVar4) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x298) + iVar7);
      iVar1 = DAT_00ab27b4 + iVar2 * 0x4b2;
      if (*(int *)(DAT_00ab27b4 + 0x3d8 + iVar2 * 0x4b2) != 0) {
        cVar3 = FUN_0044b280(*(undefined4 *)(param_2 + 6));
        if (cVar3 != '\0') {
          iVar1 = *(int *)(iVar1 + 0x1da);
          if ((*(float *)(iVar1 + 0x14) != _DAT_007e3380) ||
             (_DAT_007e46cc <= *(float *)(iVar1 + 0x10))) {
            uStack_4 = CONCAT13(1,(undefined3)uStack_4);
          }
          else {
            uStack_4 = CONCAT13(uStack_4._3_1_,0x10000);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < *(int *)(param_1 + 0x290));
    uVar5 = (undefined3)((uint)*(int *)(param_1 + 0x290) >> 8);
    uVar4 = CONCAT31(uVar5,uStack_4._2_1_);
    if ((uStack_4._2_1_ != '\0') && (uVar4 = CONCAT31(uVar5,uStack_4._3_1_), uStack_4._3_1_ == '\0')
       ) {
      return CONCAT31(uVar5,1);
    }
  }
  return uVar4 & 0xffffff00;
}


