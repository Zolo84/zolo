// FUN_005dbbb0 @ 5dbbb0 size=57

undefined4 __thiscall FUN_005dbbb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004355a0(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x40))(param_2,param_3);
    return uVar2;
  }
  return 0;
}


