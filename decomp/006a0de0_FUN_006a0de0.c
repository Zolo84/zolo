// FUN_006a0de0 @ 6a0de0 size=517

undefined4 __thiscall FUN_006a0de0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = FUN_00527fb0();
  if ((iVar4 != 0) && (0 < param_3)) {
    iVar4 = FUN_004e9370(param_3);
    cVar3 = FUN_004e8f30();
    if ((cVar3 != '\0') && ((0 < *(int *)(iVar4 + 0x3dc) && (0 < *(int *)(iVar4 + 0x3dc))))) {
      cVar3 = FUN_00525660();
      if (cVar3 != '\0') {
        if (param_2[3] < 1) {
          return 0;
        }
        iVar4 = FUN_004e9370(param_2[3]);
        cVar3 = FUN_004e8f30();
        if (cVar3 == '\0') {
          return 0;
        }
        if (*(int *)(iVar4 + 0x3dc) < 1) {
          return 0;
        }
        if (*(int *)(iVar4 + 0x3dc) < 1) {
          return 0;
        }
      }
      cVar3 = FUN_0051a4c0();
      if (cVar3 == '\0') {
        if (param_2[3] < 1) {
          return 0;
        }
        iVar4 = FUN_004e9370(param_2[3]);
        cVar3 = FUN_004e8f30();
        if (cVar3 == '\0') {
          return 0;
        }
        if (*(int *)(iVar4 + 0x3dc) < 1) {
          return 0;
        }
        if (*(int *)(iVar4 + 0x3dc) < 1) {
          return 0;
        }
      }
      if (param_2[3] == 0) {
        if (*(int *)((int)param_2 + 0x2ae) != 0) {
          iVar4 = FUN_004e9370(param_3);
          if ((*(int *)(iVar4 + 0x254) == 8) || (*(int *)(iVar4 + 0x254) == 9)) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint *)(iVar4 + 0x3dc) & ((int)*(uint *)(iVar4 + 0x3dc) < 1) - 1;
          }
          uVar6 = *(undefined4 *)(param_1 + 10);
          (**(code **)(*param_2 + 0x14))(uVar6,uVar5);
          FUN_0051b230();
          uVar6 = FUN_004ed600(uVar6,uVar5);
          return uVar6;
        }
      }
      else {
        FUN_004e9370(param_3);
        iVar4 = FUN_0051b230();
        piVar2 = *(int **)(*(int *)(iVar4 + 0x482) + 0x2c);
        while (piVar2 != (int *)0x0) {
          piVar1 = (int *)piVar2[2];
          iVar4 = *piVar2;
          piVar2 = piVar1;
          if ((*(char *)(iVar4 + 0x470) != '\0') && (iVar4 = *(int *)(iVar4 + 0x12), 0 < iVar4)) {
            iVar4 = FUN_004e9370(iVar4);
            if (((*(int *)(iVar4 + 0x254) != 8) &&
                (((*(int *)(iVar4 + 0x254) != 9 && (iVar4 = *(int *)(iVar4 + 0x3dc), 0 < iVar4)) &&
                 (0 < iVar4)))) &&
               (cVar3 = FUN_004ed600(*(undefined4 *)(param_1 + 10),iVar4), cVar3 != '\0')) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


