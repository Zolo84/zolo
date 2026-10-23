// FUN_004a0d30 @ 4a0d30 size=793

undefined4 __thiscall FUN_004a0d30(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (param_4 == *(int *)(param_1 + 6)) {
    cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
    FUN_00586a70(param_2,param_3,(&DAT_0089cad8)[param_4]);
    if (param_2 == 9) {
      if (((extraout_ST0_00 <= (float10)*(float *)(DAT_00d0ca90 + 0x39c8)) && (cVar3 == '\0')) &&
         (iVar4 = FUN_00451250(param_4), iVar4 < 0x14)) {
        return 1;
      }
    }
    else if (param_2 == 10) {
      if ((extraout_ST0_00 <= (float10)*(float *)(DAT_00d0ca90 + 0x39c8)) &&
         (iVar4 = FUN_00451250(param_4), 0 < iVar4)) {
        return 1;
      }
    }
  }
  else {
    cVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
    if ((cVar3 == '\0') && (iVar4 = FUN_004a5c40(0xc,param_4), 0 < iVar4)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    FUN_00586a70(param_2,param_3,(&DAT_0089cad8)[param_4]);
    bVar1 = false;
    if ((param_4 != 0) && ((&DAT_0089cad8)[param_4] != 0)) {
      bVar1 = 0 < *(int *)((&DAT_0089cad8)[param_4] + 0x4652);
    }
    if (((((param_2 == 0) || (param_2 == 2)) || (param_2 == 3)) ||
        ((param_2 == 4 || (param_2 == 7)))) ||
       ((param_2 == 8 || ((param_2 == 10 || (param_2 == 1)))))) {
      if ((extraout_ST0 < (float10)*(float *)(DAT_00d0ca90 + 0x39c8)) && (bVar2)) {
        return 1;
      }
    }
    else if (param_2 == 6) {
      if (((extraout_ST0 < (float10)*(float *)(DAT_00d0ca90 + 0x39c8)) && (bVar2)) &&
         (cVar3 = (**(code **)(*(int *)((&DAT_0089cad8)[param_4] + 0xe8a0) + 8))(), cVar3 == '\0'))
      {
        return 1;
      }
    }
    else if (param_2 == 9) {
      cVar3 = FUN_0042ddd0(DAT_00893530 + 0x14);
      if ((cVar3 == '\0') && (cVar3 = FUN_004512e0(param_4), cVar3 == '\0')) {
        if (((float)extraout_ST0 < *(float *)(DAT_00d0ca90 + 0x39c8)) &&
           (iVar4 = FUN_00451250(param_4), iVar4 < 10)) {
          return 1;
        }
      }
    }
    else if (param_2 == 5) {
      if (((extraout_ST0 < (float10)*(float *)(DAT_00d0ca90 + 0x39c8)) && (bVar2)) && (bVar1)) {
        return 1;
      }
    }
  }
  return 0;
}


