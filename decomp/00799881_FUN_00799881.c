// FUN_00799881 @ 799881 size=136

void FUN_00799881(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int iVar2;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00800074;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00798acc();
  iVar2 = extraout_ECX[3];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*(int *)(extraout_ECX[2] + iVar2 * 4) != 0) {
      puVar1 = (undefined4 *)FUN_0074c240();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  FUN_007a77fa(extraout_ECX[2]);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00798b68();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0080007c;
  return;
}


