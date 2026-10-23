// FUN_005af3c0 @ 5af3c0 size=101

void FUN_005af3c0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  
  if (param_2 != 0) {
    piVar2 = *(int **)(param_2 + 0x4508);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      piVar4 = *(int **)(*piVar2 + 0x120);
      while (piVar2 = piVar1, piVar4 != (int *)0x0) {
        piVar2 = (int *)piVar4[2];
        piVar3 = (int *)*piVar4;
        piVar4 = piVar2;
        if (((piVar3 != (int *)0x0) && (cVar5 = (**(code **)(*piVar3 + 0x1c))(), cVar5 == '\0')) &&
           (cVar5 = (**(code **)(*param_1 + 0x24))(piVar3), cVar5 == '\0')) {
          FUN_00527110(piVar3);
        }
      }
    }
  }
  return;
}


