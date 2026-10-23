// FUN_0062c4d0 @ 62c4d0 size=275

undefined4 __thiscall FUN_0062c4d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0xee) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b870(1);
    return uVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0xf2) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b870(2);
    return uVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0xf6) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b870(3);
    return uVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0xfa) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b870(0);
    return uVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0xfe) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b870(5);
    return uVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x102) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049b870(4);
    return uVar2;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0xea) + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0042b6c9(s_AUTO_TRADE_RESET_BUTTON_TOOLTIP__00860884);
    return uVar2;
  }
  return 0;
}


