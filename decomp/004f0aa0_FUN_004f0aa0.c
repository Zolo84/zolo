// FUN_004f0aa0 @ 4f0aa0 size=65

bool __fastcall FUN_004f0aa0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x212)) {
    return false;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x11c) + 4))();
  if (iVar2 != 0) {
    return false;
  }
  cVar1 = (**(code **)(*(int *)(param_1 + 0x22e) + 8))();
  return cVar1 != '\0';
}


