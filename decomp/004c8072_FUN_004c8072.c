// FUN_004c8072 @ 4c8072 size=237

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004c8072(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_2 + 0x28) + 4))();
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(param_2 + 0x2c) + 0x3d4) == 0) {
      return (float10)_DAT_007e3d28;
    }
    cVar1 = FUN_004a3020(**(undefined4 **)(param_2 + 0x2c),0);
    if (cVar1 != '\0') {
      return (float10)_DAT_007e3374;
    }
    if (*(int *)(param_1 + 4) == *(int *)(**(int **)(param_2 + 0x2c) + 0x3d4)) {
      return (float10)_DAT_007e3380;
    }
    cVar1 = FUN_004a0780(*(undefined4 *)(*(int *)(**(int **)(param_2 + 0x2c) + 0x3d4) + 6));
    if (cVar1 == '\0') {
      return (float10)_DAT_007e3d28;
    }
  }
  return (float10)_DAT_007e3d28;
}


