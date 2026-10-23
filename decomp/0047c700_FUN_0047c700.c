// FUN_0047c700 @ 47c700 size=1890

/* WARNING: Removing unreachable block (ram,0x0047c7b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0047c700(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined2 *puVar20;
  undefined4 *puVar21;
  bool bVar22;
  int unaff_retaddr;
  int iStack00000004;
  undefined2 uStackY_80;
  undefined2 uStackY_7e;
  undefined2 uStackY_7c;
  undefined2 uStackY_7a;
  int *piStackY_78;
  undefined2 uStackY_74;
  undefined2 uStackY_72;
  undefined2 uStack_3e;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd252;
  local_c = ExceptionList;
  uStackY_74 = 0xc732;
  uStackY_72 = 0x47;
  ExceptionList = &local_c;
  iVar7 = FUN_00428ee0();
  if ((iVar7 != 0) && (piVar10 = (int *)(iVar7 + -8), piVar10 != (int *)0x0)) {
    uVar8 = (**(code **)(*piVar10 + 0xc))();
    iStack_4 = 0;
    uStackY_74 = 0xc77c;
    uStackY_72 = 0x47;
    pvVar9 = operator_new(0xe);
    iStack_4._0_1_ = 1;
    if (pvVar9 == (void *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      uStackY_74 = 0;
      uStackY_72 = 0;
      uStackY_7c = 0xc796;
      uStackY_7a = 0x47;
      piStackY_78 = piVar10;
      piVar10 = (int *)FUN_0049a7f0();
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    iVar14 = *(int *)(param_1 + 0x2a0);
    iStack_28 = 1;
    piVar13 = piVar10;
joined_r0x0047c7c5:
    piStack_2c = piVar13;
    piStack_30 = piVar10;
    if (iVar14 != 0) {
      iVar14 = *(int *)(iVar14 + 8);
      uStackY_74 = 0xc7da;
      uStackY_72 = 0x47;
      iVar11 = FUN_00428ee0();
      piVar10 = piStack_30;
      piVar13 = piStack_2c;
      if ((iVar11 != 0) && (piVar16 = (int *)(iVar11 + -8), piVar16 != (int *)0x0)) {
        uStackY_74 = 0xc7fc;
        uStackY_72 = 0x47;
        uVar12 = (**(code **)(*piVar16 + 0xc))();
        uStackY_74 = (undefined2)uVar12;
        uStackY_72 = (undefined2)((uint)uVar12 >> 0x10);
        piStackY_78 = (int *)0x47c802;
        iVar11 = FUN_007a8730();
        piVar18 = piStack_30;
        if (iVar11 == 0) {
          for (; piVar18 != (int *)0x0; piVar18 = (int *)piVar18[2]) {
            uStackY_74 = (undefined2)*piVar18;
            uStackY_72 = (undefined2)((uint)*piVar18 >> 0x10);
            piStackY_78 = (int *)0x47c820;
            cVar6 = (*(code *)PTR_LAB_007e6b04)();
            if (cVar6 != '\0') {
              if (piVar18 != (int *)0x0) goto joined_r0x0047c7c5;
              break;
            }
          }
          uStackY_74 = 0xc83c;
          uStackY_72 = 0x47;
          pvVar9 = operator_new(0xe);
          iStack_4._0_1_ = 2;
          if (pvVar9 == (void *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            uStackY_74 = SUB42(piStack_2c,0);
            uStackY_72 = (undefined2)((uint)piStack_2c >> 0x10);
            uStackY_7c = 0xc856;
            uStackY_7a = 0x47;
            piStackY_78 = piVar16;
            piVar13 = (int *)FUN_0049a7f0();
          }
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          iVar11 = iStack_28 + 1;
          bVar22 = iStack_28 != 0;
          iStack_28 = iVar11;
          piVar10 = piVar13;
          if (bVar22) {
            piStack_2c[2] = (int)piVar13;
            piVar10 = piStack_30;
          }
        }
      }
      goto joined_r0x0047c7c5;
    }
    iStack00000004 = 0;
    do {
      uStackY_74 = 0xc89d;
      uStackY_72 = 0x47;
      iVar14 = FUN_00428ee0();
      if ((iVar14 != 0) && (piVar10 = (int *)(iVar14 + -8), piVar10 != (int *)0x0)) {
        (**(code **)(*piVar10 + 0xc))();
        piStackY_78 = (int *)0x47c8c9;
        uStackY_74 = (short)uVar8;
        uStackY_72 = (short)((uint)uVar8 >> 0x10);
        iVar14 = FUN_007a8730();
        if (iVar14 == 0) {
          iStack_4._0_1_ = 3;
          puStack_1c = (undefined4 *)0x0;
          puVar19 = *(undefined4 **)(param_1 + 0x2a0);
          puStack_18 = puStack_1c;
          puStack_14 = puStack_1c;
          if (*(undefined4 **)(param_1 + 0x2a0) == (undefined4 *)0x0) {
LAB_0047ca26:
            uStackY_74 = 0xca30;
            uStackY_72 = 0x47;
            pvVar9 = operator_new(0xc0);
            uStack_3e = (undefined2)((uint)pvVar9 >> 0x10);
            iStack_4._0_1_ = 5;
            if (pvVar9 == (void *)0x0) {
              piVar13 = (int *)0x0;
            }
            else {
              piVar13 = (int *)FUN_00761c60();
            }
            iStack_4._0_1_ = 3;
            uStackY_74 = 0xca5e;
            uStackY_72 = 0x47;
            FUN_00428eb0();
            uStackY_74 = 0xca6f;
            uStackY_72 = 0x47;
            (**(code **)(piVar13[2] + 4))();
            piVar13[0x1f] = *(int *)(param_1 + 6);
            piStackY_78 = *(int **)(param_1 + 6);
            uStackY_74 = uStack_3e;
            uStackY_7c = 0xca89;
            uStackY_7a = 0x47;
            uVar12 = FUN_005b5cc0();
            uStackY_74 = (undefined2)uVar12;
            uStackY_72 = (undefined2)((uint)uVar12 >> 0x10);
            piStackY_78 = (int *)0x47ca91;
            FUN_00425ba0();
            uStackY_74 = 3;
            uStackY_72 = 0;
            piVar13[0x20] = unaff_retaddr;
            piStackY_78 = (int *)0x47caa4;
            FUN_00763e20();
            uStackY_74 = 0;
            uStackY_72 = 0;
            piStackY_78 = (int *)0x47cab0;
            FUN_0049a100();
            *(int *)((int)piVar13 + 0x1a) = (int)*(short *)(DAT_00893530 + 0x18);
            *(int *)((int)piVar13 + 0x22) = *(short *)(DAT_00893530 + 0x18) + 1;
            uStackY_74 = 0xcad1;
            uStackY_72 = 0x47;
            FUN_0044d810();
            uStackY_74 = 0xcad9;
            uStackY_72 = 0x47;
            FUN_00763e10();
            uStackY_74 = 0xcae5;
            uStackY_72 = 0x47;
            FUN_00761ee0();
            uStackY_74 = 0xcaec;
            uStackY_72 = 0x47;
            piVar18 = operator_new(10);
            piVar16 = (int *)0x0;
            if (piVar18 != (int *)0x0) {
              *(undefined2 *)piVar18 = 0;
              *(undefined4 *)((int)piVar18 + 2) = 0;
              piVar16 = piVar18;
            }
            *piVar16 = piVar13[3];
            *(short *)(piVar16 + 1) = (short)piVar13[4];
            *(int *)((int)piVar16 + 6) = iStack00000004;
            uStackY_74 = 0xcb1e;
            uStackY_72 = 0x47;
            puVar19 = operator_new(0xe);
            if (puVar19 == (undefined4 *)0x0) {
              puVar19 = (undefined4 *)0x0;
            }
            else {
              *puVar19 = piVar16;
              puVar19[1] = puStack_18;
              puVar19[2] = 0;
              *(undefined1 *)(puVar19 + 3) = 0;
            }
            if (puStack_14 != (undefined4 *)0x0) {
              puStack_18[2] = puVar19;
              puVar19 = puStack_1c;
            }
            puStack_1c = puVar19;
            iVar14 = *(int *)(param_1 + 0x2a4);
            uStackY_74 = 0xcb62;
            uStackY_72 = 0x47;
            pvVar9 = operator_new(0xe);
            iStack_4._0_1_ = 6;
            if (pvVar9 == (void *)0x0) {
              uVar12 = 0;
            }
            else {
              uStackY_74 = (undefined2)iVar14;
              uStackY_72 = (undefined2)((uint)iVar14 >> 0x10);
              uStackY_7c = 0xcb7d;
              uStackY_7a = 0x47;
              piStackY_78 = piVar16;
              uVar12 = FUN_0049a810();
            }
            iVar11 = *(int *)(param_1 + 0x2a8);
            iStack_4._0_1_ = 3;
            *(undefined4 *)(param_1 + 0x2a4) = uVar12;
            *(int *)(param_1 + 0x2a8) = iVar11 + 1;
            if (iVar11 == 0) {
              *(undefined4 *)(param_1 + 0x2a0) = uVar12;
            }
            else {
              *(undefined4 *)(iVar14 + 8) = uVar12;
            }
            iVar11 = DAT_00d77b42;
            uStackY_74 = 0xcbb7;
            uStackY_72 = 0x47;
            pvVar9 = operator_new(0xe);
            iStack_4._0_1_ = 7;
            if (pvVar9 == (void *)0x0) {
              DAT_00d77b42 = 0;
            }
            else {
              uStackY_74 = (undefined2)iVar11;
              uStackY_72 = (undefined2)((uint)iVar11 >> 0x10);
              uStackY_7c = 0xcbd2;
              uStackY_7a = 0x47;
              piStackY_78 = piVar13;
              DAT_00d77b42 = FUN_0049a7f0();
            }
            iStack_4._0_1_ = 3;
            iVar15 = DAT_00d77b46 + 1;
            bVar22 = DAT_00d77b46 != 0;
            iVar14 = DAT_00d77b42;
            DAT_00d77b46 = iVar15;
            if (bVar22) {
              *(int *)(iVar11 + 8) = DAT_00d77b42;
              iVar14 = _DAT_00d77b3e;
            }
          }
          else {
            do {
              puVar1 = (undefined4 *)puVar19[2];
              piVar13 = (int *)*puVar19;
              uStackY_74 = 0xc918;
              uStackY_72 = 0x47;
              iVar14 = FUN_00428ee0();
              puVar19 = puStack_1c;
              puVar17 = puStack_18;
              if ((((((iVar14 != 0) && (iVar14 != 8)) && ((int *)(iVar14 + -8) != piVar10)) &&
                   (*(char *)(iVar14 + 0xb6) == '\0')) &&
                  ((*(int *)(iVar14 + 0x78) == iStack00000004 ||
                   ((*(int *)(iVar7 + 0xb2) != 0 && (*(int *)(*(int *)(iVar7 + 0xb2) + 4) == 10)))))
                  ) && (*(int *)(iVar14 + 0x12) <= (int)*(short *)(DAT_00893530 + 0x18))) {
                bVar22 = true;
                iVar11 = 10;
                do {
                  uStackY_74 = 0xc99c;
                  uStackY_72 = 0x47;
                  iVar15 = FUN_00428ee0();
                  if (iVar15 == 0) {
                    piVar16 = (int *)0x0;
                  }
                  else {
                    piVar16 = (int *)(iVar15 + -8);
                  }
                  if (piVar16 == (int *)(iVar14 + -8)) {
                    bVar22 = false;
                  }
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                if (bVar22) {
                  uStackY_74 = 0xc9c5;
                  uStackY_72 = 0x47;
                  pvVar9 = operator_new(0xe);
                  iStack_4._0_1_ = 4;
                  if (pvVar9 == (void *)0x0) {
                    puVar17 = (undefined4 *)0x0;
                  }
                  else {
                    uStackY_74 = SUB42(puStack_18,0);
                    uStackY_72 = (undefined2)((uint)puStack_18 >> 0x10);
                    uStackY_7c = 0xc9e4;
                    uStackY_7a = 0x47;
                    piStackY_78 = piVar13;
                    puVar17 = (undefined4 *)FUN_0049a810();
                  }
                  iStack_4._0_1_ = 3;
                  puVar21 = (undefined4 *)((int)puStack_14 + 1);
                  bVar22 = puStack_14 != (undefined4 *)0x0;
                  puVar19 = puVar17;
                  puStack_14 = puVar21;
                  if (bVar22) {
                    puStack_18[2] = puVar17;
                    puVar19 = puStack_1c;
                  }
                }
              }
              puStack_18 = puVar17;
              puStack_1c = puVar19;
              puVar19 = puVar1;
            } while (puVar1 != (undefined4 *)0x0);
            iVar14 = _DAT_00d77b3e;
            if ((int)puStack_14 < 1) goto LAB_0047ca26;
          }
          _DAT_00d77b3e = iVar14;
          uVar4 = uStackY_7a;
          uVar2 = uStackY_7c;
          uStackY_7c = (undefined2)iStack00000004;
          uVar3 = uStackY_7c;
          uStackY_7a = (undefined2)((uint)iStack00000004 >> 0x10);
          uVar5 = uStackY_7a;
          uStackY_7c = uVar2;
          uStackY_7a = uVar4;
          piVar13 = piStack_30;
          if (_DAT_00d7cc08 == _DAT_007e3374) {
            uStackY_74 = 0xcc20;
            uStackY_72 = 0x47;
            iVar14 = FUN_00428ee0();
            if (iVar14 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = iVar14 + -8;
            }
            iVar11 = 0;
            puVar19 = puStack_1c;
            if ((iVar14 != 0) && (*(int *)(iVar14 + 0xba) != 0)) {
              iVar11 = *(int *)(*(int *)(iVar14 + 0xba) + 0x2e);
            }
            while (puVar19 != (undefined4 *)0x0) {
              puVar19 = (undefined4 *)puVar19[2];
              uStackY_74 = 0xcc56;
              uStackY_72 = 0x47;
              iVar14 = FUN_00428ee0();
              if ((((iVar14 != 0) && (iVar14 != 8)) && (*(int *)(iVar14 + 0xb2) != 0)) &&
                 (iVar14 = *(int *)(*(int *)(iVar14 + 0xb2) + 0x2e), iVar11 < iVar14)) {
                iVar11 = iVar14;
              }
            }
            uStackY_74 = 0xcc88;
            uStackY_72 = 0x47;
            uVar12 = FUN_00447250();
            uStackY_7c = (undefined2)uVar12;
            uStackY_7a = (undefined2)((uint)uVar12 >> 0x10);
            uStackY_80 = 0xcc97;
            uStackY_7e = 0x47;
            FUN_00449290();
            uStackY_80 = 0xcca3;
            uStackY_7e = 0x47;
            uStackY_7c = uVar3;
            uStackY_7a = uVar5;
            FUN_0045c660();
          }
          else {
            uStackY_74 = 0xccb0;
            uStackY_72 = 0x47;
            uVar12 = FUN_00499760();
            uStackY_7c = (undefined2)uVar12;
            uStackY_7a = (undefined2)((uint)uVar12 >> 0x10);
            uStackY_80 = 0xccbf;
            uStackY_7e = 0x47;
            FUN_00449290();
            uStackY_80 = 0xcccb;
            uStackY_7e = 0x47;
            uStackY_7c = uVar3;
            uStackY_7a = uVar5;
            FUN_0045c660();
          }
          for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
            uStackY_74 = (undefined2)*piVar13;
            uStackY_72 = (undefined2)((uint)*piVar13 >> 0x10);
            piStackY_78 = (int *)0x47cce8;
            cVar6 = (*(code *)PTR_LAB_007e6b04)();
            if (cVar6 != '\0') {
              piVar16 = piStack_30;
              piVar18 = piStack_2c;
              if (piVar13 != (int *)0x0) goto LAB_0047cd37;
              break;
            }
          }
          uStackY_74 = 0xcd04;
          uStackY_72 = 0x47;
          piVar18 = operator_new(0xe);
          if (piVar18 == (int *)0x0) {
            piVar18 = (int *)0x0;
          }
          else {
            *piVar18 = (int)piVar10;
            piVar18[1] = (int)piStack_2c;
            piVar18[2] = 0;
            *(undefined1 *)(piVar18 + 3) = 0;
          }
          iVar14 = iStack_28 + 1;
          bVar22 = iStack_28 != 0;
          piVar16 = piVar18;
          iStack_28 = iVar14;
          if (bVar22) {
            piStack_2c[2] = (int)piVar18;
            piVar16 = piStack_30;
          }
LAB_0047cd37:
          piStack_2c = piVar18;
          piStack_30 = piVar16;
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          while (puStack_1c != (undefined4 *)0x0) {
            puStack_1c = (undefined4 *)puStack_1c[2];
            uStackY_74 = 0xcd55;
            uStackY_72 = 0x47;
            FUN_00796cd8();
          }
        }
      }
      iStack00000004 = iStack00000004 + 1;
      piVar10 = piStack_30;
    } while (iStack00000004 < 10);
    while (piVar10 != (int *)0x0) {
      piVar13 = (int *)piVar10[2];
      piStackY_78 = (int *)&stack0xffffff90;
      iVar7 = *piVar10;
      uStackY_74 = (undefined2)iVar7;
      uStackY_72 = (undefined2)((uint)iVar7 >> 0x10);
      uStackY_7c = 0xcdaf;
      uStackY_7a = 0x47;
      (*(code *)PTR_LAB_007e6b20)();
      uStackY_7c = 0xcdb6;
      uStackY_7a = 0x47;
      (*(code *)PTR_LAB_007e6b14)();
      uStackY_7c = 0xcdc0;
      uStackY_7a = 0x47;
      puVar20 = (undefined2 *)FUN_00447250();
      uStackY_80 = *puVar20;
      puStack_8 = (undefined1 *)&uStackY_80;
      uStackY_7e = (undefined2)*(undefined4 *)(puVar20 + 1);
      uStackY_7c = (undefined2)((uint)*(undefined4 *)(puVar20 + 1) >> 0x10);
      piVar10 = (int *)FUN_00465ae0();
      cVar6 = (**(code **)(*piVar10 + 0x24))();
      if (cVar6 == '\0') {
        puVar20 = (undefined2 *)FUN_00447250();
        uStackY_74 = *puVar20;
        uStackY_72 = (undefined2)*(undefined4 *)(puVar20 + 1);
        piStackY_78 = (int *)0x47ce10;
        FUN_00465ae0();
        piStackY_78 = (int *)0x47ce17;
        FUN_004739f0();
      }
      *(undefined1 *)(iVar7 + 0xbe) = 1;
      piVar10 = piVar13;
    }
    while (piStack_30 != (int *)0x0) {
      piStack_30 = (int *)piStack_30[2];
      uStackY_74 = 0xce3f;
      uStackY_72 = 0x47;
      FUN_00796cd8();
    }
  }
  ExceptionList = local_c;
  return 3;
}


