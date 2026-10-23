// FUN_00797dc6 @ 797dc6 size=385

undefined4 FUN_00797dc6(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00798acc();
  bVar2 = DAT_0087c1d4 < 0;
  if (bVar2) {
    DAT_0087c1d4 = 1;
  }
  else {
    DAT_0087c1d4 = DAT_0087c1d4 + 1;
  }
  FUN_00798b68();
  if (bVar2) {
    *(undefined **)(unaff_EBP + -0x10) = &DAT_00dc4e90;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0079816f(&PTR_DAT_0087cb48);
    *(undefined **)(unaff_EBP + -0x10) = &DAT_00dc4e38;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0079816f(&DAT_0087cb68);
    *(undefined **)(unaff_EBP + -0x10) = &DAT_00dc4f20;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0079816f(&DAT_0087cb88);
    *(int **)(unaff_EBP + -0x10) = &DAT_00dc4df8;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_007980a8(&DAT_00dc4e90,1,1);
    *(undefined **)(unaff_EBP + -0x10) = &DAT_00dc4ee8;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00797f8a(&DAT_00dc4e38,1,1,1);
    *(undefined **)(&DAT_00dc4e24 + *(int *)(DAT_00dc4df8 + 4)) = &DAT_00dc4ee8;
    *(int **)(unaff_EBP + -0x10) = &DAT_00dc4d80;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_00797f8a(&DAT_00dc4f20,1,1,1);
    iVar1 = DAT_00dc4d80;
    *(int **)(unaff_EBP + -0x10) = &DAT_00dc4dc0;
    *(undefined **)(&DAT_00dc4dac + *(int *)(iVar1 + 4)) = &DAT_00dc4ee8;
    *(uint *)(&DAT_00dc4d8c + *(int *)(DAT_00dc4d80 + 4)) =
         *(uint *)(&DAT_00dc4d8c + *(int *)(DAT_00dc4d80 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_00797f8a(&DAT_00dc4f20,1,1,1);
    *(undefined **)(&DAT_00dc4dec + *(int *)(DAT_00dc4dc0 + 4)) = &DAT_00dc4ee8;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}


