// FUN_007b5099 @ 7b5099 size=98

undefined4 FUN_007b5099(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 local_7c [120];
  
  iVar1 = (*DAT_00dc53d8)((ushort)param_1 & 0x3ff | 0x400,1,local_7c,0x78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_007b5217(local_7c);
  if ((param_1 != iVar1) && (param_2 != 0)) {
    sVar2 = FUN_007b5250(DAT_00dc53c8);
    sVar3 = _strlen(DAT_00dc53c8);
    if (sVar2 == sVar3) {
      return 0;
    }
  }
  return 1;
}


