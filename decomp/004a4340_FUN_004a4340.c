// FUN_004a4340 @ 4a4340 size=136

uint FUN_004a4340(int param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (&DAT_00dbd1a2)[param_2];
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 < 0xc) && (*(int *)((&DAT_00dbf99a)[param_1] + 0x18) != 0)) {
    return (uint)uVar2 << 8;
  }
  if ((0xb < iVar1) &&
     (((iVar1 < 0x15 || (iVar1 == 0x8c)) && (*(int *)((&DAT_00dbf99a)[param_1] + 0x18) != 1)))) {
    return (uint)uVar2 << 8;
  }
  if (((0x14 < iVar1) && (iVar1 != 0x8c)) && (*(int *)((&DAT_00dbf99a)[param_1] + 0x18) != 2)) {
    return (&DAT_00dbf99a)[param_1] & 0xffffff00;
  }
  return CONCAT31((int3)((uint)(param_2 * 7) >> 8),(&DAT_00d77ba0)[param_2 * 0x8c + param_1]);
}


