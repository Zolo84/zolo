// FUN_007524b0 @ 7524b0 size=409

int __thiscall FUN_007524b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_c;
  undefined1 local_4 [4];
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 4;
  }
  if (param_1 + 4 == param_2) {
    return param_1;
  }
  piVar2 = *(int **)(param_1 + 8);
  piVar5 = (int *)*piVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (piVar5 != piVar2) {
      FUN_0074a520();
      FUN_00749060(local_4,piVar5);
    }
  }
  else {
    piVar5 = (int *)piVar2[1];
    if ((int *)piVar2[1] != DAT_00d4bdfc) {
      do {
        FUN_00749460(piVar5[2]);
        piVar2 = (int *)*piVar5;
        FUN_00796cd8(piVar5);
        piVar5 = piVar2;
      } while (piVar2 != DAT_00d4bdfc);
    }
    *(int **)(*(int *)(param_1 + 8) + 4) = DAT_00d4bdfc;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
    *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  }
  piVar2 = *(int **)(param_1 + 8);
  piVar5 = *(int **)(*(int *)(param_2 + 4) + 4);
  piVar4 = piVar2;
  local_c = piVar5;
  if (piVar5 != DAT_00d4bdfc) {
    do {
      piVar2 = (int *)FUN_0074a0e0(piVar4,piVar5[5]);
      if (local_c == piVar5) {
        local_c = piVar2;
      }
      iVar3 = FUN_0074a490(piVar5[2],piVar2);
      piVar2[2] = iVar3;
      FUN_0074acc0(piVar2 + 3,piVar5 + 3);
      *piVar4 = (int)piVar2;
      piVar5 = (int *)*piVar5;
      piVar4 = piVar2;
    } while (piVar5 != DAT_00d4bdfc);
  }
  *piVar2 = (int)DAT_00d4bdfc;
  *(int **)(*(int *)(param_1 + 8) + 4) = local_c;
  puVar1 = *(undefined4 **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  piVar2 = (int *)puVar1[1];
  if (piVar2 == DAT_00d4bdfc) {
    *puVar1 = puVar1;
    *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
    return param_1;
  }
  for (piVar5 = (int *)*piVar2; piVar5 != DAT_00d4bdfc; piVar5 = (int *)*piVar5) {
    piVar2 = piVar5;
  }
  *puVar1 = piVar2;
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 4);
  for (piVar5 = (int *)piVar2[2]; piVar5 != DAT_00d4bdfc; piVar5 = (int *)piVar5[2]) {
    piVar2 = piVar5;
  }
  *(int **)(*(int *)(param_1 + 8) + 8) = piVar2;
  return param_1;
}


