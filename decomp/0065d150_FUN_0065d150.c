// FUN_0065d150 @ 65d150 size=85

bool __thiscall FUN_0065d150(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x16) == '\0') &&
     (*(int *)(param_1 + 0x12) <= *(int *)(DAT_00893530 + 8))) {
    return true;
  }
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0x9f) {
    return true;
  }
  cVar1 = FUN_0042dd70(param_1 + 0x1a);
  return cVar1 != '\0';
}


