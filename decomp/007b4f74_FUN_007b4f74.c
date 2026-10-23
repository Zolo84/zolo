// FUN_007b4f74 @ 7b4f74 size=134

uint FUN_007b4f74(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_7c [120];
  
  uVar1 = FUN_007b5217(param_1);
  iVar2 = (*DAT_00dc53d8)(uVar1,(-(uint)(DAT_00dc53bc != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00dc53d0 = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_007a8730(DAT_00dc53cc,local_7c);
    if (iVar2 == 0) {
      iVar2 = FUN_007b507a(uVar1);
      if (iVar2 != 0) {
        DAT_00dc53d0 = DAT_00dc53d0 | 4;
        DAT_00dc53b8 = uVar1;
        DAT_00dc53d4 = uVar1;
      }
    }
    uVar3 = ~DAT_00dc53d0 >> 2 & 1;
  }
  return uVar3;
}


