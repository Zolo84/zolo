// FUN_0075eeb0 @ 75eeb0 size=134

undefined1 * FUN_0075eeb0(undefined4 param_1)

{
  undefined1 *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_WEATHER_CLEAR_008755c8);
    return puVar1;
  case 1:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_WEATHER_FROZEN_008755b8);
    return puVar1;
  case 2:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_WEATHER_RAINING_008755a8);
    return puVar1;
  case 3:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_WEATHER_SNOWING_00875598);
    return puVar1;
  case 4:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_WEATHER_STORM_00875588);
    return puVar1;
  case 5:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_WEATHER_BLIZZARD_00875574);
    return puVar1;
  case 6:
    puVar1 = (undefined1 *)FUN_0042b6c9(s_WEATHER_MUDDY_00875564);
    return puVar1;
  default:
    return &DAT_0088ebf8;
  }
}


