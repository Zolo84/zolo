// FUN_0052ac00 @ 52ac00 size=37

void __fastcall FUN_0052ac00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    (**(code **)(*(int *)*puVar2 + 0x5c))();
    puVar2 = puVar1;
  }
  (**(code **)(*param_1 + 0x14))();
  return;
}


