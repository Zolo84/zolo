// FUN_0042e980 @ 42e980 size=29

undefined4 FUN_0042e980(void)

{
  undefined3 uVar1;
  
  uVar1 = (undefined3)((uint)DAT_00bd1500 >> 8);
  if ((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) {
    return CONCAT31(uVar1,*(undefined1 *)(DAT_00bd1500 + 0x37a));
  }
  return CONCAT31(uVar1,1);
}


