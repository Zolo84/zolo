// FUN_007a9607 @ 7a9607 size=220

void FUN_007a9607(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_00dc5188._2_2_) {
    if (local_24.wHour == (WORD)DAT_00dc5188) {
      if (local_24.wDay == DAT_00dc5184._2_2_) {
        if (local_24.wMonth == DAT_00dc5180._2_2_) {
          if (local_24.wYear == (WORD)DAT_00dc5180) goto LAB_007a96b1;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_00dc5178 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_00dc5178 = 1;
  }
  else {
    DAT_00dc5178 = 0;
  }
  DAT_00dc5180._0_2_ = local_24.wYear;
  DAT_00dc5180._2_2_ = local_24.wMonth;
  DAT_00dc5184._0_2_ = local_24.wDayOfWeek;
  DAT_00dc5184._2_2_ = local_24.wDay;
  DAT_00dc5188._0_2_ = local_24.wHour;
  DAT_00dc5188._2_2_ = local_24.wMinute;
  DAT_00dc518c._0_2_ = local_24.wSecond;
  DAT_00dc518c._2_2_ = local_24.wMilliseconds;
LAB_007a96b1:
  uVar2 = FUN_007aed7a(local_14.wYear,local_14.wMonth,local_14.wDay,local_14.wHour,local_14.wMinute,
                       local_14.wSecond,DAT_00dc5178);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}


