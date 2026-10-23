// FUN_0079947b @ 79947b size=66

void __fastcall FUN_0079947b(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00799302(0);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


