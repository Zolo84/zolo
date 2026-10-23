// FUN_00645bc0 @ 645bc0 size=103

undefined * __fastcall FUN_00645bc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  DAT_00d0b18c = 0;
  iVar1 = FUN_00428ee0(param_1 + 0xb8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -8;
  }
  if ((iVar1 != 0) && ((&DAT_0089cad8)[*(int *)(param_1 + 0xbe)] != 0)) {
    uVar2 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(param_1 + 0xbe)] + 0xe) + 0xc))();
    uVar3 = FUN_0042b6c9(s_JOIN_ROLL_008661ec);
    FUN_007a630a(&DAT_00d0b18c,uVar3,uVar2);
  }
  return &DAT_00d0b18c;
}


