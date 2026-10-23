// FUN_004ec4d0 @ 4ec4d0 size=193

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ec4d0(int param_1)

{
  float fVar1;
  char cVar2;
  float unaff_ESI;
  float10 fVar3;
  
  FUN_0076bbb0(*(undefined4 *)(param_1 + 0x3d8),1);
  cVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3d8) + 0xe8b2) + 0x24))
                    (*(undefined4 *)(param_1 + 0x12));
  if (cVar2 == '\0') {
    if ((DAT_00877578 == '\0') || ((&DAT_00dc0fd4)[*(int *)(*(int *)(param_1 + 0x3d8) + 6)] != 0)) {
      fVar1 = _DAT_0087756c;
      if (*(int *)(param_1 + 0x3d4) != *(int *)(param_1 + 0x3d8)) {
        fVar1 = _DAT_00877570;
      }
      fVar3 = (float10)fVar1 * (float10)unaff_ESI;
    }
    else {
      fVar3 = (float10)_DAT_00877574 * (float10)unaff_ESI;
    }
  }
  else {
    fVar3 = (float10)unaff_ESI;
  }
  if ((_DAT_0087757c != _DAT_007e3374) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x3d8) + 0x12da) + 0x3b30) != 0)) {
    fVar3 = fVar3 * (float10)_DAT_0087757c;
  }
  return fVar3;
}


