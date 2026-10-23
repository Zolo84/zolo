// FUN_00411cfe @ 411cfe size=105

void __fastcall FUN_00411cfe(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    puVar1 = *(undefined4 **)(param_1 + 0x14 + local_8 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 0x14 + local_8 * 4) = 0;
  }
  return;
}


