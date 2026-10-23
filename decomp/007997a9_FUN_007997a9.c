// FUN_007997a9 @ 7997a9 size=74

void FUN_007997a9(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  FUN_00798acc(extraout_ECX);
  iVar1 = DAT_00dc4fd0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0074c240();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


