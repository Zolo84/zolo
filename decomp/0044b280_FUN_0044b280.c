// FUN_0044b280 @ 44b280 size=113

uint __thiscall FUN_0044b280(int param_1,int param_2)

{
  int iVar1;
  uint3 uVar3;
  uint uVar2;
  
  if ((&DAT_0089cad8)[param_2] == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 6);
  uVar3 = (uint3)((uint)iVar1 >> 8);
  if (param_2 == iVar1) {
    return (uint)uVar3 << 8;
  }
  if ((param_2 != 0x157) && (iVar1 != 0x157)) {
    uVar2 = FUN_005861e0(param_2);
    if ((char)uVar2 != '\0') {
      return uVar2 & 0xffffff00;
    }
    return (uint)(*(char *)(*(int *)(param_1 + 0x12da) + param_2 * 0x2c + 0x2c) != '\0');
  }
  return CONCAT31(uVar3,1);
}


