// FUN_00460220 @ 460220 size=228

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460220(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar2 = FUN_00428ee0(&param_1);
  iVar1 = param_3;
  if (((iVar2 != 0) && (iVar2 != 8)) && ((&DAT_0089cad8)[param_3] != 0)) {
    if (*(int *)((&DAT_0089cad8)[param_3] + 0x3350) == iVar2 + -8) {
      FUN_004512f0(0);
    }
    if (((*(int *)((&DAT_0089cad8)[iVar1] + 0x3350) == 0) || (*(char *)(iVar2 + 0xe) != '\0')) &&
       (piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0x1a) + 0x28))(&param_3,iVar1), *piVar3 == 0
       )) {
      FUN_00459f50(iVar1);
      for (iVar1 = *(int *)(*(int *)(iVar2 + 0x1a) + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        fVar4 = (float10)FUN_005885d0();
        if (fVar4 < (float10)_DAT_007e6320) {
          FUN_00588600(0xc3110000);
        }
      }
    }
  }
  if (param_4 != '\0') {
    FUN_005886c0();
  }
  return;
}


