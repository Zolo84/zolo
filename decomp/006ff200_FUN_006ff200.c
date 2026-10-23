// FUN_006ff200 @ 6ff200 size=952

void __thiscall FUN_006ff200(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  _SYSTEMTIME local_40;
  _SYSTEMTIME local_2c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007db6ba;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_18 = param_1;
  switch(param_2) {
  case 0:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x32);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x3a) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar2 = FUN_006f5120(s_GFX_interface_frontend_bg_start__00870054);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 0x3a) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    goto LAB_006ff62b;
  case 1:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x13a);
    local_8 = 2;
    if (pvVar1 == (void *)0x0) {
LAB_006ff626:
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006f7640(s_GFX_interface_frontend_bg_tutori_00870004);
    }
    break;
  case 2:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    GetSystemTime(&local_2c);
    *(uint *)(param_1 + 0x182) =
         (local_2c.wDayOfWeek + 1) * (local_2c.wHour + 1) * (local_2c.wMinute + 1) *
         (local_2c.wSecond + 1) * (local_2c.wMilliseconds + 1) * (uint)local_2c.wYear *
         (uint)local_2c.wMonth * (uint)local_2c.wDay;
    pvVar1 = operator_new(0x178);
    local_8 = 1;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_006f5740(s_GFX_interface_frontend_bg_fronte_0087002c);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined1 *)(param_1 + 0x11) = 1;
      ExceptionList = local_10;
      return;
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    ExceptionList = local_10;
    return;
  case 3:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x72);
    local_8 = 3;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006ee970(s_GFX_interface_frontend_bg_start__00870054);
    break;
  case 4:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x2e);
    local_8 = 5;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006ef920(s_GFX_interface_frontend_bg_start__00870054);
    break;
  case 5:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x2e);
    local_8 = 4;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006f6da0(s_GFX_interface_frontend_bg_start__00870054);
    break;
  case 6:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x3a8);
    local_8 = 6;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006f00e0(s_GFX_interface_frontend_bg_fronte_0087002c,0);
    break;
  case 7:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    GetSystemTime(&local_40);
    *(uint *)(param_1 + 0x182) =
         (local_40.wDayOfWeek + 1) * (local_40.wHour + 1) * (local_40.wMinute + 1) *
         (local_40.wSecond + 1) * (local_40.wMilliseconds + 1) * (uint)local_40.wYear *
         (uint)local_40.wMonth * (uint)local_40.wDay;
    pvVar1 = operator_new(0x20c);
    local_8 = 7;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006f2420(s_GFX_interface_frontend_bg_fronte_0087002c,0);
    break;
  case 8:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x22);
    local_8 = 0xc;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006f7f60(s_GFX_interface_frontend_bg_start__00870054);
    break;
  case 9:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x22);
    local_8 = 0xd;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006f4df0(s_GFX_interface_frontend_bg_start__00870054);
    break;
  default:
    goto switchD_006ff232_caseD_a;
  case 0xb:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x16);
    local_8 = 0xe;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006f5530(0);
    break;
  case 0xc:
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    pvVar1 = operator_new(0x11e);
    local_8 = 0xf;
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_006ef060(s_GFX_interface_frontend_bg_start__00870054);
    break;
  case 0xd:
    local_8 = 8;
    ExceptionList = &local_10;
    pvVar1 = operator_new(0x19e);
    if (pvVar1 == (void *)0x0) goto LAB_006ff626;
    uVar2 = FUN_0074dea0(s_GFX_interface_frontend_bg_valkyr_0086ffd8);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
LAB_006ff62b:
  *(undefined1 *)(param_1 + 0x11) = 1;
switchD_006ff232_caseD_a:
  ExceptionList = local_10;
  return;
}


