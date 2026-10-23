// FUN_0048f890 @ 48f890 size=331

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0048f890(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x14)];
  iVar4 = FUN_00428ee0(*(int *)(param_2 + 4) + 0xe);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -8;
  }
  cVar3 = (**(code **)(*(int *)(param_1 + 0x4518) + 0x24))(iVar4);
  if (cVar3 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x4518) + 0x18))(iVar4);
    fVar1 = *(float *)(iVar4 + 0xec);
    fVar2 = *(float *)(iVar4 + 0xf4);
    *(undefined4 *)(iVar4 + 0x5c) = uVar5;
    if (*(char *)(iVar4 + 0x162) == '\0') {
      uVar5 = FUN_0044c3d0((short)*(undefined4 *)(iVar4 + 0x130),
                           (short)*(undefined4 *)(iVar4 + 0x138));
      FUN_004fbc90(uVar5,0x8c,0,0,0);
    }
    if (*(float *)(iVar4 + 0xf0) < fVar1) {
      fVar1 = *(float *)(iVar4 + 0xf0);
    }
    *(float *)(iVar4 + 0xec) = fVar1;
    if (fVar2 < _DAT_007e3380) {
      fVar2 = _DAT_007e3380;
    }
    *(float *)(iVar4 + 0xf4) = fVar2;
    FUN_00458210(DAT_0088f28c,(short)((uint)DAT_0088f28e >> 0x10));
    *(undefined4 *)(iVar4 + 0x14c) = 0;
    FUN_005033b0(0xebf8);
    FUN_00458230(DAT_0088f28c,(short)((uint)DAT_0088f28e >> 0x10));
    FUN_0046a350((short)iVar4);
  }
  return 3;
}


