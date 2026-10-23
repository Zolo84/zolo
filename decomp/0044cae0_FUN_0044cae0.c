// FUN_0044cae0 @ 44cae0 size=337

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0044cae0(int param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  
  iVar3 = (&DAT_0089cad8)[(int)param_3];
  if (iVar3 != 0) {
    iVar6 = param_2 * 0x3c;
    param_3 = *(float *)(iVar6 + 0x134d8 + param_1) + _DAT_007e3374 +
              *(float *)(iVar6 + 0x134f4 + iVar3);
    iVar2 = (**(code **)(*(int *)(param_1 + 0xe88e) + 4))();
    iVar3 = (**(code **)(*(int *)(iVar3 + 0xe88e) + 4))();
    if (iVar3 <= iVar2 / 2) {
      param_3 = param_3 + *(float *)(iVar6 + 0x134dc + param_1);
    }
    uVar4 = FUN_00760760();
    iVar3 = FUN_00763e40(uVar4);
    uVar4 = FUN_00760760();
    iVar2 = FUN_00763e40(uVar4);
    if (iVar3 == iVar2) {
      fVar1 = *(float *)(iVar6 + 0x134e0 + param_1);
    }
    else {
      fVar1 = *(float *)(iVar6 + 0x134e4 + param_1);
    }
    param_3 = param_3 + fVar1;
    iVar3 = FUN_00760760();
    iVar2 = FUN_00760760();
    uVar5 = iVar2 - iVar3 >> 0x1f;
    if ((int)((iVar2 - iVar3 ^ uVar5) - uVar5) < 3) {
      param_3 = param_3 + *(float *)(param_1 + (param_2 * 3 + 0xf72) * 0x14);
    }
    iVar3 = FUN_00760760();
    if ((iVar3 < 3) || (6 < iVar3)) {
      fVar7 = (float10)param_3 + (float10)*(float *)(iVar6 + 0x134ec + param_1);
    }
    else {
      fVar7 = (float10)param_3 + (float10)*(float *)(iVar6 + 0x134f0 + param_1);
    }
    if ((float10)_DAT_007e3380 <= fVar7) {
      return fVar7;
    }
  }
  return (float10)_DAT_007e3380;
}


