// FUN_0075ded0 @ 75ded0 size=154

uint FUN_0075ded0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *(uint *)(param_2 + 0x250);
  if (uVar1 == 7) {
    cVar2 = FUN_004ea7d0();
    if (cVar2 == '\0') {
      if (8 < param_1) {
        return 1;
      }
      if (param_1 < 4) {
        return 1;
      }
      return 0;
    }
    if ((3 < param_1) && (param_1 < 0xb)) {
      return 1;
    }
  }
  else if (uVar1 == 6) {
    cVar2 = FUN_004ea7d0();
    if (cVar2 != '\0') {
      if (10 < param_1) {
        return 1;
      }
      if (param_1 < 1) {
        return 1;
      }
      return 0;
    }
    if ((4 < param_1) && (param_1 < 7)) {
      return 1;
    }
  }
  else {
    if (uVar1 != 5) {
      return uVar1 & 0xffffff00;
    }
    cVar2 = FUN_004ea7d0();
    if (cVar2 == '\0') {
      if ((3 < param_1) && (param_1 < 8)) {
        return 1;
      }
    }
    else if ((8 < param_1) || (param_1 < 2)) {
      return 1;
    }
  }
  return 0;
}


