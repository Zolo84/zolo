// FUN_004a8020 @ 4a8020 size=1864

uint __thiscall FUN_004a8020(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined2 uVar5;
  void **ppvVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  void *pvVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  bool bVar18;
  undefined1 uStack_2e;
  byte bStack_2d;
  undefined2 uStack_2c;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bdfda;
  uVar9 = 0;
  ppvVar6 = &local_c;
  piVar4 = *(int **)(param_1 + 0xe892);
  local_c = ExceptionList;
  do {
    do {
      ExceptionList = ppvVar6;
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_c;
        return uVar9 & 0xffffff00;
      }
      piVar2 = (int *)piVar4[2];
      iVar17 = DAT_00ab27b4 + *piVar4 * 0x4b2;
      uVar9 = *(uint *)(iVar17 + 0x3d8);
      ppvVar6 = ExceptionList;
      piVar4 = piVar2;
    } while (*(int *)(uVar9 + 6) != 0x157);
    piVar2 = *(int **)(iVar17 + 0x172);
    while (piVar2 != (int *)0x0) {
      piVar14 = (int *)piVar2[2];
      iVar10 = *piVar2;
      piVar2 = piVar14;
      if (((((&DAT_0089cad8)[iVar10] == 0) && (iVar10 != 0)) && (*(int *)(iVar17 + 0x1c2) != 0)) &&
         (((iVar1 = iVar10 * 0xa8, (&DAT_00d68600)[iVar1] != '\0' &&
           (cVar7 = FUN_0042dd70(), cVar7 != '\0')) && (cVar7 = FUN_0042ddd0(), cVar7 == '\0')))) {
        bVar18 = true;
        iVar8 = (**(code **)(*(int *)(&DAT_00d6861c + iVar1) + 4))();
        if (iVar8 < 1) {
LAB_004a814b:
          iVar8 = (**(code **)(*(int *)(&DAT_00d6860a + iVar1) + 4))();
          if (0 < iVar8) {
            bVar18 = false;
            piVar14 = *(int **)(&DAT_00d6860e + iVar1);
            do {
              if (piVar14 == (int *)0x0) goto LAB_004a8175;
              iVar8 = *piVar14;
              piVar14 = (int *)piVar14[2];
            } while (iVar8 != 0x157);
            bVar18 = true;
          }
        }
        else {
          piVar14 = *(int **)(&DAT_00d68620 + iVar1);
          do {
            if (piVar14 == (int *)0x0) goto LAB_004a814b;
            iVar8 = *piVar14;
            piVar14 = (int *)piVar14[2];
          } while ((&DAT_0089cad8)[iVar8] == 0);
          bVar18 = false;
        }
LAB_004a8175:
        piVar14 = (int *)(&DAT_00d685be)[iVar10 * 0x2a];
        if (bVar18) {
          do {
            if (piVar14 == (int *)0x0) goto LAB_004a81b3;
            piVar3 = piVar14 + 2;
            iVar8 = *(int *)(DAT_00ab27b4 + 0x3d8 + *piVar14 * 0x4b2);
            piVar14 = (int *)*piVar3;
          } while ((iVar8 == 0) || (*(int *)(iVar8 + 6) == 0x157));
        }
        else {
LAB_004a81b3:
          if ((bVar18) &&
             ((FUN_0042dc20(), param_2 != '\0' ||
              ((cVar7 = FUN_0042ddd0(), cVar7 == '\0' && (iVar8 = _rand(), iVar8 % 100 < 0x22))))))
          {
            piStack_1c = (int *)0x0;
            piStack_18 = (int *)0x0;
            iStack_14 = 0;
            iStack_4 = 0;
            piVar4 = (int *)(&DAT_00d685be)[iVar10 * 0x2a];
            while (piVar14 = piStack_18, piVar2 = piStack_1c, piVar4 != (int *)0x0) {
              piVar3 = (int *)piVar4[2];
              iVar17 = *(int *)(DAT_00ab27b4 + *piVar4 * 0x4b2 + 0x3d8);
              piVar4 = piVar3;
              piStack_1c = piVar2;
              piStack_18 = piVar14;
              if ((iVar17 != 0) && (*(int *)(iVar17 + 6) == 0x157)) {
                pvVar13 = operator_new(0xe);
                iStack_4._0_1_ = 1;
                if (pvVar13 == (void *)0x0) {
                  piStack_18 = (int *)0x0;
                }
                else {
                  piStack_18 = (int *)FUN_0049a7a0();
                }
                iStack_4 = (uint)iStack_4._1_3_ << 8;
                iVar17 = iStack_14 + 1;
                bVar18 = iStack_14 != 0;
                piStack_1c = piStack_18;
                iStack_14 = iVar17;
                if (bVar18) {
                  piVar14[2] = (int)piStack_18;
                  piStack_1c = piVar2;
                }
              }
            }
            piVar4 = *(int **)(&DAT_00d685d0 + iVar1);
            while (piVar15 = piVar14, piVar3 = piVar2, piVar4 != (int *)0x0) {
              piVar2 = (int *)piVar4[2];
              iVar17 = *(int *)(DAT_00ab27b4 + 0x3d8 + *piVar4 * 0x4b2);
              piVar4 = piVar2;
              piVar2 = piVar3;
              piVar14 = piVar15;
              if ((iVar17 != 0) && (*(int *)(iVar17 + 6) == 0x157)) {
                pvVar13 = operator_new(0xe);
                iStack_4._0_1_ = 2;
                if (pvVar13 == (void *)0x0) {
                  piVar14 = (int *)0x0;
                }
                else {
                  piVar14 = (int *)FUN_0049a7a0();
                }
                iStack_4 = (uint)iStack_4._1_3_ << 8;
                iVar17 = iStack_14 + 1;
                bVar18 = iStack_14 != 0;
                piVar2 = piVar14;
                iStack_14 = iVar17;
                if (bVar18) {
                  piVar15[2] = (int)piVar14;
                  piVar2 = piVar3;
                }
              }
            }
            piVar4 = *(int **)(&DAT_00d685e2 + iVar1);
            while (piVar14 = piVar15, piVar2 = piVar3, piVar4 != (int *)0x0) {
              piVar3 = (int *)piVar4[2];
              iVar17 = *piVar4;
              iVar10 = *(int *)(DAT_00ab27b4 + 0x3d8 + iVar17 * 0x4b2);
              piVar4 = piVar3;
              piVar3 = piVar2;
              piVar15 = piVar14;
              if ((iVar10 != 0) && (*(int *)(iVar10 + 6) == 0x157)) {
                iVar17 = *(int *)(DAT_00ab27b4 + iVar17 * 0x4b2 + 0x12);
                piVar15 = operator_new(0xe);
                if (piVar15 == (int *)0x0) {
                  piVar15 = (int *)0x0;
                }
                else {
                  *piVar15 = iVar17;
                  piVar15[1] = (int)piVar14;
                  piVar15[2] = 0;
                  *(undefined1 *)(piVar15 + 3) = 0;
                }
                iVar17 = iStack_14 + 1;
                bVar18 = iStack_14 != 0;
                piVar3 = piVar15;
                iStack_14 = iVar17;
                if (bVar18) {
                  piVar14[2] = (int)piVar15;
                  piVar3 = piVar2;
                }
              }
            }
            pvVar13 = operator_new(0xc);
            iStack_4._0_1_ = 3;
            if (pvVar13 != (void *)0x0) {
              uVar16 = FUN_0045fec0();
              FUN_00446d10(uVar16);
              FUN_0048f270(0xa1);
            }
            iStack_4 = (uint)iStack_4._1_3_ << 8;
            FUN_00565bc0();
            piVar4 = piVar2;
            while (piVar4 != (int *)0x0) {
              piVar14 = (int *)piVar4[2];
              iVar17 = DAT_00ab27b4 + *piVar4 * 0x4b2;
              if (*(int *)(*(int *)(DAT_00ab27b4 + 0x3d8 + *piVar4 * 0x4b2) + 6) == 0x157) {
                puVar11 = operator_new(0xc);
                iStack_4._0_1_ = 4;
                if (puVar11 != (undefined4 *)0x0) {
                  uVar16 = *(undefined4 *)(iVar17 + 0x12);
                  FUN_00498e40();
                  *puVar11 = &PTR_FUN_007e6b4c;
                  *(undefined4 *)(puVar11[1] + 0xe) = uVar16;
                  *(undefined1 *)(puVar11[1] + 0x12) = 0;
                }
                iStack_4 = (uint)iStack_4._1_3_ << 8;
                FUN_00565bc0();
              }
              piVar3 = *(int **)(*(int *)(iVar17 + 0x1c2) + 4);
              while (piVar4 = piVar14, piVar3 != (int *)0x0) {
                piVar4 = (int *)piVar3[2];
                iVar17 = *piVar3;
                piVar3 = piVar4;
                if (*(int *)(*(int *)(iVar17 + 0x248) + 6) == 0x157) {
                  puVar11 = operator_new(0xc);
                  uVar5 = DAT_0088f28c;
                  iStack_4._0_1_ = 5;
                  if (puVar11 != (undefined4 *)0x0) {
                    uStack_2e = (undefined1)DAT_0088f28e;
                    bStack_2d = (byte)((uint)DAT_0088f28e >> 8);
                    uStack_2c = (undefined2)((uint)DAT_0088f28e >> 0x10);
                    FUN_00458490();
                    iVar10 = puVar11[1];
                    *puVar11 = &PTR_FUN_007e5370;
                    *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar17 + 0x18);
                    *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar17 + 0x1c);
                    *(undefined1 *)(puVar11[1] + 0x14) = 0;
                    *(undefined1 *)(puVar11[1] + 0x15) = 1;
                    *(undefined4 *)(puVar11[1] + 0x16) = 0;
                    iVar17 = puVar11[1];
                    *(uint *)(iVar17 + 0x1a) = CONCAT13(bStack_2d,CONCAT12(uStack_2e,uVar5));
                    *(undefined2 *)(iVar17 + 0x1e) = uStack_2c;
                  }
                  iStack_4 = (uint)iStack_4._1_3_ << 8;
                  FUN_00565ca0();
                }
              }
            }
            if (param_2 == '\0') {
              FUN_00460b30();
            }
            while (piVar2 != (int *)0x0) {
              piVar2 = (int *)piVar2[2];
              FUN_00796cd8();
            }
            ExceptionList = local_c;
            return 1;
          }
        }
      }
    }
    uVar9 = (**(code **)(**(int **)(iVar17 + 0x1c2) + 4))();
    ppvVar6 = ExceptionList;
    if (uVar9 == 0) {
      iVar10 = FUN_0042e060();
      uVar9 = (int)*(char *)(iVar10 + 2) + *(short *)(iVar10 + 4) * 0xc;
      ppvVar6 = ExceptionList;
      if ((((DAT_00877684 <= (int)uVar9) && (uVar9 = *(uint *)(iVar17 + 0x3d4), uVar9 != 0)) &&
          (uVar9 != *(uint *)(iVar17 + 0x3d8))) &&
         (*(int *)(*(uint *)(iVar17 + 0x3d8) + 6) == 0x157)) {
        puVar11 = operator_new(0xc);
        iStack_4 = 6;
        if (puVar11 != (undefined4 *)0x0) {
          uVar16 = *(undefined4 *)(iVar17 + 0x12);
          iVar17 = *(int *)(iVar17 + 0x3d4);
          puVar12 = operator_new(0x14);
          if (puVar12 == (undefined2 *)0x0) {
            puVar12 = (undefined2 *)0x0;
          }
          else {
            puVar12[3] = 0;
            *(undefined1 *)(puVar12 + 2) = 0;
            *(undefined1 *)((int)puVar12 + 3) = 0;
            *(undefined1 *)(puVar12 + 1) = 0;
            puVar12[4] = 0;
            *(undefined4 *)(puVar12 + 5) = 0;
          }
          puVar11[1] = puVar12;
          *(undefined1 *)(puVar11 + 2) = 0;
          *(undefined1 *)((int)puVar11 + 9) = 1;
          *puVar11 = &PTR_FUN_007e6b6c;
          *(undefined1 *)((int)puVar11 + 10) = 0;
          *puVar12 = 0x7c;
          iVar10 = puVar11[1];
          *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar17 + 4);
          *(undefined2 *)(iVar10 + 0xc) = *(undefined2 *)(iVar17 + 8);
          iVar17 = puVar11[1];
          *(uint *)(iVar17 + 2) = (uint)bStack_2d << 0x18;
          *(undefined2 *)(iVar17 + 6) = 0;
          *puVar11 = &PTR_FUN_007e6b4c;
          *(undefined4 *)(puVar11[1] + 0xe) = uVar16;
          *(undefined1 *)(puVar11[1] + 0x12) = 0;
        }
        iStack_4 = 0xffffffff;
        uVar9 = FUN_00565bc0();
        ppvVar6 = ExceptionList;
      }
    }
  } while( true );
}


