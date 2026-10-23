// FUN_0070d430 @ 70d430 size=72

undefined4 __fastcall FUN_0070d430(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(int *)(param_1 + 0x125a) + 0x30))(*(undefined4 *)(param_1 + 0x24));
  if (cVar2 == '\0') {
    return 0;
  }
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


