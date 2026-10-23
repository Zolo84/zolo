// FUN_0049a190 @ 49a190 size=155

void __fastcall FUN_0049a190(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bde1b;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 8);
  ExceptionList = &local_c;
  pvVar3 = operator_new(0x10);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_00449290(&stack0x00000004);
    uVar4 = FUN_0049a7c0();
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + 10) = uVar4;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  ExceptionList = local_c;
  return;
}


