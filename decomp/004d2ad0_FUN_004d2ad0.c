// FUN_004d2ad0 @ 4d2ad0 size=66

undefined4 __thiscall FUN_004d2ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = *piVar2;
    if ((*(uint *)(iVar1 + 0x1c) & DAT_00a98444) != 0) {
      (**(code **)(**(int **)(iVar1 + 0x16) + 0x10))(param_2);
      (**(code **)(*(int *)(iVar1 + 0x30) + 0x10))(param_2);
    }
    piVar2 = (int *)piVar2[2];
  } while (piVar2 != (int *)0x0);
  return 0;
}


