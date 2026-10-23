// FUN_004a3580 @ 4a3580 size=129

bool __thiscall FUN_004a3580(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x6c) != 0) {
    cVar1 = (**(code **)(*(int *)(*(int *)(param_2 + 0x6c) + 0x22e) + 8))();
    if (cVar1 == '\0') {
      return false;
    }
    if (*(int *)(*(int *)(param_2 + 0x6c) + 0x176) != 0) {
      return false;
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(param_2 + 0x6c) + 0x11c) + 4))();
    if (iVar2 != 0) {
      return false;
    }
  }
  iVar2 = *(int *)(param_2 + 0x134);
  if (iVar2 == 0xe) {
    return true;
  }
  if ((0x12 < iVar2) && (iVar2 < 0x15)) {
    return *(char *)(param_1 + 0xe31f) != '\0';
  }
  return false;
}


