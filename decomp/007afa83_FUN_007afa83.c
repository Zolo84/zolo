// FUN_007afa83 @ 7afa83 size=177

undefined4 * FUN_007afa83(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00dc5b3c == DAT_00dc5b28) {
    pvVar2 = HeapReAlloc(DAT_00dc5b48,0,DAT_00dc5b40,(DAT_00dc5b28 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00dc5b28 = DAT_00dc5b28 + 0x10;
    DAT_00dc5b40 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00dc5b40 + DAT_00dc5b3c * 0x14);
  pvVar2 = HeapAlloc(DAT_00dc5b48,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00dc5b3c = DAT_00dc5b3c + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00dc5b48,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


