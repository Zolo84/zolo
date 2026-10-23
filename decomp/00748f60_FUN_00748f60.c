// FUN_00748f60 @ 748f60 size=243

undefined1 * __thiscall FUN_00748f60(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[8] = param_2[8];
  FUN_007494a0();
  piVar2 = *(int **)(param_1 + 4);
  piVar5 = *(int **)(*(int *)(param_2 + 4) + 4);
  piVar4 = piVar2;
  local_4 = piVar5;
  if (piVar5 != DAT_00d4bdfc) {
    do {
      piVar2 = (int *)FUN_0074a0e0(piVar4,piVar5[5]);
      if (local_4 == piVar5) {
        local_4 = piVar2;
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
  *(int **)(*(int *)(param_1 + 4) + 4) = local_4;
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  piVar2 = (int *)puVar1[1];
  if (piVar2 != DAT_00d4bdfc) {
    for (piVar5 = (int *)*piVar2; piVar5 != DAT_00d4bdfc; piVar5 = (int *)*piVar5) {
      piVar2 = piVar5;
    }
    *puVar1 = piVar2;
    piVar2 = *(int **)(*(int *)(param_1 + 4) + 4);
    for (piVar5 = (int *)piVar2[2]; piVar5 != DAT_00d4bdfc; piVar5 = (int *)piVar5[2]) {
      piVar2 = piVar5;
    }
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar2;
    return param_1;
  }
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return param_1;
}


