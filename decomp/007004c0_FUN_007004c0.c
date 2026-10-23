// FUN_007004c0 @ 7004c0 size=73

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007004c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1[1] + 10) == _DAT_0088f22a) && (*(short *)(param_1[1] + 8) == DAT_0088f228))
  {
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 == 0xa0) {
      uVar2 = FUN_00700510(param_1);
      return uVar2;
    }
  }
  return 0;
}


