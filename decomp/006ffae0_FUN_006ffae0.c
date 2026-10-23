// FUN_006ffae0 @ 6ffae0 size=136

char __thiscall FUN_006ffae0(int param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 8) + 0x3b) != '\0') {
    return '\x01';
  }
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == 0xe) || (iVar1 == 0x11)) {
    return '\x03';
  }
  if (iVar1 != 0x16) {
    return '\0';
  }
  iVar1 = *(int *)(param_2[1] + 0xe);
  if (iVar1 == 0xe) {
    FUN_004388d0();
    return '\x01';
  }
  if (iVar1 == 10) {
    return '\x01';
  }
  return (-(iVar1 != 0xd) & 2U) + 1;
}


