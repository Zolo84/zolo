// FUN_007535d0 @ 7535d0 size=13

undefined4 * __fastcall FUN_007535d0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_007f0c98;
  }
  return puVar1;
}


