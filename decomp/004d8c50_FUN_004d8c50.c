// FUN_004d8c50 @ 4d8c50 size=156

int FUN_004d8c50(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint3 uVar2;
  
  if (param_1 < 0) {
    param_1 = param_1 + 0x7500;
  }
  FUN_004d8cf0(DAT_00a98468,DAT_00a9846c);
  param_1 = param_1 - DAT_00847858;
  if (param_1 < -0x3a80) {
    param_1 = param_1 + 0x7500;
  }
  *param_3 = param_1 >> ((byte)DAT_00a98464 & 0x1f);
  iVar1 = param_2 - DAT_0084785c >> ((byte)DAT_00a98464 & 0x1f);
  param_3[1] = iVar1;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (*param_3 < 0) {
    return (uint)uVar2 << 8;
  }
  if (iVar1 < 0) {
    return (uint)uVar2 << 8;
  }
  if (DAT_00a98438 - DAT_00a98430 <= *param_3) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,iVar1 < DAT_00a9843c - DAT_00a98434);
}


