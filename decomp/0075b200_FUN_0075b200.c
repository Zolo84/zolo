// FUN_0075b200 @ 75b200 size=202

int * __fastcall FUN_0075b200(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e018b;
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
  iVar4 = 0;
  do {
    if (*(char *)(param_1 + 0x1a + iVar4) != '\0') {
      pvVar2 = operator_new(0x14);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0075cba0(iVar4);
        uVar3 = FUN_0053e740(uVar3);
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar1 + 0x84))(uVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x6d);
  ExceptionList = local_c;
  return piVar1;
}


