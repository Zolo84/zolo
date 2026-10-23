// FUN_007b4e80 @ 7b4e80 size=189

uint FUN_007b4e80(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_7c [120];
  
  uVar1 = FUN_007b5217(param_1);
  iVar2 = (*DAT_00dc53d8)(uVar1,(-(uint)(DAT_00dc53c4 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00dc53d0 = 0;
    return 1;
  }
  iVar2 = FUN_007a8730(DAT_00dc53c8,local_7c);
  if (iVar2 == 0) {
    if (DAT_00dc53c4 == 0) {
      uVar3 = 1;
      goto LAB_007b4f0c;
    }
  }
  else {
    if (((DAT_00dc53c4 != 0) || (DAT_00dc53c0 == 0)) ||
       (iVar2 = FUN_007b8620(DAT_00dc53c8,local_7c,DAT_00dc53c0), iVar2 != 0)) goto LAB_007b4f2b;
    uVar3 = 0;
LAB_007b4f0c:
    iVar2 = FUN_007b5099(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_007b4f2b;
  }
  DAT_00dc53d0 = DAT_00dc53d0 | 4;
  DAT_00dc53b8 = uVar1;
  DAT_00dc53d4 = uVar1;
LAB_007b4f2b:
  return ~DAT_00dc53d0 >> 2 & 1;
}


