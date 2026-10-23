// FUN_00697d30 @ 697d30 size=75

undefined4 __thiscall FUN_00697d30(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  undefined3 extraout_var;
  
  if (((*(char *)(param_1 + 0xe) != '\0') &&
      (piVar1 = *(int **)(param_1 + 0x6a), piVar1 != (int *)0x0)) &&
     (*(char *)((int)piVar1 + 0xe) != '\0')) {
    uVar2 = (**(code **)(*piVar1 + 0x1b8))(param_2);
    return uVar2;
  }
  uVar2 = FUN_006aa000(param_2);
  uVar3 = (undefined3)((uint)uVar2 >> 8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    FUN_00691d40(7);
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,1);
}


