// FUN_0075de30 @ 75de30 size=153

undefined4 FUN_0075de30(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_2 + 0x250);
  if (iVar1 == 1) {
    cVar2 = FUN_004ea7d0();
    if (cVar2 != '\0') {
      if (8 < param_1) {
        return 0;
      }
      if (param_1 < 5) {
        return 0;
      }
      return 1;
    }
    if ((2 < param_1) && (param_1 < 0xb)) {
      return 0;
    }
  }
  else {
    if ((iVar1 == 2) || (iVar1 == 4)) {
      cVar2 = FUN_004ea7d0();
      if (cVar2 == '\0') {
        if (param_1 < 4) {
          return 1;
        }
        if (param_1 < 10) {
          return 0;
        }
        return 1;
      }
      if (8 < param_1) {
        return 0;
      }
      bVar4 = SBORROW4(param_1,3);
      iVar1 = param_1 + -3;
      bVar3 = iVar1 == 0;
    }
    else {
      if (iVar1 != 3) {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      cVar2 = FUN_004ea7d0();
      if (cVar2 == '\0') {
        if (param_1 < 5) {
          return 1;
        }
        if (7 < param_1) {
          return 1;
        }
        return 0;
      }
      if (9 < param_1) {
        return 0;
      }
      bVar4 = SBORROW4(param_1,2);
      iVar1 = param_1 + -2;
      bVar3 = param_1 == 2;
    }
    if (bVar3 || bVar4 != iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}


