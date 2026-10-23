// FUN_0047ba60 @ 47ba60 size=344

undefined4 __thiscall FUN_0047ba60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = FUN_00428ee0(*(int *)(param_2 + 4) + 0xe);
  if ((iVar1 != 0) && (iVar1 = iVar1 + -8, iVar1 != 0)) {
    iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x14);
    if (iVar2 < 2) {
      if (iVar2 == 1) {
        (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x28))(&param_2,iVar1);
        if ((param_2 != 0) && (param_2 = *(int *)(param_2 + 4), param_2 != 0)) {
          (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x18))(iVar1);
          iVar2 = param_2;
          FUN_00492010(iVar1,param_2);
          FUN_0049a5f0(iVar1,iVar2);
        }
      }
      else if (iVar2 == -999) {
        (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x18))(iVar1);
        FUN_0049a5a0(iVar1);
      }
      else if (iVar2 == -1) {
        (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x28))(&param_2,iVar1);
        if ((param_2 != 0) && (param_2 = *(int *)(param_2 + 8), param_2 != 0)) {
          (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x18))(iVar1);
          iVar2 = param_2;
          FUN_00492010(iVar1,param_2);
          FUN_0049a690(iVar1,iVar2);
        }
      }
    }
    else if (iVar2 == 999) {
      (**(code **)(*(int *)(param_1 + 0x3b7a) + 0x18))(iVar1);
      FUN_0049a550(iVar1);
    }
    if ((param_1 == DAT_00d0ca90) && (*(int *)(DAT_00d0ca90 + 0x21e62) == 0xf)) {
      FUN_00635e60();
    }
  }
  return 3;
}


