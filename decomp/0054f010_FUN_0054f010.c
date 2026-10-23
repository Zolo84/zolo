// FUN_0054f010 @ 54f010 size=42

undefined4 * __thiscall FUN_0054f010(undefined4 *param_1,undefined2 *param_2)

{
  FUN_0053e740(0x523);
  *(undefined2 *)(param_1 + 5) = *param_2;
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)(param_2 + 1);
  *param_1 = &PTR_FUN_007e3ba4;
  return param_1;
}


