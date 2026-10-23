// FUN_0043e580 @ 43e580 size=44

void __thiscall FUN_0043e580(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x68 + param_2 * 4) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    FUN_00429c80(*piVar2 + 0x34,*piVar2 + 0x34);
    piVar2 = piVar1;
  }
  return;
}


