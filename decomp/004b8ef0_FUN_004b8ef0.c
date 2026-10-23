// FUN_004b8ef0 @ 4b8ef0 size=1268

void __fastcall FUN_004b8ef0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar7 = (**(code **)(*param_1 + 0xc))();
  uVar12 = 0x4b8f07;
  FUN_00405ad0(s__s__CombatStarted__0083f174,uVar7);
  (**(code **)(*param_1 + 0x74))();
  cVar6 = FUN_0042e980();
  if (cVar6 != '\0') {
    cVar6 = (**(code **)(*param_1 + 0x80))();
    if (cVar6 == '\0') {
      cVar6 = (**(code **)(*param_1 + 0x18))();
      if (cVar6 == '\0') {
        (**(code **)(*param_1 + 0x5c))();
      }
      else {
        (**(code **)(*param_1 + 0x58))();
      }
    }
    else {
      (**(code **)(*param_1 + 0x58))();
    }
  }
  if ((DAT_00893750 != 0) && (*(char *)(DAT_00893750 + 0x111) != '\0')) {
    bVar4 = false;
    bVar5 = false;
    piVar8 = *(int **)(param_1[0x21] + 0x2c);
    while (piVar8 != (int *)0x0) {
      piVar1 = (int *)piVar8[2];
      iVar2 = *piVar8;
      piVar8 = piVar1;
      if (((&DAT_0089cad8)[iVar2] != 0) &&
         ((cVar6 = FUN_00444290(), cVar6 != '\0' || (cVar6 = FUN_00444270(), cVar6 != '\0')))) {
        bVar4 = true;
      }
    }
    piVar8 = *(int **)(param_1[0x20] + 0x2c);
    while (piVar8 != (int *)0x0) {
      piVar1 = (int *)piVar8[2];
      iVar2 = *piVar8;
      piVar8 = piVar1;
      if (((&DAT_0089cad8)[iVar2] != 0) &&
         ((cVar6 = FUN_00444290(), cVar6 != '\0' || (cVar6 = FUN_00444270(), cVar6 != '\0')))) {
        bVar5 = true;
      }
    }
    if (bVar4) {
      uVar7 = DAT_0089d034;
      (**(code **)(*(int *)param_1[0x20] + 0xc))(DAT_0089d034);
      cVar6 = FUN_00527dc0(uVar7);
      if (cVar6 == '\0') {
        iVar2 = (&DAT_0089cad8)[*(int *)(param_1[0x20] + 0x4a)];
        if (iVar2 == 0) {
          return;
        }
        iVar3 = param_1[0x1d];
        if (iVar3 == 1) {
          piVar8 = (int *)FUN_004c0930();
          uVar14 = 3;
          uVar13 = 0x4b9044;
          uVar7 = FUN_00447250(3);
          FUN_00446d10(uVar7);
          uVar7 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
          uVar9 = (**(code **)(*piVar8 + 0xc))(uVar7);
          puVar11 = &DAT_0088ebf8;
          uVar10 = FUN_00458280(&DAT_0088ebf8,uVar9);
          FUN_006eb830(0xa9,uVar10,puVar11,uVar9,uVar7,uVar12,uVar13,uVar14);
          return;
        }
        if (((iVar3 == 2) || (iVar3 == 7)) || (iVar3 == 8)) {
          piVar8 = (int *)FUN_004c0930();
          uVar14 = 3;
          uVar13 = 0x4b91c8;
          uVar7 = FUN_00447250(3);
          FUN_00446d10(uVar7);
          uVar7 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
          uVar9 = (**(code **)(*piVar8 + 0xc))(uVar7);
          puVar11 = &DAT_0088ebf8;
          uVar10 = FUN_00458280(&DAT_0088ebf8,uVar9);
          FUN_006eb830(0xa7,uVar10,puVar11,uVar9,uVar7,uVar12,uVar13,uVar14);
          return;
        }
        if (iVar3 == 3) {
          piVar8 = (int *)FUN_004c0930();
          uVar14 = 3;
          uVar13 = 0x4b90b8;
          uVar7 = FUN_00447250(3);
          FUN_00446d10(uVar7);
          uVar7 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
          uVar9 = (**(code **)(*piVar8 + 0xc))(uVar7);
          puVar11 = &DAT_0088ebf8;
          uVar10 = FUN_00458280(&DAT_0088ebf8,uVar9);
          FUN_006eb830(0xab,uVar10,puVar11,uVar9,uVar7,uVar12,uVar13,uVar14);
          return;
        }
        if (iVar3 != 5) {
          if (iVar3 != 4) {
            return;
          }
          piVar8 = (int *)FUN_004c0930();
          uVar14 = 3;
          uVar13 = 0x4b9171;
          uVar7 = FUN_00447250(3);
          FUN_00446d10(uVar7);
          uVar7 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
          uVar9 = (**(code **)(*piVar8 + 0xc))(uVar7);
          puVar11 = &DAT_0088ebf8;
          uVar10 = FUN_00458280(&DAT_0088ebf8,uVar9);
          FUN_006eb830(0xb2,uVar10,puVar11,uVar9,uVar7,uVar12,uVar13,uVar14);
          return;
        }
        piVar8 = (int *)FUN_004c0930();
        uVar14 = 3;
        uVar13 = 0x4b9111;
        uVar7 = FUN_00447250(3);
        FUN_00446d10(uVar7);
        uVar7 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
        uVar9 = (**(code **)(*piVar8 + 0xc))(uVar7);
        puVar11 = &DAT_0088ebf8;
        uVar10 = FUN_00458280(&DAT_0088ebf8,uVar9);
        FUN_006eb830(0xb4,uVar10,puVar11,uVar9,uVar7,uVar12,uVar13,uVar14);
        return;
      }
    }
    if (bVar5) {
      uVar7 = DAT_0089d034;
      (**(code **)(*(int *)param_1[0x21] + 0xc))(DAT_0089d034);
      cVar6 = FUN_00527dc0(uVar7);
      if (cVar6 == '\0') {
        iVar2 = param_1[0x1d];
        if (iVar2 == 1) {
          piVar8 = (int *)FUN_004c0930();
          uVar13 = 3;
          uVar10 = 0x4b924d;
          uVar7 = FUN_00447250(3);
          FUN_00446d10(uVar7);
          uVar7 = (**(code **)(*piVar8 + 0xc))();
          puVar11 = &DAT_0088ebf8;
          uVar9 = FUN_00458280(&DAT_0088ebf8,uVar7);
          FUN_006eb730(0xa8,uVar9,puVar11,uVar7,uVar12,uVar10,uVar13);
          return;
        }
        if (((iVar2 == 2) || (iVar2 == 7)) || (iVar2 == 8)) {
          piVar8 = (int *)FUN_004c0930();
          uVar13 = 3;
          uVar10 = 0x4b93ab;
          uVar7 = FUN_00447250(3);
          FUN_00446d10(uVar7);
          uVar7 = (**(code **)(*piVar8 + 0xc))();
          puVar11 = &DAT_0088ebf8;
          uVar9 = FUN_00458280(&DAT_0088ebf8,uVar7);
          FUN_006eb730(0xa6,uVar9,puVar11,uVar7,uVar12,uVar10,uVar13);
        }
        else {
          if (iVar2 == 3) {
            piVar8 = (int *)FUN_004c0930();
            uVar13 = 3;
            uVar10 = 0x4b92b9;
            uVar7 = FUN_00447250(3);
            FUN_00446d10(uVar7);
            uVar7 = (**(code **)(*piVar8 + 0xc))();
            puVar11 = &DAT_0088ebf8;
            uVar9 = FUN_00458280(&DAT_0088ebf8,uVar7);
            FUN_006eb730(0xaa,uVar9,puVar11,uVar7,uVar12,uVar10,uVar13);
            return;
          }
          if (iVar2 == 5) {
            piVar8 = (int *)FUN_004c0930();
            uVar13 = 3;
            uVar10 = 0x4b930a;
            uVar7 = FUN_00447250(3);
            FUN_00446d10(uVar7);
            uVar7 = (**(code **)(*piVar8 + 0xc))();
            puVar11 = &DAT_0088ebf8;
            uVar9 = FUN_00458280(&DAT_0088ebf8,uVar7);
            FUN_006eb730(0xb3,uVar9,puVar11,uVar7,uVar12,uVar10,uVar13);
            return;
          }
          if (iVar2 == 4) {
            piVar8 = (int *)FUN_004c0930();
            uVar13 = 3;
            uVar10 = 0x4b935f;
            uVar7 = FUN_00447250(3);
            FUN_00446d10(uVar7);
            uVar7 = (**(code **)(*piVar8 + 0xc))();
            puVar11 = &DAT_0088ebf8;
            uVar9 = FUN_00458280(&DAT_0088ebf8,uVar7);
            FUN_006eb730(0xb1,uVar9,puVar11,uVar7,uVar12,uVar10,uVar13);
            return;
          }
        }
      }
    }
  }
  return;
}


