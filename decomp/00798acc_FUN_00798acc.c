// FUN_00798acc @ 798acc size=126

undefined4 __fastcall FUN_00798acc(undefined4 param_1)

{
  LONG LVar1;
  
  if (DAT_00dc4f90 != 2) {
    if (DAT_00dc4f90 == 0) {
      LVar1 = InterlockedExchange(&DAT_00dc4f90,1);
      if (LVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00dc4f78);
        FUN_007a63e8(&LAB_00798b4a);
        DAT_00dc4f90 = 2;
        goto LAB_00798b3e;
      }
      if (LVar1 == 2) {
        DAT_00dc4f90 = 2;
      }
    }
    while (DAT_00dc4f90 == 1) {
      Sleep(1);
    }
    if (DAT_00dc4f90 != 2) {
      return param_1;
    }
  }
LAB_00798b3e:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00dc4f78);
  return param_1;
}


