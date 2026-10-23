// FUN_006758a0 @ 6758a0 size=1066

void __thiscall FUN_006758a0(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *local_c;
  
  FUN_00674d10();
  piVar10 = (int *)*param_3;
  piVar6 = param_3 + 2;
  local_c = param_3;
  piVar9 = piVar6;
  if (piVar10 == DAT_00d11170) {
    piVar10 = (int *)*piVar6;
  }
  else {
    piVar3 = (int *)*piVar6;
    if (piVar3 != DAT_00d11170) {
      local_c = piVar3;
      for (piVar9 = (int *)*piVar3; piVar9 != DAT_00d11170; piVar9 = (int *)*piVar9) {
        local_c = piVar9;
      }
      piVar10 = (int *)local_c[2];
      piVar9 = local_c + 2;
    }
  }
  piVar3 = local_c;
  FUN_00798acc();
  if (local_c == param_3) {
    piVar10[1] = local_c[1];
    if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_1 + 4) + 4) = piVar10;
    }
    else {
      puVar7 = (undefined4 *)param_3[1];
      if ((int *)*puVar7 == param_3) {
        *puVar7 = piVar10;
      }
      else {
        puVar7[2] = piVar10;
      }
    }
    piVar9 = *(int **)(param_1 + 4);
    if ((int *)*piVar9 == param_3) {
      if ((int *)*piVar6 == DAT_00d11170) {
        *piVar9 = param_3[1];
      }
      else {
        piVar3 = (int *)*piVar10;
        piVar6 = piVar10;
        while (piVar5 = piVar3, piVar5 != DAT_00d11170) {
          piVar6 = piVar5;
          piVar3 = (int *)*piVar5;
        }
        *piVar9 = (int)piVar6;
      }
    }
    if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
      if ((int *)*param_3 == DAT_00d11170) {
        piVar6 = (int *)param_3[1];
      }
      else {
        piVar9 = (int *)piVar10[2];
        piVar6 = piVar10;
        while (piVar3 = piVar9, piVar3 != DAT_00d11170) {
          piVar6 = piVar3;
          piVar9 = (int *)piVar3[2];
        }
      }
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar6;
    }
  }
  else {
    *(int **)(*param_3 + 4) = local_c;
    *local_c = *param_3;
    if (local_c == (int *)*piVar6) {
      piVar10[1] = (int)local_c;
    }
    else {
      piVar10[1] = local_c[1];
      *(int **)local_c[1] = piVar10;
      *piVar9 = *piVar6;
      *(int **)(*piVar6 + 4) = local_c;
    }
    if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
      *(int **)(*(int *)(param_1 + 4) + 4) = local_c;
    }
    else {
      puVar7 = (undefined4 *)param_3[1];
      if ((int *)*puVar7 == param_3) {
        *puVar7 = local_c;
      }
      else {
        puVar7[2] = local_c;
      }
    }
    local_c = param_3;
    piVar3[1] = param_3[1];
    iVar2 = piVar3[10];
    piVar3[10] = param_3[10];
    param_3[10] = iVar2;
  }
  if (local_c[10] == 1) {
    if (piVar10 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        if (piVar10[10] != 1) break;
        piVar6 = *(int **)piVar10[1];
        if (piVar10 == piVar6) {
          piVar6 = (int *)((undefined4 *)piVar10[1])[2];
          if (piVar6[10] == 0) {
            piVar6[10] = 1;
            *(undefined4 *)(piVar10[1] + 0x28) = 0;
            iVar2 = piVar10[1];
            piVar6 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar6;
            if ((int *)*piVar6 != DAT_00d11170) {
              ((int *)*piVar6)[1] = iVar2;
            }
            piVar6[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
            }
            else {
              piVar9 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar9) {
                *piVar9 = (int)piVar6;
              }
              else {
                piVar9[2] = (int)piVar6;
              }
            }
            *piVar6 = iVar2;
            *(int **)(iVar2 + 4) = piVar6;
            piVar6 = *(int **)(piVar10[1] + 8);
          }
          if ((*(int *)(*piVar6 + 0x28) != 1) || (*(int *)(piVar6[2] + 0x28) != 1)) {
            if (*(int *)(piVar6[2] + 0x28) == 1) {
              *(undefined4 *)(*piVar6 + 0x28) = 1;
              iVar2 = *piVar6;
              piVar6[10] = 0;
              *piVar6 = *(int *)(iVar2 + 8);
              if (*(int **)(iVar2 + 8) != DAT_00d11170) {
                (*(int **)(iVar2 + 8))[1] = (int)piVar6;
              }
              *(int *)(iVar2 + 4) = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int *)(*(int *)(param_1 + 4) + 4) = iVar2;
              }
              else {
                piVar9 = (int *)piVar6[1];
                if (piVar6 == (int *)piVar9[2]) {
                  piVar9[2] = iVar2;
                }
                else {
                  *piVar9 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar6;
              piVar6[1] = iVar2;
              piVar6 = *(int **)(piVar10[1] + 8);
            }
            piVar6[10] = *(int *)(piVar10[1] + 0x28);
            *(undefined4 *)(piVar10[1] + 0x28) = 1;
            *(undefined4 *)(piVar6[2] + 0x28) = 1;
            puVar7 = (undefined4 *)piVar10[1];
            puVar8 = (undefined4 *)puVar7[2];
            puVar7[2] = *puVar8;
            if ((int *)*puVar8 != DAT_00d11170) {
              ((int *)*puVar8)[1] = (int)puVar7;
            }
            puVar8[1] = puVar7[1];
            if (puVar7 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar8;
              *puVar8 = puVar7;
            }
            else {
              piVar6 = (int *)puVar7[1];
              if (puVar7 == (undefined4 *)*piVar6) {
                *piVar6 = (int)puVar8;
                *puVar8 = puVar7;
              }
              else {
                piVar6[2] = (int)puVar8;
                *puVar8 = puVar7;
              }
            }
LAB_00675c66:
            puVar7[1] = puVar8;
            break;
          }
        }
        else {
          if (piVar6[10] == 0) {
            piVar6[10] = 1;
            *(undefined4 *)(piVar10[1] + 0x28) = 0;
            piVar6 = (int *)piVar10[1];
            iVar2 = *piVar6;
            *piVar6 = *(int *)(iVar2 + 8);
            if (*(int **)(iVar2 + 8) != DAT_00d11170) {
              (*(int **)(iVar2 + 8))[1] = (int)piVar6;
            }
            *(int *)(iVar2 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar2;
            }
            else {
              piVar9 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar9[2]) {
                piVar9[2] = iVar2;
              }
              else {
                *piVar9 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar6;
            piVar6[1] = iVar2;
            piVar6 = *(int **)piVar10[1];
          }
          if ((*(int *)(piVar6[2] + 0x28) != 1) || (*(int *)(*piVar6 + 0x28) != 1)) {
            if (*(int *)(*piVar6 + 0x28) == 1) {
              *(undefined4 *)(piVar6[2] + 0x28) = 1;
              piVar9 = (int *)piVar6[2];
              piVar6[10] = 0;
              piVar6[2] = *piVar9;
              if ((int *)*piVar9 != DAT_00d11170) {
                ((int *)*piVar9)[1] = (int)piVar6;
              }
              piVar9[1] = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(param_1 + 4) + 4)) {
                *(int **)(*(int *)(param_1 + 4) + 4) = piVar9;
              }
              else {
                piVar3 = (int *)piVar6[1];
                if (piVar6 == (int *)*piVar3) {
                  *piVar3 = (int)piVar9;
                }
                else {
                  piVar3[2] = (int)piVar9;
                }
              }
              *piVar9 = (int)piVar6;
              piVar6[1] = (int)piVar9;
              piVar6 = *(int **)piVar10[1];
            }
            piVar6[10] = *(int *)(piVar10[1] + 0x28);
            *(undefined4 *)(piVar10[1] + 0x28) = 1;
            *(undefined4 *)(*piVar6 + 0x28) = 1;
            puVar7 = (undefined4 *)piVar10[1];
            puVar8 = (undefined4 *)*puVar7;
            *puVar7 = puVar8[2];
            if ((int *)puVar8[2] != DAT_00d11170) {
              ((int *)puVar8[2])[1] = (int)puVar7;
            }
            puVar8[1] = puVar7[1];
            if (puVar7 == *(undefined4 **)(*(int *)(param_1 + 4) + 4)) {
              *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar8;
            }
            else {
              puVar4 = (undefined4 *)puVar7[1];
              if (puVar7 == (undefined4 *)puVar4[2]) {
                puVar4[2] = puVar8;
              }
              else {
                *puVar4 = puVar8;
              }
            }
            puVar8[2] = puVar7;
            goto LAB_00675c66;
          }
        }
        piVar6[10] = 0;
        piVar10 = (int *)piVar10[1];
      } while (piVar10 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    piVar10[10] = 1;
  }
  FUN_00798b68();
  iVar2 = local_c[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  local_c[4] = 0;
  local_c[5] = 0;
  local_c[6] = 0;
  FUN_00796cd8(local_c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = param_3;
  return;
}


