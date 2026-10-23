// FUN_0043fe20 @ 43fe20 size=307

undefined4 * __thiscall FUN_0043fe20(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bafce;
  local_c = ExceptionList;
  if (param_4 == '\0') {
    ExceptionList = &local_c;
    puVar4 = operator_new(0xb6);
    local_4 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00433570(param_2,param_3,0xffffffff);
      *(undefined4 *)((int)puVar4 + 0xb2) = 0;
      *puVar4 = &PTR_FUN_007e46e8;
      puVar4[2] = &PTR_LAB_007e46e4;
      *(undefined ***)((int)puVar4 + 0x7e) = &PTR_LAB_007e46e0;
      goto LAB_0043feec;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar4 = operator_new(0xb6);
    local_4 = 1;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00433570(param_2,param_3,0xffffffff);
      *(undefined4 *)((int)puVar4 + 0xb2) = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      *puVar4 = &PTR_FUN_007e475c;
      puVar4[2] = &PTR_LAB_007e4758;
      *(undefined ***)((int)puVar4 + 0x7e) = &PTR_LAB_007e4754;
      FUN_00415b90(1);
      goto LAB_0043feec;
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_0043feec:
  local_4 = 0xffffffff;
  FUN_00415d30(*(undefined4 *)(param_1 + 0x14));
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  puVar5 = operator_new(0xe);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = puVar4;
    puVar5[1] = iVar2;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(undefined4 **)(iVar1 + 8) = puVar5;
  *(int *)(iVar1 + 0xc) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(iVar1 + 4) = puVar5;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar5;
  }
  ExceptionList = local_c;
  return puVar4;
}


