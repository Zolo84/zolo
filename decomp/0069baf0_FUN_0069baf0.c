// FUN_0069baf0 @ 69baf0 size=355

undefined4 __thiscall FUN_0069baf0(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_c;
  
  iVar7 = FUN_0051b230();
  local_c = 0;
  iVar9 = 0;
  if (*(undefined4 **)(param_1 + 0x1a) != (undefined4 *)0x0) {
    puVar14 = &DAT_00d123a8;
    puVar12 = *(undefined4 **)(param_1 + 0x1a);
    do {
      iVar9 = local_c;
      if (0xd126c7 < (int)puVar14) break;
      puVar2 = (undefined4 *)puVar12[2];
      piVar8 = (int *)(**(code **)(*(int *)*puVar12 + 0xec))();
      piVar8 = (int *)(**(code **)(*piVar8 + 0x1f0))();
      iVar9 = (**(code **)(*piVar8 + 0x1e8))();
      puVar12 = puVar14;
      if (iVar9 != 0xc) {
        cVar6 = (**(code **)(*piVar8 + 0x194))(param_2);
        if (cVar6 == '\0') {
          fVar3 = (float)(*(int *)(iVar7 + 0x3f2) - *(int *)(piVar8[0x23] + 0x3f2));
          local_c = local_c + 1;
          fVar1 = (float)(*(int *)(iVar7 + 0x3f6) - *(int *)(piVar8[0x23] + 0x3f6));
          puVar12 = puVar14 + 2;
          puVar14[1] = fVar3 * fVar3 + fVar1 * fVar1;
          *puVar14 = piVar8;
        }
      }
      puVar14 = puVar12;
      iVar9 = local_c;
      puVar12 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  if (0 < iVar9 + -1) {
    pfVar11 = (float *)&DAT_00d123ac;
    iVar7 = 1;
    do {
      if (iVar7 < iVar9) {
        iVar13 = iVar9 - iVar7;
        pfVar5 = pfVar11;
        do {
          pfVar10 = pfVar5 + 2;
          if (*pfVar10 < *pfVar11) {
            fVar3 = pfVar11[-1];
            fVar1 = *pfVar11;
            pfVar11[-1] = pfVar5[1];
            *pfVar11 = *pfVar10;
            pfVar5[1] = fVar3;
            *pfVar10 = fVar1;
          }
          iVar13 = iVar13 + -1;
          pfVar5 = pfVar10;
        } while (iVar13 != 0);
      }
      pfVar11 = pfVar11 + 2;
      bVar4 = iVar7 < iVar9 + -1;
      iVar7 = iVar7 + 1;
    } while (bVar4);
  }
  iVar7 = 0;
  if (0 < iVar9) {
    puVar14 = &DAT_00d123a8;
    do {
      cVar6 = FUN_006a9f80(*puVar14,param_2);
      if (cVar6 != '\0') {
        return 1;
      }
      iVar7 = iVar7 + 1;
      puVar14 = puVar14 + 2;
    } while (iVar7 < iVar9);
  }
  return 0;
}


