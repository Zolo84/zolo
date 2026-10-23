// FUN_00689210 @ 689210 size=288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00689210(int param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x120);
  if (param_2 == _DAT_007e3380) {
    return (float10)_DAT_007e3380;
  }
  if (param_3 != _DAT_007e3380) {
    iVar2 = (**(code **)(*(int *)(*(int *)(param_4 + 0x482) + 0x28) + 4))();
    if (iVar2 == 1) {
      if ((*(int *)(param_4 + 0x3d8) == 0) ||
         (iVar2 = *(int *)(param_4 + 0x482), iVar3 = FUN_0044e1d0(), iVar3 != iVar2)) {
        fVar4 = (float10)param_3 * (float10)*(float *)(iVar1 + 0x93c);
      }
      else {
        fVar4 = (float10)param_3 * (float10)*(float *)(iVar1 + 0x940);
      }
    }
    else {
      fVar4 = (float10)param_3;
    }
    switch(*(undefined4 *)(param_4 + 0x254)) {
    case 1:
      fVar5 = (float10)param_2 * (float10)*(float *)(iVar1 + 0x950);
      break;
    case 2:
      fVar5 = (float10)param_2 * (float10)*(float *)(iVar1 + 0x948);
      break;
    default:
      fVar5 = (float10)param_2;
      break;
    case 4:
      fVar5 = (float10)param_2 * (float10)*(float *)(iVar1 + 0x94c);
      break;
    case 5:
      fVar5 = (float10)param_2 * (float10)*(float *)(iVar1 + 0x954);
      break;
    case 6:
      fVar5 = (float10)param_2 * (float10)*(float *)(iVar1 + 0x944);
      break;
    case 7:
      fVar5 = (float10)param_2 * (float10)*(float *)(iVar1 + 0x958);
    }
    switch(*(undefined4 *)(param_4 + 0x3ac)) {
    case 1:
      return (fVar5 * (float10)*(float *)(iVar1 + 0x920)) / fVar4;
    case 3:
      return (fVar5 * (float10)*(float *)(iVar1 + 0x924)) / fVar4;
    case 4:
      return (fVar5 * (float10)*(float *)(iVar1 + 0x92c)) / fVar4;
    case 5:
      return (fVar5 * (float10)*(float *)(iVar1 + 0x928)) / fVar4;
    case 6:
      fVar5 = fVar5 * (float10)*(float *)(iVar1 + 0x930);
    }
    return fVar5 / fVar4;
  }
  return (float10)_DAT_007eb018;
}


