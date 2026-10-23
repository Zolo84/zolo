// FUN_004cffe0 @ 4cffe0 size=457

void __thiscall FUN_004cffe0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    if ((param_1[2] == 0) || (*(float *)(param_2 + 4) <= *(float *)(*(int *)param_1[2] + 4))) {
      *param_1 = param_2;
    }
    else {
      *param_1 = *(int *)param_1[2];
      FUN_004cffe0(param_2);
    }
  }
  else if (param_1[2] == 0) {
    if (*(float *)(param_2 + 4) <= *(float *)(*(int *)param_1[1] + 4)) {
      *param_1 = param_2;
    }
    else {
      *param_1 = *(int *)param_1[1];
      FUN_004cffe0(param_2);
    }
  }
  else {
    iVar1 = *(int *)param_1[1];
    iVar2 = *(int *)param_1[2];
    if ((*(float *)(iVar2 + 4) < *(float *)(iVar1 + 4)) ||
       (*(float *)(param_2 + 4) <= *(float *)(iVar1 + 4))) {
      if (*(float *)(param_2 + 4) <= *(float *)(iVar2 + 4)) {
        *param_1 = param_2;
      }
      else {
        *param_1 = iVar2;
        FUN_004cffe0(param_2);
      }
    }
    else {
      *param_1 = iVar1;
      FUN_004cffe0(param_2);
    }
  }
  return;
}


