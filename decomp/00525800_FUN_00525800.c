// FUN_00525800 @ 525800 size=58

int __thiscall FUN_00525800(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = *(int **)(param_1 + 0x26);
  while (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
    if (param_3 == '\0') {
      iVar2 = *(int *)(*piVar3 + 0x130);
    }
    else {
      iVar2 = *(int *)(*piVar3 + 0x134);
    }
    piVar3 = (int *)*piVar1;
    if (iVar2 == param_2) {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


