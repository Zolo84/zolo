// FUN_00404c50 @ 404c50 size=825

void __thiscall
FUN_00404c50(int param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (0xc80 < *(int *)(param_1 + 8)) {
    return;
  }
  local_10 = *param_2 + param_9;
  local_c = param_2[1] + param_10;
  local_18 = param_9 + *param_3;
  local_14 = param_3[1] + param_10;
  local_8 = *param_4 + param_9;
  local_4 = param_4[1] + param_10;
  if (local_10 < 0) {
    local_10 = 0;
  }
  else if (*(int *)(param_1 + 4) <= local_10) {
    local_10 = *(int *)(param_1 + 4) + -1;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  else if (*(int *)(param_1 + 8) <= local_c) {
    local_c = *(int *)(param_1 + 8) + -1;
  }
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (*(int *)(param_1 + 4) <= local_18) {
    local_18 = *(int *)(param_1 + 4) + -1;
  }
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if (*(int *)(param_1 + 8) <= local_14) {
    local_14 = *(int *)(param_1 + 8) + -1;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  else if (*(int *)(param_1 + 4) <= local_8) {
    local_8 = *(int *)(param_1 + 4) + -1;
  }
  if (local_4 < 0) {
    local_4 = 0;
  }
  else if (*(int *)(param_1 + 8) <= local_4) {
    local_4 = *(int *)(param_1 + 8) + -1;
  }
  param_3 = (int *)local_c;
  if (local_14 <= local_c) {
    param_3 = (int *)local_14;
  }
  if (local_4 < (int)param_3) {
    param_3 = (int *)local_4;
  }
  param_2 = (int *)local_c;
  if (local_c <= local_14) {
    param_2 = (int *)local_14;
  }
  if ((int)param_2 < local_4) {
    param_2 = (int *)local_4;
  }
  param_4 = (int *)local_18;
  if (local_10 < local_18) {
    param_4 = (int *)local_10;
  }
  if (local_8 < (int)param_4) {
    param_4 = (int *)local_8;
  }
  iVar1 = local_18;
  if (local_18 < local_10) {
    iVar1 = local_10;
  }
  if (iVar1 < local_8) {
    iVar1 = local_8;
  }
  if ((int)param_2 < 1) {
    return;
  }
  if (*(int *)(param_1 + 8) <= (int)param_3) {
    return;
  }
  if (iVar1 < 1) {
    return;
  }
  if (*(int *)(param_1 + 4) <= (int)param_4) {
    return;
  }
  if ((local_c < local_14) || ((local_c == local_14 && (local_10 <= local_18)))) {
    if ((local_c < local_4) || ((local_c == local_4 && (local_10 <= local_8)))) {
      FUN_00404f90(&DAT_008806e8,&local_10,&local_18,param_5,param_6);
      if (local_14 < local_4) {
        puVar3 = &DAT_008806e8;
      }
      else {
        puVar3 = &DAT_00886ae8;
      }
      FUN_00404f90(puVar3,&local_18,&local_8,param_6,param_7);
      piVar4 = &local_10;
      piVar2 = &local_8;
      uVar5 = param_7;
      param_6 = param_5;
      goto LAB_00404f22;
    }
  }
  else if ((local_14 < local_4) || ((local_14 == local_4 && (local_18 <= local_8)))) {
    FUN_00404f90(&DAT_008806e8,&local_18,&local_8,param_6,param_7);
    if (local_4 < local_c) {
      puVar3 = &DAT_008806e8;
    }
    else {
      puVar3 = &DAT_00886ae8;
    }
    FUN_00404f90(puVar3,&local_8,&local_10,param_7,param_5);
    piVar4 = &local_18;
    piVar2 = &local_10;
    uVar5 = param_5;
    goto LAB_00404f22;
  }
  FUN_00404f90(&DAT_008806e8,&local_8,&local_10,param_7,param_5);
  if (local_c < local_14) {
    puVar3 = &DAT_008806e8;
  }
  else {
    puVar3 = &DAT_00886ae8;
  }
  FUN_00404f90(puVar3,&local_10,&local_18,param_5,param_6);
  piVar4 = &local_8;
  piVar2 = &local_18;
  uVar5 = param_6;
  param_6 = param_7;
LAB_00404f22:
  FUN_00404f90(&DAT_00886ae8,piVar2,piVar4,uVar5,param_6);
  if ((param_9 == 0) && (param_10 == 0)) {
    FUN_004050a0(&DAT_008806e8,param_3,param_2,param_8);
    return;
  }
  FUN_00405170(&DAT_008806e8,param_3,param_2,&param_9);
  return;
}


