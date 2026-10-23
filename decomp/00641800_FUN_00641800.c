// FUN_00641800 @ 641800 size=335

void __fastcall FUN_00641800(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007d22c4;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_007efe58;
  param_1[2] = &PTR_LAB_007efe54;
  piVar3 = (int *)0x0;
  local_4 = 2;
  piVar2 = *(int **)((int)param_1 + 0x86);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  (**(code **)(*(int *)((int)param_1 + 0x82) + 0x14))();
  piVar2 = (int *)param_1[0x26];
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar3;
  }
  param_1[0x26] = piVar3;
  param_1[0x27] = piVar3;
  param_1[0x28] = piVar3;
  (**(code **)(param_1[0x25] + 0x14))();
  if (*(int **)((int)param_1 + 0xa6) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xa6))(1);
  }
  if (*(int **)((int)param_1 + 0xaa) != piVar3) {
    (**(code **)**(int **)((int)param_1 + 0xaa))(1);
  }
  param_1[0x25] = &PTR_LAB_007efea8;
  piVar2 = (int *)param_1[0x26];
  while (piVar2 != piVar3) {
    piVar1 = (int *)piVar2[2];
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  param_1[0x26] = piVar3;
  param_1[0x27] = piVar3;
  param_1[0x28] = piVar3;
  *(int *)((int)param_1 + 0x82) = (int)&PTR_LAB_007efed8;
  piVar2 = *(int **)((int)param_1 + 0x86);
  while (piVar2 != piVar3) {
    piVar1 = (int *)piVar2[2];
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(int **)((int)param_1 + 0x86) = piVar3;
  *(int **)((int)param_1 + 0x8a) = piVar3;
  *(int **)((int)param_1 + 0x8e) = piVar3;
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


