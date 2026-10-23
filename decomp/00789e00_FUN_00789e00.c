// FUN_00789e00 @ 789e00 size=217

void __fastcall FUN_00789e00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  piVar2 = *(int **)(param_1 + 0x167be);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)(param_1 + 0x167be) = 0;
  *(undefined4 *)(param_1 + 0x167c2) = 0;
  *(undefined4 *)(param_1 + 0x167c6) = 0;
  piVar2 = *(int **)(param_1 + 0x167e2);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)(param_1 + 0x167e2) = 0;
  *(undefined4 *)(param_1 + 0x167e6) = 0;
  *(undefined4 *)(param_1 + 0x167ea) = 0;
  piVar2 = *(int **)(param_1 + 0x167d0);
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar3;
  }
  *(int **)(param_1 + 0x167d0) = piVar3;
  *(int **)(param_1 + 0x167d4) = piVar3;
  *(int **)(param_1 + 0x167d8) = piVar3;
  (**(code **)(*(int *)(param_1 + 0x167de) + 0x14))();
  (**(code **)(*(int *)(param_1 + 0x167ba) + 0x14))();
  (**(code **)(*(int *)(param_1 + 0x167cc) + 0x14))();
  return;
}


