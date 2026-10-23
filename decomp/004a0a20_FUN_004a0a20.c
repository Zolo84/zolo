// FUN_004a0a20 @ 4a0a20 size=86

bool __thiscall FUN_004a0a20(int param_1,int param_2)

{
  char cVar1;
  
  if (((param_2 == 0) || (param_2 == 0xa3)) || (param_2 == 0x157)) {
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


