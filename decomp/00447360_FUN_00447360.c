// FUN_00447360 @ 447360 size=7981

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00447360(int *param_1,int param_2,char param_3,char param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined2 uVar7;
  char cVar8;
  void *pvVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined2 *puVar19;
  int *unaff_EBX;
  undefined4 uStack_8c;
  undefined2 uVar20;
  char cStack_71;
  int *piStack_64;
  int *piStack_50;
  int *local_48;
  undefined1 auStack_44 [4];
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined4 *puStack_28;
  undefined1 *puStack_24;
  undefined2 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 *puStack_14;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bbac0;
  local_c = ExceptionList;
  if ((param_2 != 0x157) && (DAT_008a013c == '\0')) {
    ExceptionList = &local_c;
    FUN_00577d20();
    local_48 = &DAT_0089cad8 + param_2;
    piVar1 = (int *)*local_48;
    uStack_8c._0_2_ = 0x73cd;
    uStack_8c._2_2_ = 0x44;
    (**(code **)(*(int *)(DAT_00d685a6 + 0x564) + 0x18))();
    if ((DAT_00dc1925 != '\0') && ((&DAT_00dc0fd4)[param_2] == 1)) {
      iVar12 = *(int *)((int)DAT_00d0ca90 + 0x221a6);
      while (iVar12 != 0) {
        iVar12 = *(int *)(iVar12 + 8);
        uStack_8c._0_2_ = 0x7408;
        uStack_8c._2_2_ = 0x44;
        (**(code **)(*(int *)((int)DAT_00d0ca90 + 0x221a2) + 0x18))();
      }
    }
    if (piVar1 != (int *)0x0) {
      if (*(int *)(*DAT_00d12b40 + 0x406) != 0) {
        piVar18 = *(int **)((int)piVar1 + 0x3666);
        while (piVar18 != (int *)0x0) {
          piVar17 = (int *)piVar18[2];
          iVar12 = *piVar18;
          if (*(int *)(iVar12 + 0xd8) != 0) {
            uStack_8c._0_2_ = 0x7460;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(piVar1[0xd94] + 0x18))();
            if (*(undefined4 **)(iVar12 + 0xd8) != (undefined4 *)0x0) {
              uStack_8c._0_2_ = 0x7470;
              uStack_8c._2_2_ = 0x44;
              (**(code **)**(undefined4 **)(iVar12 + 0xd8))();
            }
            *(undefined4 *)(iVar12 + 0xd8) = 0;
          }
          *(undefined4 *)(iVar12 + 200) = *(undefined4 *)((int)param_1 + 6);
          if (*(int *)(iVar12 + 0xcc) < 1) {
            *(int *)(iVar12 + 0xcc) = param_2;
          }
          iVar12 = *(int *)((int)param_1 + 0x366a);
          uStack_8c._0_2_ = 0x74a7;
          uStack_8c._2_2_ = 0x44;
          pvVar9 = operator_new(0xe);
          uStack_4 = 0;
          if (pvVar9 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uStack_8c._0_2_ = (undefined2)iVar12;
            uStack_8c._2_2_ = (undefined2)((uint)iVar12 >> 0x10);
            uVar10 = FUN_0045bad0();
          }
          iVar11 = *(int *)((int)param_1 + 0x366e);
          uStack_4 = 0xffffffff;
          *(undefined4 *)((int)param_1 + 0x366a) = uVar10;
          *(int *)((int)param_1 + 0x366e) = iVar11 + 1;
          if (iVar11 == 0) {
            *(undefined4 *)((int)param_1 + 0x3666) = uVar10;
          }
          else {
            *(undefined4 *)(iVar12 + 8) = uVar10;
          }
          uStack_8c._0_2_ = 0x750f;
          uStack_8c._2_2_ = 0x44;
          (**(code **)(*(int *)((int)piVar1 + 0x3662) + 0x18))();
          piVar18 = piVar17;
        }
      }
      uStack_8c._0_2_ = 0x752c;
      uStack_8c._2_2_ = 0x44;
      cStack_71 = FUN_0049ed40();
      if (param_4 != '\0') {
        param_4 = '\0';
        cStack_71 = '\x01';
      }
      DAT_008a013c = '\x01';
      piStack_64 = (int *)0x0;
      do {
        piVar18 = (int *)(&DAT_0089cad8)[(int)piStack_64];
        if (piVar18 != (int *)0x0) {
          *(undefined1 *)(*(int *)((int)piVar18 + 0x12da) + 0x2f + param_2 * 0x2c) = 0;
          if (*(int *)(*(int *)((int)piVar18 + 0x12da) + 0x3b30) == *(int *)((int)piVar1 + 6)) {
            *(undefined4 *)(*(int *)((int)piVar18 + 0x12da) + 0x3b30) = 0;
          }
          piVar17 = (int *)piVar18[0x1147];
joined_r0x004475b1:
          while (piVar17 != (int *)0x0) {
            piVar13 = (int *)piVar17[2];
            puVar14 = (undefined4 *)*piVar17;
            iVar12 = puVar14[0x16];
            piVar17 = piVar13;
            if (iVar12 != param_2) goto LAB_0044773f;
            if (piVar18 == piVar1) goto LAB_00447747;
            uStack_8c._0_2_ = 0x75ee;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(piVar18[0x1146] + 0x18))();
            fVar2 = (float)puVar14[0x3b];
            fVar3 = (float)puVar14[0x3d];
            puVar14[0x17] = piVar1;
            if (*(char *)((int)puVar14 + 0x162) == '\0') {
              uStack_8c._0_2_ = (undefined2)puVar14[0x4c];
              uStack_8c._2_2_ = (undefined2)((uint)puVar14[0x4c] >> 0x10);
              uVar10 = FUN_00789c90();
              uStack_8c._0_2_ = 0;
              uStack_8c._2_2_ = 0;
              FUN_004fbc90(uVar10,0x8c);
            }
            if ((float)puVar14[0x3c] < fVar2) {
              fVar2 = (float)puVar14[0x3c];
            }
            puVar14[0x3b] = fVar2;
            if (fVar3 < _DAT_007e3380) {
              fVar3 = _DAT_007e3380;
            }
            puVar14[0x3d] = fVar3;
            uStack_8c._0_2_ = DAT_0088f28c;
            uStack_8c._2_2_ = (undefined2)DAT_0088f28e;
            FUN_00458210();
            puVar14[0x53] = 0;
            uStack_8c._0_2_ = 0x76bc;
            uStack_8c._2_2_ = 0x44;
            FUN_005033b0();
            FUN_00446d10();
            FUN_00458230();
            iVar12 = piVar1[0x1148];
            uStack_8c._0_2_ = 0x76e3;
            uStack_8c._2_2_ = 0x44;
            pvVar9 = operator_new(0xe);
            uStack_4 = 1;
            if (pvVar9 == (void *)0x0) {
              iVar11 = 0;
            }
            else {
              uStack_8c._0_2_ = (undefined2)iVar12;
              uStack_8c._2_2_ = (undefined2)((uint)iVar12 >> 0x10);
              iVar11 = FUN_0045baf0();
            }
            iVar16 = piVar1[0x1149];
            uStack_4 = 0xffffffff;
            piVar1[0x1148] = iVar11;
            piVar1[0x1149] = iVar16 + 1;
            if (iVar16 == 0) {
              piVar1[0x1147] = iVar11;
              uStack_8c = (undefined4 **)CONCAT22(uStack_8c._2_2_,(undefined2)uStack_8c);
            }
            else {
              *(int *)(iVar12 + 8) = iVar11;
              uStack_8c = (undefined4 **)CONCAT22(uStack_8c._2_2_,(undefined2)uStack_8c);
            }
          }
          piVar17 = (int *)piVar18[0x1142];
joined_r0x004478f1:
          if (piVar17 != (int *)0x0) {
            piVar13 = (int *)piVar17[2];
            piVar15 = (int *)*piVar17;
            iVar12 = FUN_00522770();
            piVar17 = piVar13;
            if (iVar12 == 0) goto LAB_00447b0f;
            piVar13 = (int *)FUN_00522770();
            if (piVar13 != piVar1) goto LAB_00447b0f;
            if (piVar1 == piVar18) goto LAB_00447b17;
            uStack_8c._0_2_ = 0x7932;
            uStack_8c._2_2_ = 0x44;
            FUN_005b0490();
            if (*(int *)((int)piVar15 + 0x14a) != 0) {
              iVar11 = FUN_0051c480();
              iVar12 = (&DAT_0089cad8)[*(int *)(iVar11 + 0x1a)];
              uStack_8c._0_2_ = 0x7967;
              uStack_8c._2_2_ = 0x44;
              (**(code **)(piVar1[0x45fd] + 0x18))();
              uStack_8c._0_2_ = (short)iVar11;
              uStack_8c._2_2_ = (short)((uint)iVar11 >> 0x10);
              (**(code **)(param_1[0x45fd] + 0x18))();
              if (*(int *)(iVar11 + 0x62) != 0) {
                uStack_8c._0_2_ = 0x798f;
                uStack_8c._2_2_ = 0x44;
                (**(code **)(*(int *)(*(int *)(iVar11 + 0x62) + 0x117f4) + 0x18))();
              }
              if (iVar12 == 0) {
                uStack_8c._0_2_ = 0x7a24;
                uStack_8c._2_2_ = 0x44;
                FUN_0076e3b0();
                uStack_8c._0_2_ = 0x7a2d;
                uStack_8c._2_2_ = 0x44;
                FUN_0050a420();
                if (((*(float *)(iVar11 + 0x36) <=
                      (float)(int)(&DAT_0084a0ec)[*(int *)(iVar11 + 0x32)]) &&
                    (((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar11 + 0x52) ||
                     (*(int *)(iVar11 + 0x42 + *(int *)(iVar11 + 0x22) * 4) <=
                      (int)*(short *)(DAT_00893530 + 0x18))))) &&
                   ((*(uint *)(iVar11 + 0x1e) & 0xfffc0000) == 0)) {
                  *(undefined1 *)(iVar11 + 0x2d) = 1;
                }
              }
              else {
                uStack_8c = (undefined4 **)auStack_44;
                piVar13 = (int *)(**(code **)(*(int *)(iVar12 + 0x117f4) + 0x28))();
                if (*piVar13 == 0) {
                  iVar16 = *(int *)(iVar12 + 0x117fc);
                  uStack_8c._0_2_ = 0x79bd;
                  uStack_8c._2_2_ = 0x44;
                  pvVar9 = operator_new(0xe);
                  uStack_40 = SUB42(pvVar9,0);
                  uStack_3e = (undefined2)((uint)pvVar9 >> 0x10);
                  uStack_4 = 3;
                  if (pvVar9 == (void *)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    uStack_8c._0_2_ = (undefined2)iVar16;
                    uStack_8c._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
                    uVar10 = FUN_0045ba90();
                  }
                  iVar4 = *(int *)(iVar12 + 0x11800);
                  uStack_4 = 0xffffffff;
                  *(undefined4 *)(iVar12 + 0x117fc) = uVar10;
                  *(int *)(iVar12 + 0x11800) = iVar4 + 1;
                  if (iVar4 == 0) {
                    *(undefined4 *)(iVar12 + 0x117f8) = uVar10;
                  }
                  else {
                    *(undefined4 *)(iVar16 + 8) = uVar10;
                  }
                }
                uStack_8c._0_2_ = 0x7a11;
                uStack_8c._2_2_ = 0x44;
                FUN_0050a420();
                *(undefined4 *)(iVar11 + 0x16) = *(undefined4 *)(iVar11 + 0x1a);
              }
              uStack_8c._0_2_ = 0x7a74;
              uStack_8c._2_2_ = 0x44;
              FUN_0050a020();
              uStack_8c._0_2_ = 0x7a7d;
              uStack_8c._2_2_ = 0x44;
              FUN_0051c4a0();
            }
            uStack_8c._0_2_ = 0x7a88;
            uStack_8c._2_2_ = 0x44;
            puVar14 = operator_new(0xc);
            uStack_40 = SUB42(puVar14,0);
            uStack_3e = (undefined2)((uint)puVar14 >> 0x10);
            uStack_4 = 4;
            if (puVar14 != (undefined4 *)0x0) {
              uStack_8c._0_2_ = 0x7ab2;
              uStack_8c._2_2_ = 0x44;
              FUN_00446d10();
              uStack_8c._0_2_ = 0xa8;
              uStack_8c._2_2_ = 0;
              FUN_00458490();
              iVar12 = puVar14[1];
              *puVar14 = &PTR_FUN_007e5370;
              *(int *)(iVar12 + 0xe) = piVar15[6];
              *(short *)(iVar12 + 0x12) = (short)piVar15[7];
              *(undefined1 *)(puVar14[1] + 0x14) = 1;
              *(undefined1 *)(puVar14[1] + 0x15) = 1;
              *(undefined4 *)(puVar14[1] + 0x16) = 0;
              iVar12 = puVar14[1];
              *(undefined4 *)(iVar12 + 0x1a) = uStack_1c;
              *(undefined2 *)(iVar12 + 0x1e) = uStack_18;
            }
            goto LAB_00447d05;
          }
          piVar17 = piVar1;
          piVar13 = (int *)piVar18[0x45fe];
joined_r0x00447fb9:
          while (piVar13 != (int *)0x0) {
            piVar15 = (int *)piVar13[2];
            iVar12 = *piVar13;
            iVar11 = *(int *)(iVar12 + 0x1a);
            piVar13 = piVar15;
            if (iVar11 != param_2) goto LAB_0044808f;
            if (piVar17 == piVar18) goto LAB_00448097;
            uStack_8c = &puStack_28;
            piVar15 = (int *)(**(code **)(piVar17[0x45fd] + 0x28))();
            if (*piVar15 == 0) {
              iVar11 = piVar17[0x45ff];
              local_48 = operator_new(0xe);
              local_c = (void *)0x8;
              if (local_48 == (int *)0x0) {
                iVar16 = 0;
              }
              else {
                iVar16 = FUN_0045ba90(iVar12,iVar11);
              }
              iVar4 = piVar17[0x4600];
              local_c = (void *)0xffffffff;
              piVar17[0x45ff] = iVar16;
              piVar17[0x4600] = iVar4 + 1;
              if (iVar4 == 0) {
                piVar17[0x45fe] = iVar16;
              }
              else {
                *(int *)(iVar11 + 8) = iVar16;
              }
              *(undefined4 *)(iVar12 + 0x16) = uStack_4;
              FUN_0050a420();
              piVar17 = unaff_EBX;
            }
            (**(code **)(piVar1[0x45fd] + 0x18))();
          }
        }
        piStack_64 = (int *)((int)piStack_64 + 1);
      } while ((int)piStack_64 < 0x158);
      piVar18 = (int *)piVar1[0x1142];
      while (piVar18 != (int *)0x0) {
        piVar17 = (int *)piVar18[2];
        piVar18 = (int *)*piVar18;
        if (*(int *)((int)piVar18 + 0x14a) != 0) {
          iVar11 = FUN_0051c480();
          iVar12 = (&DAT_0089cad8)[*(int *)(iVar11 + 0x1a)];
          if (iVar12 == 0) {
            uStack_8c._0_2_ = 0x82a0;
            uStack_8c._2_2_ = 0x44;
            FUN_0076e3b0();
            uStack_8c._0_2_ = 0x82a9;
            uStack_8c._2_2_ = 0x44;
            FUN_0050a420();
            if (((*(float *)(iVar11 + 0x36) <= (float)(int)(&DAT_0084a0ec)[*(int *)(iVar11 + 0x32)])
                && (((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar11 + 0x52) ||
                    (*(int *)(iVar11 + 0x42 + *(int *)(iVar11 + 0x22) * 4) <=
                     (int)*(short *)(DAT_00893530 + 0x18))))) &&
               ((*(uint *)(iVar11 + 0x1e) & 0xfffc0000) == 0)) {
              *(undefined1 *)(iVar11 + 0x2d) = 1;
            }
          }
          else {
            uStack_8c = (undefined4 **)&puStack_24;
            piVar13 = (int *)(**(code **)(*(int *)(iVar12 + 0x117f4) + 0x28))();
            if (*piVar13 == 0) {
              iVar16 = *(int *)(iVar12 + 0x117fc);
              uStack_8c._0_2_ = 0x8239;
              uStack_8c._2_2_ = 0x44;
              puStack_28 = operator_new(0xe);
              uStack_4 = 10;
              if (puStack_28 == (undefined4 *)0x0) {
                uVar10 = 0;
              }
              else {
                uStack_8c._0_2_ = (undefined2)iVar16;
                uStack_8c._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
                uVar10 = FUN_0045ba90();
              }
              iVar4 = *(int *)(iVar12 + 0x11800);
              uStack_4 = 0xffffffff;
              *(undefined4 *)(iVar12 + 0x117fc) = uVar10;
              *(int *)(iVar12 + 0x11800) = iVar4 + 1;
              if (iVar4 == 0) {
                *(undefined4 *)(iVar12 + 0x117f8) = uVar10;
              }
              else {
                *(undefined4 *)(iVar16 + 8) = uVar10;
              }
              uStack_8c._0_2_ = 0x828d;
              uStack_8c._2_2_ = 0x44;
              FUN_0050a420();
              *(undefined4 *)(iVar11 + 0x16) = *(undefined4 *)(iVar11 + 0x1a);
            }
          }
          puVar14 = *(undefined4 **)(*(int *)(iVar11 + 0x5e) + 0x120);
          while (puVar14 != (undefined4 *)0x0) {
            puVar5 = (undefined4 *)puVar14[2];
            uStack_8c._0_2_ = 0x8302;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(*(int *)*puVar14 + 0x38))();
            puVar14 = puVar5;
          }
          uStack_8c._0_2_ = 0x830f;
          uStack_8c._2_2_ = 0x44;
          FUN_0050a020();
          uStack_8c._0_2_ = 0x8318;
          uStack_8c._2_2_ = 0x44;
          FUN_0051c4a0();
        }
        if (cStack_71 == '\0') {
          cVar8 = (**(code **)(*piVar18 + 0x2c))();
          if ((cVar8 != '\0') && (piVar1[0xcd4] != 0)) {
            iVar12 = (**(code **)(**(int **)(piVar1[0xcd4] + 0x22) + 4))();
            if ((1 < iVar12) &&
               (piVar13 = *(int **)(*(int *)(piVar1[0xcd4] + 0x22) + 4), piVar13 != (int *)0x0)) {
              do {
                piVar15 = piVar13 + 2;
                if (*piVar13 != *(int *)((int)piVar1 + 6)) {
                  if (*piVar13 != 0) {
                    uStack_8c._0_2_ = 0x8521;
                    uStack_8c._2_2_ = 0x44;
                    puVar14 = operator_new(0xc);
                    uStack_4 = 0xc;
                    puStack_28 = puVar14;
                    if (puVar14 != (undefined4 *)0x0) {
                      uStack_36 = (undefined2)DAT_0088f28e;
                      uStack_34 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                      uStack_8c._0_2_ = 0xa8;
                      uStack_8c._2_2_ = 0;
                      uStack_38 = DAT_0088f28c;
                      FUN_00458490();
                      iVar12 = puVar14[1];
                      *puVar14 = &PTR_FUN_007e5370;
                      *(int *)(iVar12 + 0xe) = piVar18[6];
                      *(short *)(iVar12 + 0x12) = (short)piVar18[7];
                      *(undefined1 *)(puVar14[1] + 0x14) = 0;
                      *(undefined1 *)(puVar14[1] + 0x15) = 1;
                      *(undefined4 *)(puVar14[1] + 0x16) = 0;
                      iVar12 = puVar14[1];
                      *(uint *)(iVar12 + 0x1a) = CONCAT22(uStack_36,uStack_38);
                      *(undefined2 *)(iVar12 + 0x1e) = uStack_34;
                    }
                    goto LAB_004485b1;
                  }
                  break;
                }
                piVar13 = (int *)*piVar15;
              } while ((int *)*piVar15 != (int *)0x0);
            }
          }
          uVar20 = (undefined2)((uint)piVar18 >> 0x10);
          uStack_8c._0_2_ = 0x8434;
          uStack_8c._2_2_ = 0x44;
          FUN_0051b230();
          uStack_8c._0_2_ = 0x843b;
          uStack_8c._2_2_ = 0x44;
          FUN_004e43f0();
          puVar14 = (undefined4 *)piVar18[0x48];
          while (uStack_8c._0_2_ = (short)piVar18, uStack_8c._2_2_ = uVar20,
                puVar14 != (undefined4 *)0x0) {
            puVar5 = (undefined4 *)puVar14[2];
            (**(code **)(*(int *)*puVar14 + 0x2c))();
            puVar14 = puVar5;
          }
          if (*(int **)((int)piVar18 + 0x176) != (int *)0x0) {
            (**(code **)(**(int **)((int)piVar18 + 0x176) + 0x2c))();
          }
          uStack_8c._0_2_ = 0x8472;
          uStack_8c._2_2_ = 0x44;
          FUN_0051b230();
          uStack_8c._0_2_ = 0x8479;
          uStack_8c._2_2_ = 0x44;
          FUN_004e43f0();
          uStack_8c._0_2_ = 0x8480;
          uStack_8c._2_2_ = 0x44;
          puVar14 = operator_new(0xc);
          uStack_4 = 0xd;
          puStack_28 = puVar14;
          if (puVar14 != (undefined4 *)0x0) {
            uStack_40 = DAT_0088f28c;
            uStack_8c._0_2_ = 0x35;
            uStack_8c._2_2_ = 0;
            uStack_3e = (undefined2)DAT_0088f28e;
            uStack_3c = (undefined2)((uint)DAT_0088f28e >> 0x10);
            FUN_00458490();
            iVar12 = puVar14[1];
            *puVar14 = &PTR_FUN_007e5370;
            *(int *)(iVar12 + 0xe) = piVar18[6];
            *(short *)(iVar12 + 0x12) = (short)piVar18[7];
            *(undefined1 *)(puVar14[1] + 0x14) = 1;
            *(undefined1 *)(puVar14[1] + 0x15) = 0;
            *(undefined4 *)(puVar14[1] + 0x16) = 0;
            iVar12 = puVar14[1];
            *(uint *)(iVar12 + 0x1a) = CONCAT22(uStack_3e,uStack_40);
            *(undefined2 *)(iVar12 + 0x1e) = uStack_3c;
          }
LAB_004485b1:
          uStack_4 = 0xffffffff;
          uStack_8c._0_2_ = 0x85c2;
          uStack_8c._2_2_ = 0x44;
          FUN_00565c30();
        }
        else {
          uStack_8c._0_2_ = 0x8333;
          uStack_8c._2_2_ = 0x44;
          puVar14 = operator_new(0xc);
          uStack_4 = 0xb;
          puStack_28 = puVar14;
          if (puVar14 != (undefined4 *)0x0) {
            uStack_30 = DAT_0088f28c;
            uStack_8c._0_2_ = 0xa8;
            uStack_8c._2_2_ = 0;
            uStack_2e = (undefined2)DAT_0088f28e;
            uStack_2c = (undefined2)((uint)DAT_0088f28e >> 0x10);
            FUN_00458490();
            iVar12 = puVar14[1];
            *puVar14 = &PTR_FUN_007e5370;
            *(int *)(iVar12 + 0xe) = piVar18[6];
            *(short *)(iVar12 + 0x12) = (short)piVar18[7];
            *(undefined1 *)(puVar14[1] + 0x14) = 0;
            *(undefined1 *)(puVar14[1] + 0x15) = 1;
            *(undefined4 *)(puVar14[1] + 0x16) = 0;
            iVar12 = puVar14[1];
            *(uint *)(iVar12 + 0x1a) = CONCAT22(uStack_2e,uStack_30);
            *(undefined2 *)(iVar12 + 0x1e) = uStack_2c;
          }
          uStack_4 = 0xffffffff;
          uStack_8c._0_2_ = 0x83d2;
          uStack_8c._2_2_ = 0x44;
          FUN_00565c30();
          uStack_8c._0_2_ = 0x83df;
          uStack_8c._2_2_ = 0x44;
          FUN_00458570();
        }
        piVar18 = piVar17;
      }
      if (cStack_71 == '\0') {
        iVar12 = (**(code **)(*(int *)((int)piVar1 + 0xe88e) + 4))();
        fVar2 = (float)iVar12 * _DAT_007e34c0 + (float)param_1[0xcd3];
        if (fVar2 < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xcd3] = (int)fVar2;
      }
      piStack_64 = (int *)0x0;
      piStack_50 = (int *)0x0;
      if (param_1[0xcd4] != 0) {
        iVar12 = *(int *)((int)piVar1 + 6);
        iVar11 = FUN_00584c90();
        if (iVar11 != iVar12) {
          iVar12 = FUN_00584c90();
          piStack_64 = (int *)(&DAT_0089cad8)[iVar12];
        }
      }
      iVar12 = *(int *)(*(int *)((int)param_1 + 0x12da) + 0x3b30);
      if ((iVar12 != 0) && (iVar12 != *(int *)((int)piVar1 + 6))) {
        piStack_50 = (int *)(&DAT_0089cad8)[iVar12];
      }
      piVar18 = *(int **)((int)piVar1 + 0xe892);
      while (piVar18 != (int *)0x0) {
        piVar17 = (int *)piVar18[2];
        piVar13 = *(int **)(DAT_00ab27b4 + 0x3d8 + *piVar18 * 0x4b2);
        iVar12 = DAT_00ab27b4 + *piVar18 * 0x4b2;
        piVar18 = param_1;
        if ((piVar13 != piVar1) && (*(int *)((int)piVar13 + 6) != 0x157)) {
          piVar18 = piVar13;
        }
        uStack_8c._0_2_ = 0x86d7;
        uStack_8c._2_2_ = 0x44;
        cVar8 = FUN_004e8ab0();
        if (cVar8 == '\0') {
LAB_00448764:
          piVar13 = piVar18;
          if (param_1[0xcd4] != 0) {
            piVar15 = *(int **)(*(int *)(param_1[0xcd4] + 0x22) + 4);
            do {
              do {
                piVar13 = piVar18;
                if (piVar15 == (int *)0x0) goto LAB_004487a8;
                piVar6 = (int *)piVar15[2];
                piVar13 = (int *)(&DAT_0089cad8)[*piVar15];
                piVar15 = piVar6;
              } while (piVar13 == (int *)0x0);
              uStack_8c._0_2_ = 0x8792;
              uStack_8c._2_2_ = 0x44;
              cVar8 = FUN_004e8ab0();
            } while ((cVar8 == '\0') || (piVar13 == piVar1));
          }
        }
        else {
          piVar13 = piStack_64;
          if (piVar18 == param_1) {
            piVar15 = piStack_50;
            if (piStack_64 != (int *)0x0) {
              uStack_8c._0_2_ = 0x86f3;
              uStack_8c._2_2_ = 0x44;
              cVar8 = FUN_004e8ab0();
              if (cVar8 != '\0') goto LAB_004487a8;
            }
          }
          else {
            if ((param_1[0xcd4] == 0) || (piVar18[0xcd4] != param_1[0xcd4])) goto LAB_00448764;
            if (piStack_64 != (int *)0x0) {
              uStack_8c._0_2_ = 0x8726;
              uStack_8c._2_2_ = 0x44;
              cVar8 = FUN_004e8ab0();
              if (cVar8 != '\0') goto LAB_004487a8;
            }
            iVar11 = *(int *)(*(int *)((int)piVar18 + 0x12da) + 0x3b30);
            piVar13 = piVar18;
            if ((iVar11 == 0) || (iVar11 == *(int *)((int)piVar1 + 6))) goto LAB_004487a8;
            piVar15 = (int *)(&DAT_0089cad8)[iVar11];
          }
          piVar13 = piVar18;
          if (piVar15 != (int *)0x0) {
            uStack_8c._0_2_ = 0x875c;
            uStack_8c._2_2_ = 0x44;
            cVar8 = FUN_004e8ab0();
            if (cVar8 != '\0') {
              piVar13 = piVar15;
            }
          }
        }
LAB_004487a8:
        if (param_4 == '\0') {
          uStack_8c._0_2_ = 0x87c2;
          uStack_8c._2_2_ = 0x44;
          cVar8 = FUN_004a0780();
          if (((cVar8 == '\0') || (piVar18 = *(int **)(iVar12 + 0x3d8), piVar18 == piVar1)) ||
             (piVar18[0xcd4] == param_1[0xcd4])) goto LAB_004487ec;
          uStack_8c._0_2_ = SUB42(piVar18,0);
          uStack_8c._2_2_ = (undefined2)((uint)piVar18 >> 0x10);
        }
        else {
LAB_004487ec:
          uStack_8c._0_2_ = SUB42(piVar13,0);
          uVar20 = (undefined2)uStack_8c;
          uStack_8c._2_2_ = (undefined2)((uint)piVar13 >> 0x10);
          uVar7 = uStack_8c._2_2_;
          uStack_8c._0_2_ = uVar20;
          uStack_8c._2_2_ = uVar7;
          if ((*(int *)(*(int *)(iVar12 + 0x3d8) + 0x3350) == param_1[0xcd4]) &&
             (param_1[0xcd4] != 0)) {
            FUN_004e7300();
            uStack_8c._0_2_ = uVar20;
            uStack_8c._2_2_ = uVar7;
          }
        }
        FUN_004e7190();
        if ((*(int **)(iVar12 + 0x3d8) != param_1) && (*(int **)(iVar12 + 0x3d4) == piVar1)) {
          iVar11 = *(int *)((int)*(int **)(iVar12 + 0x3d8) + 6);
          if (((&DAT_0089cad8)[iVar11] == 0) || (iVar11 == *(int *)((int)param_1 + 6))) {
LAB_0044887f:
            uStack_8c._0_2_ = SUB42(param_1,0);
            uStack_8c._2_2_ = (undefined2)((uint)param_1 >> 0x10);
            FUN_004e7300();
          }
          else if ((iVar11 != 0x157) && (*(int *)((int)param_1 + 6) != 0x157)) {
            uStack_8c._0_2_ = 0x8862;
            uStack_8c._2_2_ = 0x44;
            cVar8 = FUN_005861e0();
            if ((cVar8 != '\0') ||
               (*(char *)(*(int *)((int)param_1 + 0x12da) + iVar11 * 0x2c + 0x2c) == '\0'))
            goto LAB_0044887f;
          }
        }
        piVar18 = piVar17;
        uStack_8c = (undefined4 **)CONCAT22(uStack_8c._2_2_,(undefined2)uStack_8c);
        if ((*(int **)(iVar12 + 0x3d4) == param_1) &&
           (uStack_8c = (undefined4 **)CONCAT22(uStack_8c._2_2_,(undefined2)uStack_8c),
           param_3 == '\x01')) {
          uStack_8c = &puStack_14;
          uStack_20 = 3;
          puStack_24 = (undefined1 *)((uint)puStack_24 & 0xff000000);
          FUN_0042e060();
          *(undefined4 **)(iVar12 + 0x3c8) = puStack_14;
          *(undefined2 *)(iVar12 + 0x3cc) = uStack_10;
        }
      }
      piVar18 = (int *)piVar1[0x3a29];
      while (piVar18 != (int *)0x0) {
        piVar17 = (int *)piVar18[2];
        uVar10 = *(undefined4 *)(DAT_00ab27b4 + 0x3d4 + *piVar18 * 0x4b2);
        uStack_8c._0_2_ = (undefined2)uVar10;
        uStack_8c._2_2_ = (undefined2)((uint)uVar10 >> 0x10);
        FUN_004e7300();
        piVar18 = piVar17;
      }
      (**(code **)(*piVar1 + 0x10))();
      (**(code **)(**(int **)((int)piVar1 + 0x11806) + 0x14))();
      piVar18 = (int *)piVar1[0x45fe];
      while (piVar18 != (int *)0x0) {
        piVar17 = (int *)piVar18[2];
        iVar12 = *piVar18;
        uStack_8c._0_2_ = 0x895a;
        uStack_8c._2_2_ = 0x44;
        FUN_0076e3b0();
        uStack_8c._0_2_ = 0x8963;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a420();
        uStack_8c._0_2_ = 0x896c;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a020();
        piVar18 = piVar17;
        if ((*(float *)(iVar12 + 0x36) <= (float)(int)(&DAT_0084a0ec)[*(int *)(iVar12 + 0x32)]) &&
           ((((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar12 + 0x52) ||
             (*(int *)(iVar12 + 0x42 + *(int *)(iVar12 + 0x22) * 4) <=
              (int)*(short *)(DAT_00893530 + 0x18))) &&
            ((*(uint *)(iVar12 + 0x1e) & 0xfffc0000) == 0)))) {
          *(undefined1 *)(iVar12 + 0x2d) = 1;
        }
      }
      (**(code **)(piVar1[0x45fd] + 0x14))();
      if (cStack_71 != '\0') {
        piVar18 = (int *)piVar1[0x1147];
        while (piVar18 != (int *)0x0) {
          piVar17 = (int *)piVar18[2];
          iVar12 = *piVar18;
          uStack_8c._0_2_ = 0x89f3;
          uStack_8c._2_2_ = 0x44;
          (**(code **)(piVar1[0x1146] + 0x18))();
          fVar2 = *(float *)(iVar12 + 0xec);
          fVar3 = *(float *)(iVar12 + 0xf4);
          *(int **)(iVar12 + 0x5c) = param_1;
          if (*(char *)(iVar12 + 0x162) == '\0') {
            uStack_8c._0_2_ = (undefined2)*(undefined4 *)(iVar12 + 0x130);
            uStack_8c._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar12 + 0x130) >> 0x10);
            uVar10 = FUN_00789c90();
            uStack_8c._0_2_ = 0;
            uStack_8c._2_2_ = 0;
            FUN_004fbc90(uVar10,0x8c);
          }
          if (*(float *)(iVar12 + 0xf0) < fVar2) {
            fVar2 = *(float *)(iVar12 + 0xf0);
          }
          *(float *)(iVar12 + 0xec) = fVar2;
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          *(float *)(iVar12 + 0xf4) = fVar3;
          puStack_24 = (undefined1 *)&uStack_8c;
          uStack_8c._0_2_ = DAT_0088f28c;
          uStack_8c._2_2_ = (undefined2)DAT_0088f28e;
          FUN_00458210();
          *(undefined4 *)(iVar12 + 0x14c) = 0;
          uStack_8c._0_2_ = 0x8ad3;
          uStack_8c._2_2_ = 0x44;
          FUN_005033b0();
          puStack_24 = (undefined1 *)&uStack_8c;
          uStack_8c._0_2_ = DAT_0088f28c;
          uStack_8c._2_2_ = (undefined2)DAT_0088f28e;
          FUN_00458230();
          *(undefined4 *)(iVar12 + 0x58) = *(undefined4 *)((int)param_1 + 6);
          iVar11 = param_1[0x1148];
          uStack_8c._0_2_ = 0x8b09;
          uStack_8c._2_2_ = 0x44;
          piVar13 = operator_new(0xe);
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            *piVar13 = iVar12;
            piVar13[1] = iVar11;
            piVar13[2] = 0;
            *(undefined1 *)(piVar13 + 3) = 0;
          }
          iVar12 = param_1[0x1149];
          param_1[0x1148] = (int)piVar13;
          param_1[0x1149] = iVar12 + 1;
          piVar18 = piVar17;
          if (iVar12 == 0) {
            param_1[0x1147] = (int)piVar13;
          }
          else {
            *(int **)(iVar11 + 8) = piVar13;
          }
        }
        if (*(int **)((int)piVar1 + 0x3b7e) != (int *)0x0) {
          piVar18 = *(int **)((int)piVar1 + 0x3b7e);
          do {
            piVar17 = (int *)piVar18[2];
            iVar12 = *piVar18;
            uStack_8c._0_2_ = 0x8b77;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(*(int *)((int)piVar1 + 0x3b7a) + 0x18))();
            *(int **)(iVar12 + 0x2c) = param_1;
            iVar11 = *(int *)((int)param_1 + 0x3b82);
            uStack_8c._0_2_ = 0x8b8b;
            uStack_8c._2_2_ = 0x44;
            piVar18 = operator_new(0xe);
            if (piVar18 == (int *)0x0) {
              piVar18 = (int *)0x0;
            }
            else {
              *piVar18 = iVar12;
              piVar18[1] = iVar11;
              piVar18[2] = 0;
              *(undefined1 *)(piVar18 + 3) = 0;
            }
            iVar12 = *(int *)((int)param_1 + 0x3b86);
            *(int **)((int)param_1 + 0x3b82) = piVar18;
            *(int *)((int)param_1 + 0x3b86) = iVar12 + 1;
            if (iVar12 == 0) {
              *(int **)((int)param_1 + 0x3b7e) = piVar18;
            }
            else {
              *(int **)(iVar11 + 8) = piVar18;
            }
            piVar18 = piVar17;
          } while (piVar17 != (int *)0x0);
        }
      }
      uStack_8c._0_2_ = 0x8bf1;
      uStack_8c._2_2_ = 0x44;
      FUN_0049eae0();
      uStack_8c._0_2_ = 0x8c08;
      uStack_8c._2_2_ = 0x44;
      FUN_0049eb70();
      uStack_8c._0_2_ = 0x8c1f;
      uStack_8c._2_2_ = 0x44;
      FUN_0049eb10();
      uStack_8c._0_2_ = 0x8c36;
      uStack_8c._2_2_ = 0x44;
      FUN_0049eb40();
      uStack_8c._0_2_ = 0x8c4d;
      uStack_8c._2_2_ = 0x44;
      FUN_0049eba0();
      uStack_8c._0_2_ = 0x8c64;
      uStack_8c._2_2_ = 0x44;
      FUN_0049ebd0();
      if (cStack_71 != '\0') {
        piVar18 = (int *)piVar1[0xedb];
        while (piVar18 != (int *)0x0) {
          piVar17 = (int *)piVar18[2];
          puVar14 = (undefined4 *)*piVar18;
          piVar18 = piVar17;
          if (puVar14 != (undefined4 *)0x0) {
            uStack_8c._0_2_ = 0x8c95;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(piVar1[0xeda] + 0x18))();
            uStack_8c._0_2_ = 1;
            uStack_8c._2_2_ = 0;
            piVar1[0xe85] = (int)((float)*(int *)((int)puVar14 + 0x132) + (float)piVar1[0xe85]);
            piVar1[0xe84] = (int)((float)*(int *)((int)puVar14 + 0x12e) + (float)piVar1[0xe84]);
            (**(code **)*puVar14)();
          }
        }
        iVar12 = __ftol();
        param_1[0xe84] = (int)((float)iVar12 + (float)param_1[0xe84]);
        iVar12 = __ftol();
        param_1[0xe85] = (int)((float)iVar12 + (float)param_1[0xe85]);
        uStack_8c._0_2_ = 0x8d43;
        uStack_8c._2_2_ = 0x44;
        (**(code **)(*param_1 + 0x28))();
      }
      iVar12 = param_1[0x45fe];
      while (piVar18 = DAT_00d615f6, iVar12 != 0) {
        iVar12 = *(int *)(iVar12 + 8);
        uStack_8c._0_2_ = 0x8d5c;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a420();
      }
      while (piVar17 = DAT_00d615d2, piVar18 != (int *)0x0) {
        piVar17 = (int *)piVar18[2];
        puVar14 = (undefined4 *)*piVar18;
        piVar18 = piVar17;
        if ((*(int *)((int)puVar14 + 0x16) == *(int *)((int)piVar1 + 6)) ||
           (*(int *)((int)puVar14 + 0x1a) == *(int *)((int)piVar1 + 6))) {
          iVar12 = (&DAT_0089cad8)[*(int *)((int)puVar14 + 0x16)];
          iVar11 = (&DAT_0089cad8)[*(int *)((int)puVar14 + 0x1a)];
          if ((iVar12 != 0) && (iVar11 != 0)) {
            if (*(int *)((int)puVar14 + 0x1e) == 0) {
              *(undefined1 *)(*(int *)(iVar12 + 0x12da) + 0x35 + *(int *)(iVar11 + 6) * 0x2c) = 0;
              *(undefined1 *)(*(int *)(iVar11 + 0x12da) + 0x35 + *(int *)(iVar12 + 6) * 0x2c) = 0;
            }
            else if (*(int *)((int)puVar14 + 0x1e) == 1) {
              *(undefined1 *)(*(int *)(iVar12 + 0x12da) + 0x36 + *(int *)(iVar11 + 6) * 0x2c) = 0;
              *(undefined1 *)(*(int *)(iVar11 + 0x12da) + 0x36 + *(int *)(iVar12 + 6) * 0x2c) = 0;
            }
          }
          uStack_8c._0_2_ = SUB42(puVar14,0);
          uStack_8c._2_2_ = (undefined2)((uint)puVar14 >> 0x10);
          puVar5 = (undefined4 *)(DAT_00d615f2 + 0x1c);
          (**(code **)(DAT_00d615f2 + 0x28))();
          (*(code *)*puVar5)();
          if (puVar14 != (undefined4 *)0x0) {
            uStack_8c._0_2_ = 0x8e2a;
            uStack_8c._2_2_ = 0x44;
            (**(code **)*puVar14)();
          }
        }
      }
      while (piVar18 = DAT_00d615e4, piVar17 != (int *)0x0) {
        piVar18 = (int *)piVar17[2];
        iVar12 = *piVar17;
        uStack_8c._0_2_ = 0x8e52;
        uStack_8c._2_2_ = 0x44;
        cVar8 = FUN_00584e20();
        if (cVar8 == '\x01') {
          uStack_8c._0_2_ = 0x8e5f;
          uStack_8c._2_2_ = 0x44;
          uVar10 = FUN_00447250();
          FUN_00449290(uVar10);
          FUN_00460310();
        }
        piVar17 = piVar18;
        if (*(int *)(iVar12 + 0x1e) == *(int *)((int)piVar1 + 6)) {
          *(undefined4 *)(iVar12 + 0x1e) = 0;
        }
      }
      while (piVar18 != (int *)0x0) {
        piVar17 = (int *)piVar18[2];
        iVar12 = *piVar18;
        uStack_8c._0_2_ = 0x8eb4;
        uStack_8c._2_2_ = 0x44;
        cVar8 = FUN_00584e20();
        if (cVar8 != '\0') {
          uStack_8c._0_2_ = 0x8ec4;
          uStack_8c._2_2_ = 0x44;
          (**(code **)(**(int **)(*(int *)(iVar12 + 0x22) + 0x22) + 0x18))();
          iVar11 = *(int *)(*(int *)(*(int *)(iVar12 + 0x26) + 0x22) + 4);
          while (iVar11 != 0) {
            iVar11 = *(int *)(iVar11 + 8);
            uStack_8c._0_2_ = 0x8ee7;
            uStack_8c._2_2_ = 0x44;
            FUN_004623c0();
          }
        }
        uStack_8c._0_2_ = 0x8efb;
        uStack_8c._2_2_ = 0x44;
        cVar8 = FUN_00584e20();
        if (cVar8 != '\0') {
          uStack_8c._0_2_ = 0x8f0b;
          uStack_8c._2_2_ = 0x44;
          (**(code **)(**(int **)(*(int *)(iVar12 + 0x26) + 0x22) + 0x18))();
          iVar11 = *(int *)(*(int *)(*(int *)(iVar12 + 0x22) + 0x22) + 4);
          while (iVar11 != 0) {
            iVar11 = *(int *)(iVar11 + 8);
            uStack_8c._0_2_ = 0x8f2e;
            uStack_8c._2_2_ = 0x44;
            FUN_004623c0();
          }
        }
        iVar11 = (**(code **)(**(int **)(*(int *)(iVar12 + 0x22) + 0x22) + 4))();
        piVar18 = piVar17;
        if ((iVar11 < 1) ||
           (iVar12 = (**(code **)(**(int **)(*(int *)(iVar12 + 0x26) + 0x22) + 4))(), iVar12 < 1)) {
          uStack_8c._0_2_ = 0x8f64;
          uStack_8c._2_2_ = 0x44;
          FUN_00425cb0();
        }
      }
      FUN_00577d20();
      if (piVar1 != DAT_00d0ca90) {
        _DAT_0089cac8 = piVar1[1];
        DAT_0089caca._2_2_ = (undefined2)piVar1[2];
        _DAT_0089cad0 = param_1[1];
        _DAT_0089cad4 = (undefined2)param_1[2];
        uStack_8c._0_2_ = 0x8fbf;
        uStack_8c._2_2_ = 0x44;
        FUN_00577d70();
      }
      if ((*(int *)((int)DAT_00d0ca90 + 0x21e62) != 0x10) &&
         (*(int *)((int)DAT_00d0ca90 + 0x21e62) != 0xf)) {
        FUN_0064e9e0();
      }
      uStack_8c._0_2_ = 0x8fe1;
      uStack_8c._2_2_ = 0x44;
      pvVar9 = operator_new(0x2c);
      uStack_4 = 0xe;
      if (pvVar9 == (void *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = FUN_005884c0();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)(iVar12 + 4) = *(undefined4 *)((int)piVar1 + 6);
      puVar14 = &DAT_0089cad8;
      do {
        piVar18 = (int *)*puVar14;
        if (piVar18 != (int *)0x0) {
          if (*(int *)(*(int *)((int)piVar18 + 0x12da) + 0x3b30) == *(int *)((int)piVar1 + 6)) {
            *(undefined4 *)(*(int *)((int)piVar18 + 0x12da) + 0x3b30) = 0;
          }
          if (piVar18 != piVar1) {
            uStack_8c._0_2_ = 0x905e;
            uStack_8c._2_2_ = 0x44;
            FUN_005889e0();
            *(int **)(*(int *)((int)piVar18 + 0x12da) + 0x20 + *(int *)((int)piVar1 + 6) * 0x2c) =
                 piVar18;
          }
        }
        puVar14 = puVar14 + 1;
      } while ((int)puVar14 < 0x89d038);
      if (iVar12 != 0) {
        FUN_00588520();
        uStack_8c._0_2_ = 0x908d;
        uStack_8c._2_2_ = 0x44;
        FUN_00796cd8();
      }
      if ((piVar1 != param_1) && (piStack_64 = (int *)0x0, 0 < DAT_00877690)) {
        do {
          uStack_8c._0_2_ = 0x90af;
          uStack_8c._2_2_ = 0x44;
          iVar12 = FUN_004e9370();
          if (*(int *)(iVar12 + 0x1aa) != 0) {
            piVar18 = *(int **)(*(int *)(iVar12 + 0x1aa) + 4);
            while (piVar18 != (int *)0x0) {
              piVar17 = (int *)piVar18[2];
              iVar12 = *piVar18;
              piVar18 = (int *)FUN_004bf290();
              if (piVar18 == piVar1) {
                *(undefined4 *)(*(int *)(iVar12 + 0x80) + 0x4a) = *(undefined4 *)((int)param_1 + 6);
              }
              piVar13 = (int *)FUN_004bf290();
              piVar18 = piVar17;
              if (piVar13 == piVar1) {
                *(undefined4 *)(*(int *)(iVar12 + 0x84) + 0x4a) = *(undefined4 *)((int)param_1 + 6);
              }
            }
          }
          piStack_64 = (int *)((int)piStack_64 + 1);
        } while ((int)piStack_64 < DAT_00877690);
      }
      *(undefined1 *)((int)piVar1 + 0x117e2) = 1;
      if (piVar1 == DAT_00d0ca90) {
        uStack_8c._0_2_ = 0x9135;
        uStack_8c._2_2_ = 0x44;
        puVar14 = operator_new(0xc);
        uStack_4 = 0xf;
        if (puVar14 != (undefined4 *)0x0) {
          uVar10 = *(undefined4 *)((int)param_1 + 6);
          uStack_8c._0_2_ = 0x9164;
          uStack_8c._2_2_ = 0x44;
          puVar19 = operator_new(0x12);
          if (puVar19 == (undefined2 *)0x0) {
            puVar19 = (undefined2 *)0x0;
          }
          else {
            puVar19[3] = 0;
            *(undefined1 *)(puVar19 + 2) = 0;
            *(undefined1 *)((int)puVar19 + 3) = 0;
            *(undefined1 *)(puVar19 + 1) = 0;
            puVar19[4] = 0;
            *(undefined4 *)(puVar19 + 5) = 0;
          }
          puVar14[1] = puVar19;
          *(undefined1 *)(puVar14 + 2) = 0;
          *(undefined1 *)((int)puVar14 + 9) = 1;
          *puVar14 = &PTR_FUN_007e5350;
          *(undefined1 *)((int)puVar14 + 10) = 0;
          *puVar19 = 0x4f;
          iVar12 = puVar14[1];
          *(undefined4 *)(iVar12 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar12 + 0xc) = DAT_0088f2a0;
          iVar12 = puVar14[1];
          puStack_24 = (undefined1 *)((uint)puStack_24 & 0xff000000);
          *(undefined1 **)(iVar12 + 2) = puStack_24;
          *(undefined2 *)(iVar12 + 6) = 0;
          *puVar14 = &PTR_FUN_007e5330;
          *(undefined4 *)(puVar14[1] + 0xe) = uVar10;
        }
        uStack_4 = 0xffffffff;
        uStack_8c._0_2_ = 0x91f5;
        uStack_8c._2_2_ = 0x44;
        FUN_00565c30();
      }
      else {
        uStack_8c._0_2_ = 0x9211;
        uStack_8c._2_2_ = 0x44;
        FUN_00425cb0();
        *local_48 = 0;
      }
    }
    puVar14 = &DAT_0089cad8;
    do {
      if (((int *)*puVar14 != (int *)0x0) && ((int *)*puVar14 != piVar1)) {
        FUN_0044bb10();
      }
      puVar14 = puVar14 + 1;
    } while ((int)puVar14 < 0x89d038);
    DAT_008a013c = '\0';
    FUN_004d87c0();
    if (piVar1 != param_1) {
      FUN_0044aea0();
      FUN_005886c0();
      (**(code **)(*param_1 + 0x490))();
    }
    FUN_00577fb0();
  }
  ExceptionList = local_c;
  return;
