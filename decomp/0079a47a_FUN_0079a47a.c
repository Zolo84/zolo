// FUN_0079a47a @ 79a47a size=117

void FUN_0079a47a(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(extraout_ECX + 0x24);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = &DAT_007f0c98;
    }
    FUN_007aa17c(0,puVar2);
  }
  FUN_00674910(1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00674910(1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00674910(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


