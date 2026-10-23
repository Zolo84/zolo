// FUN_004c6db0 @ 4c6db0 size=204

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c6db0(int *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_10;
  
  fVar5 = (float10)FUN_004c6cb0();
  fVar6 = (float10)FUN_004c6d30();
  local_10 = 0.005;
  if (*(int *)((int)param_1 + 0x46) != 0) {
    fVar7 = (float10)FUN_00509fb0();
    local_10 = (float)((fVar7 + (float10)_DAT_007e3374) * (float10)_DAT_007e7c18);
  }
  cVar2 = FUN_004e5a40();
  if (cVar2 != '\0') {
    local_10 = local_10 - _DAT_007e7c04;
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0xc))();
  iVar4 = (**(code **)(*piVar3 + 4))();
  if (iVar4 < 2) {
    fVar7 = (float10)local_10;
  }
  else {
    (**(code **)(*param_1 + 0xc))();
    fVar7 = (float10)FUN_00527280();
    fVar7 = (float10)local_10 - ((float10)_DAT_007e3374 - fVar7) * (float10)_DAT_007e7c10;
  }
  fVar1 = (float)param_1[0x19];
  param_1[0x19] = (int)(float)(fVar7 + (float10)fVar1);
  if (fVar7 + (float10)fVar1 < (float10)(float)fVar6) {
    param_1[0x19] = (int)(float)fVar6;
  }
  if ((float)fVar5 < (float)param_1[0x19]) {
    param_1[0x19] = (int)(float)fVar5;
  }
  return;
}