LAB_0044773f:
  if (piVar18 == piVar1) {
LAB_00447747:
    if ((iVar12 != 0) && (iVar12 != param_2)) {
      iVar12 = (&DAT_0089cad8)[iVar12];
      if (iVar12 == 0) {
        uStack_8c._0_2_ = 0x78d1;
        uStack_8c._2_2_ = 0x44;
        (**(code **)(piVar1[0x1146] + 0x18))();
        if (puVar14 != (undefined4 *)0x0) {
          uStack_8c._0_2_ = 0x78dd;
          uStack_8c._2_2_ = 0x44;
          (**(code **)*puVar14)();
        }
      }
      else {
        uStack_8c._0_2_ = 0x777b;
        uStack_8c._2_2_ = 0x44;
        (**(code **)(piVar1[0x1146] + 0x18))();
        fVar2 = (float)puVar14[0x3b];
        fVar3 = (float)puVar14[0x3d];
        puVar14[0x17] = iVar12;
        if (*(char *)((int)puVar14 + 0x162) == '\0') {
          uStack_8c._0_2_ = (undefined2)puVar14[0x4c];
          uStack_8c._2_2_ = (undefined2)((uint)puVar14[0x4c] >> 0x10);
          uVar10 = FUN_00789c90();
          uStack_8c._0_2_ = 0;
          uStack_8c._2_2_ = 0;
          FUN_004fbc90(uVar10,0x8c);
        }
        if ((float)puVar14[0x3c] < fVar2) {
          fVar2 = (float)puVar14[0x3c];
        }
        puVar14[0x3b] = fVar2;
        if (fVar3 < _DAT_007e3380) {
          fVar3 = _DAT_007e3380;
        }
        puVar14[0x3d] = fVar3;
        uStack_8c._0_2_ = DAT_0088f28c;
        uStack_8c._2_2_ = (undefined2)DAT_0088f28e;
        FUN_00458210();
        puVar14[0x53] = 0;
        uStack_8c._0_2_ = 0x7849;
        uStack_8c._2_2_ = 0x44;
        FUN_005033b0();
        FUN_00446d10();
        FUN_00458230();
        iVar11 = *(int *)(iVar12 + 0x4520);
        uStack_8c._0_2_ = 0x7870;
        uStack_8c._2_2_ = 0x44;
        pvVar9 = operator_new(0xe);
        uStack_4 = 2;
        if (pvVar9 == (void *)0x0) {
          uVar10 = 0;
        }
        else {
          uStack_8c._0_2_ = (undefined2)iVar11;
          uStack_8c._2_2_ = (undefined2)((uint)iVar11 >> 0x10);
          uVar10 = FUN_0045baf0();
        }
        iVar16 = *(int *)(iVar12 + 0x4524);
        uStack_4 = 0xffffffff;
        *(undefined4 *)(iVar12 + 0x4520) = uVar10;
        *(int *)(iVar12 + 0x4524) = iVar16 + 1;
        if (iVar16 == 0) {
          *(undefined4 *)(iVar12 + 0x451c) = uVar10;
        }
        else {
          *(undefined4 *)(iVar11 + 8) = uVar10;
          uStack_8c = (undefined4 **)CONCAT22(uStack_8c._2_2_,(undefined2)uStack_8c);
        }
      }
    }
  }
  goto joined_r0x004475b1;
