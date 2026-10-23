// FUN_0073c810 @ 73c810 size=42

int __fastcall FUN_0073c810(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint3 uVar4;
  
  iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x16));
  fVar2 = (float)*(int *)(iVar3 + 0x222);
  fVar1 = *(float *)(param_1 + 0x12);
  uVar4 = (uint3)(CONCAT22((short)((uint)iVar3 >> 0x10),
                           (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe) >> 8);
  if (fVar2 >= fVar1) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}


