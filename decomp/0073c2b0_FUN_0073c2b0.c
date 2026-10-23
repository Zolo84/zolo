// FUN_0073c2b0 @ 73c2b0 size=76

void __thiscall FUN_0073c2b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004af6b0(&stack0x00000008);
  *(int *)(param_1 + 0x12) = iVar1;
  if (((DAT_00dc4b5e != '\0') && (iVar1 == 0)) && (param_2 != 0x524)) {
    FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00873a20,&stack0x00000008);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  return;
}