LAB_00447b0f:
  if (piVar18 == piVar1) {
LAB_00447b17:
    uStack_8c._0_2_ = 0x7b23;
    uStack_8c._2_2_ = 0x44;
    FUN_005b0490();
    iVar12 = FUN_00522770();
    if ((iVar12 == 0) || (piVar13 = (int *)FUN_00522770(), piVar13 == piVar1)) {
      if ((&DAT_00dc0fd4)[*(int *)(piVar15[0x92] + 6)] != 0) {
        uStack_8c._0_2_ = 0x7d3b;
        uStack_8c._2_2_ = 0x44;
        (**(code **)(*(int *)piVar15[0x92] + 0x48c))();
      }
      if (piVar15[0x7d] != 0) {
        cVar8 = (**(code **)(*piVar15 + 0x28))();
        if (cVar8 == '\0') {
          cVar8 = (**(code **)(*piVar15 + 0x2c))();
          iVar12 = *(int *)piVar15[0x7d];
          if (cVar8 == '\0') {
            (**(code **)(*piVar15 + 0x18))();
            uStack_8c._0_2_ = 0x7da9;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(iVar12 + 0x1bc))();
            uStack_8c._0_2_ = 0x7db0;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(*piVar15 + 0x18))();
            uStack_8c._0_2_ = 0x7db7;
            uStack_8c._2_2_ = 0x44;
            piVar13 = (int *)FUN_004ef820();
            if (piVar13 != (int *)0x0) {
              uStack_8c._0_2_ = 0x7dc4;
              uStack_8c._2_2_ = 0x44;
              iVar12 = FUN_0066ee70();
              if (iVar12 != 0) {
                uStack_8c._0_2_ = SUB42(piVar13,0);
                uStack_8c._2_2_ = (undefined2)((uint)piVar13 >> 0x10);
                FUN_0066ee70();
                FUN_004d1330();
              }
              uStack_8c._0_2_ = 0x7de1;
              uStack_8c._2_2_ = 0x44;
              iVar12 = (**(code **)(*piVar13 + 0x218))();
              if (iVar12 != 0) {
                uStack_8c._0_2_ = 0x7def;
                uStack_8c._2_2_ = 0x44;
                (**(code **)(*piVar13 + 0x218))();
                uStack_8c._0_2_ = 0x7df6;
                uStack_8c._2_2_ = 0x44;
                FUN_0066c200();
              }
              uStack_8c._0_2_ = 1;
              uStack_8c._2_2_ = 0;
              (**(code **)*piVar13)();
              (**(code **)(*piVar15 + 0x18))();
              FUN_004ef810();
            }
            uStack_8c._0_2_ = 0x7e15;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(*piVar15 + 0x18))();
            piVar13 = (int *)FUN_004ef800();
            if (piVar13 != (int *)0x0) {
              iVar12 = (**(code **)(*piVar13 + 0x218))();
              if (iVar12 != 0) {
                (**(code **)(*piVar13 + 0x218))();
                FUN_0066c200();
              }
              uStack_8c._0_2_ = 0x7e49;
              uStack_8c._2_2_ = 0x44;
              (**(code **)*piVar13)();
              uStack_8c._0_2_ = 0;
              uStack_8c._2_2_ = 0;
              (**(code **)(*piVar15 + 0x18))();
              uStack_8c._0_2_ = 0x7e59;
              uStack_8c._2_2_ = 0x44;
              FUN_004ef7f0();
            }
          }
          else {
            (**(code **)(*piVar15 + 0x14))();
            uStack_8c._0_2_ = 0x7d94;
            uStack_8c._2_2_ = 0x44;
            (**(code **)(iVar12 + 0x1cc))();
          }
        }
        else {
          iVar12 = *(int *)piVar15[0x7d];
          (**(code **)(*piVar15 + 0x10))();
          uStack_8c._0_2_ = 0x7d6c;
          uStack_8c._2_2_ = 0x44;
          (**(code **)(iVar12 + 0x1ac))();
        }
        uStack_8c._0_2_ = 0x7e62;
        uStack_8c._2_2_ = 0x44;
        FUN_00524610();
      }
      if (*(int *)((int)piVar15 + 0x14a) == 0) goto joined_r0x004478f1;
      iVar11 = FUN_0051c480();
      iVar12 = (&DAT_0089cad8)[*(int *)(iVar11 + 0x1a)];
      if (iVar12 == 0) {
        uStack_8c._0_2_ = 0x7f24;
        uStack_8c._2_2_ = 0x44;
        FUN_0076e3b0();
        uStack_8c._0_2_ = 0x7f2d;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a420();
        if ((*(float *)(iVar11 + 0x36) <= (float)(int)(&DAT_0084a0ec)[*(int *)(iVar11 + 0x32)]) &&
           ((((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar11 + 0x52) ||
             (*(int *)(iVar11 + 0x42 + *(int *)(iVar11 + 0x22) * 4) <=
              (int)*(short *)(DAT_00893530 + 0x18))) &&
            ((*(uint *)(iVar11 + 0x1e) & 0xfffc0000) == 0)))) {
          *(undefined1 *)(iVar11 + 0x2d) = 1;
        }
      }
      else {
        uStack_8c = (undefined4 **)&uStack_30;
        piVar13 = (int *)(**(code **)(*(int *)(iVar12 + 0x117f4) + 0x28))();
        if (*piVar13 == 0) {
          iVar16 = *(int *)(iVar12 + 0x117fc);
          uStack_8c._0_2_ = 0x7ebd;
          uStack_8c._2_2_ = 0x44;
          pvVar9 = operator_new(0xe);
          uStack_40 = SUB42(pvVar9,0);
          uStack_3e = (undefined2)((uint)pvVar9 >> 0x10);
          uStack_4 = 7;
          if (pvVar9 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uStack_8c._0_2_ = (undefined2)iVar16;
            uStack_8c._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
            uVar10 = FUN_0045ba90();
          }
          iVar4 = *(int *)(iVar12 + 0x11800);
          uStack_4 = 0xffffffff;
          *(undefined4 *)(iVar12 + 0x117fc) = uVar10;
          *(int *)(iVar12 + 0x11800) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 *)(iVar12 + 0x117f8) = uVar10;
          }
          else {
            *(undefined4 *)(iVar16 + 8) = uVar10;
          }
          uStack_8c._0_2_ = 0x7f11;
          uStack_8c._2_2_ = 0x44;
          FUN_0050a420();
          *(undefined4 *)(iVar11 + 0x16) = *(undefined4 *)(iVar11 + 0x1a);
        }
      }
      puVar14 = (undefined4 *)piVar15[0x48];
      while (puVar14 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar14[2];
        uStack_8c._0_2_ = 0x7f83;
        uStack_8c._2_2_ = 0x44;
        (**(code **)(*(int *)*puVar14 + 0x38))();
        puVar14 = puVar5;
      }
      uStack_8c._0_2_ = 0x7f90;
      uStack_8c._2_2_ = 0x44;
      FUN_0050a020();
      uStack_8c._0_2_ = 0x7f99;
      uStack_8c._2_2_ = 0x44;
      FUN_0051c4a0();
    }
    else {
      iVar12 = FUN_0051c480();
      if ((iVar12 != 0) && (iVar12 = FUN_0051c480(), *(int *)(iVar12 + 0x1a) == param_2)) {
        iVar12 = FUN_00522770();
        iVar12 = *(int *)(iVar12 + 0x117f4);
        FUN_0051c480();
        uStack_8c._0_2_ = 0x7b89;
        uStack_8c._2_2_ = 0x44;
        (**(code **)(iVar12 + 0x18))();
        uStack_8c._0_2_ = 0x7b90;
        uStack_8c._2_2_ = 0x44;
        iVar12 = FUN_0051c480();
        if (*(int *)(iVar12 + 0x62) != 0) {
          uStack_8c._0_2_ = 0x7b9e;
          uStack_8c._2_2_ = 0x44;
          iVar12 = FUN_0051c480();
          iVar12 = *(int *)(*(int *)(iVar12 + 0x62) + 0x117f4);
          uStack_8c._0_2_ = 0x7bb4;
          uStack_8c._2_2_ = 0x44;
          uVar10 = FUN_0051c480();
          uStack_8c._0_2_ = (undefined2)uVar10;
          uStack_8c._2_2_ = (undefined2)((uint)uVar10 >> 0x10);
          (**(code **)(iVar12 + 0x18))();
        }
        iVar12 = piVar1[0x45fd];
        uStack_8c._0_2_ = 0x7bc9;
        uStack_8c._2_2_ = 0x44;
        uVar10 = FUN_0051c480();
        uStack_8c._0_2_ = (undefined2)uVar10;
        uStack_8c._2_2_ = (undefined2)((uint)uVar10 >> 0x10);
        piVar13 = (int *)(**(code **)(iVar12 + 0x28))();
        if (*piVar13 == 0) {
          FUN_0051c480();
          iVar12 = piVar1[0x45ff];
          uStack_8c._0_2_ = 0x7bec;
          uStack_8c._2_2_ = 0x44;
          pvVar9 = operator_new(0xe);
          uStack_40 = SUB42(pvVar9,0);
          uStack_3e = (undefined2)((uint)pvVar9 >> 0x10);
          uStack_4 = 5;
          if (pvVar9 == (void *)0x0) {
            iVar11 = 0;
          }
          else {
            uStack_8c._0_2_ = (undefined2)iVar12;
            uStack_8c._2_2_ = (undefined2)((uint)iVar12 >> 0x10);
            iVar11 = FUN_0045ba90();
          }
          iVar16 = piVar1[0x4600];
          uStack_4 = 0xffffffff;
          piVar1[0x45ff] = iVar11;
          piVar1[0x4600] = iVar16 + 1;
          if (iVar16 == 0) {
            piVar1[0x45fe] = iVar11;
          }
          else {
            *(int *)(iVar12 + 8) = iVar11;
          }
        }
        uStack_8c._0_2_ = 0x7c40;
        uStack_8c._2_2_ = 0x44;
        FUN_0051c480();
        uStack_8c._0_2_ = 0x7c47;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a420();
        iVar12 = FUN_0051c480();
        *(int *)(iVar12 + 0x16) = param_2;
        uStack_8c._0_2_ = 0x7c61;
        uStack_8c._2_2_ = 0x44;
        FUN_0051c480();
        uStack_8c._0_2_ = 0x7c68;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a020();
        uStack_8c._0_2_ = 0x7c71;
        uStack_8c._2_2_ = 0x44;
        FUN_0051c4a0();
      }
      uStack_8c._0_2_ = 0x7c7c;
      uStack_8c._2_2_ = 0x44;
      puVar14 = operator_new(0xc);
      uStack_40 = SUB42(puVar14,0);
      uStack_3e = (undefined2)((uint)puVar14 >> 0x10);
      uStack_4 = 6;
      if (puVar14 != (undefined4 *)0x0) {
        uStack_8c._0_2_ = 0x7ca2;
        uStack_8c._2_2_ = 0x44;
        FUN_00446d10();
        FUN_00522770();
        uStack_8c._0_2_ = 0xa8;
        uStack_8c._2_2_ = 0;
        FUN_00458490();
        iVar12 = puVar14[1];
        *puVar14 = &PTR_FUN_007e5370;
        *(int *)(iVar12 + 0xe) = piVar15[6];
        *(short *)(iVar12 + 0x12) = (short)piVar15[7];
        *(undefined1 *)(puVar14[1] + 0x14) = 1;
        *(undefined1 *)(puVar14[1] + 0x15) = 1;
        *(undefined4 *)(puVar14[1] + 0x16) = 0;
        iVar12 = puVar14[1];
        *(undefined4 **)(iVar12 + 0x1a) = puStack_14;
        *(undefined2 *)(iVar12 + 0x1e) = uStack_10;
      }
LAB_00447d05:
      uStack_4 = 0xffffffff;
      uStack_8c._0_2_ = 0x7d16;
      uStack_8c._2_2_ = 0x44;
      FUN_00565c30();
    }
  }
  goto joined_r0x004478f1;
