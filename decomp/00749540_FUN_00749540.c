// FUN_00749540 @ 749540 size=616

void __thiscall FUN_00749540(int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  puVar7 = param_3;
  bVar10 = true;
  piVar1 = *(int **)(param_1 + 4);
  piVar5 = piVar1;
  piVar6 = (int *)piVar1[1];
  while (piVar6 != DAT_00d4be04) {
    bVar10 = *param_3 < (uint)piVar6[3];
    piVar5 = piVar6;
    if (bVar10) {
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar6 = (int *)piVar6[2];
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    if (bVar10) {
      if (piVar5 == (int *)*piVar1) {
        puVar8 = (undefined4 *)FUN_0074a100(&param_3,piVar6,piVar5,param_3);
        *param_2 = *puVar8;
        *(undefined1 *)(param_2 + 1) = 1;
        return;
      }
      FUN_0074a570();
    }
    if ((uint)piVar5[3] < *puVar7) {
      puVar8 = (undefined4 *)FUN_0074a100(&param_3,piVar6,piVar5,puVar7);
      *param_2 = *puVar8;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    *param_2 = piVar5;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  param_3 = (uint *)FUN_0074a460(piVar5,0);
  *param_3 = (uint)DAT_00d4be04;
  param_3[2] = (uint)DAT_00d4be04;
  FUN_0074ab60(param_3 + 3,puVar7);
  puVar8 = param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (((piVar5 == *(int **)(param_1 + 4)) || (piVar6 != DAT_00d4be04)) ||
     (*puVar7 < (uint)piVar5[3])) {
    *piVar5 = (int)param_3;
    piVar1 = *(int **)(param_1 + 4);
    if (piVar5 == piVar1) {
      piVar1[1] = (int)param_3;
      *(uint **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
    else if (piVar5 == (int *)*piVar1) {
      *piVar1 = (int)param_3;
    }
  }
  else {
    piVar5[2] = (int)param_3;
    if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(uint **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
  }
  puVar9 = param_3;
  if (param_3 != *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
    do {
      puVar2 = (undefined4 *)puVar9[1];
      if (puVar2[0x23] != 0) break;
      puVar3 = *(undefined4 **)puVar2[1];
      if (puVar2 == puVar3) {
        iVar4 = ((undefined4 *)puVar2[1])[2];
        if (*(int *)(iVar4 + 0x8c) == 0) {
          puVar2[0x23] = 1;
          *(undefined4 *)(iVar4 + 0x8c) = 1;
          *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x8c) = 0;
          puVar9 = *(undefined4 **)(puVar9[1] + 4);
        }
        else {
          if (puVar9 == (undefined4 *)puVar2[2]) {
            FUN_0074a3a0(puVar2);
            puVar9 = puVar2;
          }
          *(undefined4 *)(puVar9[1] + 0x8c) = 1;
          *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x8c) = 0;
          FUN_0074a400(*(undefined4 *)(puVar9[1] + 4));
        }
      }
      else if (puVar3[0x23] == 0) {
        puVar2[0x23] = 1;
        puVar3[0x23] = 1;
        *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x8c) = 0;
        puVar9 = *(undefined4 **)(puVar9[1] + 4);
      }
      else {
        if (puVar9 == (undefined4 *)*puVar2) {
          FUN_0074a400(puVar2);
          puVar9 = puVar2;
        }
        *(undefined4 *)(puVar9[1] + 0x8c) = 1;
        *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x8c) = 0;
        FUN_0074a3a0(*(undefined4 *)(puVar9[1] + 4));
      }
    } while (puVar9 != *(undefined4 **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x8c) = 1;
  *param_2 = puVar8;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}


