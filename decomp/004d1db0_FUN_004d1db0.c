// FUN_004d1db0 @ 4d1db0 size=61

undefined4 __thiscall FUN_004d1db0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x30) + 0x20))(param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_00419170(param_2,param_3);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


