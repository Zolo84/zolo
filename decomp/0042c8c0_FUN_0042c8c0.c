// FUN_0042c8c0 @ 42c8c0 size=184

void __thiscall FUN_0042c8c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007ba0db;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 8);
  ExceptionList = &local_10;
  pvVar3 = operator_new(0xe);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_0042c980(param_2,iVar1,0);
  }
  *(undefined4 *)(param_1 + 8) = local_24;
  iVar2 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  }
  else {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  }
  ExceptionList = local_10;
  return;
}


