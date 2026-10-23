// FUN_0051b240 @ 51b240 size=2397

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051b240(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined2 uVar3;
  uint3 uVar4;
  void **ppvVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 unaff_EBX;
  float10 fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uStack_24;
  undefined2 uStack_16;
  undefined2 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar4 = (uint3)uStack_24;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c1f37;
  pvStack_c = ExceptionList;
  uStack_24 = (uint)(uint3)uStack_24;
  iVar11 = DAT_00ab27b4 + param_1[0x90] * 0x4b2;
  piVar12 = (int *)(DAT_00ab27b4 + param_2 * 0x4b2);
  ppvVar5 = &pvStack_c;
  if (*(int *)(iVar11 + 0x12) != *(int *)((int)piVar12 + 0x12)) {
    if ((*(char *)((int)param_1 + 0x17e) != '\0') &&
       ((*(int *)((int)DAT_00d0ca90 + 0x21e62) == 0xc ||
        (*(int *)((int)DAT_00d0ca90 + 0x21e62) == 6)))) {
      uStack_24 = CONCAT13(1,uVar4);
    }
    ppvVar5 = &pvStack_c;
    piVar7 = (int *)param_1[0x48];
    while (ExceptionList = ppvVar5, ppvVar5 = ExceptionList, piVar7 != (int *)0x0) {
      piVar19 = (int *)piVar7[2];
      piVar1 = (int *)*piVar7;
      piVar7 = piVar19;
      if ((*(int *)(piVar1[0x1e] + 0x12) == param_1[0x90]) && (param_1[0x90] != param_2)) {
        iVar13 = param_1[0x92];
        (**(code **)(*(int *)piVar1[0x20] + 0xc))(iVar13);
        cVar6 = FUN_00527dc0(iVar13);
        if (cVar6 == '\0') {
          (**(code **)(*piVar1 + 0x2c))(param_1,0);
          ppvVar5 = ExceptionList;
        }
        else {
          (**(code **)(*piVar1 + 0x2c))(param_1,1);
          ppvVar5 = ExceptionList;
        }
      }
    }
  }
  ExceptionList = ppvVar5;
  (**(code **)(*param_1 + 0x94))();
  FUN_004e43f0(param_1);
  FUN_004e4350(param_1);
  (**(code **)param_1[2])(param_2);
  if ((param_1[0x99] == 0x13) && (param_2 == *(int *)((int)param_1 + 0x282))) {
    (**(code **)(*param_1 + 0x18))();
    cVar6 = FUN_004f0aa0();
    if (cVar6 == '\0') {
      (**(code **)(*param_1 + 0x18))();
      fVar20 = (float10)FUN_004f00b0();
      iVar13 = param_1[0x92];
      fVar21 = (float)((float10)*(float *)(iVar13 + 0xe3ac) * fVar20);
      if (*(float *)(iVar13 + 0x39c4) < fVar21) {
        fVar21 = *(float *)(iVar13 + 0x39c4);
      }
      FUN_0049eba0(-fVar21);
      FUN_004ea3b0(fVar21);
    }
  }
  cVar6 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
  if (cVar6 != '\0') {
    if (*(char *)((int)param_1 + 0x186) != '\0') goto LAB_0051b5b7;
    if (((*(int *)(iVar11 + 0x12) == 0) || (param_1[0x90] == param_2)) || (param_1[0x9a] != param_2)
       ) goto LAB_0051b5ae;
    if (((param_2 == 0) || (DAT_00893750 == 0)) || (*(char *)(DAT_00893750 + 0x111) == '\0'))
    goto switchD_0051b499_caseD_3;
    if (DAT_00d0ca90 != (int *)param_1[0x92]) {
      piVar7 = (int *)(&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)];
      if ((int *)(&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)] == (int *)0x0) {
        piVar7 = (int *)param_1[0x92];
      }
      if ((DAT_00d0ca90 != piVar7) && (cVar6 = FUN_00444270(), cVar6 == '\0'))
      goto switchD_0051b499_caseD_3;
    }
    cVar6 = (**(code **)(*param_1 + 0x2c))();
    iVar13 = param_2;
    if (cVar6 == '\0') {
      cVar6 = (**(code **)(*param_1 + 0x30))();
      if (cVar6 == '\0') {
        cVar6 = (**(code **)(*param_1 + 0x28))();
        if (cVar6 != '\0') {
          uVar10 = *(undefined4 *)(param_1[0x92] + 6);
          uVar8 = (**(code **)(*piVar12 + 0xc))(param_2);
          uVar9 = (**(code **)(*param_1 + 0xc))(uVar8);
          uVar22 = 0xa5;
          goto LAB_0051b545;
        }
      }
      else if ((param_1[0x99] == 2) || (param_1[0x99] == 0x14)) {
        uVar10 = *(undefined4 *)(param_1[0x92] + 6);
        uVar8 = (**(code **)(*piVar12 + 0xc))(param_2);
        uVar9 = (**(code **)(*param_1 + 0xc))(uVar8);
        uVar22 = 0xa3;
        goto LAB_0051b545;
      }
    }
    else {
      switch(param_1[0x99]) {
      case 1:
      case 2:
      case 0x1b:
      case 0x20:
switchD_0051b499_caseD_1:
        uVar10 = *(undefined4 *)(param_1[0x92] + 6);
        uVar8 = (**(code **)(*piVar12 + 0xc))(param_2);
        uVar9 = (**(code **)(*param_1 + 0xc))(uVar8);
        uVar22 = 0xa4;
LAB_0051b545:
        FUN_006eab80(uVar22,uVar10,&DAT_0088ebf8,uVar9,uVar8,iVar13);
        break;
      case 0x1c:
        if (param_2 != *(int *)((int)param_1 + 0x212)) goto switchD_0051b499_caseD_1;
      }
    }
