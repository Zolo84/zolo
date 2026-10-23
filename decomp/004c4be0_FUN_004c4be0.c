// FUN_004c4be0 @ 4c4be0 size=1021

void __thiscall FUN_004c4be0(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *local_c;
  
  FUN_004c54b0();
  piVar9 = (int *)*param_3;
  piVar5 = param_3 + 2;
  local_c = param_3;
  piVar8 = piVar5;
  if (piVar9 == DAT_008e8328) {
    piVar9 = (int *)*piVar5;
  }
  else {
    piVar2 = (int *)*piVar5;
    if (piVar2 != DAT_008e8328) {
      local_c = piVar2;
      for (piVar8 = (int *)*piVar2; piVar8 != DAT_008e8328; piVar8 = (int *)*piVar8) {
        local_c = piVar8;
      }
      piVar9 = (int *)local_c[2];
      piVar8 = local_c + 2;
    }
  }
  piVar2 = local_c;
  FUN_00798acc();
  if (local_c == param_3) {
    piVar9[1] = local_c[1];
    if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_1 + 4) + 4) = piVar9;
    }
    else {
      puVar6 = (undefined4 *)param_3[1];
      if ((int *)*puVar6 == param_3) {
        *puVar6 = piVar9;
      }
      else {
        puVar6[2] = piVar9;
      }
    }
    piVar8 = *(int **)(param_1 + 4);
    if ((int *)*piVar8 == param_3) {
      if ((int *)*piVar5 == DAT_008e8328) {
        *piVar8 = param_3[1];
      }
      else {
        piVar2 = (int *)*piVar9;
        piVar5 = piVar9;
        while (piVar4 = piVar2, piVar4 != DAT_008e8328) {
          piVar5 = piVar4;
          piVar2 = (int *)*piVar4;
        }
        *piVar8 = (int)piVar5;
      }
    }
    if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
      if ((int *)*param_3 == DAT_008e8328) {
        piVar5 = (int *)param_3[1];
      }
      else {
        piVar8 = (int *)piVar9[2];
        piVar5 = piVar9;
        while (piVar2 = piVar8, piVar2 != DAT_008e8328) {
          piVar5 = piVar2;
          piVar8 = (int *)piVar2[2];
        }
      }
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar5;
    }
  }
  else {
    *(int **)(*param_3 + 4) = local_c;
    *local_c = *param_3;
    if (local_c == (int *)*piVar5) {
      piVar9[1] = (int)local_c;
    }
    else {
      piVar9[1] = local_c[1];
      *(int **)local_c[1] = piVar9;
      *piVar8 = *piVar5;
      *(int **)(*piVar5 + 4) = local_c;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_1 + 4) + 4) = local_c;
    }
    else {
      puVar6 = (undefined4 *)param_3[1];
      if ((int *)*puVar6 == param_3) {
        *puVar6 = local_c;
      }
      else {
        puVar6[2] = local_c;
      }
    }
    local_c = param_3;
    piVar2[1] = param_3[1];
    iVar1 = piVar2[5];
    piVar2[5] = param_3[5];
    param_3[5] = iVar1;
  }
  if (local_c[5] == 1) {
    if (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if (piVar9[5] != 1) break;
        piVar5 = *(int **)piVar9[1];
        if (piVar9 == piVar5) {
          piVar5 = (int *)((undefined4 *)piVar9[1])[2];
          if (piVar5[5] == 0) {
            piVar5[5] = 1;
            *(undefined4 *)(piVar9[1] + 0x14) = 0;
            iVar1 = piVar9[1];
            piVar5 = *(int **)(iVar1 + 8);
            *(int *)(iVar1 + 8) = *piVar5;
            if ((int *)*piVar5 != DAT_008e8328) {
              ((int *)*piVar5)[1] = iVar1;
            }
            piVar5[1] = *(int *)(iVar1 + 4);
            if (iVar1 == *(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar5;
            }
            else {
              piVar8 = *(int **)(iVar1 + 4);
              if (iVar1 == *piVar8) {
                *piVar8 = (int)piVar5;
              }
              else {
                piVar8[2] = (int)piVar5;
              }
            }
            *piVar5 = iVar1;
            *(int **)(iVar1 + 4) = piVar5;
            piVar5 = *(int **)(piVar9[1] + 8);
          }
          if ((*(int *)(*piVar5 + 0x14) != 1) || (*(int *)(piVar5[2] + 0x14) != 1)) {
            if (*(int *)(piVar5[2] + 0x14) == 1) {
              *(undefined4 *)(*piVar5 + 0x14) = 1;
              iVar1 = *piVar5;
              piVar5[5] = 0;
              *piVar5 = *(int *)(iVar1 + 8);
              if (*(int **)(iVar1 + 8) != DAT_008e8328) {
                (*(int **)(iVar1 + 8))[1] = (int)piVar5;
              }
              *(int *)(iVar1 + 4) = piVar5[1];
              if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
              }
              else {
                piVar8 = (int *)piVar5[1];
                if (piVar5 == (int *)piVar8[2]) {
                  piVar8[2] = iVar1;
                }
                else {
                  *piVar8 = iVar1;
                }
              }
              *(int **)(iVar1 + 8) = piVar5;
              piVar5[1] = iVar1;
              piVar5 = *(int **)(piVar9[1] + 8);
            }
            piVar5[5] = *(int *)(piVar9[1] + 0x14);
            *(undefined4 *)(piVar9[1] + 0x14) = 1;
            *(undefined4 *)(piVar5[2] + 0x14) = 1;
            puVar6 = (undefined4 *)piVar9[1];
            puVar7 = (undefined4 *)puVar6[2];
            puVar6[2] = *puVar7;
            if ((int *)*puVar7 != DAT_008e8328) {
              ((int *)*puVar7)[1] = (int)puVar6;
            }
            puVar7[1] = puVar6[1];
            if (puVar6 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar7;
              *puVar7 = puVar6;
            }
            else {
              piVar5 = (int *)puVar6[1];
              if (puVar6 == (undefined4 *)*piVar5) {
                *piVar5 = (int)puVar7;
                *puVar7 = puVar6;
              }
              else {
                piVar5[2] = (int)puVar7;
                *puVar7 = puVar6;
              }
            }
LAB_004c4fa6:
            puVar6[1] = puVar7;
            break;
          }
        }
        else {
          if (piVar5[5] == 0) {
            piVar5[5] = 1;
            *(undefined4 *)(piVar9[1] + 0x14) = 0;
            piVar5 = (int *)piVar9[1];
            iVar1 = *piVar5;
            *piVar5 = *(int *)(iVar1 + 8);
            if (*(int **)(iVar1 + 8) != DAT_008e8328) {
              (*(int **)(iVar1 + 8))[1] = (int)piVar5;
            }
            *(int *)(iVar1 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
            }
            else {
              piVar8 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar8[2]) {
                piVar8[2] = iVar1;
              }
              else {
                *piVar8 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar5;
            piVar5[1] = iVar1;
            piVar5 = *(int **)piVar9[1];
          }
          if ((*(int *)(piVar5[2] + 0x14) != 1) || (*(int *)(*piVar5 + 0x14) != 1)) {
            if (*(int *)(*piVar5 + 0x14) == 1) {
              *(undefined4 *)(piVar5[2] + 0x14) = 1;
              piVar8 = (int *)piVar5[2];
              piVar5[5] = 0;
              piVar5[2] = *piVar8;
              if ((int *)*piVar8 != DAT_008e8328) {
                ((int *)*piVar8)[1] = (int)piVar5;
              }
              piVar8[1] = piVar5[1];
              if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
              }
              else {
                piVar2 = (int *)piVar5[1];
                if (piVar5 == (int *)*piVar2) {
                  *piVar2 = (int)piVar8;
                }
                else {
                  piVar2[2] = (int)piVar8;
                }
              }
              *piVar8 = (int)piVar5;
              piVar5[1] = (int)piVar8;
              piVar5 = *(int **)piVar9[1];
            }
            piVar5[5] = *(int *)(piVar9[1] + 0x14);
            *(undefined4 *)(piVar9[1] + 0x14) = 1;
            *(undefined4 *)(*piVar5 + 0x14) = 1;
            puVar6 = (undefined4 *)piVar9[1];
            puVar7 = (undefined4 *)*puVar6;
            *puVar6 = puVar7[2];
            if ((int *)puVar7[2] != DAT_008e8328) {
              ((int *)puVar7[2])[1] = (int)puVar6;
            }
            puVar7[1] = puVar6[1];
            if (puVar6 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar7;
            }
            else {
              puVar3 = (undefined4 *)puVar6[1];
              if (puVar6 == (undefined4 *)puVar3[2]) {
                puVar3[2] = puVar7;
              }
              else {
                *puVar3 = puVar7;
              }
            }
            puVar7[2] = puVar6;
            goto LAB_004c4fa6;
          }
        }
        piVar5[5] = 0;
        piVar9 = (int *)piVar9[1];
      } while (piVar9 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    piVar9[5] = 1;
  }
  FUN_00798b68();
  FUN_00796cd8(local_c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = param_3;
  return;
}


