// FUN_00577d70 @ 577d70 size=64

void __thiscall FUN_00577d70(int param_1,code *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(param_2);
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    (*param_2)(*puVar1);
    if (puVar1[1] != 0) {
      FUN_00579730(param_2);
    }
    if (puVar1[2] != 0) {
      FUN_00579730(param_2);
    }
  }
  return;
}


