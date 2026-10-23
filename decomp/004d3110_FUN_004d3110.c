// FUN_004d3110 @ 4d3110 size=179

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004d3110(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_8;
  
  bVar1 = false;
  local_8 = 0.0;
  iVar3 = 0;
  iVar2 = 0x3ba4;
  do {
    fVar4 = (float10)FUN_00442c00(iVar3);
    if ((float10)_DAT_007e3380 < fVar4) {
      fVar5 = (float10)FUN_0049ea70(iVar3);
      if ((float10)*(float *)(iVar2 + 0x18 + *(int *)(param_1 + 0x12a)) <= fVar5) {
        if (fVar5 < (float10)*(float *)(iVar2 + *(int *)(param_1 + 0x12a))) {
          local_8 = (float)fVar4 * _DAT_007e40b0 + local_8;
        }
      }
      else {
        bVar1 = true;
        local_8 = (float)fVar4 * _DAT_007e40b8 + local_8;
      }
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x3bb4);
  if (!bVar1) {
    return (float10)_DAT_007e3380;
  }
  return (float10)local_8;
}


