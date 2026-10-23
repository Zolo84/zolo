// FUN_005f25e0 @ 5f25e0 size=106

int __thiscall FUN_005f25e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_005f24b0();
  cVar1 = (**(code **)(**(int **)(param_1 + 0x2e) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x2e) + 0x1b2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x32) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x32) + 0x1b2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x36) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x36) + 0x1b2;
  }
  FUN_005f2550();
  return iVar2;
}


