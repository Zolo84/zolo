// FUN_004498a0 @ 4498a0 size=3156

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004498a0(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  int iStack_28;
  int *local_24;
  int aiStack_20 [2];
  int *piStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bbae6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00428ee0(param_2);
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  piVar1 = (int *)(iVar4 + -0x14);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  if (param_3 == (int *)0xfffffffa) {
    *(undefined1 *)(iVar4 + 0x171) = 1;
  }
  cVar3 = (**(code **)(*piVar1 + 0x2c))();
  uVar9 = param_4;
  if (cVar3 != '\0') {
    (**(code **)(*piVar1 + 0x14))();
    cVar3 = FUN_005177f0();
    if (cVar3 != '\0') {
      iVar5 = (**(code **)(*piVar1 + 0x14))();
      piVar13 = *(int **)(*(int *)(iVar5 + 0x2aa) + 4);
      while (piVar13 != (int *)0x0) {
        piVar17 = (int *)piVar13[2];
        (**(code **)(*param_1 + 0x2c))(*piVar13 + 0x18,param_3,uVar9);
        piVar13 = piVar17;
      }
    }
    (**(code **)(*piVar1 + 0x14))();
    cVar3 = FUN_005173f0();
    if (cVar3 != '\0') {
      iVar5 = (**(code **)(*piVar1 + 0x14))();
      piVar13 = *(int **)(*(int *)(iVar5 + 0x2ae) + 4);
      while (piVar13 != (int *)0x0) {
        piVar17 = (int *)piVar13[2];
        (**(code **)(*param_1 + 0x2c))(*piVar13 + 0x18,param_3,uVar9);
        piVar13 = piVar17;
      }
    }
  }
  cVar3 = (**(code **)(*piVar1 + 0x30))();
  if (cVar3 != '\0') {
    iVar5 = (**(code **)(*piVar1 + 0x18))();
    iVar5 = (**(code **)(**(int **)(iVar5 + 0x294) + 4))();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*piVar1 + 0x18))();
      piVar13 = *(int **)(*(int *)(iVar5 + 0x294) + 4);
      while (piVar13 != (int *)0x0) {
        piVar17 = (int *)piVar13[2];
        (**(code **)(*param_1 + 0x2c))(*piVar13 + 0x18,param_3,uVar9);
        piVar13 = piVar17;
      }
    }
  }
  cVar3 = (**(code **)(*piVar1 + 0x28))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*piVar1 + 0x2c))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*piVar1 + 0x30))();
      if (cVar3 != '\0') {
        FUN_006ad480(piVar1);
      }
    }
    else {
      FUN_006ad410(piVar1);
    }
  }
  else {
    FUN_006ad390(piVar1);
  }
  iVar5 = *(int *)(iVar4 + -8);
  cVar3 = (**(code **)(*piVar1 + 0x28))();
  if (cVar3 != '\0') {
    iVar6 = (**(code **)(*piVar1 + 0x10))();
    if (*(int *)(iVar6 + 0x2ae) == 0) {
      iVar6 = (**(code **)(*piVar1 + 0x10))();
      if (*(int *)(iVar6 + 0x2b2) != 0) {
        iVar5 = (**(code **)(*piVar1 + 0x10))();
        iVar5 = *(int *)(*(int *)(iVar5 + 0x2b2) + 0xc);
      }
    }
    else {
      iVar5 = (**(code **)(*piVar1 + 0x10))();
      iVar5 = *(int *)(*(int *)(iVar5 + 0x2ae) + 0xc);
    }
  }
  (**(code **)(param_1[0x1141] + 0x18))(piVar1);
  cVar3 = (**(code **)(*piVar1 + 0x28))();
  if (cVar3 != '\0') {
    iVar6 = (**(code **)(*piVar1 + 0x10))();
    if (*(int *)(iVar6 + 0x2b2) != 0) {
      (**(code **)(**(int **)(*(int *)(iVar6 + 0x2b2) + 0x294) + 0x18))(piVar1);
      *(undefined4 *)(iVar6 + 0x2b2) = 0;
    }
    if (*(int *)(iVar6 + 0x2ae) != 0) {
      (**(code **)(**(int **)(*(int *)(iVar6 + 0x2ae) + 0x2aa) + 0x18))(piVar1);
      *(undefined4 *)(iVar6 + 0x2ae) = 0;
      *(undefined4 *)(iVar6 + 0x240) = 0;
    }
  }
  bVar2 = false;
  local_24 = param_1;
  if ((((DAT_00dc191a != '\0') && (cVar3 = FUN_0042e980(), cVar3 != '\0')) && (0 < (int)param_2)) &&
     (iVar6 = (**(code **)(*(int *)(iVar4 + 0xe) + 4))(), 0 < iVar6)) {
    local_24 = (int *)0x0;
    if ((*(int *)((int)param_3 + 2) != DAT_0088f28e) || ((short)*param_3 != DAT_0088f28c)) {
      iVar6 = FUN_00428ee0(param_3);
      if (iVar6 == 0) {
        local_24 = (int *)0x0;
      }
      else {
        local_24 = (int *)(iVar6 + -8);
      }
    }
    piVar13 = *(int **)(iVar4 + 0x12);
    bVar2 = false;
    while (piVar13 != (int *)0x0) {
      piStack_18 = (int *)piVar13[2];
      iVar6 = *piVar13;
      param_3 = (int *)(*(float *)(iVar6 + 0xec) - *(float *)(iVar6 + 0x7c));
      piVar13 = piStack_18;
      if (_DAT_007e3380 < (float)param_3) {
        piVar13 = *(int **)(iVar6 + 0x2c);
        do {
          if (piVar13 == (int *)0x0) {
            puVar7 = operator_new(8);
            *puVar7 = param_2;
            puVar7[1] = param_3;
            aiStack_20[0] = *(int *)(iVar6 + 0x30);
            puVar8 = operator_new(0xe);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              *puVar8 = puVar7;
              puVar8[1] = aiStack_20[0];
              puVar8[2] = 0;
              *(undefined1 *)(puVar8 + 3) = 0;
            }
            iVar16 = *(int *)(iVar6 + 0x34);
            *(undefined4 **)(iVar6 + 0x30) = puVar8;
            *(int *)(iVar6 + 0x34) = iVar16 + 1;
            if (iVar16 == 0) {
              *(undefined4 **)(iVar6 + 0x2c) = puVar8;
            }
            else {
              *(undefined4 **)(aiStack_20[0] + 8) = puVar8;
            }
            goto LAB_00449bf5;
          }
          piVar17 = (int *)*piVar13;
          piVar13 = (int *)piVar13[2];
        } while ((undefined4 *)*piVar17 != param_2);
        piVar17[1] = (int)((float)param_3 + (float)piVar17[1]);
LAB_00449bf5:
        *(float *)(iVar6 + 0x7c) = (float)param_3 + *(float *)(iVar6 + 0x7c);
        if (local_24 == (int *)0x0) {
          FUN_004fc2e0(0,0,7);
          bVar2 = true;
        }
        else {
          FUN_004fc2e0(0,local_24,0);
        }
        *(undefined4 *)(iVar6 + 0x7c) = 0;
        *(undefined4 *)(iVar6 + 0x80) = 0;
        *(undefined4 *)(iVar6 + 0x84) = 0;
        piVar13 = piStack_18;
      }
    }
  }
  if (*(char *)(iVar4 + 0x170) != '\0') goto LAB_0044a173;
  if ((*(int *)(*DAT_00d12b40 + 0x386) == 0) &&
     ((cVar3 = (**(code **)(*piVar1 + 0x2c))(), cVar3 == '\0' ||
      (iVar6 = FUN_0051b230(), 0x1c5 < *(int *)(iVar6 + 0x288))))) {
    puVar7 = operator_new(0x3c);
    puStack_8 = (undefined1 *)0x0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar9 = *(undefined4 *)(iVar4 + -8);
      param_3 = puVar7;
      FUN_00417900();
      puVar7[0xc] = uVar9;
      puVar7[0xd] = 0xb4;
      puVar7[0xe] = 0;
      *puVar7 = &PTR_FUN_007e53dc;
      puVar7[2] = &PTR_LAB_007e53d8;
    }
    iVar6 = *(int *)(iVar4 + -4);
    puStack_8 = (undefined1 *)0xffffffff;
    param_3 = *(int **)(iVar6 + 0x18);
    FUN_00418530(*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x10),param_3,
                 *(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x20));
    iVar6 = FUN_00419460(&piStack_18);
    uVar9 = *(undefined4 *)(iVar6 + 4);
    puVar8 = (undefined4 *)FUN_00419460(aiStack_20);
    FUN_00419440(*puVar8,uVar9);
    iVar6 = puVar7[3];
    *(undefined4 *)(iVar6 + 0x22) = 0;
    *(undefined4 *)(iVar6 + 0x26) = 0;
    *(undefined1 *)(iVar6 + 0x67) = 0;
    iVar6 = FUN_00418480();
    if (iVar6 == 0) {
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(1);
      }
    }
    else {
      FUN_0040fd60(puVar7,0x191,0);
    }
  }
  cVar3 = (**(code **)(*piVar1 + 0x28))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*piVar1 + 0x30))();
    if (cVar3 == '\0') {
      iVar6 = *(int *)(iStack_28 + 6);
      if (((&DAT_00dc0fd4)[iVar6] == 1) ||
         ((DAT_00d0ca90 != (int *)0x0 &&
          (*(char *)(*(int *)((int)DAT_00d0ca90 + 6) + 0x34ac + iStack_28) != '\0')))) {
        if (*(char *)(iVar4 + 0x171) != '\0') {
          iVar16 = *(int *)(iVar4 + -8);
          uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar16 * 0x4b2) + 0xc))(iVar16);
          uVar10 = 0xa1;
          goto LAB_0044a033;
        }
        iVar16 = *(int *)(iVar4 + -8);
        if (!bVar2) {
          uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar16 * 0x4b2) + 0xc))(iVar16);
          FUN_006eaa80(0xa0,iVar6,&DAT_0088ebf8,uVar9,iVar16);
          goto LAB_0044a173;
        }
        piVar13 = (int *)(DAT_00ab27b4 + iVar16 * 0x4b2);
        uVar9 = FUN_005262b0(1);
        uVar10 = (**(code **)(*piVar13 + 0xc))(uVar9,iVar16);
        uVar11 = (**(code **)(*piVar1 + 0xc))(uVar10);
        FUN_006ead30(0x8d,iVar6,&DAT_0088ebf8,uVar11,uVar10,uVar9,iVar16);
      }
    }
    else {
      iVar6 = *(int *)(iStack_28 + 6);
      if (((&DAT_00dc0fd4)[iVar6] == 1) ||
         ((DAT_00d0ca90 != (int *)0x0 &&
          (*(char *)(*(int *)((int)DAT_00d0ca90 + 6) + 0x34ac + iStack_28) != '\0')))) {
        iVar16 = *(int *)(iVar4 + -8);
        if (!bVar2) {
          uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar16 * 0x4b2) + 0xc))(iVar16);
          FUN_006eaa80(0xa2,iVar6,&DAT_0088ebf8,uVar9,iVar16);
          goto LAB_0044a173;
        }
        piVar13 = (int *)(DAT_00ab27b4 + iVar16 * 0x4b2);
        uVar9 = FUN_005262b0(1);
        uVar10 = (**(code **)(*piVar13 + 0xc))(uVar9,iVar16);
        uVar11 = (**(code **)(*piVar1 + 0xc))(uVar10);
        FUN_006ead30(0x8e,iVar6,&DAT_0088ebf8,uVar11,uVar10,uVar9,iVar16);
      }
    }
  }
  else {
    iVar6 = *(int *)(iStack_28 + 6);
    if (((&DAT_00dc0fd4)[iVar6] == 1) ||
       ((DAT_00d0ca90 != (int *)0x0 &&
        (*(char *)(*(int *)((int)DAT_00d0ca90 + 6) + 0x34ac + iStack_28) != '\0')))) {
      if (*(char *)(iVar4 + 0x171) == '\0') {
        if (!bVar2) {
          iVar6 = (**(code **)(*piVar1 + 0x10))();
          if (*(int *)(iVar6 + 0x2ae) == 0) {
            uVar9 = *(undefined4 *)(iStack_28 + 6);
            uVar10 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))(iVar5);
            FUN_006eaa80(0x9e,uVar9,&DAT_0088ebf8,uVar10,iVar5);
          }
          goto LAB_0044a173;
        }
        piVar13 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
        iVar16 = iVar5;
        uVar9 = FUN_005262b0(1);
        uVar10 = (**(code **)(*piVar13 + 0xc))(uVar9,iVar16);
        uVar11 = (**(code **)(*piVar1 + 0xc))(uVar10);
        FUN_006ead30(0x8c,iVar6,&DAT_0088ebf8,uVar11,uVar10,uVar9,iVar16);
      }
      else {
        iVar16 = iVar5;
        uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))(iVar5);
        uVar10 = 0x9f;
