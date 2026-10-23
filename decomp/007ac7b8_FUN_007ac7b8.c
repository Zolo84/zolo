// FUN_007ac7b8 @ 7ac7b8 size=22

uint FUN_007ac7b8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


