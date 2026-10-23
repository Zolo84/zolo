// FUN_004ec900 @ 4ec900 size=281

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004ec900(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  float unaff_ESI;
  float10 fVar8;
  float local_8;
  
  local_8 = *(float *)(param_1 + 0x206);
  iVar5 = *(int *)(param_1 + 0x3d8);
  iVar7 = 0;
  if (iVar5 != 0) {
    fVar1 = *(float *)(*(int *)(iVar5 + 0x244) + 0x6e);
    fVar2 = *(float *)(iVar5 + 0x37fa);
    fVar3 = *(float *)(iVar5 + 0x11a18);
    cVar6 = FUN_0044beb0();
    iVar7 = *(int *)(param_1 + 0x3d8);
    if (cVar6 == '\0') {
      fVar4 = *(float *)(iVar7 + 0x23c);
    }
    else {
      fVar4 = *(float *)(iVar7 + 0x240);
    }
    local_8 = fVar4 * fVar1 * local_8 * fVar2 * fVar3;
  }
  FUN_0076bbb0(iVar7,1);
  cVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3d8) + 0xe8b2) + 0x24))
                    (*(undefined4 *)(param_1 + 0x12));
  if (cVar6 == '\0') {
    if ((DAT_00877578 == '\0') || ((&DAT_00dc0fd4)[*(int *)(*(int *)(param_1 + 0x3d8) + 6)] != 0)) {
      fVar1 = _DAT_0087756c;
      if (*(int *)(param_1 + 0x3d4) != *(int *)(param_1 + 0x3d8)) {
        fVar1 = _DAT_00877570;
      }
      fVar8 = (float10)fVar1 * (float10)local_8;
    }
    else {
      fVar8 = (float10)_DAT_00877574 * (float10)local_8;
    }
  }
  else {
    fVar8 = (float10)local_8;
  }
  if ((_DAT_0087757c != _DAT_007e3374) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x3d8) + 0x12da) + 0x3b30) != 0)) {
    fVar8 = fVar8 * (float10)_DAT_0087757c;
  }
  return fVar8 * (float10)unaff_ESI;
}


