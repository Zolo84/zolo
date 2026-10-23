// FUN_00748cb0 @ 748cb0 size=206

void __thiscall FUN_00748cb0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_4;
  if (((*(int *)(param_1 + 0xc) != 0) &&
      (piVar1 = *(int **)(param_1 + 4), param_3 == (int *)*piVar1)) && (param_4 == piVar1)) {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_00d4bdfc) {
      do {
        FUN_00749460(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00796cd8(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_00d4bdfc);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_00d4bdfc;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  do {
    if (param_3 == piVar2) {
      *param_2 = param_3;
      return;
    }
    if ((int *)param_3[2] == DAT_00d4bdfc) {
      piVar1 = (int *)param_3[1];
      piVar3 = param_3;
      if (param_3 == (int *)piVar1[2]) {
        do {
          piVar3 = piVar1;
          piVar1 = (int *)piVar3[1];
        } while (piVar3 == (int *)piVar1[2]);
      }
      if ((int *)piVar3[2] != piVar1) goto LAB_00748d5e;
    }
    else {
      piVar1 = (int *)FUN_0074a0c0((int *)param_3[2]);
LAB_00748d5e:
      piVar3 = piVar1;
    }
    FUN_00749060(&param_4,param_3);
    param_3 = piVar3;
  } while( true );
}


