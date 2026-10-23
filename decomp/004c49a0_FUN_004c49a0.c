// FUN_004c49a0 @ 4c49a0 size=574

void __thiscall FUN_004c49a0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  piVar8 = param_3;
  bVar5 = true;
  piVar1 = *(int **)(param_1 + 4);
  piVar6 = piVar1;
  piVar7 = (int *)piVar1[1];
  while (piVar7 != DAT_008e8328) {
    bVar5 = *param_3 < piVar7[3];
    piVar6 = piVar7;
    if (bVar5) {
      piVar7 = (int *)*piVar7;
    }
    else {
      piVar7 = (int *)piVar7[2];
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    if (bVar5) {
      if (piVar6 == (int *)*piVar1) {
        puVar9 = (undefined4 *)FUN_004c50e0(&param_3,piVar7,piVar6,param_3);
        *param_2 = *puVar9;
        *(undefined1 *)(param_2 + 1) = 1;
        return;
      }
      FUN_004c5450();
    }
    if (piVar6[3] < *piVar8) {
      puVar9 = (undefined4 *)FUN_004c50e0(&param_3,piVar7,piVar6,piVar8);
      *param_2 = *puVar9;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    *param_2 = piVar6;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  param_3 = (int *)FUN_004c5430(piVar6,0);
  *param_3 = (int)DAT_008e8328;
  param_3[2] = (int)DAT_008e8328;
  FUN_004c5500(param_3 + 3,piVar8);
  puVar9 = param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (((piVar6 == *(int **)(param_1 + 4)) || (piVar7 != DAT_008e8328)) || (*piVar8 < piVar6[3])) {
    *piVar6 = (int)param_3;
    piVar1 = *(int **)(param_1 + 4);
    if (piVar6 == piVar1) {
      piVar1[1] = (int)param_3;
      *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
    else if (piVar6 == (int *)*piVar1) {
      *piVar1 = (int)param_3;
    }
  }
  else {
    piVar6[2] = (int)param_3;
    if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = param_3;
    }
  }
  puVar10 = param_3;
  if (param_3 != *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
    do {
      puVar2 = (undefined4 *)puVar10[1];
      if (puVar2[5] != 0) break;
      puVar3 = *(undefined4 **)puVar2[1];
      if (puVar2 == puVar3) {
        iVar4 = ((undefined4 *)puVar2[1])[2];
        if (*(int *)(iVar4 + 0x14) == 0) {
          puVar2[5] = 1;
          *(undefined4 *)(iVar4 + 0x14) = 1;
          *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
          puVar10 = *(undefined4 **)(puVar10[1] + 4);
        }
        else {
          if (puVar10 == (undefined4 *)puVar2[2]) {
            FUN_004c5350(puVar2);
            puVar10 = puVar2;
          }
          *(undefined4 *)(puVar10[1] + 0x14) = 1;
          *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
          FUN_004c53d0(*(undefined4 *)(puVar10[1] + 4));
        }
      }
      else if (puVar3[5] == 0) {
        puVar2[5] = 1;
        puVar3[5] = 1;
        *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
        puVar10 = *(undefined4 **)(puVar10[1] + 4);
      }
      else {
        if (puVar10 == (undefined4 *)*puVar2) {
          FUN_004c53d0(puVar2);
          puVar10 = puVar2;
        }
        *(undefined4 *)(puVar10[1] + 0x14) = 1;
        *(undefined4 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
        FUN_004c5350(*(undefined4 *)(puVar10[1] + 4));
      }
    } while (puVar10 != *(undefined4 **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14) = 1;
  *param_2 = puVar9;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}


