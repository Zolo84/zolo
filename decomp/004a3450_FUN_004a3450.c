// FUN_004a3450 @ 4a3450 size=134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004a3450(int param_1)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  undefined4 local_8;
  
  local_8 = 0.1;
  cVar2 = FUN_0044beb0();
  if (cVar2 == '\0') {
    local_8 = 0.2;
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x244) + 0x46);
  fVar3 = (float10)FUN_0076bbb0(param_1,7);
  fVar3 = (((float10)fVar1 * (float10)local_8 * ((float10)_DAT_007e3374 - fVar3)) /
          (float10)_DAT_00d7ca68) * (float10)*(float *)(param_1 + 0x11a84);
  if ((float10)_DAT_007e40a4 < fVar3) {
    return (float10)_DAT_007e40a4;
  }
  if (fVar3 < (float10)_DAT_007e46cc) {
    fVar3 = (float10)_DAT_007e46cc;
  }
  return fVar3;
}


