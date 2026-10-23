// FUN_00522a60 @ 522a60 size=243

undefined4 __thiscall FUN_00522a60(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  
  if ((*(int *)(param_2 + 0x254) != 8) && (*(int *)(param_2 + 0x254) != 9)) {
    cVar4 = (**(code **)(*param_1 + 0x28))();
    if (cVar4 == '\0') {
      piVar3 = *(int **)(*(int *)(param_2 + 0x1c2) + 4);
      do {
        if (piVar3 == (int *)0x0) goto LAB_00522abb;
        piVar1 = (int *)piVar3[2];
        iVar2 = *piVar3;
        cVar4 = FUN_005215b0(iVar2);
        piVar3 = piVar1;
      } while ((cVar4 == '\0') || (*(char *)(iVar2 + 0x17b) != '\0'));
    }
    else {
LAB_00522abb:
      iVar2 = *(int *)(param_2 + 0x3d8);
      if (iVar2 == param_1[0x92]) {
        return 1;
      }
      iVar5 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)];
      if ((&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)] == 0) {
        iVar5 = param_1[0x92];
      }
      if (iVar2 == iVar5) {
        return 1;
      }
      if (*(int *)(param_2 + 0x3d4) == 0) {
        return 1;
      }
      cVar4 = FUN_005861a0(*(undefined4 *)(iVar2 + 6));
      if (cVar4 != '\0') {
        return 1;
      }
      if ((*(int *)(param_1[0x92] + 0x3350) != 0) &&
         (*(int *)(*(int *)(param_2 + 0x3d8) + 0x3350) == *(int *)(param_1[0x92] + 0x3350))) {
        return 1;
      }
    }
  }
  return 0;
}


