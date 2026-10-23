// FUN_0070f220 @ 70f220 size=34

void __fastcall FUN_0070f220(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x1272); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    FUN_0070d4e0(*puVar1);
  }
  return;
}


