// FUN_00526ba0 @ 526ba0 size=63

undefined4 __fastcall FUN_00526ba0(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x17c) != '\0') && (*(int *)(param_1 + 0x176) == 0)) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
    if ((iVar1 == 0) && (*(char *)(param_1 + 0x17b) == '\0')) {
      return 1;
    }
  }
  return 0;
}


