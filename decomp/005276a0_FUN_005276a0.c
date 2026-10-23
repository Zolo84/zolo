// FUN_005276a0 @ 5276a0 size=110

void __thiscall FUN_005276a0(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  
  piVar4 = *(int **)(param_1 + 4);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    piVar2 = (int *)*piVar4;
    piVar4 = piVar1;
    if (((param_2 == '\0') || (iVar3 = piVar2[0x92], iVar6 = FUN_00522770(), iVar6 == iVar3)) &&
       (cVar5 = (**(code **)(*piVar2 + 0x30))(), cVar5 != '\0')) {
      (**(code **)(*piVar2 + 0xac))();
    }
  }
  __ftol();
  return;
}