LAB_0044a033:
        FUN_006eaa80(uVar10,iVar6,&DAT_0088ebf8,uVar9,iVar16);
      }
    }
  }
  if ((bVar2) && (iVar6 = (&DAT_0089cad8)[(int)param_2], iVar6 != 0)) {
    param_2 = *(undefined4 **)(iVar6 + 6);
    if (((&DAT_00dc0fd4)[(int)param_2] == 1) ||
       ((DAT_00d0ca90 != (int *)0x0 &&
        (*(char *)(*(int *)((int)DAT_00d0ca90 + 6) + 0x34ac + iVar6) != '\0')))) {
      piVar13 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
      uVar9 = FUN_005262b0(0);
      uVar10 = (**(code **)(*piVar13 + 0xc))(uVar9,iVar5);
      uVar11 = (**(code **)(*(int *)(iStack_28 + 0xe) + 0xc))(uVar10);
      uVar12 = (**(code **)(*piVar1 + 0xc))(uVar11);
      uVar15 = 0x8f;
    }
    else {
      if (((&DAT_00dc0fd4)[*(int *)(iStack_28 + 6)] == 1) ||
         ((DAT_00d0ca90 != (int *)0x0 &&
          (*(char *)(*(int *)((int)DAT_00d0ca90 + 6) + 0x34ac + iStack_28) != '\0'))))
      goto LAB_0044a173;
      param_3 = (int *)(iVar6 + 0xe);
      piVar13 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
      uVar9 = FUN_005262b0(2);
      uVar10 = (**(code **)(*piVar13 + 0xc))(uVar9,iVar5);
      uVar11 = (**(code **)(*(int *)(iStack_28 + 0xe) + 0xc))(uVar10);
      uVar12 = (**(code **)(*param_3 + 0xc))(uVar11);
      uVar15 = 0x99;
    }
    FUN_006eaf00(uVar15,param_2,&DAT_0088ebf8,uVar12,uVar11,uVar10,uVar9,iVar5);
  }
