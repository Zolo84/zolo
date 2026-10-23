// FUN_0078f7a5 @ 78f7a5 size=553

undefined4 FUN_0078f7a5(void)

{
  ATOM AVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  HMENU pHVar6;
  char *lpText;
  HINSTANCE pHVar7;
  char *lpCaption;
  LPVOID pvVar8;
  UINT uType;
  WNDCLASSEXA local_34;
  
  if (DAT_0088fae8 == 0) {
    local_34.cbSize = 0x30;
    local_34.style = 8;
    local_34.lpfnWndProc = FUN_00794a03;
    local_34.cbClsExtra = 0;
    local_34.cbWndExtra = 0;
    local_34.hInstance = DAT_00dc3b00;
    local_34.hIcon = LoadIconA(DAT_00dc3b00,(LPCSTR)0x65);
    local_34.hCursor = (HCURSOR)0x0;
    local_34.hbrBackground = GetStockObject(4);
    local_34.lpszMenuName = (LPCSTR)0x0;
    local_34.lpszClassName = PTR_s_StubDirectDrawWndClass_0087b638;
    local_34.hIconSm = LoadIconA(DAT_00dc3b00,(LPCSTR)0x65);
  }
  else {
    local_34.cbSize = 0x30;
    local_34.style = 0xb;
    local_34.lpfnWndProc = FUN_00794a03;
    local_34.cbClsExtra = 0;
    local_34.cbWndExtra = 0;
    local_34.hInstance = DAT_00dc3b00;
    local_34.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_34.hCursor = (HCURSOR)0x0;
    local_34.hbrBackground = GetStockObject(4);
    local_34.lpszMenuName = (LPCSTR)0x0;
    local_34.lpszClassName = &DAT_00dc1f70;
    local_34.hIconSm = LoadIconA(DAT_00dc3b00,(LPCSTR)0x65);
  }
  AVar1 = RegisterClassExA(&local_34);
  if (AVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_0088fae8 == 0) {
      pvVar8 = (LPVOID)0x0;
      pHVar6 = (HMENU)0x0;
      pHVar5 = (HWND)0x0;
      pHVar7 = DAT_00dc3b00;
      iVar3 = GetSystemMetrics(1);
      iVar4 = GetSystemMetrics(0);
      DAT_00dc4a58 = CreateWindowExA(0,PTR_s_StubDirectDrawWndClass_0087b638,&DAT_00dc1f70,
                                     0x90000000,0,0,iVar4,iVar3,pHVar5,pHVar6,pHVar7,pvVar8);
    }
    else {
      pvVar8 = (LPVOID)0x0;
      pHVar6 = (HMENU)0x0;
      pHVar5 = (HWND)0x0;
      pHVar7 = DAT_00dc3b00;
      iVar3 = GetSystemMetrics(4);
      iVar3 = DAT_0087721c + 8 + iVar3;
      iVar4 = GetSystemMetrics(7);
      DAT_00dc4a58 = CreateWindowExA(0,&DAT_00dc1f70,&DAT_00dc1f70,0x10000000,0,0,
                                     DAT_00877218 + iVar4 * 2,iVar3,pHVar5,pHVar6,pHVar7,pvVar8);
    }
    if (DAT_00dc4a58 == (HWND)0x0) {
      UnregisterClassA(PTR_s_StubDirectDrawWndClass_0087b638,DAT_00dc3b00);
      uType = 0x10;
      lpCaption = s_Europa_Universalis_0087b65c;
      lpText = s_Error_Creating_Window__0087b670;
      pHVar5 = GetDesktopWindow();
      MessageBoxA(pHVar5,lpText,lpCaption,uType);
      uVar2 = 0;
    }
    else {
      ShowCursor(0);
      ShowWindow(DAT_00dc4a58,5);
      if (DAT_0088fae8 != 0) {
        SetFocus(DAT_00dc4a58);
        ShowCursor(1);
      }
      UpdateWindow(DAT_00dc4a58);
      uVar2 = 1;
    }
  }
  return uVar2;
}


