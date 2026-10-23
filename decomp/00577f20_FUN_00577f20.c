// FUN_00577f20 @ 577f20 size=43

void __fastcall FUN_00577f20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x38);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_00565c30(*puVar2);
    puVar2 = puVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x34) + 0x14))();
  return;
}


