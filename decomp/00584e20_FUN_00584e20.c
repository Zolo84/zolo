// FUN_00584e20 @ 584e20 size=102

uint __thiscall FUN_00584e20(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  if ((((*(char *)((int)param_1 + 0x16) != '\0') || (param_1[6] != 0)) ||
      (iVar4 = (**(code **)(**(int **)((int)param_1 + 0x22) + 4))(), 1 < iVar4)) ||
     (((cVar3 = (**(code **)(*param_1 + 0x14))(), cVar3 != '\0' ||
       (cVar3 = (**(code **)(*param_1 + 0x18))(), cVar3 != '\0')) ||
      (uVar5 = (**(code **)(*param_1 + 0x1c))(), (char)uVar5 != '\0')))) {
    piVar2 = *(int **)(*(int *)((int)param_1 + 0x22) + 4);
    while (uVar5 = 0, piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 2;
      iVar4 = *piVar2;
      piVar2 = (int *)*piVar1;
      if (iVar4 == param_2) {
        return CONCAT31((int3)((uint)*piVar1 >> 8),1);
      }
    }
  }
  return uVar5 & 0xffffff00;
}


