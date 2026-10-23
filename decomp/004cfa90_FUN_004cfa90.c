// FUN_004cfa90 @ 4cfa90 size=511

int __thiscall FUN_004cfa90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_2;
    if (*(int *)(param_1 + 4) != 0) {
      iVar4 = **(int **)(param_1 + 4);
      piVar1 = *(int **)(param_1 + 4);
      if (piVar1[1] == 0) {
        if ((piVar1[2] == 0) || (*(float *)(param_2 + 4) <= *(float *)(*(int *)piVar1[2] + 4))) {
          *piVar1 = param_2;
        }
        else {
          *piVar1 = *(int *)piVar1[2];
          FUN_004cffe0(param_2);
        }
      }
      else if (piVar1[2] == 0) {
        if (*(float *)(param_2 + 4) <= *(float *)(*(int *)piVar1[1] + 4)) {
          *piVar1 = param_2;
        }
        else {
          *piVar1 = *(int *)piVar1[1];
          FUN_004cffe0(param_2);
        }
      }
      else {
        iVar2 = *(int *)piVar1[1];
        iVar3 = *(int *)piVar1[2];
        if ((*(float *)(iVar3 + 4) < *(float *)(iVar2 + 4)) ||
           (*(float *)(param_2 + 4) <= *(float *)(iVar2 + 4))) {
          if (*(float *)(param_2 + 4) <= *(float *)(iVar3 + 4)) {
            *piVar1 = param_2;
          }
          else {
            *piVar1 = iVar3;
            FUN_004cffe0(param_2);
          }
        }
        else {
          *piVar1 = iVar2;
          FUN_004cffe0(param_2);
        }
      }
    }
  }
  return iVar4;
}


