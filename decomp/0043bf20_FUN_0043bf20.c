// FUN_0043bf20 @ 43bf20 size=234

void __fastcall FUN_0043bf20(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bace0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4510;
  param_1[2] = &PTR_LAB_007e450c;
  local_4 = 0;
  FUN_0040fe60(param_1);
  piVar2 = *(int **)((int)param_1 + 0x2e);
  while( true ) {
    if (piVar2[4] != 0) {
      FUN_00796cd8(piVar2[4]);
      FUN_00796cd8(piVar2[5]);
    }
    piVar1 = (int *)*piVar2;
    if (piVar1 == (int *)0x0) break;
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  if (*(undefined4 **)((int)param_1 + 0x3a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x3a))(1);
  }
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x2a));
  if (*(undefined4 **)((int)param_1 + 0x6e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x66) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x66))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x6a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6a))(1);
  }
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


