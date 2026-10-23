// FUN_00791646 @ 791646 size=71

void FUN_00791646(void)

{
  BOOL BVar1;
  
  BVar1 = PeekMessageA((LPMSG)&DAT_00dc2ca8,(HWND)0x0,0,0,0);
  if (BVar1 != 0) {
    BVar1 = GetMessageA((LPMSG)&DAT_00dc2ca8,(HWND)0x0,0,0);
    if (BVar1 != 0) {
      TranslateMessage((MSG *)&DAT_00dc2ca8);
      DispatchMessageA((MSG *)&DAT_00dc2ca8);
    }
  }
  return;
}


