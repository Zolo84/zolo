// FUN_004a0910 @ 4a0910 size=173

bool __thiscall FUN_004a0910(int param_1,int param_2)

{
  char cVar1;
  
  if (((param_2 == 0) || (param_2 == 0xa3)) || (param_2 == 0x157)) {
    return false;
  }
  if ((&DAT_0089cad8)[param_2] == 0) {
    return false;
  }
  if (*(char *)(*(int *)((&DAT_0089cad8)[param_2] + 0x12da) + 0x3b38) == '\x01') {
    return false;
  }
  if (*(char *)(param_2 + 0xe8d6 + param_1) == '\0') {
    return false;
  }
  cVar1 = FUN_00586640();
  if (cVar1 == '\0') {
    return false;
  }
  if ((&DAT_0089cad8)[param_2] == 0) {
    return false;
  }
  if (param_2 == *(int *)(param_1 + 6)) {
    return false;
  }
  cVar1 = FUN_0042dd70(DAT_00893530 + 0x14);
  return cVar1 == '\0';
}


