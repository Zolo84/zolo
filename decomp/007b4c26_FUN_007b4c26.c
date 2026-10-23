// FUN_007b4c26 @ 7b4c26 size=516

uint FUN_007b4c26(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined1 local_7c [120];
  
  iVar1 = FUN_007b5217(param_1);
  iVar2 = (*DAT_00dc53d8)(iVar1,(-(uint)(DAT_00dc53bc != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00dc53d0 = 0;
    return 1;
  }
  iVar2 = FUN_007a8730(DAT_00dc53cc,local_7c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_00dc53d8)(iVar1,(-(uint)(DAT_00dc53c4 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_00dc53d0 = 0;
      return 1;
    }
    iVar2 = FUN_007a8730(DAT_00dc53c8,local_7c);
    if (iVar2 == 0) {
      DAT_00dc53d0 = DAT_00dc53d0 | 0x304;
      DAT_00dc53d4 = iVar1;
LAB_007b4ccc:
      DAT_00dc53b8 = iVar1;
    }
    else if ((DAT_00dc53d0 & 2) == 0) {
      if ((DAT_00dc53c0 == 0) ||
         (iVar2 = FUN_007b8620(DAT_00dc53c8,local_7c,DAT_00dc53c0), iVar2 != 0)) {
        if (((DAT_00dc53d0 & 1) == 0) && (iVar2 = FUN_007b507a(iVar1), iVar2 != 0)) {
          DAT_00dc53d0 = DAT_00dc53d0 | 1;
          DAT_00dc53d4 = iVar1;
        }
      }
      else {
        DAT_00dc53d0 = DAT_00dc53d0 | 2;
        DAT_00dc53d4 = iVar1;
        sVar3 = _strlen(DAT_00dc53c8);
        if (sVar3 == DAT_00dc53c0) goto LAB_007b4ccc;
      }
    }
  }
  if ((DAT_00dc53d0 & 0x300) == 0x300) goto LAB_007b4e16;
  iVar2 = (*DAT_00dc53d8)(iVar1,(-(uint)(DAT_00dc53c4 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_00dc53d0 = 0;
    return 1;
  }
  iVar2 = FUN_007a8730(DAT_00dc53c8,local_7c);
  if (iVar2 == 0) {
    DAT_00dc53d0 = DAT_00dc53d0 | 0x200;
    if (((DAT_00dc53c4 == 0) && (DAT_00dc53c0 != 0)) &&
       (sVar3 = _strlen(DAT_00dc53c8), sVar3 == DAT_00dc53c0)) {
      uVar4 = 1;
      goto LAB_007b4df5;
    }
  }
  else {
    if (((DAT_00dc53c4 != 0) || (DAT_00dc53c0 == 0)) ||
       (iVar2 = FUN_007b8620(DAT_00dc53c8,local_7c,DAT_00dc53c0), iVar2 != 0)) goto LAB_007b4e16;
    uVar4 = 0;
LAB_007b4df5:
    iVar2 = FUN_007b5099(iVar1,uVar4);
    if (iVar2 == 0) goto LAB_007b4e16;
  }
  DAT_00dc53d0 = DAT_00dc53d0 | 0x100;
  if (DAT_00dc53b8 == 0) {
    DAT_00dc53b8 = iVar1;
  }
LAB_007b4e16:
  return ~DAT_00dc53d0 >> 2 & 1;
}


