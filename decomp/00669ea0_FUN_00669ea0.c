// FUN_00669ea0 @ 669ea0 size=125

undefined4 __fastcall FUN_00669ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 + 4;
  iVar1 = FUN_00428ee0(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -0x14;
  }
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x22) + 4))();
  if (iVar1 != 0) {
    FUN_00428ee0(param_1);
    iVar1 = FUN_00500d50();
    iVar2 = FUN_00428ee0(param_1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -0x14;
    }
    iVar2 = *(int *)(iVar2 + 0x26);
    while( true ) {
      if (iVar2 == 0) {
        return 1;
      }
      iVar3 = FUN_00500d50();
      if (iVar3 != iVar1) break;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  return 0;
}


