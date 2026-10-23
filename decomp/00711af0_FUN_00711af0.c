// FUN_00711af0 @ 711af0 size=45

undefined4 __fastcall FUN_00711af0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1272);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    cVar2 = FUN_007119e0(*puVar1);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  return 1;
}


