// FUN_00759040 @ 759040 size=613

void __thiscall FUN_00759040(int param_1,undefined4 *param_2,int param_3,int *param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = operator_new(0x18);
  piVar3[1] = (int)param_4;
  piVar3[5] = 0;
  *piVar3 = DAT_00d4bdfc;
  piVar3[2] = DAT_00d4bdfc;
  FUN_0074acc0(piVar3 + 3,param_5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (((param_4 == *(int **)(param_1 + 4)) || (param_3 != DAT_00d4bdfc)) ||
     (*param_5 < (uint)param_4[3])) {
    *param_4 = (int)piVar3;
    piVar4 = *(int **)(param_1 + 4);
    if (param_4 == piVar4) {
      piVar4[1] = (int)piVar3;
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar3;
    }
    else if (param_4 == (int *)*piVar4) {
      *piVar4 = (int)piVar3;
    }
  }
  else {
    param_4[2] = (int)piVar3;
    if (param_4 == *(int **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar3;
    }
  }
  piVar4 = piVar3;
  if (piVar3 != *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if (piVar5[5] != 0) break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        iVar1 = ((undefined4 *)piVar5[1])[2];
        if (*(int *)(iVar1 + 0x14) == 0) {
          piVar5[5] = 1;
          *(undefined4 *)(iVar1 + 0x14) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
          piVar4 = *(int **)(piVar4[1] + 4);
        }
        else {
          if (piVar4 == (int *)piVar5[2]) {
            piVar4 = (int *)piVar5[2];
            piVar5[2] = *piVar4;
            if (*piVar4 != DAT_00d4bdfc) {
              *(int **)(*piVar4 + 4) = piVar5;
            }
            piVar4[1] = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int **)(*(int *)(param_1 + 4) + 4) = piVar4;
            }
            else {
              piVar6 = (int *)piVar5[1];
              if (piVar5 == (int *)*piVar6) {
                *piVar6 = (int)piVar4;
              }
              else {
                piVar6[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)piVar5;
            piVar5[1] = (int)piVar4;
            piVar4 = piVar5;
          }
          *(undefined4 *)(piVar4[1] + 0x14) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)*piVar5;
          *piVar5 = piVar6[2];
          if (piVar6[2] != DAT_00d4bdfc) {
            *(int **)(piVar6[2] + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar2[2]) {
              piVar2[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar2 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
LAB_0075927c:
          piVar5[1] = (int)piVar6;
        }
      }
      else {
        if (piVar6[5] != 0) {
          if (piVar4 == (int *)*piVar5) {
            iVar1 = *piVar5;
            *piVar5 = *(int *)(iVar1 + 8);
            if (*(int *)(iVar1 + 8) != DAT_00d4bdfc) {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar5;
            }
            *(int *)(iVar1 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
            }
            else {
              piVar4 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar4[2]) {
                piVar4[2] = iVar1;
              }
              else {
                *piVar4 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar5;
            piVar5[1] = iVar1;
            piVar4 = piVar5;
          }
          *(undefined4 *)(piVar4[1] + 0x14) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*piVar6 != DAT_00d4bdfc) {
            *(int **)(*piVar6 + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar2) {
              *piVar2 = (int)piVar6;
            }
            else {
              piVar2[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          goto LAB_0075927c;
        }
        piVar5[5] = 1;
        piVar6[5] = 1;
        *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
    } while (piVar4 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x14) = 1;
  *param_2 = piVar3;
  return;
}


