// FUN_004254b0 @ 4254b0 size=42

undefined4 * __fastcall FUN_004254b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    puVar2[2] = 0;
    puVar2[1] = uVar1;
    *puVar2 = &PTR_LAB_007e38f8;
    return puVar2;
  }
  return (undefined4 *)0x0;
}


