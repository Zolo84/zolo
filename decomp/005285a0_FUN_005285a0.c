// FUN_005285a0 @ 5285a0 size=46

undefined4 __fastcall FUN_005285a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[2];
    iVar3 = (**(code **)(*(int *)(*piVar2 + 0x11c) + 4))();
    piVar2 = piVar1;
  } while (iVar3 == 0);
  return 1;
}


