// FUN_0074b2e0 @ 74b2e0 size=56

undefined4 __thiscall FUN_0074b2e0(int param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return 4;
  }
  cVar1 = FUN_00758e90(param_2);
  if (cVar1 == '\0') {
    return 8;
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
  return 0;
}


