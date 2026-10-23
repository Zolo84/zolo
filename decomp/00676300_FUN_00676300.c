// FUN_00676300 @ 676300 size=619

void __thiscall
FUN_00676300(int param_1,undefined4 *param_2,int param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = operator_new(0x2c);
  piVar2[1] = (int)param_4;
  piVar2[10] = 0;
  *piVar2 = DAT_00d11170;
  piVar2[2] = DAT_00d11170;
  FUN_00676c80(piVar2 + 3,param_5);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if ((param_4 != *(int **)(param_1 + 4)) && (param_3 == DAT_00d11170)) {
    iVar3 = FUN_00676e10(param_4 + 3);
    if (-1 < iVar3) {
      param_4[2] = (int)piVar2;
      if (param_4 == *(int **)(*(int *)(param_1 + 4) + 8)) {
        *(int **)(*(int *)(param_1 + 4) + 8) = piVar2;
      }
      goto LAB_00676394;
    }
  }
  *param_4 = (int)piVar2;
  piVar4 = *(int **)(param_1 + 4);
  if (param_4 == piVar4) {
    piVar4[1] = (int)piVar2;
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar2;
  }
  else if (param_4 == (int *)*piVar4) {
    *piVar4 = (int)piVar2;
  }
LAB_00676394:
  piVar4 = piVar2;
  if (piVar2 != *(int **)(*(int *)(param_1 + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if (piVar5[10] != 0) break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        iVar3 = ((undefined4 *)piVar5[1])[2];
        if (*(int *)(iVar3 + 0x28) == 0) {
          piVar5[10] = 1;
          *(undefined4 *)(iVar3 + 0x28) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x28) = 0;
          piVar4 = *(int **)(piVar4[1] + 4);
        }
        else {
          if (piVar4 == (int *)piVar5[2]) {
            piVar4 = (int *)piVar5[2];
            piVar5[2] = *piVar4;
            if (*piVar4 != DAT_00d11170) {
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
          *(undefined4 *)(piVar4[1] + 0x28) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x28) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)*piVar5;
          *piVar5 = piVar6[2];
          if (piVar6[2] != DAT_00d11170) {
            *(int **)(piVar6[2] + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar1[2]) {
              piVar1[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar1 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
LAB_00676542:
          piVar5[1] = (int)piVar6;
        }
      }
      else {
        if (piVar6[10] != 0) {
          if (piVar4 == (int *)*piVar5) {
            iVar3 = *piVar5;
            *piVar5 = *(int *)(iVar3 + 8);
            if (*(int *)(iVar3 + 8) != DAT_00d11170) {
              *(int **)(*(int *)(iVar3 + 8) + 4) = piVar5;
            }
            *(int *)(iVar3 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
              *(int *)(*(int *)(param_1 + 4) + 4) = iVar3;
            }
            else {
              piVar4 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar4[2]) {
                piVar4[2] = iVar3;
              }
              else {
                *piVar4 = iVar3;
              }
            }
            *(int **)(iVar3 + 8) = piVar5;
            piVar5[1] = iVar3;
            piVar4 = piVar5;
          }
          *(undefined4 *)(piVar4[1] + 0x28) = 1;
          *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x28) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*piVar6 != DAT_00d11170) {
            *(int **)(*piVar6 + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(param_1 + 4) + 4)) {
            *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
          }
          else {
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar1) {
              *piVar1 = (int)piVar6;
            }
            else {
              piVar1[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          goto LAB_00676542;
        }
        piVar5[10] = 1;
        piVar6[10] = 1;
        *(undefined4 *)(*(int *)(piVar4[1] + 4) + 0x28) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
    } while (piVar4 != *(int **)(*(int *)(param_1 + 4) + 4));
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x28) = 1;
  *param_2 = piVar2;
  return;
}


