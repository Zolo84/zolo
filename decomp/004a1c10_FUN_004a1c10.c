// FUN_004a1c10 @ 4a1c10 size=183

bool __thiscall FUN_004a1c10(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return false;
  }
  cVar2 = FUN_0044beb0();
  if (cVar2 == '\x01') {
    return false;
  }
  cVar2 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
  if (cVar2 == '\0') {
    return false;
  }
  iVar1 = *(int *)(param_1 + 6);
  iVar3 = FUN_00584c90();
  if (iVar3 == iVar1) {
    if (param_2 == DAT_00d615c6) {
      return false;
    }
    if (param_2 == DAT_00d615c2) {
      return false;
    }
    if (param_2 == DAT_00d615ca) {
      return false;
    }
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    iVar1 = *(int *)(param_1 + 6);
    iVar3 = FUN_00584c90();
    if (iVar3 == iVar1) {
      return false;
    }
  }
  cVar2 = FUN_00584e20(*(undefined4 *)(*(int *)(param_1 + 0x12da) + 0x3b30));
  return cVar2 == '\0';
}


