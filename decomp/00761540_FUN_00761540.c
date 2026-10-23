// FUN_00761540 @ 761540 size=221

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761540(undefined4 param_1,float param_2)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    if (_DAT_007e3380 < param_2) {
      FUN_0042b6c9(s_DOM_EFFECT_GOOD_00875a6c);
      return;
    }
    break;
  case 5:
  case 6:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1d:
  case 0x21:
  case 0x22:
    if (_DAT_007e3380 < param_2) {
      FUN_0042b6c9(s_DOM_EFFECT_GOOD_00875a6c);
      return;
    }
    break;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x23:
    if (_DAT_007e3380 < param_2) {
      FUN_0042b6c9(s_DOM_EFFECT_BAD_00875a5c);
      return;
    }
    if (param_2 < _DAT_007e3380) {
      FUN_0042b6c9(s_DOM_EFFECT_GOOD_00875a6c);
      return;
    }
  default:
    goto switchD_00761555_default;
  }
  if (param_2 < _DAT_007e3380) {
    FUN_0042b6c9(s_DOM_EFFECT_BAD_00875a5c);
    return;
  }
switchD_00761555_default:
  FUN_0042b6c9(s_EMPTYLINE_0083d2b8);
  return;
}


