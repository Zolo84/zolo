// FUN_006d94a0 @ 6d94a0 size=109

undefined4 __fastcall FUN_006d94a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  piVar1 = *(int **)(param_1 + 0x2221a);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    FUN_00796cd8(piVar1);
    piVar1 = piVar2;
  }
  *(int **)(param_1 + 0x2221a) = piVar2;
  *(int **)(param_1 + 0x2221e) = piVar2;
  *(int **)(param_1 + 0x22222) = piVar2;
  (**(code **)(*(int *)(param_1 + 0x22216) + 0x14))();
  piVar1 = *(int **)(param_1 + 0x2220e);
  if (piVar1 != piVar2) {
    FUN_006d65d0();
    FUN_00796cd8(piVar1);
  }
  *(int **)(param_1 + 0x2220e) = piVar2;
  return 1;
}


