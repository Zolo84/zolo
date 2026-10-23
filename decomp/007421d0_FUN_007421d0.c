// FUN_007421d0 @ 7421d0 size=314

int __thiscall FUN_007421d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = Ordinal_19(*(undefined4 *)(param_1 + 0x22),param_2,param_3,0);
  if (iVar1 == -1) {
    FUN_00742920(&DAT_00dc4c20,s_Tried_to_BSocket__write__00874468);
    FUN_00742550(param_2,param_3);
    FUN_007423e0(10);
    uVar4 = 0;
    if (((&DAT_00dc4c24)[*(int *)(DAT_00dc4c20 + 4)] & 6) == 0) {
      iVar1 = (**(code **)(**(int **)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) + 0x2c))();
      if (iVar1 == -1) {
        uVar4 = 4;
      }
    }
    if (uVar4 != 0) {
      uVar4 = *(uint *)(&DAT_00dc4c24 + *(int *)(DAT_00dc4c20 + 4)) | uVar4;
      if (*(int *)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) == 0) {
        uVar4 = uVar4 | 4;
      }
      FUN_00798ed3(uVar4,0);
    }
    uVar2 = Ordinal_111();
    *(undefined4 *)(param_1 + 0x36) = uVar2;
    return -1;
  }
  FUN_00742920(&DAT_00dc4c20,s_Bsocket__write__00874454);
  FUN_00742550(param_2,param_3);
  FUN_007423e0(10);
  uVar4 = 0;
  if (((&DAT_00dc4c24)[*(int *)(DAT_00dc4c20 + 4)] & 6) == 0) {
    iVar3 = (**(code **)(**(int **)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) + 0x2c))();
    if (iVar3 == -1) {
      uVar4 = 4;
    }
  }
  if (uVar4 != 0) {
    uVar4 = *(uint *)(&DAT_00dc4c24 + *(int *)(DAT_00dc4c20 + 4)) | uVar4;
    if (*(int *)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) == 0) {
      uVar4 = uVar4 | 4;
    }
    FUN_00798ed3(uVar4,0);
  }
  return iVar1;
}


