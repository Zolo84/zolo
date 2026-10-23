// FUN_00796e50 @ 796e50 size=383

undefined4 FUN_00796e50(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00798acc();
  bVar2 = DAT_0087c078 < 0;
  if (bVar2) {
    DAT_0087c078 = 1;
  }
  else {
    DAT_0087c078 = DAT_0087c078 + 1;
  }
  FUN_00798b68();
  if (bVar2) {
    *(undefined **)(unaff_EBP + -0x10) = &DAT_00dc4cf0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007971ad(&PTR_DAT_0087cb48);
    *(undefined **)(unaff_EBP + -0x10) = &DAT_00dc4bc8;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_007971ad(&DAT_0087cb68);
    *(int **)(unaff_EBP + -0x10) = &DAT_00dc4cb0;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_007970e6(&DAT_00dc4cf0,1,1);
    *(undefined4 **)(unaff_EBP + -0x10) = &DAT_00dc4c20;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_00797012(&DAT_00dc4bc8,1,1,1);
    iVar1 = DAT_00dc4cb0;
    *(undefined **)(unaff_EBP + -0x10) = &DAT_00dc4c58;
    *(undefined4 **)(&DAT_00dc4cdc + *(int *)(iVar1 + 4)) = &DAT_00dc4c20;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_007971ad(&DAT_0087cb88);
    *(int **)(unaff_EBP + -0x10) = &DAT_00dc4d48;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_00797012(&DAT_00dc4c58,1,1,1);
    iVar1 = DAT_00dc4d48;
    *(int **)(unaff_EBP + -0x10) = &DAT_00dc4b90;
    *(undefined4 **)(&DAT_00dc4d74 + *(int *)(iVar1 + 4)) = &DAT_00dc4c20;
    *(uint *)(&DAT_00dc4d54 + *(int *)(DAT_00dc4d48 + 4)) =
         *(uint *)(&DAT_00dc4d54 + *(int *)(DAT_00dc4d48 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_00797012(&DAT_00dc4c58,1,1,1);
    *(undefined4 **)(&DAT_00dc4bbc + *(int *)(DAT_00dc4b90 + 4)) = &DAT_00dc4c20;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}


