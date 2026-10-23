// FUN_006ff680 @ 6ff680 size=292

void __thiscall FUN_006ff680(int param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  _SYSTEMTIME local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db6e6;
  local_c = ExceptionList;
  if (param_2 == 6) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x3a8);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_006f00e0(s_GFX_interface_frontend_bg_fronte_0087002c,param_3);
      goto LAB_006ff78b;
    }
  }
  else {
    if (param_2 != 7) {
      return;
    }
    ExceptionList = &local_c;
    GetSystemTime(&local_20);
    *(uint *)(param_1 + 0x182) =
         (local_20.wDayOfWeek + 1) * (local_20.wHour + 1) * (local_20.wMinute + 1) *
         (local_20.wSecond + 1) * (local_20.wMilliseconds + 1) * (uint)local_20.wYear *
         (uint)local_20.wMonth * (uint)local_20.wDay;
    pvVar1 = operator_new(0x20c);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_006f2420(s_GFX_interface_frontend_bg_fronte_0087002c,param_3);
      goto LAB_006ff78b;
    }
  }
  uVar2 = 0;
LAB_006ff78b:
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0x11) = 1;
  ExceptionList = local_c;
  return;
}


