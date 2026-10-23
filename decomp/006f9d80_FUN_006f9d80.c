// FUN_006f9d80 @ 6f9d80 size=64

undefined4 * __fastcall FUN_006f9d80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x29a;
  uVar1 = FUN_0042b6c9(s_BAN_TEXT_0086fbb4);
  uVar2 = FUN_0042b6c9(s_BAN_HEADER_0086fba8);
  FUN_0043dce0(uVar2,uVar1,uVar3);
  *param_1 = &PTR_FUN_007f832c;
  param_1[2] = &PTR_LAB_007f8328;
  return param_1;
}


