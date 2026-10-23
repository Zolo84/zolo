// FUN_004a4150 @ 4a4150 size=493

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004a4150(int param_1,int param_2,int param_3)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  uVar3 = 0;
  if (((*(int *)(param_2 + 0x6c) == 0) ||
      (uVar3 = (**(code **)(*(int *)(*(int *)(param_2 + 0x6c) + 0x11c) + 4))(), uVar3 != 0)) ||
     (uVar3 = *(uint *)(param_2 + 0x13c),
     *(int *)(&DAT_00d7c830 + *(int *)(param_2 + 0x130) * 4) <= (int)uVar3)) goto LAB_004a4334;
  uVar3 = 0;
  piVar6 = (int *)(param_2 + 0x88);
  do {
    if (*piVar6 == *(int *)(param_3 + 0x88)) goto LAB_004a4334;
    uVar3 = uVar3 + 1;
    piVar6 = piVar6 + 1;
  } while ((int)uVar3 < 5);
  uVar3 = FUN_004fd350();
  if ((((char)uVar3 != '\0') || (uVar3 = FUN_0051b230(), *(int *)(uVar3 + 0x3d4) == 0)) ||
     ((uVar3 = CONCAT31((int3)(uVar3 >> 8),*(char *)(param_2 + 0x156)),
      *(char *)(param_2 + 0x156) != '\0' ||
      (uVar3 = *(uint *)(*(int *)(param_2 + 0x6c) + 0x176), uVar3 != 0)))) goto LAB_004a4334;
  uVar4 = FUN_00455130();
  if (((char)uVar4 != '\0') && (_DAT_007e3380 < _DAT_00dc1968)) {
    fVar1 = *(float *)(param_2 + 0xec) / *(float *)(param_2 + 0xf0);
    uVar3 = CONCAT22((short)((uint)uVar4 >> 0x10),
                     (ushort)(fVar1 < _DAT_00dc1968) << 8 |
                     (ushort)(NAN(fVar1) || NAN(_DAT_00dc1968)) << 10 |
                     (ushort)(fVar1 == _DAT_00dc1968) << 0xe);
    if (fVar1 < _DAT_00dc1968) goto LAB_004a4334;
  }
  iVar7 = *(int *)(param_3 + 0x148);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x117de);
  }
  if (DAT_00dc191d == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 6);
    FUN_004e9370(iVar7);
    cVar2 = FUN_0044b280(uVar4);
    if (cVar2 != '\0') {
      iVar7 = *(int *)(param_1 + 0x117de);
    }
    iVar5 = FUN_0051b230();
    iVar5 = *(int *)(iVar5 + 0x482);
    uVar3 = FUN_004e9370(iVar7);
    if (iVar5 != *(int *)(uVar3 + 0x482)) goto LAB_004a4334;
    uVar4 = *(undefined4 *)(param_1 + 6);
    FUN_0051b230();
    uVar3 = FUN_0044b280(uVar4);
    if ((char)uVar3 != '\0') goto LAB_004a4334;
  }
  iVar7 = *(int *)(param_2 + 0x130);
  iVar5 = *(int *)(param_3 + 0x88);
  uVar3 = (&DAT_00dbd1a2)[iVar7];
  if ((int)uVar3 < 0xc) {
    if (*(int *)((&DAT_00dbf99a)[iVar5] + 0x18) != 0) goto LAB_004a4334;
    if (0xb < (int)uVar3) goto LAB_004a42e8;
  }
  else {
LAB_004a42e8:
    if ((((int)uVar3 < 0x15) || (uVar3 == 0x8c)) && (*(int *)((&DAT_00dbf99a)[iVar5] + 0x18) != 1))
    goto LAB_004a4334;
  }
  if ((((int)uVar3 < 0x15) || (uVar3 == 0x8c)) ||
     (uVar3 = (&DAT_00dbf99a)[iVar5], *(int *)(uVar3 + 0x18) == 2)) {
    return CONCAT31((int3)((uint)(iVar7 * 7) >> 8),(&DAT_00d77ba0)[iVar7 * 0x8c + iVar5]);
  }
LAB_004a4334:
  return uVar3 & 0xffffff00;
}


