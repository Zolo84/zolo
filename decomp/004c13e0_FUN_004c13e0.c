// FUN_004c13e0 @ 4c13e0 size=622

int * __fastcall FUN_004c13e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bee22;
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
  puVar2 = operator_new(0x14);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x14);
    local_4._0_1_ = 2;
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      switch(*param_1) {
      case 0:
        iVar4 = FUN_0053e740(0x475);
        break;
      case 1:
        iVar4 = FUN_0053e740(0x476);
        break;
      case 2:
        iVar4 = FUN_0053e740(0x477);
        break;
      case 3:
        iVar4 = FUN_0053e740(0x478);
        break;
      case 4:
        iVar4 = FUN_0053e740(0x479);
        break;
      case 5:
        iVar4 = FUN_0053e740(0x47a);
        break;
      default:
        iVar4 = FUN_0053e740(0x47b);
      }
    }
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    pvVar3 = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((pvVar3 == (void *)0x0) || (iVar5 = FUN_0053e740(0x141), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    if (iVar4 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      puVar2[4] = iVar4;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar2);
  puVar2 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar4 = FUN_0054f410();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 6;
    pvVar3 = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    if ((pvVar3 == (void *)0x0) || (iVar5 = FUN_0053e740(0xfd), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    }
    puVar2[3] = iVar5;
    puVar6 = puVar2;
    if (iVar4 == 0) {
      *puVar2 = &PTR_FUN_007e3878;
      puVar2[4] = 0;
    }
    else {
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      puVar2[4] = iVar4;
      *puVar2 = &PTR_FUN_007e3878;
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar6);
  ExceptionList = puVar2;
  return piVar1;
}


