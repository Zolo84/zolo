// FUN_006583f0 @ 6583f0 size=69

void __thiscall
FUN_006583f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5
            )

{
  if (*(undefined4 **)(param_1 + 0x13d40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x13d40))(1);
  }
  *(undefined4 *)(param_1 + 0x13d40) = param_2;
  *(undefined4 *)(param_1 + 0x13d36) = param_3;
  *(undefined4 *)(param_1 + 0x13d3a) = param_4;
  *(undefined2 *)(param_1 + 0x13d3e) = param_5;
  FUN_006483f0();
  return;
}


