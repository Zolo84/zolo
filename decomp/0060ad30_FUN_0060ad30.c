// FUN_0060ad30 @ 60ad30 size=318

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060ad30(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if ((&DAT_0089cad8)[param_1] != 0) {
    uVar4 = FUN_004a6740(param_1);
    *param_3 = uVar4;
    uVar4 = FUN_004a6700(param_1);
    *param_4 = uVar4;
    if (*param_2 < 10) {
      iVar6 = 0;
      do {
        iVar5 = (int)*(char *)(DAT_00893530 + 0x16) + *(int *)(DAT_00d0ca90 + 6);
        piVar3 = *(int **)(DAT_00d0ca90 + 0x3654);
        while (piVar3 != (int *)0x0) {
          piVar1 = piVar3 + 2;
          iVar2 = *piVar3;
          piVar3 = (int *)*piVar1;
          if (*(int *)(iVar2 + 0x1c) != 0) {
            iVar5 = iVar5 + *(int *)(*(int *)(iVar2 + 0x1c) + 0xe);
          }
        }
        if (_DAT_007e681c <=
            (float)((*(int *)(((iVar6 + 10) % 0x1a) * 4 + 0x85ead0) * iVar5 + DAT_0085eb38) % 100))
        {
          __ftol();
        }
        else {
          __ftol();
        }
        if (iVar6 == 0) {
          uVar4 = __ftol();
          *param_3 = uVar4;
        }
        else if (iVar6 == 1) {
          uVar4 = __ftol();
          *param_4 = uVar4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
  }
  return;
}


