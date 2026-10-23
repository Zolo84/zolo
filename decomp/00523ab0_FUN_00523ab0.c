// FUN_00523ab0 @ 523ab0 size=469

undefined4 __thiscall FUN_00523ab0(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  cVar3 = (**(code **)(*param_1 + 0x2c))();
  if (cVar3 == '\0') {
    return 1;
  }
  if (*(char *)((int)param_1 + 0x17b) != '\0') {
    return 1;
  }
  if ((param_3 == '\0') && (iVar4 = (**(code **)(param_1[0x47] + 4))(), iVar4 != 0)) {
    return 1;
  }
  if (*(int *)((int)param_1 + 0x176) != 0) {
    return 1;
  }
  cVar3 = FUN_0044a690(*(undefined4 *)(param_1[0x92] + 6));
  if (cVar3 == '\0') {
    if ((*(int *)(param_2 + 0x3350) != 0) &&
       (*(int *)(param_2 + 0x3350) == *(int *)(param_1[0x92] + 0x3350))) {
      return 1;
    }
    cVar3 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if (cVar3 != '\0') {
      iVar4 = (**(code **)(*param_1 + 0x14))();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x2aa) + 4))();
      if ((0 < iVar4) && (cVar3 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar3 != '\0'))
      {
        iVar4 = (**(code **)(*param_1 + 0x14))();
        piVar2 = *(int **)(*(int *)(iVar4 + 0x2aa) + 4);
        while( true ) {
          do {
            do {
              if (piVar2 == (int *)0x0) {
                return 0;
              }
              piVar1 = (int *)piVar2[2];
              iVar4 = *piVar2;
              piVar2 = piVar1;
            } while (*(char *)(iVar4 + 0x17b) != '\0');
            cVar3 = (**(code **)(*(int *)(iVar4 + 0x22e) + 8))();
          } while ((cVar3 != '\0') || (cVar3 = FUN_0042ddd0(iVar4 + 0x228), cVar3 == '\0'));
          iVar5 = (**(code **)(*(int *)(iVar4 + 0x11c) + 4))();
          if (iVar5 != 0) break;
          cVar3 = (**(code **)(*(int *)(iVar4 + 0x22e) + 8))();
          if (cVar3 == '\0') {
            uVar6 = **(undefined4 **)(iVar4 + 0x232);
          }
          else {
            uVar6 = 0;
          }
          iVar5 = FUN_004e9370(uVar6);
          if (*(int *)(iVar5 + 0x3d8) != 0) {
            cVar3 = (**(code **)(*(int *)(iVar4 + 0x22e) + 8))();
            if (cVar3 == '\0') {
              uVar6 = **(undefined4 **)(iVar4 + 0x232);
            }
            else {
              uVar6 = 0;
            }
            iVar4 = FUN_004e9370(uVar6);
            cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar4 + 0x3d8) + 6));
            if (cVar3 != '\0') {
              return 1;
            }
          }
        }
        return 1;
      }
    }
    return 0;
  }
  return 1;
}


