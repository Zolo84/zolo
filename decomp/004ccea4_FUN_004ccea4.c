// FUN_004ccea4 @ 4ccea4 size=158

void __thiscall FUN_004ccea4(int *param_1,undefined4 param_2)

{
  char cVar1;
  int local_8;
  
  (**(code **)(*param_1 + 0x18))(param_2);
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    for (local_8 = 0; local_8 < 0x158; local_8 = local_8 + 1) {
      if ((int *)(&DAT_0089cad8)[local_8] != (int *)0x0) {
        (**(code **)(*(int *)(&DAT_0089cad8)[local_8] + 0xbc))(param_1);
      }
    }
    if (param_1 != (int *)0x0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}


