// FUN_005063e0 @ 5063e0 size=69

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005063e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(float *)(param_1 + 0xf0) != _DAT_007e4088) {
    uVar1 = __ftol();
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x232 + param_2 * 4);
}


