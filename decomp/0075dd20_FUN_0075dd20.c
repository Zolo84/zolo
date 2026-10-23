// FUN_0075dd20 @ 75dd20 size=264

uint FUN_0075dd20(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 0x250) == 1) {
    cVar1 = FUN_004ea7d0();
    if (cVar1 != '\0') {
      if (8 < param_1) {
        return 1;
      }
      if (param_1 < 4) {
        return 1;
      }
      return 0;
    }
    if ((*(int *)(param_2 + 0x250) == 1) && (cVar1 = FUN_004ea7f0(), cVar1 != '\0')) {
      if (param_1 < 3) {
        return 0;
      }
      if (9 < param_1) {
        return 0;
      }
      return 1;
    }
  }
  if (((*(int *)(param_2 + 0x250) == 2) || (*(int *)(param_2 + 0x250) == 4)) &&
     (cVar1 = FUN_004ea7d0(), cVar1 != '\0')) {
    if (9 < param_1) {
      return 1;
    }
    if (param_1 < 3) {
      return 1;
    }
    return 0;
  }
  uVar2 = *(uint *)(param_2 + 0x250);
  if (((uVar2 == 2) || (uVar2 == 4)) && (uVar2 = FUN_004ea7f0(), (char)uVar2 != '\0')) {
    if (param_1 < 5) {
      return 0;
    }
    if (8 < param_1) {
      return 0;
    }
    return 1;
  }
  if (*(int *)(param_2 + 0x250) == 3) {
    uVar2 = FUN_004ea7d0();
    if ((char)uVar2 != '\0') {
      if ((param_1 < 2) && (10 < param_1)) {
        return 1;
      }
      return 0;
    }
    if ((*(int *)(param_2 + 0x250) == 3) && (uVar2 = FUN_004ea7f0(), (char)uVar2 != '\0')) {
      return (uint)(param_1 == 6);
    }
  }
  return uVar2 & 0xffffff00;
}


