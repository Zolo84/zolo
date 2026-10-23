// FUN_00577eb0 @ 577eb0 size=76

void __fastcall FUN_00577eb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x26);
  if (piVar3 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar3[2];
      puVar2 = (undefined4 *)*piVar3;
      if ((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) {
        FUN_00565aa0(puVar2);
      }
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      piVar3 = piVar1;
    } while (piVar1 != (int *)0x0);
    (**(code **)(*(int *)(param_1 + 0x22) + 0x10))();
  }
  return;
}