LAB_0044a173:
  if (*(char *)(iVar4 + 0x16a) == '\0') {
    cVar3 = (**(code **)(**(int **)((int)DAT_00d0ca90 + 0x21e5a) + 0x24))(piVar1);
    if (cVar3 != '\0') {
      FUN_0052b480(piVar1);
    }
  }
  else {
    (**(code **)(*DAT_00d0ca90 + 0x48c))(piVar1);
  }
  piVar13 = piVar1;
  FUN_0051b230(piVar1);
  FUN_004e43f0(piVar13);
  if (*(int *)(iVar4 + 0x136) != 0) {
    iVar5 = FUN_00522770();
    if (iVar5 != 0) {
      iVar5 = FUN_00522770();
      iVar5 = *(int *)(iVar5 + 0x117f4);
      uVar9 = FUN_0051c480();
      piVar13 = (int *)(**(code **)(iVar5 + 0x28))(&param_3,uVar9);
      if (*piVar13 == 0) {
        iVar6 = FUN_00522770();
        uVar9 = FUN_0051c480();
        iVar5 = *(int *)(iVar6 + 0x117fc);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = uVar9;
          puVar7[1] = iVar5;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar16 = *(int *)(iVar6 + 0x11800);
        *(undefined4 **)(iVar6 + 0x117fc) = puVar7;
        *(int *)(iVar6 + 0x11800) = iVar16 + 1;
        if (iVar16 == 0) {
          *(undefined4 **)(iVar6 + 0x117f8) = puVar7;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar7;
        }
      }
    }
    uVar9 = 0;
    FUN_0051c480(0);
    FUN_0050a020(uVar9);
  }
  FUN_0051c4a0(0);
  puVar7 = *(undefined4 **)(iVar4 + 0x10c);
  while (puVar7 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar7[2];
    (**(code **)(*(int *)*puVar7 + 0x2c))(piVar1,1);
    puVar7 = puVar8;
  }
  if (*(int **)(iVar4 + 0x162) != (int *)0x0) {
    (**(code **)(**(int **)(iVar4 + 0x162) + 0x2c))(piVar1,1);
  }
  piVar13 = piVar1;
  FUN_0051b230(piVar1);
  FUN_004e43f0(piVar13);
  if (*(int *)(iVar4 + 0x1e0) != 0) {
    cVar3 = (**(code **)(*piVar1 + 0x28))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*piVar1 + 0x2c))();
      iVar5 = **(int **)(iVar4 + 0x1e0);
      if (cVar3 == '\0') {
        uVar9 = (**(code **)(*piVar1 + 0x18))();
        (**(code **)(iVar5 + 0x1bc))(uVar9);
        (**(code **)(*piVar1 + 0x18))();
        piVar13 = (int *)FUN_004ef820();
        if (piVar13 != (int *)0x0) {
          iVar5 = FUN_0066ee70();
          if (iVar5 != 0) {
            piVar17 = piVar13;
            FUN_0066ee70(piVar13);
            FUN_004d1330(piVar17);
          }
          iVar5 = (**(code **)(*piVar13 + 0x218))();
          if (iVar5 != 0) {
            (**(code **)(*piVar13 + 0x218))();
            FUN_0066c200();
          }
          uVar9 = 1;
          (**(code **)*piVar13)(1);
          (**(code **)(*piVar1 + 0x18))(0);
          FUN_004ef810(uVar9);
        }
        (**(code **)(*piVar1 + 0x18))();
        piVar13 = (int *)FUN_004ef800();
        if (piVar13 != (int *)0x0) {
          iVar5 = (**(code **)(*piVar13 + 0x218))();
          if (iVar5 != 0) {
            (**(code **)(*piVar13 + 0x218))();
            FUN_0066c200();
          }
          uVar9 = 1;
          (**(code **)*piVar13)(1);
          (**(code **)(*piVar1 + 0x18))(0);
          FUN_004ef7f0(uVar9);
        }
      }
      else {
        uVar9 = (**(code **)(*piVar1 + 0x14))();
        (**(code **)(iVar5 + 0x1cc))(uVar9);
      }
    }
    else {
      iVar5 = **(int **)(iVar4 + 0x1e0);
      uVar9 = (**(code **)(*piVar1 + 0x10))();
      (**(code **)(iVar5 + 0x1ac))(uVar9);
    }
    FUN_00524610(0);
  }
  if (*(char *)(iVar4 + 0x169) == '\0') {
    *(undefined1 *)(iVar4 + 0x169) = 1;
    uVar9 = (**(code **)(*(int *)((int)local_24 + 0xe) + 0xc))();
    FUN_00405ad0(s_Unit___d___s__is_about_to_be_del_0083c684,*(undefined4 *)((int)param_2 + 2),uVar9
                );
    puVar7 = operator_new(0xc);
    uStack_4 = 1;
    param_3 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x18);
      if (puVar14 == (undefined2 *)0x0) {
        puVar14 = (undefined2 *)0x0;
      }
      else {
        puVar14[3] = 0;
        *(undefined1 *)(puVar14 + 2) = 0;
        *(undefined1 *)((int)puVar14 + 3) = 0;
        *(undefined1 *)(puVar14 + 1) = 0;
        puVar14[4] = 0;
        *(undefined4 *)(puVar14 + 5) = 0;
        puVar14[7] = 0;
        *(undefined4 *)(puVar14 + 8) = 0;
      }
      puVar7[1] = puVar14;
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined1 *)((int)puVar7 + 9) = 1;
      *puVar7 = &PTR_FUN_007e53b8;
      *(undefined1 *)((int)puVar7 + 10) = 0;
      *puVar14 = 0xad;
      iVar4 = puVar7[1];
      *(undefined4 *)(iVar4 + 8) = *param_2;
      *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(param_2 + 1);
      iVar4 = puVar7[1];
      uStack_14 = uStack_14 & 0xff000000;
      *(uint *)(iVar4 + 2) = uStack_14;
      *(undefined2 *)(iVar4 + 6) = 0;
      iVar4 = puVar7[1];
      *puVar7 = &PTR_FUN_007e5398;
      *(undefined4 *)(iVar4 + 0xe) = *param_2;
      *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(param_2 + 1);
      *(undefined4 *)(puVar7[1] + 0x14) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565c50(puVar7);
  }
  ExceptionList = local_c;
  return 0;
}


