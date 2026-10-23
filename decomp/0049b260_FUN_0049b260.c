// FUN_0049b260 @ 49b260 size=589

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0049b260(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  float10 fVar15;
  float local_14;
  float local_10;
  
  local_14 = 0.0;
  fVar1 = *(float *)(param_1 + 0x13c58);
  bVar13 = _DAT_007e3380 < DAT_00dc1828;
  bVar14 = _DAT_007e3380 < fVar1;
  cVar6 = FUN_0044beb0();
  iVar8 = FUN_004a0750();
  iVar8 = *(int *)(iVar8 + 0x284);
  iVar9 = FUN_0044e1d0();
  puVar3 = *(undefined4 **)(param_1 + 0xe8a4);
  uVar10 = FUN_0044e1b0();
  iVar11 = FUN_004e9370(uVar10);
joined_r0x0049b2ec:
  while( true ) {
    do {
      if (puVar3 == (undefined4 *)0x0) {
        fVar1 = *(float *)(param_1 + 0x13c54);
        fVar2 = *(float *)(*(int *)(param_1 + 0x244) + 0x8a);
        fVar15 = (float10)FUN_0076bbb0(param_1,2);
        fVar5 = _DAT_00877580;
        if (cVar6 != '\0') {
          fVar5 = _DAT_00877584;
        }
        fVar15 = (fVar15 + (float10)_DAT_007e3374) * (float10)(local_14 * fVar1 * fVar2) *
                 (float10)*(float *)(param_1 + 0x3806) * (float10)fVar5;
        if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) != 0) {
          fVar15 = fVar15 * (float10)_DAT_00877588;
        }
        if (_DAT_007e3380 < *(float *)(param_1 + 0x39cc)) {
          fVar15 = fVar15 - (float10)*(float *)(param_1 + 0x39cc) * (float10)_DAT_00dc1824;
        }
        return fVar15 + (float10)*(float *)(param_1 + 0x3856);
      }
      puVar4 = (undefined4 *)puVar3[2];
      iVar12 = FUN_004e9370(*puVar3);
      fVar2 = (float)*(int *)(iVar12 + 0x1f2);
      puVar3 = puVar4;
    } while ((float)*(int *)(iVar12 + 0x1f2) == _DAT_007e3380);
    if ((cVar6 != '\0') && (*(int *)(iVar12 + 0x482) != *(int *)(iVar11 + 0x482)))
    goto code_r0x0049b339;
    if ((iVar8 == *(int *)(iVar12 + 0x284)) || (*(int *)(iVar12 + 0x482) == iVar9)) {
      local_10 = 1.0;
    }
    else {
      local_10 = DAT_00dc1820;
    }
    cVar7 = FUN_004e8ab0(param_1);
    if (cVar7 != '\0') break;
    local_14 = _DAT_00dc181c * fVar2 * local_10 + local_14;
    if (bVar14) goto LAB_0049b3fb;
  }
  fVar2 = _DAT_00dc1818 * fVar2;
  goto LAB_0049b409;
code_r0x0049b339:
  if (bVar13) {
    local_10 = DAT_00dc1828;
    if ((iVar8 != *(int *)(iVar12 + 0x284)) && (*(int *)(iVar12 + 0x482) != iVar9)) {
      local_10 = DAT_00dc1820 * DAT_00dc1828;
    }
    cVar7 = FUN_004e8ab0(param_1);
    if (cVar7 == '\0') {
      local_14 = _DAT_00dc181c * fVar2 * local_10 + local_14;
      if (!bVar14) goto joined_r0x0049b2ec;
LAB_0049b3fb:
      fVar2 = _DAT_00dc1818 * fVar2 * fVar1;
    }
    else {
      fVar2 = _DAT_00dc1818 * fVar2;
    }
LAB_0049b409:
    local_14 = fVar2 * local_10 + local_14;
  }
  goto joined_r0x0049b2ec;
}


