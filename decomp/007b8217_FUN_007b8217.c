// FUN_007b8217 @ 7b8217 size=41

void FUN_007b8217(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00dc5a20;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00dc58f4 = 0;
  DAT_00dc590c = 0;
  DAT_00dc5b24 = 0;
  DAT_00dc5900 = 0;
  DAT_00dc5904 = 0;
  DAT_00dc5908 = 0;
  return;
}


