// FUN_0053a726 @ 53a726 size=94

void __fastcall FUN_0053a726(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x158; local_8 = local_8 + 1) {
    puVar1 = *(undefined4 **)(param_1 + 0x277e + local_8 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


