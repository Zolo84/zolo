// FUN_006f9d10 @ 6f9d10 size=53

void __fastcall FUN_006f9d10(int param_1)

{
  if (*(int *)(param_1 + 0x226) != 0) {
    FUN_006d4290(*(int *)(param_1 + 0x226));
  }
  if (*(undefined4 **)(param_1 + 0x226) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x226))(1);
  }
  *(undefined4 *)(param_1 + 0x226) = 0;
  return;
}


