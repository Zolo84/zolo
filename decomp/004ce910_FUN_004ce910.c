// FUN_004ce910 @ 4ce910 size=52

undefined4 * __thiscall FUN_004ce910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *(undefined4 *)*param_1;
  *param_2 = uVar1;
  return param_2;
}


