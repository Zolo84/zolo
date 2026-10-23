// FUN_006cd210 @ 6cd210 size=78

void __fastcall FUN_006cd210(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if (*piVar2 != 0) {
      FUN_00796cd8(*piVar2);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (**(code **)(*(int *)(param_1 + 4) + 0x14))();
  return;
}


