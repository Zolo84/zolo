// FUN_006a9c70 @ 6a9c70 size=50

void __fastcall FUN_006a9c70(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    (**(code **)(*(int *)(*piVar2 + 0x1f8) + 0x18))(param_1);
    piVar2 = piVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x28) + 0x10))();
  return;
}


