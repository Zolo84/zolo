// FUN_006a6610 @ 6a6610 size=212

void __thiscall FUN_006a6610(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  
  if ((((*(char *)((int)param_1 + 0xe) != '\0') &&
       (cVar3 = FUN_006a8720(), iVar2 = param_3, cVar3 == '\0')) &&
      (piVar4 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0x174)
                                   + 0x28))(&param_3,*(undefined4 *)(param_3 + 0x288)), *piVar4 == 0
      )) && (unaff_EBX == *(int *)((int)param_1 + 10))) {
    iVar5 = *(int *)(iVar2 + 0x288);
    if ((iVar5 == *(int *)(param_1[0x23] + 0x288)) ||
       (cVar3 = FUN_004cc477(iVar5,*(int *)(param_1[0x23] + 0x288)), cVar3 != '\0')) {
      iVar5 = (**(code **)(*param_1 + 0x1c4))();
      piVar4 = *(int **)(iVar5 + 4);
      while (piVar4 != (int *)0x0) {
        piVar1 = (int *)piVar4[2];
        iVar5 = *piVar4;
        iVar6 = (**(code **)(*(int *)(iVar5 + 0x11c) + 4))();
        piVar4 = piVar1;
        if ((iVar6 == 0) && (cVar3 = (**(code **)(*(int *)(iVar5 + 0x22e) + 8))(), cVar3 != '\0')) {
          FUN_00512660(iVar5,*(undefined4 *)(iVar2 + 0x12));
        }
      }
    }
  }
  return;
}


