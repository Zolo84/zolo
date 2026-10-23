// FUN_00666510 @ 666510 size=172

int FUN_00666510(int param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
LAB_0066653b:
    cVar3 = FUN_005177f0();
    piVar2 = *(int **)(param_1 + 0x2a);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[1];
      iVar5 = *piVar2;
      iVar4 = FUN_004fccd0();
      piVar2 = piVar1;
      if (((((iVar4 == 2) || (param_3 == '\0')) &&
           ((*(int *)(iVar5 + 0x134) != 0x1a || (param_4 != '\x01')))) &&
          ((*(int *)(iVar5 + 0x134) != 0x1e || (cVar3 != '\0')))) &&
         ((*(char *)(iVar5 + 0x15e) == '\0' || (param_2 != '\0')))) {
        return iVar5;
      }
    }
    iVar5 = 0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x2a);
    do {
      if (piVar2 == (int *)0x0) goto LAB_0066653b;
      iVar5 = *piVar2;
      piVar2 = (int *)piVar2[1];
    } while (*(char *)(iVar5 + 0x15e) == '\0');
  }
  return iVar5;
}


