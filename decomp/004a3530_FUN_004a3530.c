// FUN_004a3530 @ 4a3530 size=73

undefined4 __thiscall FUN_004a3530(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  param_1 = param_1 + param_2 * 0x12;
  cVar1 = (**(code **)(*(int *)(param_1 + 0x55c0) + 0x24))(param_3);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(int *)(param_1 + 0x6970) + 0x24))(param_3);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}


