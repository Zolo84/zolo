// FUN_0074e680 @ 74e680 size=80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074e680(LPVOID param_1)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  int iVar3;
  
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_0074e330,param_1,0
                        ,(LPDWORD)((int)param_1 + 0x192));
  *(HANDLE *)((int)param_1 + 0x18e) = pvVar2;
  uVar1 = _DAT_00d4c328;
  if (pvVar2 == (HANDLE)0x0) {
    iVar3 = FUN_0042b6c9(s_EN_NOT_CREATE_CONNECT_THREAD_008748a0);
    if (iVar3 != 0) {
      FUN_004367a0(iVar3,uVar1);
    }
  }
  return;
}


