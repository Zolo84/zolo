// FUN_0049f680 @ 49f680 size=312

undefined1 FUN_0049f680(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(float *)(param_1 + 0xf0) <= *(float *)(param_1 + 0xec)) {
    return 0;
  }
  if (*(char *)(param_1 + 0x162) != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    if (*(char *)(param_1 + 0x159) == '\0') {
      return 0;
    }
  }
  else {
    cVar1 = FUN_00524000();
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x11c) + 4))();
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x6c);
    if (*(char *)(iVar2 + 0x17b) != '\0') {
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) < 1) {
      return 0;
    }
    if (*(char *)(iVar2 + 0x252) == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x160) != '\0') {
      if (*(int *)(iVar2 + 0xc) != *(int *)(iVar2 + 0x212)) {
        return 0;
      }
      cVar1 = (**(code **)(*(int *)(iVar2 + 0x22e) + 8))();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    if (*(char *)(param_1 + 0x161) != '\0') {
      iVar2 = FUN_0051b230();
      if ((*(int *)(iVar2 + 0x254) == 8) || (*(int *)(iVar2 + 0x254) == 9)) {
        return 0;
      }
      iVar2 = FUN_00522770();
      if (iVar2 != 0) {
        FUN_00522770();
        cVar1 = FUN_00455130();
        if (cVar1 != '\0') {
          FUN_0051b230();
          iVar2 = FUN_004ece90();
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


