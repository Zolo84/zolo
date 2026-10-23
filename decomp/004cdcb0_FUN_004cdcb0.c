// FUN_004cdcb0 @ 4cdcb0 size=853

int __fastcall FUN_004cdcb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_54;
  undefined4 *local_50;
  int local_34;
  uint local_2c;
  int local_10;
  int local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_54 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      local_34 = 0;
    }
    else {
      if (*(int *)(param_1 + 8) == 1) {
        local_8 = **(int **)(param_1 + 4);
        FUN_00796cd8(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xc) >> 1;
        local_2c = *(uint *)(param_1 + 0xc) + uVar4;
        if (*(uint *)(param_1 + 8) < local_2c) {
          local_50 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
          local_2c = *(uint *)(param_1 + 0xc);
        }
        else {
          local_50 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
        }
        if (uVar4 == 1) {
          local_10 = *(int *)*local_50;
          FUN_00796cd8(*local_50);
          *local_50 = 0;
        }
        else {
          local_10 = FUN_004cff40(*(uint *)(param_1 + 8),local_2c,uVar4);
        }
        local_8 = local_10;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
      }
      local_34 = local_8;
    }
    if (local_34 == 0) {
      local_54 = 0;
    }
    else if (*(int *)(param_1 + 4) == 0) {
      local_54 = local_34;
    }
    else {
      local_54 = **(int **)(param_1 + 4);
      piVar1 = *(int **)(param_1 + 4);
      if (piVar1[1] == 0) {
        if ((piVar1[2] == 0) || (*(float *)(local_34 + 4) <= *(float *)(*(int *)piVar1[2] + 4))) {
          *piVar1 = local_34;
        }
        else {
          *piVar1 = *(int *)piVar1[2];
          FUN_004cffe0(local_34);
        }
      }
      else if (piVar1[2] == 0) {
        if (*(float *)(local_34 + 4) <= *(float *)(*(int *)piVar1[1] + 4)) {
          *piVar1 = local_34;
        }
        else {
          *piVar1 = *(int *)piVar1[1];
          FUN_004cffe0(local_34);
        }
      }
      else {
        iVar2 = *(int *)piVar1[1];
        iVar3 = *(int *)piVar1[2];
        if ((*(float *)(iVar3 + 4) < *(float *)(iVar2 + 4)) ||
           (*(float *)(local_34 + 4) <= *(float *)(iVar2 + 4))) {
          if (*(float *)(local_34 + 4) <= *(float *)(iVar3 + 4)) {
            *piVar1 = local_34;
          }
          else {
            *piVar1 = iVar3;
            FUN_004cffe0(local_34);
          }
        }
        else {
          *piVar1 = iVar2;
          FUN_004cffe0(local_34);
        }
      }
    }
  }
  return local_54;
}