switchD_0051b499_caseD_3:
    cVar6 = (**(code **)(*param_1 + 0x30))();
    if (cVar6 != '\0') {
      uVar10 = (**(code **)(*param_1 + 0x18))();
      cVar6 = FUN_00512990(uVar10);
      if ((cVar6 != '\0') && (cVar6 = FUN_0042e980(), cVar6 != '\0')) {
        uVar10 = (**(code **)(*param_1 + 0x18))();
        FUN_0045c2e0(uVar10);
      }
    }
    if ((DAT_00893750 != 0) && (*(char *)(DAT_00893750 + 0x111) != '\0')) {
      FUN_00512590(param_1);
    }
  }
LAB_0051b5ae:
  FUN_00523370(0);
LAB_0051b5b7:
  FUN_0051d630();
  piVar12 = (int *)param_1[0x92];
  piVar7 = (int *)(&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)];
  piVar19 = piVar7;
  if (piVar7 == (int *)0x0) {
    piVar19 = piVar12;
  }
  if (piVar12 != piVar19) {
    piVar19 = piVar7;
    if (piVar7 == (int *)0x0) {
      piVar19 = piVar12;
    }
    if (piVar19 != (int *)0x0) {
      if (piVar7 == (int *)0x0) {
        piVar7 = piVar12;
      }
      (**(code **)(*piVar7 + 0x490))();
    }
  }
  if ((DAT_00d0ca90 != (int *)0x0) &&
     (*(char *)(param_1[0x92] + 0x34ac + *(int *)((int)DAT_00d0ca90 + 6)) != '\0')) {
    (**(code **)(*DAT_00d0ca90 + 0x490))();
  }
  cVar6 = (**(code **)(*param_1 + 0x30))();
  if (((cVar6 == '\0') && (piVar12 = *(int **)((int)param_1 + 0x176), piVar12 != (int *)0x0)) &&
     (*(int *)(piVar12[0x1e] + 0x12) != param_2)) {
    (**(code **)(*piVar12 + 0x2c))(param_1,1);
  }
  (**(code **)(*(int *)param_1[0x92] + 0x490))();
  if (((DAT_00893750 != 0) && (cVar6 = FUN_0042e8e0(), cVar6 != '\0')) &&
     ((cVar6 = FUN_0042e980(), cVar6 != '\0' &&
      ((*(int *)(uStack_24 + 0x12) != *(int *)(iVar11 + 0x12) &&
       (*(char *)((int)param_1 + 0x25a) == '\0')))))) {
    FUN_005afd90(param_1,param_1[3]);
    if (*(char *)((int)param_1 + 0x17d) == '\0') {
      cVar6 = (**(code **)(*param_1 + 0x28))();
      if (cVar6 == '\0') {
        cVar6 = (**(code **)(*param_1 + 0x2c))();
        if (cVar6 == '\0') {
          uVar10 = (**(code **)(*param_1 + 0x18))();
          FUN_006ad5c0(2,&LAB_004f0d60,uVar10);
        }
        else {
          uVar10 = (**(code **)(*param_1 + 0x14))();
          FUN_006ad550(1,&LAB_005271a0,uVar10);
        }
      }
      else {
        uVar10 = (**(code **)(*param_1 + 0x10))();
        FUN_006ad4e0(0,&LAB_00509d00,uVar10);
      }
    }
    iVar11 = (**(code **)(param_1[0x47] + 4))();
    if (((iVar11 == 0) && (*(int *)((int)param_1 + 0x176) == 0)) &&
       (cVar6 = (**(code **)(*param_1 + 0x30))(), cVar6 != '\0')) {
      iVar11 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      if (0 < iVar11) {
        piVar12 = *(int **)((int)param_1 + 0x26);
        do {
          if (piVar12 == (int *)0x0) goto LAB_0051bb5a;
          iVar11 = *piVar12;
          piVar12 = (int *)piVar12[2];
        } while (*(char *)(iVar11 + 0x15c) != '\0');
      }
      FUN_004e9370(param_1[3]);
      fVar20 = (float10)FUN_004ed1a0();
      if ((float10)_DAT_007e3380 < fVar20) {
        uVar10 = *(undefined4 *)(param_1[0x92] + 6);
        FUN_004e9370(param_1[3]);
        cVar6 = FUN_0044b280(uVar10);
        if ((cVar6 != '\0') && ((DAT_00dc16e0 != '\0' || (cVar6 = FUN_005129d0(), cVar6 != '\0'))))
        {
          piVar12 = operator_new(0x98);
          puStack_8 = (undefined1 *)0x0;
          if (piVar12 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            iVar11 = param_1[3];
            FUN_00416730();
            piVar12[0x25] = iVar11;
            *piVar12 = (int)&PTR_FUN_007e74b8;
            piVar12[2] = (int)&PTR_LAB_007e74b4;
            *(undefined ***)((int)piVar12 + 0x7e) = &PTR_LAB_007e74b0;
          }
          puStack_8 = (undefined1 *)0xffffffff;
          (**(code **)(*piVar12 + 0x2c))(s_gfx_map_flak_bmp_0084b014);
          uVar10 = FUN_00413d60(s_flak_palette_bmp_0084b000);
          FUN_00415f20(uVar10);
          iVar13 = FUN_004e9370(param_1[3]);
          uVar10 = *(undefined4 *)(iVar13 + 0x3f2);
          iVar11 = *piVar12;
          iVar13 = *(int *)(iVar13 + 0x3f6);
          iVar14 = FUN_00415be0();
          (**(code **)(iVar11 + 0x18))(uVar10,iVar13 - iVar14 / 2);
          (**(code **)(*piVar12 + 0x34))(0x14);
          *(undefined4 *)((int)piVar12 + 0x22) = 0;
          *(undefined4 *)((int)piVar12 + 0x26) = 5;
          *(undefined1 *)((int)piVar12 + 0x67) = 0;
          (**(code **)(*piVar12 + 0x38))(0);
          FUN_0040fd60(piVar12,0x1f5,0);
          uVar10 = 0;
          uVar15 = -(uint)(param_1 != (int *)0x0) & (int)param_1 + 0x22U;
          FUN_004e9370(param_1[3],uVar15,0);
          FUN_004e6ff0(uVar15,uVar10);
          piVar12 = *(int **)((int)param_1 + 0x26);
          while (piVar12 != (int *)0x0) {
            piVar7 = (int *)piVar12[2];
            iVar11 = *piVar12;
            FUN_004fc2e0(0,0,3);
            bVar2 = *(float *)(iVar11 + 0xec) < _DAT_007e34e0;
            *(undefined4 *)(iVar11 + 0x7c) = 0;
            *(undefined4 *)(iVar11 + 0x80) = 0;
            *(undefined4 *)(iVar11 + 0x84) = 0;
            piVar12 = piVar7;
            if (bVar2) {
              iVar13 = FUN_004e9370(param_1[3]);
              FUN_0045ec40(iVar11,0,0,*(undefined4 *)(*(int *)(iVar13 + 0x3d8) + 6));
            }
          }
          if ((((char)param_1[0x33] != '\0') && (DAT_00dc191a != '\0')) && (param_1[0x32] == 3)) {
            puVar16 = operator_new(0xc);
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = (undefined4 *)0x0;
            }
            else {
              puVar17 = operator_new(0x12);
              if (puVar17 == (undefined2 *)0x0) {
                puVar17 = (undefined2 *)0x0;
              }
              else {
                FUN_0042d2d0();
                puVar17[4] = 0;
                *(undefined4 *)(puVar17 + 5) = 0;
              }
              puVar16[1] = puVar17;
              *(undefined1 *)(puVar16 + 2) = 0;
              *(undefined1 *)((int)puVar16 + 9) = 1;
              *puVar16 = &PTR_FUN_007e5f80;
              *(undefined1 *)((int)puVar16 + 10) = 0;
              *puVar17 = 0x202;
              iVar11 = puVar16[1];
              *(int *)(iVar11 + 8) = param_1[6];
              *(short *)(iVar11 + 0xc) = (short)param_1[7];
              puVar18 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
              iVar11 = puVar16[1];
              *(undefined4 *)(iVar11 + 2) = *puVar18;
              *(undefined2 *)(iVar11 + 6) = *(undefined2 *)(puVar18 + 1);
              *puVar16 = &PTR_FUN_007e5f60;
              *(undefined4 *)(puVar16[1] + 0xe) = 3;
            }
            FUN_00565bc0(puVar16);
          }
          iVar11 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
          if (iVar11 == 0) {
            puVar16 = operator_new(0xc);
            uVar3 = DAT_0088f28c;
            puStack_8 = (undefined1 *)0x3;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = (undefined4 *)0x0;
            }
            else {
              iVar11 = param_1[0x92];
              uStack_16 = (undefined2)DAT_0088f28e;
              uStack_14 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              puVar17 = operator_new(0x20);
              puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
              if (puVar17 == (undefined2 *)0x0) {
                puVar17 = (undefined2 *)0x0;
              }
              else {
                FUN_0042d6c0();
                puVar17[7] = 0;
                *(undefined4 *)(puVar17 + 8) = 0;
                puVar17[0xd] = 0;
                *(undefined4 *)(puVar17 + 0xe) = 0;
              }
              puVar16[1] = puVar17;
              *(undefined1 *)(puVar16 + 2) = 0;
              *(undefined1 *)((int)puVar16 + 9) = 1;
              *puVar16 = &PTR_FUN_007e5e5c;
              *(undefined1 *)((int)puVar16 + 10) = 0;
              *puVar17 = 0x35;
              iVar13 = puVar16[1];
              *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar11 + 4);
              *(undefined2 *)(iVar13 + 0xc) = *(undefined2 *)(iVar11 + 8);
              puVar18 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
              iVar11 = puVar16[1];
              *(undefined4 *)(iVar11 + 2) = *puVar18;
              *(undefined2 *)(iVar11 + 6) = *(undefined2 *)(puVar18 + 1);
              iVar11 = puVar16[1];
              *puVar16 = &PTR_FUN_007e5370;
              *(int *)(iVar11 + 0xe) = param_1[6];
              *(short *)(iVar11 + 0x12) = (short)param_1[7];
              *(undefined1 *)(puVar16[1] + 0x14) = 1;
              *(undefined1 *)(puVar16[1] + 0x15) = 0;
              *(undefined4 *)(puVar16[1] + 0x16) = 0;
              iVar11 = puVar16[1];
              *(uint *)(iVar11 + 0x1a) = CONCAT22(uStack_16,uVar3);
              *(undefined2 *)(iVar11 + 0x1e) = uStack_14;
            }
            puStack_8 = (undefined1 *)0xffffffff;
            FUN_00565ca0(puVar16);
          }
        }
      }
    }
  }
LAB_0051bb5a:
  if (param_1[0x92] != 0) {
    (**(code **)(*param_1 + 0x94))();
  }
  if ((char)((uint)unaff_EBX >> 0x18) != '\0') {
    FUN_0064c090(*(undefined4 *)((int)DAT_00d0ca90 + 0x21e62));
  }
  ExceptionList = pvStack_10;
  return;
}


