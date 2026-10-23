// FUN_005e9c30 @ 5e9c30 size=349

void __fastcall FUN_005e9c30(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007ce6ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed428;
  param_1[2] = &PTR_LAB_007ed424;
  local_4 = 1;
  if (*(undefined4 **)((int)param_1 + 0xb2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xb2))(1);
  }
  puVar1 = *(undefined4 **)((int)param_1 + 0xbe);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_007ed41c;
    if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[1])(1);
    }
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
    }
    if ((undefined4 *)puVar1[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[3])(1);
    }
    if ((undefined4 *)puVar1[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[4])(1);
    }
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[5])(1);
    }
    FUN_00796cd8(puVar1);
  }
  puVar1 = *(undefined4 **)((int)param_1 + 0xc2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_007ed41c;
    if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[1])(1);
    }
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
    }
    if ((undefined4 *)puVar1[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[3])(1);
    }
    if ((undefined4 *)puVar1[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[4])(1);
    }
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[5])(1);
    }
    FUN_00796cd8(puVar1);
  }
  if (*(undefined4 **)((int)param_1 + 0xc6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xc6))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xb6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xb6))(1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00415250();
  local_4 = 2;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


