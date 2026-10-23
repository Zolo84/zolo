// FUN_007a636a @ 7a636a size=126

undefined4 FUN_007a636a(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_007a65b8();
  uVar1 = FUN_007add12(DAT_00dc6c90);
  if (uVar1 < (uint)((int)DAT_00dc6c8c + (4 - DAT_00dc6c90))) {
    iVar2 = FUN_007add12(DAT_00dc6c90);
    iVar2 = FUN_007aa7f5(DAT_00dc6c90,iVar2 + 0x10);
    if (iVar2 == 0) {
      param_1 = 0;
      goto LAB_007a63df;
    }
    DAT_00dc6c8c = (undefined4 *)(iVar2 + ((int)DAT_00dc6c8c - DAT_00dc6c90 >> 2) * 4);
    DAT_00dc6c90 = iVar2;
  }
  *DAT_00dc6c8c = param_1;
  DAT_00dc6c8c = DAT_00dc6c8c + 1;
LAB_007a63df:
  FUN_007a65c1();
  return param_1;
}


