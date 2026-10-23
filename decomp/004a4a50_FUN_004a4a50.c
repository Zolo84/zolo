// FUN_004a4a50 @ 4a4a50 size=445

undefined4 __thiscall FUN_004a4a50(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iStack_4;
  
  uVar2 = FUN_0044d810();
  cVar1 = FUN_00763e80(uVar2);
  iVar5 = 3;
  iStack_4 = 3;
  if ((0 < param_3) && (param_3 < 5)) {
    iStack_4 = 1;
    iVar5 = 1;
  }
  if ((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(param_2 + 0x1a)) {
    return 0;
  }
  if (*(char *)(param_2 + 0xbe) != '\0') {
    return 0;
  }
  if ((*(int *)(param_2 + 0xba) != 0) && (*(int *)(*(int *)(param_2 + 0xba) + 4) == 10)) {
    iVar6 = 0;
    param_1 = param_1 + 0x24e;
    do {
      iVar5 = FUN_00428ee0(param_1);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -8;
      }
      if (iVar5 == param_2) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 6;
      iVar5 = iStack_4;
    } while (iVar6 < 10);
  }
  if (param_3 == 0) {
    cVar1 = FUN_00763ec0();
    if (cVar1 == '\0') {
      cVar1 = FUN_00763ee0();
      if (cVar1 != '\0') {
        uVar2 = FUN_0044d810();
        cVar1 = FUN_00763ea0(uVar2);
        if (cVar1 != '\0') {
          return 1;
        }
        if (*(int *)(param_2 + 0x26) != 7) {
          return 0;
        }
        iVar5 = FUN_0044d810();
        if (iVar5 != 6) {
          return 0;
        }
        return 1;
      }
      cVar1 = FUN_00763ef0();
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = FUN_0044d810();
      cVar1 = FUN_00763eb0(uVar2);
      if (cVar1 != '\0') {
        return 1;
      }
      if (*(int *)(param_2 + 0x26) != 2) {
        return 0;
      }
      iVar5 = FUN_0044d810();
      if (iVar5 != 3) {
        return 0;
      }
      return 1;
    }
    iVar6 = FUN_0044d810();
    if (iVar6 < 2) {
      return 0;
    }
    iVar6 = FUN_0044d810();
    if (7 < iVar6) {
      return 0;
    }
    iVar6 = *(int *)(param_2 + 0x26);
  }
  else {
    iVar6 = *(int *)(param_2 + 0x26);
    if (cVar1 != '\0') {
      if (iVar6 < 2) {
        return 0;
      }
      if (7 < iVar6) {
        return 0;
      }
    }
  }
  iVar3 = FUN_0044d810();
  uVar4 = iVar6 - iVar3 >> 0x1f;
  if (iVar5 < (int)((iVar6 - iVar3 ^ uVar4) - uVar4)) {
    return 0;
  }
  return 1;
}


