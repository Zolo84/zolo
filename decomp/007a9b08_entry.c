// entry @ 7a9b08 size=253

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00800640;
  puStack_10 = &LAB_007b0b7c;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_00dc5140 = DVar1 >> 8 & 0xff;
  _DAT_00dc513c = DVar1 & 0xff;
  _DAT_00dc5138 = _DAT_00dc513c * 0x100 + _DAT_00dc5140;
  _DAT_00dc5134 = DVar1 >> 0x10;
  iVar2 = FUN_007af207(1);
  if (iVar2 == 0) {
    FUN_007a9c35(0x1c);
  }
  iVar2 = FUN_007ad12c();
  if (iVar2 == 0) {
    FUN_007a9c35(0x10);
  }
  local_8 = 0;
  FUN_007ae11a();
  DAT_00dc5c74 = GetCommandLineA();
  DAT_00dc5194 = FUN_007b35b6();
  FUN_007b3369();
  FUN_007b32b0();
  FUN_007a64a6();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_007b3258();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_00791fe9(pHVar5,uVar6,uVar3,uVar4);
  FUN_007a64d3(uVar3);
  FUN_007b30e0(*(undefined4 *)*local_18,local_18);
  return;
}


