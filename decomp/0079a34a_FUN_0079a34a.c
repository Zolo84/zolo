// FUN_0079a34a @ 79a34a size=185

undefined1 * FUN_0079a34a(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined1 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_00674910(0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x10] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_00674910(0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x20] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_00674910(0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x30] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_00674910(0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pcVar1 = (char *)FUN_007aa17c(0,0);
  *(char **)(unaff_EBP + -0x10) = pcVar1;
  sVar2 = _strlen(pcVar1);
  FUN_00674d80(*(undefined4 *)(unaff_EBP + -0x10),sVar2);
  if (*(int *)(unaff_EBP + 8) != 0) {
    pcVar1 = (char *)FUN_007aa17c(0,*(undefined4 *)(unaff_EBP + 8));
    if (pcVar1 != (char *)0x0) goto LAB_0079a3df;
  }
  pcVar1 = &DAT_0085b098;
LAB_0079a3df:
  sVar2 = _strlen(pcVar1);
  FUN_00674d80(pcVar1,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


