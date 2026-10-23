// FUN_0057ea00 @ 57ea00 size=122

void __thiscall FUN_0057ea00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (-1 < param_2) {
    piVar1 = *(int **)(param_1 + 0x10 + param_2 * 4);
    puVar2 = (undefined4 *)(param_1 + 0x10 + param_2 * 4);
    if (piVar1 != (int *)0x0) {
      if (param_3 + -10000 < -10000) {
        param_3 = 0;
      }
      if (param_3 != 10000 && -1 < param_3 + -10000) {
        param_3 = 10000;
      }
      if (*(int *)(param_1 + 0x210 + param_2 * 4) != 0) {
        iVar3 = 0x40;
        do {
          (**(code **)(*(int *)*puVar2 + 0x3c))((int *)*puVar2,param_3 + -10000);
          puVar2 = puVar2 + 0x80;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_3 + -10000);
    }
  }
  return;
}


