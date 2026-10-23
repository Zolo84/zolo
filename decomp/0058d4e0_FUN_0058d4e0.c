// FUN_0058d4e0 @ 58d4e0 size=235

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0058d4e0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  
  piVar1 = param_2;
  while( true ) {
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 4) break;
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 0x524) {
      FUN_005343dc();
      fVar3 = (float10)FUN_00429d80(*piVar1 + 0x10);
      param_2 = (int *)(float)fVar3;
      if ((float10)_DAT_007e3380 <= fVar3) {
        if (_DAT_007eb018 < (float)param_2) {
          param_2 = (int *)0x49742400;
        }
      }
      else {
        param_2 = (int *)0x0;
      }
      if (*(int *)(param_1 + 0x1b4) < *(int *)(param_1 + 0x1b8)) {
        *(int **)(*(int *)(param_1 + 0x1b0) + *(int *)(param_1 + 0x1b4) * 4) = param_2;
        *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
      }
      else {
        FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
      }
      if (*(float *)(param_1 + 0x1ca) < (float)param_2) {
        *(int **)(param_1 + 0x1ca) = param_2;
      }
    }
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 8) {
      FUN_005343dc();
    }
  }
  FUN_005343dc();
  return 0;
}


