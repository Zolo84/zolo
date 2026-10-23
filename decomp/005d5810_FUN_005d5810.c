// FUN_005d5810 @ 5d5810 size=136

void __fastcall FUN_005d5810(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cd6c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ecc88;
  param_1[2] = &PTR_LAB_007ecc84;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ecc80;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0xc6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xc6))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xc2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xc2))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xca) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xca))(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


