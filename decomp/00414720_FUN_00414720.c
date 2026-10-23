// FUN_00414720 @ 414720 size=69

void __thiscall FUN_00414720(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)(*param_1 + 0x28))(*param_2);
    (**(code **)(*param_1 + 0x24))(*(undefined4 *)((int)param_2 + 0xe));
    (**(code **)(*param_1 + 0x24))(*(undefined4 *)((int)param_2 + 6));
    (**(code **)(*param_1 + 0x24))(*(undefined4 *)((int)param_2 + 10));
    FUN_00796cd8(param_2);
  }
  return;
}


