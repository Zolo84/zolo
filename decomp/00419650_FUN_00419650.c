// FUN_00419650 @ 419650 size=156

int __thiscall FUN_00419650(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_14 [4];
  int local_4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) +
                    ((uint)(param_2 + (param_3 + (param_4 + (param_5 + param_6 * 4) * 4) * 4) * 8) %
                    *(uint *)(param_1 + 4)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    piVar3 = (int *)(*piVar1 + 0x10);
    piVar4 = local_14;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((((local_14[1] == param_3) && (local_14[0] == param_2)) && (local_14[2] == param_4)) &&
       ((local_14[3] == param_5 && (local_4 == param_6)))) break;
    piVar1 = (int *)piVar1[1];
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *piVar1;
}


