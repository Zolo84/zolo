// FUN_006ac630 @ 6ac630 size=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006ac630(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 0xa4) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  *(float *)(param_1 + 8) = *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0xc) = *(float *)(param_2 + 0xc) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x10) = *(float *)(param_2 + 0x10) + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) = *(float *)(param_2 + 0x14) + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18) + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 0x1c) + *(float *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_2 + 0x38) + *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    fVar2 = (float)*(int *)(param_1 + 0x38) / (float)iVar3;
    fVar1 = _DAT_007e3374 - fVar2;
    *(float *)(param_1 + 0x20) =
         fVar2 * *(float *)(param_1 + 0x20) + fVar1 * *(float *)(param_2 + 0x20);
    *(float *)(param_1 + 0x24) =
         fVar2 * *(float *)(param_1 + 0x24) + fVar1 * *(float *)(param_2 + 0x24);
  }
  *(int *)(param_1 + 0x38) = iVar3;
  iVar3 = *(int *)(param_2 + 0x3c) + *(int *)(param_1 + 0x3c);
  if (iVar3 != 0) {
    fVar2 = (float)*(int *)(param_1 + 0x3c) / (float)iVar3;
    fVar1 = _DAT_007e3374 - fVar2;
    *(float *)(param_1 + 0x28) =
         fVar2 * *(float *)(param_1 + 0x28) + fVar1 * *(float *)(param_2 + 0x28);
    *(float *)(param_1 + 0x2c) =
         fVar2 * *(float *)(param_1 + 0x2c) + fVar1 * *(float *)(param_2 + 0x2c);
  }
  *(int *)(param_1 + 0x3c) = iVar3;
  iVar3 = *(int *)(param_2 + 0x40) + *(int *)(param_1 + 0x40);
  if (iVar3 != 0) {
    fVar1 = (float)*(int *)(param_1 + 0x40) / (float)iVar3;
    *(float *)(param_1 + 0x30) =
         fVar1 * *(float *)(param_1 + 0x30) + (_DAT_007e3374 - fVar1) * *(float *)(param_2 + 0x30);
  }
  *(int *)(param_1 + 0x40) = iVar3;
  *(float *)(param_1 + 0x34) = *(float *)(param_2 + 0x34) + *(float *)(param_1 + 0x34);
  return;
}


