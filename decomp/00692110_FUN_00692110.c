// FUN_00692110 @ 692110 size=155

int __thiscall FUN_00692110(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_2 + 0x2c);
  param_2 = 0;
  piVar3 = (int *)*puVar1;
  do {
    if (piVar3 == (int *)0x0) {
      param_2 = param_2 / 2;
      if (param_2 < 1) {
        param_2 = 1;
      }
      return param_2;
    }
    piVar2 = (int *)piVar3[2];
    piVar5 = *(int **)(*(int *)(*piVar3 + 0x1c2) + 4);
joined_r0x00692143:
    piVar3 = piVar2;
  } while (piVar5 == (int *)0x0);
  piVar3 = (int *)piVar5[2];
  piVar4 = (int *)*piVar5;
  cVar6 = (**(code **)(*piVar4 + 0x28))();
  piVar5 = piVar3;
  if ((cVar6 != '\0') && (piVar4[0x92] != 0)) {
    puVar1 = *(undefined4 **)(param_1 + 0x5c);
    do {
      if (puVar1 == (undefined4 *)0x0) goto joined_r0x00692143;
      piVar3 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
    } while (*piVar3 != *(int *)(piVar4[0x92] + 6));
    iVar7 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
    param_2 = param_2 + iVar7;
  }
  goto joined_r0x00692143;
}


