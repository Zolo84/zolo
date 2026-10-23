// FUN_004d89d0 @ 4d89d0 size=137

void FUN_004d89d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_004d8cf0(DAT_00a98468,DAT_00a9846c);
  iVar1 = (param_2 - DAT_00a98430 << ((byte)DAT_00a98464 & 0x1f)) + DAT_00847858;
  iVar2 = (param_3 - DAT_00a98434 << ((byte)DAT_00a98464 & 0x1f)) + DAT_0084785c;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7500;
  }
  if (0x74ff < iVar1) {
    iVar1 = iVar1 + -0x7500;
  }
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
  return;
}


