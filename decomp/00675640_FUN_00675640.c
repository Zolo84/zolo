// FUN_00675640 @ 675640 size=607

undefined4 * __thiscall FUN_00675640(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *local_4;
  
  uVar3 = (uint)param_3;
  bVar9 = true;
  piVar7 = (int *)param_1[1];
  piVar8 = (int *)piVar7[1];
  local_4 = param_1;
  if (piVar8 != DAT_00d11170) {
    do {
      piVar7 = piVar8;
      puVar5 = (undefined4 *)piVar7[4];
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_007f0c98;
      }
      iVar6 = FUN_00676ec0(0,*(undefined4 *)(uVar3 + 8),puVar5,piVar7[5]);
      bVar9 = iVar6 < 0;
      if (bVar9) {
        piVar8 = (int *)*piVar7;
      }
      else {
        piVar8 = (int *)piVar7[2];
      }
    } while (piVar8 != DAT_00d11170);
  }
  if ((char)param_1[2] != '\0') {
    param_3 = (undefined4 *)FUN_00676630(piVar7,0);
    *param_3 = DAT_00d11170;
    param_3[2] = DAT_00d11170;
    FUN_00676c80(param_3 + 3,uVar3);
    param_1[3] = param_1[3] + 1;
    if (((piVar7 == (int *)param_1[1]) || (piVar8 != DAT_00d11170)) ||
       (iVar6 = FUN_00676e10(piVar7 + 3), iVar6 < 0)) {
      *piVar7 = (int)param_3;
      piVar8 = (int *)param_1[1];
      if (piVar7 == piVar8) {
        piVar8[1] = (int)param_3;
        *(undefined4 **)(param_1[1] + 8) = param_3;
      }
      else if (piVar7 == (int *)*piVar8) {
        *piVar8 = (int)param_3;
      }
    }
    else {
      piVar7[2] = (int)param_3;
      if (piVar7 == *(int **)(param_1[1] + 8)) {
        *(undefined4 **)(param_1[1] + 8) = param_3;
      }
    }
    puVar4 = param_3;
    puVar5 = param_3;
    if (param_3 != *(undefined4 **)(param_1[1] + 4)) {
      do {
        puVar1 = (undefined4 *)puVar5[1];
        if (puVar1[10] != 0) break;
        puVar2 = *(undefined4 **)puVar1[1];
        if (puVar1 == puVar2) {
          iVar6 = ((undefined4 *)puVar1[1])[2];
          if (*(int *)(iVar6 + 0x28) == 0) {
            puVar1[10] = 1;
            *(undefined4 *)(iVar6 + 0x28) = 1;
            *(undefined4 *)(*(int *)(puVar5[1] + 4) + 0x28) = 0;
            puVar5 = *(undefined4 **)(puVar5[1] + 4);
          }
          else {
            if (puVar5 == (undefined4 *)puVar1[2]) {
              FUN_00676570(puVar1);
              puVar5 = puVar1;
            }
            *(undefined4 *)(puVar5[1] + 0x28) = 1;
            *(undefined4 *)(*(int *)(puVar5[1] + 4) + 0x28) = 0;
            FUN_006765d0(*(undefined4 *)(puVar5[1] + 4));
          }
        }
        else if (puVar2[10] == 0) {
          puVar1[10] = 1;
          puVar2[10] = 1;
          *(undefined4 *)(*(int *)(puVar5[1] + 4) + 0x28) = 0;
          puVar5 = *(undefined4 **)(puVar5[1] + 4);
        }
        else {
          if (puVar5 == (undefined4 *)*puVar1) {
            FUN_006765d0(puVar1);
            puVar5 = puVar1;
          }
          *(undefined4 *)(puVar5[1] + 0x28) = 1;
          *(undefined4 *)(*(int *)(puVar5[1] + 4) + 0x28) = 0;
          FUN_00676570(*(undefined4 *)(puVar5[1] + 4));
        }
      } while (puVar5 != *(undefined4 **)(param_1[1] + 4));
    }
    *(undefined4 *)(*(int *)(param_1[1] + 4) + 0x28) = 1;
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
  local_4 = piVar7;
  if (bVar9) {
    if (piVar7 == *(int **)param_1[1]) goto LAB_00675860;
    FUN_006766b0();
  }
  iVar6 = FUN_00676e10(uVar3);
  if (-1 < iVar6) {
    param_3 = (undefined4 *)((uint)param_3 & 0xffffff00);
    FUN_00675da0(&local_4,&param_3);
    return param_2;
  }
LAB_00675860:
  puVar5 = (undefined4 *)FUN_00676300(&param_3,piVar8,piVar7,uVar3);
  *param_2 = *puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


