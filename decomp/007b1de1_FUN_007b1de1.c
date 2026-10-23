// FUN_007b1de1 @ 7b1de1 size=57

void FUN_007b1de1(void)

{
  if ((DAT_00dc519c == 1) || ((DAT_00dc519c == 0 && (DAT_0087d074 == 1)))) {
    FUN_007b1e1a(0xfc);
    if (DAT_00dc5268 != (code *)0x0) {
      (*DAT_00dc5268)();
    }
    FUN_007b1e1a(0xff);
  }
  return;
}


