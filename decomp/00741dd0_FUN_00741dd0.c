// FUN_00741dd0 @ 741dd0 size=382

int __thiscall FUN_00741dd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  if (param_3 != 0) {
    do {
      iVar4 = param_3 - local_8;
      iVar2 = param_2;
      iVar6 = iVar4;
      iVar1 = Ordinal_19(*(undefined4 *)(param_1 + 0x22),param_2,iVar4,0);
      if (iVar1 == -1) {
        FUN_00742920(&DAT_00dc4c20,s_Tried_to_BSocket__write__00874468);
        FUN_00742550(param_2,iVar4);
        FUN_007423e0(10);
        uVar5 = 0;
        if ((((&DAT_00dc4c24)[*(int *)(DAT_00dc4c20 + 4)] & 6) == 0) &&
           (iVar1 = (**(code **)(**(int **)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) + 0x2c))(),
           iVar1 == -1)) {
          uVar5 = 4;
        }
        if (uVar5 != 0) {
          uVar5 = *(uint *)(&DAT_00dc4c24 + *(int *)(DAT_00dc4c20 + 4)) | uVar5;
          if (*(int *)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) == 0) {
            uVar5 = uVar5 | 4;
          }
          FUN_00798ed3(uVar5,0);
        }
        uVar3 = Ordinal_111();
        *(undefined4 *)(iVar6 + 0x36) = uVar3;
        return iVar2;
      }
      FUN_00742920(&DAT_00dc4c20,s_Bsocket__write__00874454);
      FUN_00742550(param_2,iVar4);
      FUN_007423e0(10);
      uVar5 = 0;
      if ((((&DAT_00dc4c24)[*(int *)(DAT_00dc4c20 + 4)] & 6) == 0) &&
         (iVar2 = (**(code **)(**(int **)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) + 0x2c))(),
         iVar2 == -1)) {
        uVar5 = 4;
      }
      if (uVar5 != 0) {
        uVar5 = *(uint *)(&DAT_00dc4c24 + *(int *)(DAT_00dc4c20 + 4)) | uVar5;
        if (*(int *)(&DAT_00dc4c48 + *(int *)(DAT_00dc4c20 + 4)) == 0) {
          uVar5 = uVar5 | 4;
        }
        FUN_00798ed3(uVar5,0);
      }
      local_8 = local_8 + iVar1;
    } while (local_8 != param_3);
  }
  return param_3;
}


