// FUN_004d8a60 @ 4d8a60 size=141

int * FUN_004d8a60(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    param_2 = param_2 + 0x7500;
  }
  FUN_004d8cf0(DAT_00a98468,DAT_00a9846c);
  param_2 = param_2 - DAT_00847858;
  if (param_2 < -0x3a80) {
    param_2 = param_2 + 0x7500;
  }
  iVar1 = (param_2 >> ((byte)DAT_00a98464 & 0x1f)) + DAT_00a98430;
  iVar2 = (param_3 - DAT_0084785c >> ((byte)DAT_00a98464 & 0x1f)) + DAT_00a98434;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if ((0x74ff < iVar1) || (0x2cff < iVar2)) {
    iVar2 = 0x2d00;
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}


