// FUN_004d8ba0 @ 4d8ba0 size=168

bool FUN_004d8ba0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_1 < 0) {
    param_1 = param_1 + 0x7500;
  }
  FUN_004d8cf0(DAT_00a98468,DAT_00a9846c);
  param_1 = param_1 - DAT_00847858;
  if (param_1 < -0x3a80) {
    param_1 = param_1 + 0x7500;
  }
  *param_3 = (param_1 >> ((byte)DAT_00a98464 & 0x1f)) + DAT_00a98430;
  iVar1 = DAT_00a98434 + (param_2 - DAT_0084785c >> ((byte)DAT_00a98464 & 0x1f));
  param_3[1] = iVar1;
  if (*param_3 < 0) {
    return false;
  }
  if (iVar1 < 0) {
    return false;
  }
  iVar1 = FUN_005841a0();
  if (iVar1 <= *param_3) {
    return false;
  }
  iVar1 = FUN_005841b0();
  return param_3[1] < iVar1;
}


