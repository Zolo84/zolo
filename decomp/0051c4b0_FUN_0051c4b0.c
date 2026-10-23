// FUN_0051c4b0 @ 51c4b0 size=82

void __thiscall FUN_0051c4b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0050b140(param_2);
  if (iVar1 != 0) {
    FUN_0050a420(*(undefined4 *)(param_1 + 0x248));
    (**(code **)(*(int *)(*(int *)(param_1 + 0x248) + 0x117f4) + 0x18))(iVar1);
    FUN_0050a020(param_1);
    *(undefined1 *)(iVar1 + 0x2c) = 0;
    *(int *)(param_1 + 0x14a) = iVar1;
  }
  return;
}


