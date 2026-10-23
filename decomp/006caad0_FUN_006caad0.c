// FUN_006caad0 @ 6caad0 size=70

void FUN_006caad0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 8))(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


