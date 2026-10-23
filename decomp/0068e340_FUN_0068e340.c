// FUN_0068e340 @ 68e340 size=239

void __thiscall
FUN_0068e340(int param_1,int *param_2,int param_3,int param_4,char param_5,char param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  (**(code **)(*param_2 + 0x10))();
  if ((param_5 == '\0') && (param_6 != '\0')) {
    iVar3 = FUN_004e9370(param_4);
    piVar5 = *(int **)(*(int *)(iVar3 + 0x1c2) + 4);
    if (piVar5 != (int *)0x0) {
      do {
        piVar1 = (int *)piVar5[2];
        iVar3 = *piVar5;
        if (((*(char *)(iVar3 + 0x17b) == '\0') &&
            (cVar2 = (**(code **)(*(int *)(iVar3 + 0x22e) + 8))(), cVar2 != '\0')) &&
           (*(int *)(iVar3 + 500) == param_1)) {
          FUN_00459df0(iVar3);
        }
        piVar5 = piVar1;
      } while (piVar1 != (int *)0x0);
      return;
    }
  }
  else {
    piVar5 = *(int **)(param_3 + 4);
    while (piVar5 != (int *)0x0) {
      piVar1 = (int *)piVar5[2];
      iVar3 = *piVar5;
      piVar5 = piVar1;
      if ((((*(int *)(iVar3 + 0xc) == param_4) && (*(char *)(iVar3 + 0x17b) == '\0')) &&
          (cVar2 = (**(code **)(*(int *)(iVar3 + 0x22e) + 8))(), cVar2 != '\0')) ||
         (((param_5 != '\0' && (cVar2 = (**(code **)(*(int *)(iVar3 + 0x22e) + 8))(), cVar2 == '\0')
           ) && (iVar4 = FUN_0051c0c0(), iVar4 == param_4)))) {
        FUN_00459df0(iVar3);
      }
    }
  }
  return;
}


