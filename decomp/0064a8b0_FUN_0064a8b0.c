// FUN_0064a8b0 @ 64a8b0 size=1224

void __fastcall FUN_0064a8b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007d2b86;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_007f04e0;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007f04d8;
  *(undefined4 *)((int)param_1 + 0xeU) = &PTR_LAB_007f04c4;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007f04c0;
  param_1[0x4f21] = &PTR_FUN_007f04bc;
  param_1[0x4f22] = &PTR_LAB_007f04b8;
  local_4 = 6;
  piVar7 = *(int **)((int)param_1 + 0x13d76);
  while (piVar7 != (int *)0x0) {
    piVar1 = (int *)piVar7[2];
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    FUN_00796cd8(piVar7);
    piVar7 = piVar1;
  }
  *(undefined4 *)((int)param_1 + 0x13d76) = 0;
  *(undefined4 *)((int)param_1 + 0x13d7a) = 0;
  *(undefined4 *)((int)param_1 + 0x13d7e) = 0;
  if ((undefined4 *)param_1[0x4f61] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f61])(1);
  }
  if ((undefined4 *)param_1[0x4f62] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f62])(1);
  }
  piVar7 = param_1 + 0x4f31;
  iVar5 = 10;
  do {
    if ((undefined4 *)piVar7[-10] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar7[-10])(1);
    }
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((undefined4 *)param_1[0x4f3b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f3b])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21f8a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21f8a))(1);
  }
  if ((undefined4 *)param_1[0x4f50] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f50])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21e4a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21e4a))(1);
  }
  FUN_006d43c0(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x4f21));
  FUN_0040fe60(-(uint)(param_1 != (undefined4 *)0x0) & (int)param_1 + 0xeU);
  FUN_0040fe60(*(undefined4 *)(DAT_00d13360 + 0x60));
  piVar7 = (int *)param_1[0x4f52];
  while (piVar7 != (int *)0x0) {
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    piVar7 = (int *)param_1[0x4f52];
  }
  if (*(undefined4 **)((int)param_1 + 0x13d16) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x13d16))(1);
  }
  if ((undefined4 *)param_1[0x4f6b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f6b])(1);
  }
  if ((undefined4 *)param_1[0x4f6c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f6c])(1);
  }
  if ((undefined4 *)param_1[0x4f6e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f6e])(1);
  }
  if ((undefined4 *)param_1[0x4f6d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f6d])(1);
  }
  if ((undefined4 *)param_1[0x4f6f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f6f])(1);
  }
  if ((undefined4 *)param_1[0x4f63] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f63])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x22196) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x22196))(1);
  }
  if ((undefined4 *)param_1[0x4f68] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f68])(1);
  }
  if ((undefined4 *)param_1[0x4f67] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f67])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x13d06) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x13d06))(1);
  }
  iVar5 = param_1[0x4f23];
  if (iVar5 != 0) {
    FUN_00643290();
    FUN_00796cd8(iVar5);
  }
  DAT_00d0ca90 = 0;
  piVar7 = param_1 + 0x8779;
  iVar5 = 0x18;
  do {
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((undefined4 *)param_1[0x4f4c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f4c])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21e56) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21e56))(1);
  }
  (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x14))();
  if (*(undefined4 **)((int)param_1 + 0x21e5a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21e5a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21dc6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21dc6))(1);
  }
  if ((undefined4 *)param_1[0x8791] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x8791])(1);
  }
  puVar6 = (undefined4 *)0x0;
  puVar2 = *(undefined4 **)((int)param_1 + 0x21e7e);
  while (puVar2 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar6;
  }
  *(undefined4 **)((int)param_1 + 0x21e7e) = puVar6;
  *(undefined4 **)((int)param_1 + 0x21e82) = puVar6;
  *(undefined4 **)((int)param_1 + 0x21e86) = puVar6;
  (**(code **)(*(int *)((int)param_1 + 0x21e7a) + 0x14))();
  if ((undefined4 *)param_1[0x4f3c] != puVar6) {
    (*(code *)**(undefined4 **)param_1[0x4f3c])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21f7e) != puVar6) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21f7e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21f82) != puVar6) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21f82))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21f86) != puVar6) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x21f86))(1);
  }
  puVar2 = *(undefined4 **)((int)param_1 + 0x13d6a);
  if (puVar2 != puVar6) {
    FUN_00642b80();
    FUN_00796cd8(puVar2);
  }
  if ((undefined4 *)param_1[0x4f64] != puVar6) {
    (*(code *)**(undefined4 **)param_1[0x4f64])(1);
  }
  if ((undefined4 *)param_1[0x4f65] != puVar6) {
    (*(code *)**(undefined4 **)param_1[0x4f65])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x21dce) != puVar6) {
    FUN_007a77fa(*(undefined4 **)((int)param_1 + 0x21dce));
  }
  if (*(undefined4 **)((int)param_1 + 0x21dd2) != puVar6) {
    FUN_007a77fa(*(undefined4 **)((int)param_1 + 0x21dd2));
  }
  *(undefined ***)((int)param_1 + 0x221a2) = &PTR_LAB_007ef1f8;
  puVar2 = *(undefined4 **)((int)param_1 + 0x221a6);
  while (puVar2 != puVar6) {
    puVar3 = (undefined4 *)puVar2[2];
    FUN_00796cd8(puVar2);
    puVar2 = puVar3;
  }
  *(undefined4 **)((int)param_1 + 0x221a6) = puVar6;
  *(undefined4 **)((int)param_1 + 0x221aa) = puVar6;
  *(undefined4 **)((int)param_1 + 0x221ae) = puVar6;
  uVar4 = local_4 >> 8;
  local_4 = CONCAT31((int3)uVar4,4);
  FUN_007a8882((int)param_1 + 0x21ec2,0x12,10,FUN_00499530);
  param_1[0x87ac] = &PTR_LAB_007e6edc;
  puVar2 = (undefined4 *)param_1[0x87ad];
  while (puVar2 != puVar6) {
    puVar3 = *(undefined4 **)((int)puVar2 + 10);
    FUN_00796cd8(puVar2);
    puVar2 = puVar3;
  }
  param_1[0x87ad] = puVar6;
  param_1[0x87ae] = puVar6;
  param_1[0x87af] = puVar6;
  *(int *)((int)param_1 + 0x21e7a) = (int)&PTR_LAB_007f09e0;
  puVar2 = *(undefined4 **)((int)param_1 + 0x21e7e);
  while (puVar2 != puVar6) {
    puVar3 = (undefined4 *)puVar2[2];
    FUN_00796cd8(puVar2);
    puVar2 = puVar3;
  }
  *(undefined4 **)((int)param_1 + 0x21e7e) = puVar6;
  *(undefined4 **)((int)param_1 + 0x21e82) = puVar6;
  *(undefined4 **)((int)param_1 + 0x21e86) = puVar6;
  *(undefined ***)((int)param_1 + 0x13d72) = &PTR_LAB_007f09b0;
  puVar2 = *(undefined4 **)((int)param_1 + 0x13d76);
  while (puVar2 != puVar6) {
    puVar3 = (undefined4 *)puVar2[2];
    FUN_00796cd8(puVar2);
    puVar2 = puVar3;
  }
  *(undefined4 **)((int)param_1 + 0x13d76) = puVar6;
  *(undefined4 **)((int)param_1 + 0x13d7a) = puVar6;
  *(undefined4 **)((int)param_1 + 0x13d7e) = puVar6;
  local_4 = local_4 & 0xffffff00;
  FUN_004161c0();
  local_4 = 0xffffffff;
  FUN_00444340();
  ExceptionList = pvStack_c;
  return;
}


