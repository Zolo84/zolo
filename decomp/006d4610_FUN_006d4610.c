// FUN_006d4610 @ 6d4610 size=66

undefined4 __thiscall FUN_006d4610(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(param_1 + 0x34);
  do {
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar1 = (int *)piVar3[2];
    piVar2 = (int *)*piVar3;
    cVar4 = (**(code **)(*piVar2 + 0x20))(param_2,param_3);
    piVar3 = piVar1;
  } while (cVar4 != '\x01');
  return *(undefined4 *)((int)piVar2 + 0x92);
}


