// FUN_004ecd50 @ 4ecd50 size=269

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ecd50(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  float unaff_ESI;
  float10 fVar4;
  float unaff_retaddr;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x3d8) != 0) {
    FUN_0044beb0();
    uVar3 = *(undefined4 *)(param_1 + 0x3d8);
  }
  FUN_0076bbb0(uVar3,1);
  cVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3d8) + 0xe8b2) + 0x24))
                    (*(undefined4 *)(param_1 + 0x12));
  if (cVar2 == '\0') {
    if ((DAT_00877578 == '\0') || ((&DAT_00dc0fd4)[*(int *)(*(int *)(param_1 + 0x3d8) + 6)] != 0)) {
      fVar1 = _DAT_0087756c;
      if (*(int *)(param_1 + 0x3d4) != *(int *)(param_1 + 0x3d8)) {
        fVar1 = _DAT_00877570;
      }
      fVar4 = (float10)fVar1 * (float10)unaff_ESI;
    }
    else {
      fVar4 = (float10)_DAT_00877574 * (float10)unaff_ESI;
    }
  }
  else {
    fVar4 = (float10)unaff_ESI;
  }
  if ((_DAT_0087757c != _DAT_007e3374) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x3d8) + 0x12da) + 0x3b30) != 0)) {
    fVar4 = fVar4 * (float10)_DAT_0087757c;
  }
  return fVar4 * (float10)unaff_retaddr;
}


