// FUN_006d4e30 @ 6d4e30 size=607

void __fastcall FUN_006d4e30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d945d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f75a8;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007f75a0;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_LAB_007f758c;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007f7588;
  param_1[0x4f21] = &PTR_FUN_007f7584;
  param_1[0x4f22] = &PTR_LAB_007f7580;
  param_1[0x8871] = &PTR_LAB_007f7550;
  local_4 = 5;
  if (*(undefined4 **)((int)param_1 + 0x2223a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2223a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x2223e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2223e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x2224e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2224e))(1);
  }
  iVar1 = *(int *)((int)param_1 + 0x2220e);
  if (iVar1 != 0) {
    local_4._0_1_ = 6;
    *(undefined ***)(iVar1 + 0x1c) = &PTR_LAB_007e3b70;
    FUN_00427ac0();
    local_4 = CONCAT31(local_4._1_3_,5);
    *(undefined ***)(iVar1 + 4) = &PTR_LAB_007e378c;
    iVar4 = *(int *)(iVar1 + 8);
    while (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 8);
      FUN_00796cd8(iVar4);
      iVar4 = iVar2;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    FUN_00796cd8(iVar1);
  }
  piVar5 = (int *)param_1[0x888b];
  while (piVar5 != (int *)0x0) {
    piVar3 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar3;
  }
  param_1[0x888b] = 0;
  param_1[0x888c] = 0;
  param_1[0x888d] = 0;
  param_1[0x888a] = &PTR_LAB_007f7a4c;
  iVar1 = param_1[0x888b];
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  param_1[0x888b] = 0;
  param_1[0x888c] = 0;
  param_1[0x888d] = 0;
  *(undefined ***)((int)param_1 + 0x22216) = &PTR_LAB_007f7a7c;
  iVar1 = *(int *)((int)param_1 + 0x2221a);
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  *(undefined4 *)((int)param_1 + 0x2221a) = 0;
  *(undefined4 *)((int)param_1 + 0x2221e) = 0;
  *(undefined4 *)((int)param_1 + 0x22222) = 0;
  param_1[0x887a] = &PTR_LAB_007e378c;
  iVar1 = param_1[0x887b];
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  param_1[0x887b] = 0;
  param_1[0x887c] = 0;
  param_1[0x887d] = 0;
  *(undefined ***)((int)param_1 + 0x221d6) = &PTR_LAB_007f7aac;
  iVar1 = *(int *)((int)param_1 + 0x221da);
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  *(undefined4 *)((int)param_1 + 0x221da) = 0;
  puVar6 = (undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x8871));
  *(undefined4 *)((int)param_1 + 0x221de) = 0;
  *(undefined4 *)((int)param_1 + 0x221e2) = 0;
  *puVar6 = &PTR_LAB_007f7adc;
  iVar1 = puVar6[1];
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  local_4 = 0xffffffff;
  FUN_0064a8b0();
  ExceptionList = pvStack_c;
  return;
}


