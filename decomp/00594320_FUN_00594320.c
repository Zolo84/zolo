// FUN_00594320 @ 594320 size=44

void __thiscall FUN_00594320(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  for (iVar2 = *(int *)(param_1 + 0x28); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*(int *)*puVar1 + 0x2c))(param_2,param_3);
  return;
}


