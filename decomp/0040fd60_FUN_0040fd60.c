// FUN_0040fd60 @ 40fd60 size=86

void __thiscall FUN_0040fd60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0xc);
  puVar2[1] = param_4;
  *puVar2 = param_2;
  puVar2[2] = param_3;
  piVar1 = *(int **)(param_1 + 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_004100b0(puVar2);
      return;
    }
    if (param_3 <= *(int *)(*piVar1 + 8)) break;
    piVar1 = (int *)piVar1[2];
  }
  FUN_00410100(puVar2,piVar1);
  return;
}


