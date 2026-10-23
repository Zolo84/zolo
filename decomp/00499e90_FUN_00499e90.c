// FUN_00499e90 @ 499e90 size=37

void FUN_00499e90(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    FUN_00459f50(*puVar1);
  }
  return;
}


