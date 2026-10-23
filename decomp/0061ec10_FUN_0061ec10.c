// FUN_0061ec10 @ 61ec10 size=118

int __thiscall FUN_0061ec10(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x70))();
  if (cVar1 != '\0') {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)((int)param_1 + 0x82) + 4))(param_2);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x86) + 4))(param_2);
  }
  if (*(char *)(*(int *)((int)param_1 + 0x82) + 0x96) != '\0') {
    (**(code **)(*param_1 + 0x60))();
    return iVar2;
  }
  if (*(char *)(*(int *)((int)param_1 + 0x86) + 0x96) != '\0') {
    (**(code **)(*param_1 + 100))();
  }
  return iVar2;
}


