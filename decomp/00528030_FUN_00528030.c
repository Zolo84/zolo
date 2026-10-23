// FUN_00528030 @ 528030 size=100

int __thiscall FUN_00528030(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 4);
  iVar5 = 0;
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar6[2];
    piVar6 = (int *)*piVar6;
    if ((piVar6[0x92] == param_2) && (cVar2 = (**(code **)(*piVar6 + 0x2c))(), cVar2 != '\0')) {
      (**(code **)(*piVar6 + 0x14))();
      iVar3 = FUN_00516f50();
      iVar4 = FUN_00516cc0();
      iVar5 = iVar5 + (iVar4 - iVar3);
    }
    piVar6 = piVar1;
  } while (piVar1 != (int *)0x0);
  return iVar5;
}


