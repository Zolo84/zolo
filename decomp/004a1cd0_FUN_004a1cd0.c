// FUN_004a1cd0 @ 4a1cd0 size=190

bool __thiscall FUN_004a1cd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return false;
  }
  cVar2 = FUN_00584e20(param_3);
  if (cVar2 == '\0') {
    return false;
  }
  iVar1 = *(int *)(param_1 + 6);
  iVar3 = FUN_00584c90();
  if (iVar3 != iVar1) {
    return false;
  }
  if (*(char *)(*(int *)(param_1 + 0x12da) + 0x32 + param_3 * 0x2c) != '\0') {
    return false;
  }
  if (((param_3 == 0) || (param_3 == 0xa3)) || (param_3 == 0x157)) {
    return false;
  }
  if ((&DAT_0089cad8)[param_3] == 0) {
    return false;
  }
  if (param_3 == *(int *)(param_1 + 6)) {
    return false;
  }
  cVar2 = FUN_0042dd70(DAT_00893530 + 0x14);
  return cVar2 == '\0';
}


