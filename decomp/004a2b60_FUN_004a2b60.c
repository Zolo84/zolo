// FUN_004a2b60 @ 4a2b60 size=261

bool __thiscall
FUN_004a2b60(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined8 param_6)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_004a24e0(param_2,param_3,param_4,param_5,(undefined2)param_6,
                       (short)((ulonglong)param_6 >> 0x20));
  if (cVar1 != '\0') {
    return false;
  }
  if (param_3 != 0) {
    if ((param_3 == 0xa3) || (param_3 == 0x157)) {
      return false;
    }
    if ((&DAT_0089cad8)[param_3] == 0) {
      return false;
    }
    if (param_3 == *(int *)(param_1 + 6)) {
      return false;
    }
    cVar1 = FUN_0042dd70((short)(DAT_00893530 + 0x14));
    return cVar1 == '\0';
  }
  iVar2 = FUN_00584c90();
  if (((iVar2 == 0) || (iVar2 == 0xa3)) || (iVar2 == 0x157)) {
    return false;
  }
  if ((&DAT_0089cad8)[iVar2] == 0) {
    return false;
  }
  if (iVar2 == *(int *)(param_1 + 6)) {
    return false;
  }
  cVar1 = FUN_0042dd70((short)(DAT_00893530 + 0x14));
  return cVar1 == '\0';
}


