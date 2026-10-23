// FUN_0074a490 @ 74a490 size=141

int * FUN_0074a490(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1;
  if (param_1 == DAT_00d4bdfc) {
    *param_2 = (int)DAT_00d4bdfc;
    return param_1;
  }
  do {
    iVar2 = piVar3[5];
    piVar1 = operator_new(0x18);
    piVar1[1] = (int)param_2;
    piVar1[5] = iVar2;
    if (param_1 == piVar3) {
      param_1 = piVar1;
    }
    iVar2 = FUN_0074a490(piVar3[2],piVar1);
    piVar1[2] = iVar2;
    if (piVar1 + 3 != (int *)0x0) {
      piVar1[3] = piVar3[3];
      piVar1[4] = piVar3[4];
    }
    *param_2 = (int)piVar1;
    piVar3 = (int *)*piVar3;
    param_2 = piVar1;
  } while (piVar3 != DAT_00d4bdfc);
  *piVar1 = (int)DAT_00d4bdfc;
  return param_1;
}


