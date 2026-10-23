// FUN_004a3610 @ 4a3610 size=49

int __thiscall FUN_004a3610(int param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x134);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 == 0xe) {
    return 1;
  }
  if ((0x12 < iVar1) && (iVar1 < 0x15)) {
    return CONCAT31(uVar2,*(char *)(param_1 + 0xe31f) != '\0');
  }
  return (uint)uVar2 << 8;
}


