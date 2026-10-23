// FUN_006bbd10 @ 6bbd10 size=142

void __fastcall FUN_006bbd10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x56);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


