// FUN_006a9550 @ 6a9550 size=60

void __thiscall FUN_006a9550(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x498))();
  if ((cVar1 != '\0') && (*(char *)(param_1[0x4f21] + 0xe) != '\0')) {
    FUN_00691c30(param_2);
  }
  (**(code **)(*(int *)((int)param_1 + 0xe86a) + 0x18))(param_2);
  return;
}


