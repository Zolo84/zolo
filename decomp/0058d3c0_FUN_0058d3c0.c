// FUN_0058d3c0 @ 58d3c0 size=278

int * __fastcall FUN_0058d3c0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9a56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x1e);
  iVar5 = 0;
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004252e0(2);
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    *(undefined1 *)(piVar2 + 7) = 0;
    piVar2[3] = (int)&PTR_LAB_007e3ac0;
    *piVar2 = (int)&PTR_FUN_007e3a28;
    piVar2[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x1b4)) {
    do {
      puVar3 = operator_new(0x10);
      local_4 = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x1b8) <= iVar5)) {
          FUN_00405ad0(s_Array_bounds_violation__00857f9c);
          puVar4 = *(undefined4 **)(param_1 + 0x1b0);
        }
        else {
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1b0) + iVar5 * 4);
        }
        uVar1 = *puVar4;
        puVar3[1] = 5;
        puVar3[2] = 0;
        puVar3[3] = uVar1;
        *puVar3 = &PTR_FUN_007e48ac;
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x84))(puVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1b4));
  }
  ExceptionList = local_c;
  return piVar2;
}


