// FUN_00753f80 @ 753f80 size=393

undefined4 __thiscall FUN_00753f80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *local_8;
  int local_4;
  
  iVar1 = (int)param_2;
  if (param_2 == (int *)0x0) {
    return 0xe;
  }
  param_2 = *(int **)((int)param_2 + 0x24);
  local_8 = param_2;
  FUN_00754250(&local_4,&local_8);
  if (local_4 == *(int *)(param_1 + 8)) {
    return 3;
  }
  iVar2 = FUN_00748610(&param_2);
  if (*(int *)(iVar2 + 0x5c) != *(int *)(iVar1 + 0x28)) {
    return 9;
  }
  FUN_00748610(&param_2);
  FUN_0074b320();
  piVar3 = (int *)FUN_00754370(&param_2);
  piVar4 = (int *)FUN_00754340(&param_2);
  piVar5 = piVar4;
  while (piVar5 != piVar3) {
    if ((int *)piVar5[2] == DAT_00d4be04) {
      piVar6 = (int *)piVar5[1];
      if (piVar5 == (int *)piVar6[2]) {
        do {
          piVar5 = piVar6;
          piVar6 = (int *)piVar5[1];
        } while (piVar5 == (int *)piVar6[2]);
      }
      if ((int *)piVar5[2] != piVar6) {
        piVar5 = piVar6;
      }
    }
    else {
      piVar5 = (int *)FUN_00754300((int *)piVar5[2]);
    }
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (piVar5 = *(int **)(param_1 + 8), piVar4 == (int *)*piVar5)) && (piVar3 == piVar5)) {
    piVar3 = (int *)piVar5[1];
    local_8 = piVar4;
    if ((int *)piVar5[1] != DAT_00d4be04) {
      do {
        FUN_00749c20(piVar3[2]);
        piVar5 = (int *)*piVar3;
        FUN_0074ad40(0);
        FUN_00796cd8(piVar3);
        piVar3 = piVar5;
      } while (piVar5 != DAT_00d4be04);
    }
    *(int **)(*(int *)(param_1 + 8) + 4) = DAT_00d4be04;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
    *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
    return 0;
  }
  while (piVar4 != piVar3) {
    local_8 = piVar4;
    FUN_0074a5d0();
    FUN_007497b0(&local_4,piVar4);
    piVar4 = local_8;
  }
  return 0;
}


