// FUN_0073e260 @ 73e260 size=75

uint __thiscall FUN_0073e260(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x12);
  if (uVar5 != 0) {
    param_2 = (&DAT_0089cad8)[uVar5];
  }
  if (param_2 != 0) {
    iVar4 = CONCAT31((int3)(uVar5 >> 8),*(char *)(param_1 + 0x1a));
    if (*(char *)(param_1 + 0x1a) == '\0') {
      iVar1 = *(int *)(param_2 + 0x3954);
    }
    else {
      iVar4 = FUN_0044ab40();
      iVar1 = iVar4;
    }
    fVar3 = (float)iVar1;
    fVar2 = *(float *)(param_1 + 0x16);
    uVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),
                     (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                     (ushort)(fVar3 == fVar2) << 0xe);
    if (fVar3 >= fVar2) {
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
  return uVar5 & 0xffffff00;
}


