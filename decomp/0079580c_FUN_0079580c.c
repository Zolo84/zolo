// FUN_0079580c @ 79580c size=103

void __fastcall FUN_0079580c(char *param_1)

{
  char cVar1;
  BOOL BVar2;
  
  while (*param_1 != '\0') {
    BVar2 = PeekMessageA((LPMSG)&DAT_00dc2ca8,(HWND)0x0,0,0,0);
    if (BVar2 != 0) {
      BVar2 = GetMessageA((LPMSG)&DAT_00dc2ca8,(HWND)0x0,0,0);
      if (BVar2 != 0) {
        TranslateMessage((MSG *)&DAT_00dc2ca8);
        DispatchMessageA((MSG *)&DAT_00dc2ca8);
      }
    }
    cVar1 = FUN_0040e510();
    *param_1 = cVar1;
  }
  return;
}


