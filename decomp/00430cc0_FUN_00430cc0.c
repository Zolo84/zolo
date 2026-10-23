// FUN_00430cc0 @ 430cc0 size=355

int __thiscall FUN_00430cc0(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_3;
  iVar6 = 0;
  iVar5 = *(int *)(param_3 + 0x290);
  param_3 = 0;
  if (0 < iVar5) {
    do {
      piVar4 = (int *)(iVar6 + *(int *)(iVar3 + 0x298));
      if (*piVar4 == *(int *)(param_4 + 0x12)) {
        cVar2 = (**(code **)(*param_2 + 0x28))();
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*param_2 + 0x2c))();
          if (cVar2 == '\0') goto LAB_00430da3;
          if (0x1c5 < *(int *)(iVar3 + 0x288)) {
            if (0x1c5 < *(int *)(param_4 + 0x288)) goto LAB_00430da3;
            if (((0x1c5 < *(int *)(iVar3 + 0x288)) && (*(int *)(param_4 + 0x254) != 8)) &&
               (*(int *)(param_4 + 0x254) != 9)) {
              if (*(int *)(param_4 + 0x3dc) == *(int *)(iVar3 + 0x12)) goto LAB_00430da3;
              goto LAB_00430d8a;
            }
          }
          if (((*(int *)(iVar3 + 0x254) != 8) && (*(int *)(iVar3 + 0x254) != 9)) &&
             ((0x1c5 < *(int *)(param_4 + 0x288) &&
              (*(int *)(iVar3 + 0x3dc) == *(int *)(param_4 + 0x12))))) {
LAB_00430da3:
            iVar5 = FUN_00430e30(param_2,iVar3,param_4,piVar4);
            return iVar5;
          }
        }
        else if (*(int *)(*(int *)(iVar3 + 0x298) + 4 + iVar6) != 4) goto LAB_00430da3;
      }
LAB_00430d8a:
      param_3 = param_3 + 1;
      iVar6 = iVar6 + 0xc;
    } while (param_3 < iVar5);
  }
  iVar5 = 0;
  cVar2 = FUN_00431220(param_2,iVar3,param_4);
  if (cVar2 != '\0') {
    piVar4 = *(int **)(param_1 + 4);
    while (piVar4 != (int *)0x0) {
      piVar1 = (int *)piVar4[2];
      iVar6 = *piVar4;
      iVar3 = FUN_00430cc0(param_2,iVar3,iVar6);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      iVar5 = iVar5 + iVar3;
      piVar4 = piVar1;
      iVar3 = iVar6;
    }
    return iVar5;
  }
  return 1;
}


