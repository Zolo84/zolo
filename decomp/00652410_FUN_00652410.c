// FUN_00652410 @ 652410 size=96

bool __thiscall FUN_00652410(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x28))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_2 + 0x10))();
    if (*(int *)(iVar2 + 0x2b2) != 0) {
      return false;
    }
  }
  if (DAT_00d610dd != '\0') {
    return true;
  }
  cVar1 = FUN_0052b370(param_2);
  if (cVar1 == '\x01') {
    return true;
  }
  return param_2[0x92] == param_1;
}


