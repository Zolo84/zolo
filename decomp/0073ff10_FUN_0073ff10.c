// FUN_0073ff10 @ 73ff10 size=104

uint __thiscall FUN_0073ff10(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x12) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x16);
    param_2 = (&DAT_0089cad8)[uVar1];
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x1e);
    if (iVar2 == 1) {
      iVar2 = FUN_00451250(*(undefined4 *)(param_2 + 6));
      fVar3 = (float10)iVar2;
    }
    else if (iVar2 == 2) {
      fVar3 = (float10)FUN_004a5ee0();
    }
    else {
      uVar1 = iVar2 - 3;
      if (uVar1 != 0) goto LAB_0073ff72;
      fVar3 = (float10)FUN_004a5fb0();
    }
    if ((float10)*(float *)(param_1 + 0x1a) <= fVar3) {
      return 1;
    }
    return 0;
  }
LAB_0073ff72:
  return uVar1 & 0xffffff00;
}


