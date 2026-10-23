// FUN_004d2b20 @ 4d2b20 size=41

undefined4 __thiscall FUN_004d2b20(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    (**(code **)(*(int *)*puVar1 + 4))(param_2);
    puVar1 = (undefined4 *)puVar1[2];
  } while (puVar1 != (undefined4 *)0x0);
  return 0;
}


