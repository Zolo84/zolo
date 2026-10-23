// FUN_004d8cf0 @ 4d8cf0 size=291

undefined4 FUN_004d8cf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  iVar2 = DAT_00a9842c;
  iVar1 = DAT_00a98424;
  cVar3 = FUN_004e1fc0();
  if (cVar3 == '\0') {
    if (param_1 < 0) {
      param_1 = param_1 + 0x7500;
    }
    if (0x74ff < param_1) {
      param_1 = param_1 + -0x7500;
    }
    if (param_2 < iVar1) {
      param_2 = iVar1;
    }
    if (iVar2 < param_2) {
      param_2 = iVar2;
    }
  }
  else {
    if (DAT_00a983e8 < DAT_00a983e0) {
      if (param_1 < 0) {
        param_1 = param_1 + 0x7500;
      }
      if (0x74ff < param_1) {
        param_1 = param_1 + -0x7500;
      }
      if ((DAT_00a983e8 < param_1) && (param_1 < DAT_00a983e0 + -1000)) {
        param_1 = DAT_00a983e8;
      }
      if ((param_1 < DAT_00a983e0) && (DAT_00a983e8 + 1000 < param_1)) {
        param_1 = DAT_00a983e0;
      }
    }
    else {
      if (param_1 < DAT_00a983e0) {
        param_1 = DAT_00a983e0;
      }
      if (DAT_00a983e8 < param_1) {
        param_1 = DAT_00a983e8;
      }
    }
    if (param_2 < DAT_00a983e4) {
      param_2 = DAT_00a983e4;
    }
    if (DAT_00a983ec < param_2) {
      param_2 = DAT_00a983ec;
    }
  }
  DAT_00a98468 = param_1;
  bVar5 = (byte)DAT_00a98464;
  DAT_00a9846c = param_2;
  uVar4 = param_1 - ((DAT_00a98438 - DAT_00a98430 >> 1) << (bVar5 & 0x1f));
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + 0x7500;
  }
  if (0x74ff < (int)uVar4) {
    uVar4 = uVar4 - 0x7500;
  }
  uVar6 = -0x20 << (bVar5 & 0x1f);
  DAT_00847858 = uVar4 & uVar6;
  DAT_0084785c = param_2 - ((DAT_00a9843c - DAT_00a98434 >> 1) << (bVar5 & 0x1f)) & uVar6;
  return CONCAT31((int3)(DAT_00847858 >> 8),1);
}


