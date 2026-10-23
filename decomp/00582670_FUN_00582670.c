// FUN_00582670 @ 582670 size=50

undefined4 * __fastcall FUN_00582670(undefined4 *param_1)

{
  HANDLE hMutex;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_007eaeb4;
  hMutex = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,s_PatternPlayer_Mutex_00857424);
  *(HANDLE *)((int)param_1 + 0x12) = hMutex;
  ReleaseMutex(hMutex);
  return param_1;
}


