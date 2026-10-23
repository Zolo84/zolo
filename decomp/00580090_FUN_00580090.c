// FUN_00580090 @ 580090 size=50

void __fastcall FUN_00580090(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\0') {
    WaitForSingleObjectEx(*(HANDLE *)(param_1 + 0xc2),0xffffffff,0);
    cVar1 = FUN_00580170();
    param_1[0xe] = cVar1;
    ReleaseMutex(*(HANDLE *)(param_1 + 0xc2));
  }
  return;
}


