// FUN_00583210 @ 583210 size=60

void __thiscall FUN_00583210(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + (param_2 * 9 + 0x12) * 2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_007a77fa(*puVar2);
    puVar2 = puVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x20 + param_2 * 0x12) + 0x14))();
  return;
}


