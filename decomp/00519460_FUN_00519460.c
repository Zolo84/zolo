// FUN_00519460 @ 519460 size=53

undefined4 * __fastcall FUN_00519460(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x10;
  uVar1 = FUN_00415be0(0x10);
  uVar2 = FUN_00415bd0(uVar1);
  FUN_00414ed0(uVar2,uVar1,uVar3);
  *param_1 = &PTR_FUN_007e8974;
  param_1[2] = &PTR_LAB_007e8970;
  return param_1;
}


