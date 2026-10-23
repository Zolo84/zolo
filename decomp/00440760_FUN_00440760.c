// FUN_00440760 @ 440760 size=103

undefined4 __thiscall FUN_00440760(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(int *)param_1[0x21] + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = (**(code **)(*(int *)param_1[0x22] + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = (**(code **)(*(int *)param_1[0x23] + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x20))(param_2,param_3);
  return uVar2;
}


