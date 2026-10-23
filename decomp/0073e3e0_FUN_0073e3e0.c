// FUN_0073e3e0 @ 73e3e0 size=74

uint __thiscall FUN_0073e3e0(int param_1,int param_2)

{
  float10 fVar1;
  int iVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 fVar4;
  
  uVar3 = *(uint *)(param_1 + 0x12);
  if (uVar3 != 0) {
    param_2 = (&DAT_0089cad8)[uVar3];
  }
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x1a) == '\0') {
      iVar2 = FUN_0044e750();
      fVar4 = (float10)iVar2;
    }
    else {
      iVar2 = FUN_0044e660();
      fVar4 = extraout_ST0;
    }
    fVar1 = (float10)*(float *)(param_1 + 0x16);
    uVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),
                     (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                     (ushort)(fVar4 == fVar1) << 0xe);
    if (fVar4 >= fVar1) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


