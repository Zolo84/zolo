// FUN_00593e90 @ 593e90 size=111

void __thiscall FUN_00593e90(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  for (iVar2 = *(int *)(param_1 + 0x28); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*(int *)*puVar1 + 0x18))();
  DAT_00bda0fc = 0;
  *(int *)(param_1 + 0x28) = param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*(int *)*puVar1 + 0x18))();
  DAT_00bda0fc = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  for (iVar2 = *(int *)(param_1 + 0x28); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*(int *)*puVar1 + 0x14))();
  DAT_00bda0fc = 1;
  return;
}


