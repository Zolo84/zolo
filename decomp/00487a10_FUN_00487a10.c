// FUN_00487a10 @ 487a10 size=1769

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00487a10(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  float fVar5;
  undefined1 *puVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *unaff_EBX;
  int **ppiVar15;
  int *piVar16;
  undefined4 uStack_44;
  int *piStack_40;
  int *piStack_20;
  int local_1c;
  undefined4 *puStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0xffffffff;
  puStack_8 = &LAB_007bd756;
  local_c = ExceptionList;
  piStack_40 = (int *)0x487a42;
  ExceptionList = &local_c;
  iVar9 = FUN_00428ee0();
  if (((iVar9 != 0) && (piVar1 = (int *)(iVar9 + -0x14), piVar1 != (int *)0x0)) &&
     (*(char *)(iVar9 + 0x169) == '\0')) {
    cVar8 = *(char *)(*(int *)(param_2 + 4) + 0x15);
    local_1c = *(int *)(iVar9 + 0x234);
    if (local_1c != 0) {
      cVar7 = (**(code **)(*piVar1 + 0x2c))();
      if (cVar7 != '\0') {
        cVar7 = FUN_005177f0();
        if (cVar7 != '\0') {
          piVar13 = *(int **)(*(int *)(iVar9 + 0x296) + 4);
          while (piVar13 != (int *)0x0) {
            piStack_20 = (int *)piVar13[2];
            iVar12 = *piVar13;
            piStack_40 = (int *)0x487ac7;
            puVar10 = operator_new(0xc);
            puStack_4 = (undefined1 *)0x0;
            puStack_18 = puVar10;
            if (puVar10 != (undefined4 *)0x0) {
              uStack_12 = (undefined2)DAT_0088f28e;
              uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              uStack_14 = DAT_0088f28c;
              uVar2 = *(undefined1 *)(*(int *)(param_2 + 4) + 0x14);
              uVar3 = *(undefined1 *)(*(int *)(param_2 + 4) + 0x15);
              piStack_40 = (int *)0xa8;
              uStack_44 = 0x487b16;
              FUN_00458490();
              iVar14 = puVar10[1];
              *puVar10 = &PTR_FUN_007e5370;
              *(undefined4 *)(iVar14 + 0xe) = *(undefined4 *)(iVar12 + 0x18);
              *(undefined2 *)(iVar14 + 0x12) = *(undefined2 *)(iVar12 + 0x1c);
              *(undefined1 *)(puVar10[1] + 0x14) = uVar2;
              *(undefined1 *)(puVar10[1] + 0x15) = uVar3;
              *(undefined4 *)(puVar10[1] + 0x16) = 0;
              iVar12 = puVar10[1];
              *(uint *)(iVar12 + 0x1a) = CONCAT22(uStack_12,uStack_14);
              *(undefined2 *)(iVar12 + 0x1e) = uStack_10;
            }
            puStack_4 = (undefined1 *)0xffffffff;
            piStack_40 = (int *)0x487b77;
            FUN_00565c30();
            piVar13 = piStack_20;
          }
        }
        cVar7 = FUN_005173f0();
        if (cVar7 != '\0') {
          piVar13 = *(int **)(*(int *)(iVar9 + 0x29a) + 4);
          while (piVar13 != (int *)0x0) {
            piStack_20 = (int *)piVar13[2];
            iVar12 = *piVar13;
            piStack_40 = (int *)0x487bc0;
            puVar10 = operator_new(0xc);
            puStack_4 = (undefined1 *)0x1;
            puStack_18 = puVar10;
            if (puVar10 != (undefined4 *)0x0) {
              uStack_14 = DAT_0088f28c;
              uStack_12 = (undefined2)DAT_0088f28e;
              uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              uVar2 = *(undefined1 *)(*(int *)(param_2 + 4) + 0x15);
              uVar3 = *(undefined1 *)(*(int *)(param_2 + 4) + 0x14);
              piStack_40 = (int *)0xa8;
              uStack_44 = 0x487c0f;
              FUN_00458490();
              iVar14 = puVar10[1];
              *puVar10 = &PTR_FUN_007e5370;
              *(undefined4 *)(iVar14 + 0xe) = *(undefined4 *)(iVar12 + 0x18);
              *(undefined2 *)(iVar14 + 0x12) = *(undefined2 *)(iVar12 + 0x1c);
              *(undefined1 *)(puVar10[1] + 0x14) = uVar3;
              *(undefined1 *)(puVar10[1] + 0x15) = uVar2;
              *(undefined4 *)(puVar10[1] + 0x16) = 0;
              iVar12 = puVar10[1];
              *(uint *)(iVar12 + 0x1a) = CONCAT22(uStack_12,uStack_14);
              *(undefined2 *)(iVar12 + 0x1e) = uStack_10;
            }
            puStack_4 = (undefined1 *)0xffffffff;
            piStack_40 = (int *)0x487c70;
            FUN_00565c30();
            piVar13 = piStack_20;
          }
        }
        if (cVar8 != '\0') {
          FUN_00518ea0();
        }
      }
      if (*(char *)(*(int *)(param_2 + 4) + 0x14) == '\0') {
        if (*(int *)(iVar9 + 0x136) != 0) {
          iVar12 = *(int *)(iVar9 + 0x234);
          uVar11 = FUN_0051c480();
          iVar14 = *(int *)(iVar12 + 0x117fc);
          piStack_40 = (int *)0x487cc2;
          puVar10 = operator_new(0xe);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = uVar11;
            puVar10[1] = iVar14;
            puVar10[2] = 0;
            *(undefined1 *)(puVar10 + 3) = 0;
          }
          iVar4 = *(int *)(iVar12 + 0x11800);
          *(undefined4 **)(iVar12 + 0x117fc) = puVar10;
          *(int *)(iVar12 + 0x11800) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 **)(iVar12 + 0x117f8) = puVar10;
          }
          else {
            *(undefined4 **)(iVar14 + 8) = puVar10;
          }
          piStack_40 = (int *)0x487d0a;
          FUN_0051c480();
          piStack_40 = (int *)0x487d11;
          FUN_0050a020();
        }
        piStack_40 = (int *)0x487d1e;
        FUN_0051c4a0();
      }
      else if (*(int *)(iVar9 + 0x136) != 0) {
        piStack_40 = (int *)0x487d2c;
        FUN_0051c480();
        piStack_40 = (int *)0x487d33;
        FUN_0050a420();
      }
      piStack_40 = (int *)0x487d45;
      (**(code **)(*(int *)(*(int *)(iVar9 + 0x234) + 0x4504) + 0x18))();
      if ((&DAT_00dc0fd4)[*(int *)((int)*(int **)(iVar9 + 0x234) + 6)] != 0) {
        uStack_44 = 0x487d62;
        piStack_40 = piVar1;
        (**(code **)(**(int **)(iVar9 + 0x234) + 0x48c))();
      }
      cVar8 = (char)((uint)unaff_EBX >> 0x10);
      if (cVar8 == '\0') {
        piStack_40 = (int *)0x487d71;
        iVar12 = FUN_00522770();
        if (iVar12 != 0) {
          piStack_40 = (int *)0x487d7c;
          piVar13 = (int *)FUN_00522770();
          if (piVar13 != param_1) {
            piStack_40 = (int *)0x487d87;
            iVar12 = FUN_00522770();
            piStack_40 = *(int **)(iVar12 + 6);
            uStack_44 = 0x487d92;
            FUN_00522740();
          }
        }
      }
      uStack_44 = 0x487d9a;
      piStack_40 = param_1;
      (**(code **)(*piVar1 + 0x38))();
      if (cVar8 != '\0') {
        uStack_44 = 0xa4;
        FUN_00522740();
        piVar13 = *(int **)(iVar9 + 0x12);
        while (param_1 = unaff_EBX, piVar13 != (int *)0x0) {
          piVar16 = (int *)piVar13[2];
          iVar12 = *piVar13;
          uStack_44 = *(undefined4 *)(iVar12 + 0x138);
          iVar14 = FUN_0044c3d0(*(undefined4 *)(iVar12 + 0x130));
          piVar13 = piVar16;
          if (iVar14 != 0) {
            puStack_4 = *(undefined1 **)(iVar12 + 0xec);
            fVar5 = *(float *)(iVar12 + 0xf4);
            uStack_44 = 0;
            *(int **)(iVar12 + 0x5c) = unaff_EBX;
            *(undefined4 *)(iVar12 + 0x58) = 0;
            FUN_004fbc90(iVar14,0x8c,0,0);
            puVar6 = puStack_4;
            if (*(float *)(iVar12 + 0xf0) < (float)puStack_4) {
              puVar6 = (undefined1 *)*(float *)(iVar12 + 0xf0);
            }
            *(undefined1 **)(iVar12 + 0xec) = puVar6;
            if (fVar5 < _DAT_007e3380) {
              fVar5 = _DAT_007e3380;
            }
            *(float *)(iVar12 + 0xf4) = fVar5;
            uStack_44 = 0x487e5b;
            FUN_005054d0();
          }
        }
      }
      puStack_4 = (undefined1 *)&uStack_44;
      uStack_44 = 0;
      piVar13 = (int *)FUN_00493150();
      ppiVar15 = &piStack_20;
      (**(code **)(*piVar13 + 0x28))(ppiVar15,piVar1);
      cVar8 = FUN_00498720(ppiVar15);
      if (cVar8 != '\0') {
        iVar12 = param_1[0x1143];
        piVar13 = operator_new(0xe);
        if (piVar13 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          *piVar13 = (int)piVar1;
          piVar13[1] = iVar12;
          piVar13[2] = 0;
          *(undefined1 *)(piVar13 + 3) = 0;
        }
        iVar14 = param_1[0x1144];
        param_1[0x1143] = (int)piVar13;
        param_1[0x1144] = iVar14 + 1;
        if (iVar14 == 0) {
          param_1[0x1142] = (int)piVar13;
        }
        else {
          *(int **)(iVar12 + 8) = piVar13;
        }
      }
      cVar8 = FUN_0042e980();
      if (cVar8 != '\0') {
        if (*(int *)(iVar9 + 0x1e0) != 0) {
          cVar8 = (**(code **)(*piVar1 + 0x28))();
          if (cVar8 == '\0') {
            cVar8 = (**(code **)(*piVar1 + 0x2c))();
            iVar12 = **(int **)(iVar9 + 0x1e0);
            if (cVar8 == '\0') {
              uVar11 = (**(code **)(*piVar1 + 0x18))();
              (**(code **)(iVar12 + 0x1bc))(uVar11);
            }
            else {
              uVar11 = (**(code **)(*piVar1 + 0x14))();
              (**(code **)(iVar12 + 0x1cc))(uVar11);
            }
          }
          else {
            iVar12 = **(int **)(iVar9 + 0x1e0);
            uVar11 = (**(code **)(*piVar1 + 0x10))();
            (**(code **)(iVar12 + 0x1ac))(uVar11);
          }
          FUN_00524610(0);
        }
        cVar8 = (**(code **)(*piVar1 + 0x30))();
        if (cVar8 != '\0') {
          (**(code **)(*piVar1 + 0x18))();
          piVar13 = (int *)FUN_004ef820();
          if (piVar13 != (int *)0x0) {
            iVar12 = FUN_0066ee70();
            if (iVar12 != 0) {
              piVar16 = piVar13;
              FUN_0066ee70(piVar13);
              FUN_004d1330(piVar16);
            }
            iVar12 = (**(code **)(*piVar13 + 0x218))();
            if (iVar12 != 0) {
              (**(code **)(*piVar13 + 0x218))();
              FUN_0066c200();
            }
            uVar11 = 1;
            (**(code **)*piVar13)(1);
            (**(code **)(*piVar1 + 0x18))(0);
            FUN_004ef810(uVar11);
          }
          (**(code **)(*piVar1 + 0x18))();
          piVar13 = (int *)FUN_004ef800();
          if (piVar13 != (int *)0x0) {
            iVar12 = (**(code **)(*piVar13 + 0x218))();
            if (iVar12 != 0) {
              (**(code **)(*piVar13 + 0x218))();
              FUN_0066c200();
            }
            uVar11 = 1;
            (**(code **)*piVar13)(1);
            (**(code **)(*piVar1 + 0x18))(0);
            FUN_004ef7f0(uVar11);
          }
        }
        if ((((&DAT_00dc0fd4)[*(int *)((int)param_1 + 6)] == 0) &&
            (cVar8 = (**(code **)(*param_1 + 0x498))(), cVar8 != '\0')) &&
           (*(char *)(param_1[0x4f21] + 0xe) != '\0')) {
          cVar8 = (**(code **)(*piVar1 + 0x28))();
          if (cVar8 == '\0') {
            cVar8 = (**(code **)(*piVar1 + 0x2c))();
            iVar12 = *(int *)param_1[0x4f21];
            if (cVar8 == '\0') {
              uVar11 = (**(code **)(*piVar1 + 0x18))();
              (**(code **)(iVar12 + 0x1b8))(uVar11);
            }
            else {
              uVar11 = (**(code **)(*piVar1 + 0x14))();
              (**(code **)(iVar12 + 0x1c8))(uVar11);
            }
          }
          else {
            iVar12 = *(int *)param_1[0x4f21];
            uVar11 = (**(code **)(*piVar1 + 0x10))();
            (**(code **)(iVar12 + 0x1a8))(uVar11);
          }
        }
      }
      uVar11 = *(undefined4 *)(iVar9 + 0x22c);
      *(undefined4 *)(iVar9 + 0x22c) = *(undefined4 *)(iVar9 + -8);
      (**(code **)(*piVar1 + 0x60))(*(undefined4 *)(iVar9 + -8));
      *(undefined4 *)(iVar9 + 0x22c) = uVar11;
      iVar9 = (**(code **)(*(int *)(iVar9 + 0x108) + 4))();
      if (iVar9 == 0) {
        uStack_44 = 0x4880df;
        piStack_40 = piVar1;
        FUN_005afd90();
      }
    }
  }
  ExceptionList = local_c;
  return 3;
}


