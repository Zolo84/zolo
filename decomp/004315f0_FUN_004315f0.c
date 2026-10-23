// FUN_004315f0 @ 4315f0 size=229

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004315f0(int *param_1,undefined4 param_2,float param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  piVar1 = (int *)((int)param_3 + 0x254);
  param_3 = (float)*(double *)(&DAT_00ad2a08 + *piVar1 * 8);
  if (*(double *)(&DAT_00ad2a08 + *piVar1 * 8) <= (double)_DAT_007e4098) {
    param_3 = 1.0;
  }
  iVar2 = *(int *)(param_4 + 4);
  if (iVar2 == 1) {
    param_3 = param_3 + _DAT_007e34c0;
  }
  if (iVar2 == 2) {
    param_3 = param_3 + _DAT_007e4094;
  }
  if (iVar2 == 3) {
    param_3 = param_3 + _DAT_007e4094;
  }
  if ((*(int *)(iVar4 + 0x3d8) != 0) && (param_1 != (int *)0x0)) {
    cVar3 = (**(code **)(*param_1 + 0x28))();
    if (cVar3 != '\0') {
      cVar3 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
      if ((cVar3 != '\0') && (param_3 = param_3 + _DAT_007e34e0, *(char *)(iVar4 + 0x46e) != '\0'))
      {
        (**(code **)(*param_1 + 0x10))(iVar4);
        cVar3 = FUN_005081a0(iVar4);
        if (cVar3 != '\0') {
          return (float10)param_3 + (float10)_DAT_007e4090;
        }
      }
    }
  }
  return (float10)param_3;
}


