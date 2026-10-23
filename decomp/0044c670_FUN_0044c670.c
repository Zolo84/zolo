// FUN_0044c670 @ 44c670 size=386

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0044c670(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  
  iVar4 = (&DAT_0089cad8)[(int)param_3];
  if (iVar4 == 0) {
    return (float10)_DAT_007e3380;
  }
  fVar7 = (float10)_DAT_007e3380;
  switch(param_2) {
  case 1:
    iVar3 = 1;
    break;
  default:
    goto switchD_0044c6ad_caseD_2;
  case 6:
    iVar3 = 6;
    break;
  case 8:
    iVar3 = 8;
    break;
  case 0xb:
    fVar7 = (float10)_DAT_007e3374;
    iVar3 = 0xb;
    break;
  case 0x11:
    iVar3 = 0x11;
    break;
  case 0x12:
    iVar3 = 0x12;
    break;
  case 0x13:
    iVar3 = 0x13;
    break;
  case 0x18:
    iVar3 = 0x18;
  }
  iVar1 = param_1 + iVar3 * 0x3c;
  param_3 = (float)(fVar7 + (float10)*(float *)(param_1 + 0x134f8 + iVar3 * 0x3c));
  iVar3 = (**(code **)(*(int *)(param_1 + 0xe88e) + 4))();
  iVar4 = (**(code **)(*(int *)(iVar4 + 0xe88e) + 4))();
  if (iVar4 <= iVar3 / 2) {
    param_3 = param_3 + *(float *)(iVar1 + 0x134fc);
  }
  uVar5 = FUN_00760760();
  iVar4 = FUN_00763e40(uVar5);
  uVar5 = FUN_00760760();
  iVar3 = FUN_00763e40(uVar5);
  if (iVar4 == iVar3) {
    fVar2 = *(float *)(iVar1 + 0x13500);
  }
  else {
    fVar2 = *(float *)(iVar1 + 0x13504);
  }
  param_3 = param_3 + fVar2;
  iVar4 = FUN_00760760();
  iVar3 = FUN_00760760();
  uVar6 = iVar3 - iVar4 >> 0x1f;
  if ((int)((iVar3 - iVar4 ^ uVar6) - uVar6) < 3) {
    param_3 = param_3 + *(float *)(iVar1 + 0x13508);
  }
  iVar4 = FUN_00760760();
  if ((2 < iVar4) && (iVar4 < 7)) {
    return (float10)param_3 + (float10)*(float *)(iVar1 + 0x13510);
  }
  fVar7 = (float10)param_3 + (float10)*(float *)(iVar1 + 0x1350c);
switchD_0044c6ad_caseD_2:
  return fVar7;
}


