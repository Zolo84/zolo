// FUN_004efb20 @ 4efb20 size=76

bool __fastcall FUN_004efb20(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
  if (iVar2 != 0) {
    return true;
  }
  cVar1 = (**(code **)(*(int *)(param_1 + 0x22e) + 8))();
  if (cVar1 == '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x17b) != '\0') {
    return true;
  }
  return *(int *)(param_1 + 0x176) != 0;
}


