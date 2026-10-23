// FUN_006a4ee0 @ 6a4ee0 size=95

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a4ee0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)*param_3)();
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  FUN_006a4f40();
  *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x94);
  if (*(float *)(param_1 + 0x94) < _DAT_007e67ec) {
    *(undefined4 *)(param_1 + 0x98) = 0x459c4000;
  }
  FUN_006a2900();
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  *(undefined4 *)(param_1 + 0x44) = 0x41a00000;
  return;
}


