// FUN_0052ae80 @ 52ae80 size=78

undefined4 __thiscall FUN_0052ae80(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  do {
    do {
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      puVar1 = (undefined4 *)puVar3[2];
      piVar2 = (int *)*puVar3;
      cVar4 = (**(code **)(*piVar2 + 0x2c))();
      puVar3 = puVar1;
    } while (cVar4 == '\0');
    uVar5 = (**(code **)(*param_2 + 0x10))();
    (**(code **)(*piVar2 + 0x14))(uVar5);
    cVar4 = FUN_00516f90(uVar5);
  } while (cVar4 == '\0');
  return 1;
}


