// FUN_005f7d00 @ 5f7d00 size=450

void __fastcall FUN_005f7d00(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = 5;
  puVar2 = (undefined4 *)(param_1 + 0xac);
  do {
    puVar2[-5] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = param_1 + 0x7e;
  iVar3 = FUN_00428ee0(iVar4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar3 + 0x136);
  iVar3 = FUN_00428ee0(iVar4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar3 + 0x13e);
  iVar3 = FUN_00428ee0(iVar4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar3 + 0x146);
  iVar3 = FUN_00428ee0(iVar4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar3 + 0x13a);
  iVar3 = FUN_00428ee0(iVar4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar3 + 0x142);
  FUN_00428ee0(iVar4);
  iVar3 = FUN_004d5be0();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x482) + 0x2c);
  while (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8);
    fVar5 = (float10)FUN_004ec5a0();
    *(float *)(param_1 + 0xac) = (float)(fVar5 + (float10)*(float *)(param_1 + 0xac));
    fVar5 = (float10)FUN_004ec6c0();
    *(float *)(param_1 + 0xb0) = (float)(fVar5 + (float10)*(float *)(param_1 + 0xb0));
    fVar5 = (float10)FUN_004ec900();
    *(float *)(param_1 + 0xb4) = (float)(fVar5 + (float10)*(float *)(param_1 + 0xb4));
    fVar5 = (float10)FUN_004ec7e0();
    *(float *)(param_1 + 0xb8) = (float)(fVar5 + (float10)*(float *)(param_1 + 0xb8));
  }
  FUN_00428ee0(iVar4);
  iVar3 = FUN_004d5bf0();
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar3 + 0x26c);
  FUN_00428ee0(iVar4);
  cVar1 = FUN_004d2f60();
  if (cVar1 != '\0') {
    iVar4 = FUN_00428ee0(iVar4);
    if (iVar4 != 0) {
      iVar4 = FUN_004d5bf0();
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar4 + 0x268);
      return;
    }
    iVar4 = FUN_004d5bf0();
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar4 + 0x268);
  }
  return;
}


