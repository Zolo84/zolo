// FUN_004e38a0 @ 4e38a0 size=863

void __fastcall FUN_004e38a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c0005;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_007e8008;
  param_1[2] = &PTR_LAB_007e8004;
  param_1[3] = &PTR_LAB_007e7fec;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_FUN_007e7fe4;
  local_4 = 7;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(3);
  }
  FUN_00796cd8(param_1[0xa6]);
  if (*(undefined4 **)((int)param_1 + 0x45a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x45a))(1);
  }
  if ((*(char *)(param_1 + 300) != '\0') &&
     (*(undefined4 **)((int)param_1 + 0x432) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x432))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x436) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x436))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x43a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x43a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x43e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x43e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x442) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x442))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x446) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x446))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x45e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x45e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x44a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x44a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x44e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x44e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x452) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x452))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x456) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x456))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x1a2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1a2))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x1a6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1a6))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x1c2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x1c2))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x422) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x422))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x42e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x42e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x42a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x42a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x426) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x426))(1);
  }
  FUN_00796cd8(param_1[0xe9]);
  piVar4 = (int *)((int)param_1 + 0x1ca);
  iVar3 = 10;
  do {
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1[6] != 0) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = (int)&DAT_008eff90;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(undefined4 **)((int)param_1 + 0x46a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x46a))(1);
  }
  *(undefined ***)((int)param_1 + 0x496) = &PTR_LAB_007e378c;
  iVar3 = *(int *)((int)param_1 + 0x49a);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x49a) = 0;
  *(undefined4 *)((int)param_1 + 0x49e) = 0;
  *(undefined4 *)((int)param_1 + 0x4a2) = 0;
  *(undefined ***)((int)param_1 + 0x16e) = &PTR_LAB_007e3ff0;
  iVar3 = *(int *)((int)param_1 + 0x172);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x172) = 0;
  *(undefined4 *)((int)param_1 + 0x176) = 0;
  *(undefined4 *)((int)param_1 + 0x17a) = 0;
  param_1[0x56] = &PTR_LAB_007e4b04;
  iVar3 = param_1[0x57];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined ***)((int)param_1 + 0x146) = &PTR_LAB_007e3ff0;
  iVar3 = *(int *)((int)param_1 + 0x14a);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x14a) = 0;
  *(undefined4 *)((int)param_1 + 0x14e) = 0;
  *(undefined4 *)((int)param_1 + 0x152) = 0;
  param_1[0xc] = &PTR_LAB_007e8084;
  iVar3 = param_1[0xd];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e8054;
  iVar3 = *(int *)((int)param_1 + 0x1e);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00428200();
  local_4 = 8;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


