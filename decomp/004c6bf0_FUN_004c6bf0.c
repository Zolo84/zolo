// FUN_004c6bf0 @ 4c6bf0 size=177

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c6bf0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_004c6d30();
  param_1[0x19] = (int)(float)fVar4;
  cVar1 = FUN_004e5a40();
  if (cVar1 == '\0') {
    param_1[0x19] = (int)(_DAT_00877354 + (float)param_1[0x19]);
  }
  fVar4 = (float10)FUN_00509fb0();
  param_1[0x19] = (int)(float)(fVar4 * (float10)_DAT_00877358 + (float10)(float)param_1[0x19]);
  piVar2 = (int *)(**(code **)(*param_1 + 0xc))();
  iVar3 = (**(code **)(*piVar2 + 4))();
  param_1[0x19] = (int)((float)iVar3 * _DAT_0087735c + (float)param_1[0x19]);
  (**(code **)(*param_1 + 0xc))();
  fVar4 = (float10)FUN_00527280();
  param_1[0x19] =
       (int)(float)(((float10)_DAT_007e3374 - fVar4) * (float10)_DAT_00877360 +
                   (float10)(float)param_1[0x19]);
  fVar4 = (float10)FUN_004c6d30();
  if ((float10)(float)param_1[0x19] < fVar4) {
    param_1[0x19] = (int)(float)fVar4;
  }
  fVar4 = (float10)FUN_004c6cb0();
  if ((float10)(float)param_1[0x19] <= fVar4) {
    return;
  }
  param_1[0x19] = (int)(float)fVar4;
  return;
}