LAB_0044808f:
  if (piVar17 == piVar18) {
LAB_00448097:
    if (iVar11 != param_2) {
      iVar11 = (&DAT_0089cad8)[iVar11];
      if (iVar11 == 0) {
        uStack_8c._0_2_ = 0x8144;
        uStack_8c._2_2_ = 0x44;
        FUN_0076e3b0();
        uStack_8c._0_2_ = 0x814d;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a420();
        uStack_8c._0_2_ = 0x8156;
        uStack_8c._2_2_ = 0x44;
        FUN_0050a020();
        if ((*(float *)(iVar12 + 0x36) <= (float)(int)(&DAT_0084a0ec)[*(int *)(iVar12 + 0x32)]) &&
           ((((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar12 + 0x52) ||
             (*(int *)(iVar12 + 0x42 + *(int *)(iVar12 + 0x22) * 4) <=
              (int)*(short *)(DAT_00893530 + 0x18))) &&
            ((*(uint *)(iVar12 + 0x1e) & 0xfffc0000) == 0)))) {
          *(undefined1 *)(iVar12 + 0x2d) = 1;
        }
      }
      else {
        uStack_8c = (undefined4 **)&puStack_24;
        piVar17 = (int *)(**(code **)(*(int *)(iVar11 + 0x117f4) + 0x28))();
        if (*piVar17 == 0) {
          iVar16 = *(int *)(iVar11 + 0x117fc);
          uStack_8c._0_2_ = 0x80d8;
          uStack_8c._2_2_ = 0x44;
          pvVar9 = operator_new(0xe);
          uStack_40 = SUB42(pvVar9,0);
          uStack_3e = (undefined2)((uint)pvVar9 >> 0x10);
          uStack_4 = 9;
          if (pvVar9 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uStack_8c._0_2_ = (undefined2)iVar16;
            uStack_8c._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
            uVar10 = FUN_0045ba90();
          }
          iVar4 = *(int *)(iVar11 + 0x11800);
          uStack_4 = 0xffffffff;
          *(undefined4 *)(iVar11 + 0x117fc) = uVar10;
          *(int *)(iVar11 + 0x11800) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 *)(iVar11 + 0x117f8) = uVar10;
          }
          else {
            *(undefined4 *)(iVar16 + 8) = uVar10;
          }
          uStack_8c._0_2_ = 0x8128;
          uStack_8c._2_2_ = 0x44;
          FUN_0050a420();
          *(undefined4 *)(iVar12 + 0x16) = *(undefined4 *)(iVar12 + 0x1a);
          uStack_8c._0_2_ = 0x8137;
          uStack_8c._2_2_ = 0x44;
          FUN_0050a020();
        }
      }
      uStack_8c._0_2_ = 0x81a4;
      uStack_8c._2_2_ = 0x44;
      (**(code **)(piVar1[0x45fd] + 0x18))();
      piVar17 = piVar1;
    }
  }
  goto joined_r0x00447fb9;
}


