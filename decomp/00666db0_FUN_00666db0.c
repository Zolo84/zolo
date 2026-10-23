// FUN_00666db0 @ 666db0 size=299

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00666db0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float local_10;
  int local_8;
  
  FUN_004e9370(param_2);
  piVar4 = *(int **)(param_1 + 0x7e);
  local_8 = 0;
  local_10 = 1e+06;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  do {
    iVar2 = *piVar4;
    piVar4 = (int *)piVar4[2];
    if (*(char *)(iVar2 + 0x2ba) == '\0') {
LAB_00666e79:
      fVar10 = (float10)FUN_004ed6d0(*(undefined4 *)(iVar2 + 0xc));
      fVar1 = (float)fVar10;
      cVar3 = FUN_00664680(iVar2);
      if (cVar3 != '\0') {
        fVar1 = fVar1 + _DAT_007e4090;
      }
      if (fVar1 < local_10) {
        local_10 = fVar1;
        local_8 = iVar2;
      }
    }
    else {
      piVar9 = (int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x1aa);
      cVar3 = (**(code **)(*piVar9 + 0x24))(param_2);
      if (cVar3 != '\0') goto LAB_00666e79;
      iVar5 = FUN_004e9370(param_2);
      iVar8 = 0;
      if (0 < *(int *)(iVar5 + 0x290)) {
        iVar7 = 0;
        do {
          iVar6 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar5 + 0x298) + iVar7));
          cVar3 = (**(code **)(*piVar9 + 0x24))(*(undefined4 *)(iVar6 + 0x12));
          if (cVar3 != '\0') goto LAB_00666e79;
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0xc;
        } while (iVar8 < *(int *)(iVar5 + 0x290));
      }
    }
    if (piVar4 == (int *)0x0) {
      return local_8;
    }
  } while( true );
}


