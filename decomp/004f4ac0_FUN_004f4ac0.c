// FUN_004f4ac0 @ 4f4ac0 size=526

int * __fastcall FUN_004f4ac0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c08e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x1e);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004252e0(2);
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = (int)&PTR_LAB_007e3ac0;
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_004f1310();
  FUN_0053ea00(uVar2);
  puVar3 = operator_new(0x14);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pvVar4 = operator_new(0x14);
    local_4._0_1_ = 2;
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x48)) {
      default:
        iVar5 = FUN_0053e740(0xe2);
        break;
      case 2:
        iVar5 = FUN_0053e740(0x417);
        break;
      case 3:
        iVar5 = FUN_0053e740(0x418);
        break;
      case 4:
        iVar5 = FUN_0053e740(0x415);
        break;
      case 5:
        iVar5 = FUN_0053e740(0x416);
        break;
      case 6:
        iVar5 = FUN_0053e740(0x419);
        break;
      case 7:
        iVar5 = FUN_0053e740(0x41a);
        break;
      case 8:
        iVar5 = FUN_0053e740(0x41b);
        break;
      case 9:
        iVar5 = FUN_0053e740(0x41c);
        break;
      case 10:
        iVar5 = FUN_0053e740(0x41d);
      }
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    local_10 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((local_10 == (void *)0x0) || (iVar6 = FUN_0053e740(0x141), iVar6 == 0)) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar3[3] = iVar6;
    if (iVar5 == 0) {
      *puVar3 = &PTR_FUN_007e3878;
      puVar3[4] = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      puVar3[4] = iVar5;
      *puVar3 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar3);
  ExceptionList = local_10;
  return piVar1;
}


