// FUN_0051d5c0 @ 51d5c0 size=58

undefined4 __fastcall FUN_0051d5c0(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x22e) + 8))();
  if (cVar1 == '\0') {
    cVar1 = FUN_0042ddd0(param_1 + 0x228);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


