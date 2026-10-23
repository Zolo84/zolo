// FUN_004a7a50 @ 4a7a50 size=45

undefined4 __fastcall FUN_004a7a50(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x14))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x18))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1c))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


