// FUN_004429f0 @ 4429f0 size=272

int * FUN_004429f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb25e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x1e);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 2;
    piVar1[2] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = (int)&PTR_LAB_007e3ac0;
    *piVar1 = (int)&PTR_FUN_007e3a28;
    piVar1[3] = (int)&PTR_LAB_007e39f8;
  }
  puVar2 = operator_new(0x14);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    goto LAB_00442ad7;
  }
  iVar3 = FUN_0054f410();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_LAB_007e38f8;
  local_4._0_1_ = 1;
  local_10 = operator_new(0x14);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_10 == (void *)0x0) {
LAB_00442aad:
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0053e740(0xfd);
    if (iVar4 == 0) goto LAB_00442aad;
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  }
  puVar2[3] = iVar4;
  if (iVar3 == 0) {
    *puVar2 = &PTR_FUN_007e3878;
    puVar2[4] = 0;
  }
  else {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    puVar2[4] = iVar3;
    *puVar2 = &PTR_FUN_007e3878;
  }
LAB_00442ad7:
  local_4 = 0xffffffff;
  (**(code **)(*piVar1 + 0x84))(puVar2);
  ExceptionList = local_10;
  return piVar1;
}


