// FUN_00697990 @ 697990 size=79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00697990(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  piVar2 = *(int **)(param_1 + 0x6e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_006982c0(param_1,8);
    *(int **)(param_1 + 0x6e) = piVar2;
    FUN_00697260(8,piVar2,1);
  }
  iVar1 = *piVar2;
  fVar3 = (float10)(**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x1c))((float)(fVar3 + (float10)_DAT_007e3374));
  piVar2[4] = param_1;
  return;
}


