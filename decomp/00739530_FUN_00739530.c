// FUN_00739530 @ 739530 size=64

undefined4 __fastcall FUN_00739530(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    cVar1 = FUN_0044beb0();
    if (cVar1 == *(char *)(param_1 + 0x12)) {
      return 1;
    }
  }
  else if ((&DAT_0089cad8)[*(int *)(param_1 + 0x14)] != 0) {
    cVar1 = FUN_0044beb0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


