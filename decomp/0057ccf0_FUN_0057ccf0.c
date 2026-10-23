// FUN_0057ccf0 @ 57ccf0 size=89

void __fastcall FUN_0057ccf0(int param_1)

{
  DWORD DVar1;
  HANDLE local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xbc4) != 0) {
    local_8 = DAT_00bd0558;
    local_4 = DAT_00bd0554;
    DVar1 = WaitForMultipleObjects(2,&local_8,0,0);
    while (DVar1 == 0) {
      FUN_0057cd50();
      DVar1 = WaitForMultipleObjects(2,&local_8,0,0);
    }
  }
  return;
}


