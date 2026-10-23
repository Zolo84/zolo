// FUN_00523f70 @ 523f70 size=36

undefined4 __fastcall FUN_00523f70(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x22e) + 8))();
  if (cVar1 != '\0') {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x232);
}


