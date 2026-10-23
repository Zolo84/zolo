// FUN_00525a00 @ 525a00 size=118

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00525a00(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  float local_c;
  
  piVar6 = *(int **)(param_1 + 0x26);
  iVar5 = 0;
  local_c = -1.0;
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar6[2];
    iVar2 = *piVar6;
    fVar3 = *(float *)(iVar2 + 0xf4);
    fVar7 = (float10)FUN_004fd510();
    fVar4 = (float10)_DAT_007e4088;
    fVar8 = (float10)FUN_004fd510();
    fVar8 = (float10)(float)((fVar7 - (float10)fVar3) * fVar4) / fVar8;
    if ((iVar5 == 0) || ((float10)local_c < fVar8)) {
      local_c = (float)fVar8;
      iVar5 = iVar2;
    }
    piVar6 = piVar1;
  } while (piVar1 != (int *)0x0);
  return iVar5;
}


