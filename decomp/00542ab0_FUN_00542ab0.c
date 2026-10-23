// FUN_00542ab0 @ 542ab0 size=202

int * FUN_00542ab0(undefined4 param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c34eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = operator_new(0x1e);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    *(undefined1 *)(piVar3 + 7) = 0;
    piVar3[3] = (int)&PTR_LAB_007e3ac0;
    *piVar3 = (int)&PTR_FUN_007e3a28;
    piVar3[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  psVar5 = *(short **)(param_2 + 4);
  while (psVar5 != (short *)0x0) {
    puVar4 = operator_new(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      psVar2 = *(short **)(psVar5 + 3);
      sVar1 = *psVar5;
      puVar4[1] = 4;
      puVar4[2] = 0;
      puVar4[3] = (int)sVar1;
      *puVar4 = &PTR_FUN_007e3978;
      psVar5 = psVar2;
    }
    (**(code **)(*piVar3 + 0x84))(puVar4);
  }
  ExceptionList = local_c;
  return piVar3;
}


