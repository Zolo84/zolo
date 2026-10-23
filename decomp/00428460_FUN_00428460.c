// FUN_00428460 @ 428460 size=115

int FUN_00428460(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == 0x11) || (uVar1 == 7)) || (uVar1 == 6)) || (0x1267 < uVar1)) {
    if (DAT_0088f2cc != 0) {
      iVar2 = FUN_00429310(uVar1);
      return iVar2;
    }
  }
  else if ((uVar1 == 4) && (iVar2 = DAT_00ab27b4 + *(int *)(param_1 + 1) * 0x4b2, iVar2 != 0)) {
    return iVar2 + 0xc;
  }
  return 0;
}


