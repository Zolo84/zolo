// FUN_0065b940 @ 65b940 size=4817

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0065b940(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  bool bVar14;
  int local_170;
  undefined4 *local_168;
  undefined2 uStack_164;
  int *local_160;
  undefined **local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined2 local_13c;
  int local_13a;
  undefined2 local_134;
  int local_132;
  undefined2 local_12c;
  int local_12a;
  undefined2 local_124;
  int local_122;
  undefined2 local_11c;
  int local_11a;
  undefined2 local_114;
  int local_112;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d347a;
  local_c = ExceptionList;
  ppvVar3 = &local_c;
  switch(param_2) {
  case 0:
    goto LAB_0065b981;
  case 1:
    goto LAB_0065b981;
  case 2:
LAB_0065b981:
    ExceptionList = &local_c;
    FUN_0064e130();
    FUN_00648c30();
    FUN_0064e130();
    FUN_00648ea0();
    ppvVar3 = ExceptionList;
    break;
  case 3:
    iVar6 = DAT_00ab27b4 + *(int *)((int)param_1 + 0x13d36) * 0x4b2;
    ExceptionList = &local_c;
    FUN_0052ac00();
    for (piVar12 = *(int **)(*(int *)(iVar6 + 0x1c2) + 4); piVar12 != (int *)0x0;
        piVar12 = (int *)piVar12[2]) {
      piVar2 = (int *)*piVar12;
      cVar4 = (**(code **)(*piVar2 + 0x28))();
      if ((((cVar4 == '\0') ||
           (iVar6 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar6 + 0x2b2) == 0)) &&
          ((DAT_00d610dd != '\0' ||
           ((cVar4 = FUN_0052b370(), cVar4 == '\x01' || ((int *)piVar2[0x92] == param_1)))))) &&
         (cVar4 = (**(code **)(*(int *)*piVar12 + 0x28))(), cVar4 != '\0')) {
        (**(code **)(*param_1 + 0x49c))();
      }
    }
    goto LAB_0065ba32;
  case 4:
    iVar6 = DAT_00ab27b4 + *(int *)((int)param_1 + 0x13d36) * 0x4b2;
    ExceptionList = &local_c;
    FUN_0052ac00();
    piVar12 = *(int **)(*(int *)(iVar6 + 0x1c2) + 4);
    if (((*(int *)(iVar6 + 0x254) != 8) && (*(int *)(iVar6 + 0x254) != 9)) &&
       (*(int *)(iVar6 + 0x46a) != 0)) {
      piVar12 = *(int **)(*(int *)(iVar6 + 0x46a) + 0x34);
    }
    for (; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
      piVar2 = (int *)*piVar12;
      cVar4 = (**(code **)(*piVar2 + 0x28))();
      if (((cVar4 == '\0') ||
          (iVar6 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar6 + 0x2b2) == 0)) &&
         (((DAT_00d610dd != '\0' ||
           ((cVar4 = FUN_0052b370(), cVar4 == '\x01' || ((int *)piVar2[0x92] == param_1)))) &&
          (cVar4 = (**(code **)(*(int *)*piVar12 + 0x2c))(), cVar4 != '\0')))) {
        (**(code **)(*param_1 + 0x49c))();
      }
    }
    goto LAB_0065ba32;
  case 5:
    iVar6 = DAT_00ab27b4 + *(int *)((int)param_1 + 0x13d36) * 0x4b2;
    ExceptionList = &local_c;
    FUN_0052ac00();
    for (piVar12 = *(int **)(*(int *)(iVar6 + 0x1c2) + 4); piVar12 != (int *)0x0;
        piVar12 = (int *)piVar12[2]) {
      piVar2 = (int *)*piVar12;
      cVar4 = (**(code **)(*piVar2 + 0x28))();
      if ((((cVar4 == '\0') ||
           (iVar6 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar6 + 0x2b2) == 0)) &&
          ((DAT_00d610dd != '\0' ||
           ((cVar4 = FUN_0052b370(), cVar4 == '\x01' || ((int *)piVar2[0x92] == param_1)))))) &&
         (cVar4 = (**(code **)(*(int *)*piVar12 + 0x30))(), cVar4 != '\0')) {
        (**(code **)(*param_1 + 0x49c))();
      }
    }
LAB_0065ba32:
    iVar6 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    if (iVar6 < 1) {
LAB_0065ba63:
      FUN_0064c090();
      ppvVar3 = ExceptionList;
    }
    else {
      iVar6 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
      if (iVar6 < 2) {
LAB_0065c129:
        FUN_0064c090();
        ppvVar3 = ExceptionList;
      }
      else {
        FUN_0064c090();
        ppvVar3 = ExceptionList;
      }
    }
    break;
  case 6:
    local_11c = *(undefined2 *)((int)param_1 + 0x13d3a);
    local_11a = param_1[0x4f4f];
    ExceptionList = &local_c;
    iVar6 = FUN_00428ee0();
    ppvVar3 = ExceptionList;
    if ((iVar6 == 0) || (piVar12 = (int *)(iVar6 + -0x14), piVar12 == (int *)0x0)) break;
    FUN_0052ac00();
    (**(code **)(*param_1 + 0x49c))();
    iVar5 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    if (0 < iVar5) {
      (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    }
    FUN_0064c090();
    FUN_00428eb0();
    cVar4 = (**(code **)(*piVar12 + 0x2c))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar12 + 0x28))();
      if (cVar4 == '\0') {
        puVar9 = operator_new(0xc);
        local_4 = 2;
        if (puVar9 != (undefined4 *)0x0) {
          uVar13 = *(undefined4 *)(iVar6 + -8);
          FUN_005e3b80();
          *puVar9 = &PTR_FUN_007e6424;
          *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
          iVar6 = puVar9[1];
          *(undefined4 **)(iVar6 + 0x18) = local_168;
          *(undefined2 *)(iVar6 + 0x1c) = uStack_164;
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 0x1e) = _DAT_0088f28c;
          *(undefined2 *)(iVar6 + 0x22) = DAT_0088f28e._2_2_;
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 0x12) = _DAT_0088f28c;
          *(undefined2 *)(iVar6 + 0x16) = DAT_0088f28e._2_2_;
          _strncpy((char *)(puVar9[1] + 0x24),&DAT_0088ebf8,0x40);
        }
      }
      else {
        puVar9 = operator_new(0xc);
        local_4 = 1;
        if (puVar9 != (undefined4 *)0x0) {
          uVar13 = *(undefined4 *)(iVar6 + -8);
          FUN_005e3ae0();
          *puVar9 = &PTR_FUN_007e63e4;
          *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
          iVar6 = puVar9[1];
          *(undefined4 **)(iVar6 + 0x18) = local_168;
          *(undefined2 *)(iVar6 + 0x1c) = uStack_164;
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 0x1e) = _DAT_0088f28c;
          *(undefined2 *)(iVar6 + 0x22) = DAT_0088f28e._2_2_;
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 0x12) = _DAT_0088f28c;
          *(undefined2 *)(iVar6 + 0x16) = DAT_0088f28e._2_2_;
          _strncpy((char *)(puVar9[1] + 0x24),&DAT_0088ebf8,0x40);
        }
      }
    }
    else {
      puVar9 = operator_new(0xc);
      local_4 = 0;
      if (puVar9 != (undefined4 *)0x0) {
        uVar13 = *(undefined4 *)(iVar6 + -8);
        FUN_005b6af0();
        *puVar9 = &PTR_FUN_007e6464;
        *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
        iVar6 = puVar9[1];
        *(undefined4 **)(iVar6 + 0x18) = local_168;
        *(undefined2 *)(iVar6 + 0x1c) = uStack_164;
        iVar6 = puVar9[1];
        *(undefined4 *)(iVar6 + 0x1e) = _DAT_0088f28c;
        *(undefined2 *)(iVar6 + 0x22) = DAT_0088f28e._2_2_;
        iVar6 = puVar9[1];
        *(undefined4 *)(iVar6 + 0x12) = _DAT_0088f28c;
        *(undefined2 *)(iVar6 + 0x16) = DAT_0088f28e._2_2_;
        _strncpy((char *)(puVar9[1] + 0x24),&DAT_0088ebf8,0x40);
      }
    }
    local_4 = 0xffffffff;
    FUN_00565bc0();
    iVar6 = FUN_00428ee0();
    ppvVar3 = ExceptionList;
    if ((iVar6 == 0) || (iVar6 == 0x14)) break;
    FUN_0052ac00();
    (**(code **)(*param_1 + 0x49c))();
    (**(code **)(*param_1 + 0x49c))();
    goto LAB_0065cbef;
  case 7:
    local_12c = *(undefined2 *)((int)param_1 + 0x13d3a);
    local_12a = param_1[0x4f4f];
    ExceptionList = &local_c;
    iVar6 = FUN_00428ee0();
    ppvVar3 = ExceptionList;
    if ((iVar6 != 0) &&
       (piVar12 = (int *)(iVar6 + -0x14), local_160 = piVar12, piVar12 != (int *)0x0)) {
      FUN_004c4760();
      local_150 = &PTR_FUN_007ecebc;
      local_4 = 3;
      iVar6 = (**(code **)(*piVar12 + 0x84))();
      piVar2 = *(int **)(iVar6 + 4);
      iVar6 = iStack_14c;
      while (iStack_14c = iVar6, piVar2 != (int *)0x0) {
        piVar1 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar4 = (**(code **)(*piVar1 + 0x28))();
        if ((((cVar4 == '\0') ||
             (cVar4 = (**(code **)(*piVar12 + 0x28))(), piVar12 = local_160, iVar6 = iStack_14c,
             cVar4 != '\0')) &&
            ((cVar4 = (**(code **)(*piVar1 + 0x2c))(), cVar4 == '\0' ||
             (cVar4 = (**(code **)(*piVar12 + 0x2c))(), piVar12 = local_160, iVar6 = iStack_14c,
             cVar4 != '\0')))) &&
           (((cVar4 = (**(code **)(*piVar1 + 0x30))(), cVar4 == '\0' ||
             (cVar4 = (**(code **)(*piVar12 + 0x30))(), piVar12 = local_160, iVar6 = iStack_14c,
             cVar4 != '\0')) &&
            (iVar5 = iStack_148, piVar12 = local_160, iVar6 = iStack_14c,
            (int *)piVar1[0x92] == param_1)))) {
          pvVar7 = operator_new(0xe);
          local_4._0_1_ = 4;
          if (pvVar7 == (void *)0x0) {
            iStack_148 = 0;
          }
          else {
            iStack_148 = FUN_0045bab0();
          }
          local_4 = CONCAT31(local_4._1_3_,3);
          iVar11 = iStack_144 + 1;
          bVar14 = iStack_144 != 0;
          piVar12 = local_160;
          iVar6 = iStack_148;
          iStack_144 = iVar11;
          if (bVar14) {
            *(int *)(iVar5 + 8) = iStack_148;
            iVar6 = iStack_14c;
          }
        }
      }
      FUN_00461cd0();
      (*(code *)local_150[4])();
      local_150 = &PTR_FUN_007ecebc;
      local_4 = 5;
      FUN_0052ac00();
      local_4 = 0xffffffff;
      FUN_00527230();
      ppvVar3 = ExceptionList;
    }
    break;
  case 8:
    local_13c = *(undefined2 *)((int)param_1 + 0x13d3a);
    local_13a = param_1[0x4f4f];
    ExceptionList = &local_c;
    iVar6 = FUN_00428ee0();
    ppvVar3 = ExceptionList;
    if ((iVar6 == 0) || ((int *)(iVar6 + -0x14) == (int *)0x0)) break;
    FUN_0052ac00();
    iVar6 = (**(code **)(*(int *)(iVar6 + -0x14) + 0x14))();
    piVar12 = *(int **)(*(int *)(iVar6 + 0x2aa) + 4);
    while (piVar12 != (int *)0x0) {
      piVar2 = (int *)piVar12[2];
      iVar6 = *piVar12;
      FUN_00419460();
      FUN_00419440();
      (**(code **)(**(int **)(iVar6 + 0x15e) + 0x18))();
      (**(code **)(*param_1 + 0x49c))();
      piVar12 = piVar2;
    }
    iVar6 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    if (iVar6 < 1) goto LAB_0065ba63;
    iVar6 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    if (1 < iVar6) {
      FUN_0064c090();
      ppvVar3 = ExceptionList;
      break;
    }
    goto LAB_0065c129;
  case 9:
    ExceptionList = &local_c;
    FUN_004d8670();
    FUN_0064c090();
    ppvVar3 = ExceptionList;
    break;
  case 10:
    ExceptionList = &local_c;
    FUN_004d8670();
    FUN_0064c090();
    ppvVar3 = ExceptionList;
    break;
  case 0xb:
    iVar6 = *(int *)(DAT_00ab27b4 + 0x3d8 + *(int *)((int)param_1 + 0x13d36) * 0x4b2);
    ppvVar3 = &local_c;
    if (iVar6 != 0) {
      ExceptionList = &local_c;
      FUN_004d8670();
      FUN_0064c090();
      *(int *)((int)param_1 + 0x13dc2) = iVar6;
      ppvVar3 = ExceptionList;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    *(undefined4 *)(*DAT_00d12b40 + 0x36a) = param_3;
    FUN_007a630a();
    pvVar7 = operator_new(0x16);
    local_4 = 8;
joined_r0x0065c557:
    if (pvVar7 != (void *)0x0) {
      FUN_0042b6c9();
      FUN_006e9330();
    }
    local_4 = 0xffffffff;
    FUN_006e97f0();
    ppvVar3 = ExceptionList;
    break;
  case 0xd:
    ExceptionList = &local_c;
    *(undefined4 *)(*DAT_00d12b40 + 0x386) = 1;
    ppvVar3 = ExceptionList;
    break;
  case 0xe:
    ExceptionList = &local_c;
    *(undefined4 *)(*DAT_00d12b40 + 0x386) = 0;
    ppvVar3 = ExceptionList;
    break;
  case 0xf:
    ExceptionList = &local_c;
    *(uint *)(*DAT_00d12b40 + 0x40a) = (uint)(*(int *)(*DAT_00d12b40 + 0x40a) != 1);
    bVar14 = DAT_00a98440 == 1;
    goto LAB_0065ca76;
  case 0x10:
    ExceptionList = &local_c;
    *(uint *)(*DAT_00d12b40 + 0x40e) = (uint)(*(int *)(*DAT_00d12b40 + 0x40e) != 1);
    goto LAB_0065ca6f;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    ExceptionList = &local_c;
    FUN_00428eb0();
    FUN_00467460();
    FUN_00467350();
    FUN_00467100();
    FUN_00446d10(&local_168);
    FUN_0045e050();
    ppvVar3 = ExceptionList;
    break;
  case 0x1b:
    local_114 = *(undefined2 *)((int)param_1 + 0x13d3a);
    local_112 = param_1[0x4f4f];
    ExceptionList = &local_c;
    iVar6 = FUN_00428ee0();
    ppvVar3 = ExceptionList;
    if ((iVar6 != 0) && (iVar6 != 8)) {
      FUN_00447250();
      FUN_0045d220();
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x1c:
    local_124 = *(undefined2 *)((int)param_1 + 0x13d3a);
    local_122 = param_1[0x4f4f];
    ExceptionList = &local_c;
    iVar6 = FUN_00428ee0();
    ppvVar3 = ExceptionList;
    if ((iVar6 != 0) && (iVar6 != 8)) {
      local_170 = *(int *)(iVar6 + 0xe);
      if (local_170 == *(int *)((int)param_1 + 6)) {
        local_170 = *(int *)(iVar6 + 0x12);
      }
      puVar9 = operator_new(0xc);
      local_4 = 6;
      if (puVar9 != (undefined4 *)0x0) {
        uVar13 = *(undefined4 *)((int)param_1 + 6);
        FUN_00465510();
        *puVar9 = &PTR_FUN_007e6020;
        *(int *)(puVar9[1] + 0xe) = local_170;
LAB_0065c2b0:
        *(undefined4 *)(puVar9[1] + 0x12) = uVar13;
        *(undefined1 *)(puVar9[1] + 0x16) = 0;
        *(undefined1 *)(puVar9[1] + 0x17) = 0;
        *(undefined1 *)(puVar9[1] + 0x18) = 0;
      }
LAB_0065c2cc:
      local_4 = 0xffffffff;
      FUN_00565bc0();
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x1d:
    local_134 = *(undefined2 *)((int)param_1 + 0x13d3a);
    local_132 = param_1[0x4f4f];
    ExceptionList = &local_c;
    iVar6 = FUN_00428ee0();
    ppvVar3 = ExceptionList;
    if ((iVar6 != 0) && (iVar6 != 8)) {
      puVar9 = operator_new(0xc);
      local_4 = 7;
      if (puVar9 != (undefined4 *)0x0) {
        uVar13 = *(undefined4 *)((int)param_1 + 6);
        FUN_00465510();
        *puVar9 = &PTR_FUN_007e6020;
        *(undefined4 *)(puVar9[1] + 0xe) = 0;
        goto LAB_0065c2b0;
      }
      goto LAB_0065c2cc;
    }
    break;
  case 0x1e:
    iVar6 = *(int *)(DAT_00ab27b4 + 0x3d8 + *(int *)((int)param_1 + 0x13d36) * 0x4b2);
    ppvVar3 = &local_c;
    if (iVar6 != 0) {
      ExceptionList = &local_c;
      FUN_004d8670();
      FUN_0064c090();
      *(int *)((int)param_1 + 0x13dc2) = iVar6;
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x1f:
    ExceptionList = &local_c;
    puVar9 = operator_new(0xc);
    local_4 = 0xb;
    if (puVar9 != (undefined4 *)0x0) {
      uVar13 = *(undefined4 *)((int)param_1 + 0x13d36);
LAB_0065c65c:
      FUN_00498e40();
      *puVar9 = &PTR_FUN_007e6b4c;
      *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
      *(undefined1 *)(puVar9[1] + 0x12) = 0;
    }
    goto LAB_0065c679;
  case 0x20:
    ExceptionList = &local_c;
    puVar9 = operator_new(0xc);
    local_4 = 0xc;
    if (puVar9 != (undefined4 *)0x0) {
      uVar13 = *(undefined4 *)((int)param_1 + 0x13d36);
      goto LAB_0065c65c;
    }
LAB_0065c679:
    local_4 = 0xffffffff;
    FUN_00565bc0();
    goto LAB_0065ca64;
  case 0x21:
    piVar12 = *(int **)((int)&DAT_008ea36c +
                       *(int *)(DAT_00ab27b4 + *(int *)((int)param_1 + 0x13d36) * 0x4b2 + 0x288) *
                       0x12);
    ExceptionList = &local_c;
    while (piVar12 != (int *)0x0) {
      piVar2 = (int *)piVar12[2];
      iVar6 = *piVar12;
      cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))();
      piVar12 = piVar2;
      if ((cVar4 == '\0') &&
         (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8b2) + 0x24))(), cVar4 == '\0')) {
        puVar9 = operator_new(0xc);
        local_4 = 0xd;
        if (puVar9 != (undefined4 *)0x0) {
          uVar13 = *(undefined4 *)(iVar6 + 0x12);
          FUN_00498e40();
          *puVar9 = &PTR_FUN_007e6b4c;
          *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
          *(undefined1 *)(puVar9[1] + 0x12) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00565bc0();
      }
    }
    goto LAB_0065ca64;
  case 0x22:
    piVar12 = *(int **)((int)&DAT_008ea36c +
                       *(int *)(DAT_00ab27b4 + *(int *)((int)param_1 + 0x13d36) * 0x4b2 + 0x288) *
                       0x12);
    ExceptionList = &local_c;
    while (piVar12 != (int *)0x0) {
      piVar2 = (int *)piVar12[2];
      iVar6 = *piVar12;
      cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))();
      piVar12 = piVar2;
      if (cVar4 != '\0') {
        puVar9 = operator_new(0xc);
        iVar5 = DAT_00d0ca90;
        local_4 = 0xe;
        local_168 = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          local_160 = *(int **)(iVar6 + 0x12);
          puVar8 = (undefined4 *)(DAT_00d0ca90 + 4);
          pvVar7 = operator_new(0x14);
          local_4._0_1_ = 0xf;
          if (pvVar7 != (void *)0x0) {
            FUN_0042d6c0();
          }
          local_4._0_1_ = 0xe;
          FUN_0042d320();
          *puVar9 = &PTR_FUN_007e6b6c;
          *(undefined1 *)((int)puVar9 + 10) = 0;
          *(undefined2 *)puVar9[1] = 0x11e;
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 8) = *puVar8;
          local_4 = CONCAT31(local_4._1_3_,0x10);
          *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar5 + 8);
          puVar8 = (undefined4 *)FUN_0042d2f0();
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 2) = *puVar8;
          *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar8 + 1);
          *puVar9 = &PTR_FUN_007e6b4c;
          *(int **)(puVar9[1] + 0xe) = local_160;
          *(undefined1 *)(puVar9[1] + 0x12) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00565bc0();
      }
    }
    goto LAB_0065ca64;
  case 0x23:
    piVar12 = *(int **)((int)&DAT_008e977c +
                       *(int *)(DAT_00ab27b4 + *(int *)((int)param_1 + 0x13d36) * 0x4b2 + 0x28c) *
                       0x12);
    ExceptionList = &local_c;
    while (piVar12 != (int *)0x0) {
      local_160 = (int *)piVar12[2];
      iVar6 = *piVar12;
      cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))();
      piVar12 = local_160;
      if ((cVar4 == '\0') &&
         (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8b2) + 0x24))(), piVar12 = local_160,
         cVar4 == '\0')) {
        puVar9 = operator_new(0xc);
        iVar5 = DAT_00d0ca90;
        local_4 = 0x11;
        local_168 = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          uVar13 = *(undefined4 *)(iVar6 + 0x12);
          puVar8 = (undefined4 *)(DAT_00d0ca90 + 4);
          puVar10 = operator_new(0x14);
          local_4._0_1_ = 0x12;
          if (puVar10 == (undefined2 *)0x0) {
            puVar10 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d6c0();
          }
          puVar9[1] = puVar10;
          *(undefined1 *)(puVar9 + 2) = 0;
          *(undefined1 *)((int)puVar9 + 9) = 1;
          *puVar9 = &PTR_FUN_007e6b6c;
          *(undefined1 *)((int)puVar9 + 10) = 0;
          *puVar10 = 0x11d;
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 8) = *puVar8;
          *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar5 + 8);
          local_4 = CONCAT31(local_4._1_3_,0x13);
          puVar8 = (undefined4 *)FUN_0042d2f0();
          iVar6 = puVar9[1];
          *(undefined4 *)(iVar6 + 2) = *puVar8;
          *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar8 + 1);
          *puVar9 = &PTR_FUN_007e6b4c;
          *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
          *(undefined1 *)(puVar9[1] + 0x12) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00565bc0();
        piVar12 = local_160;
      }
    }
LAB_0065ca64:
    FUN_0044aea0();
LAB_0065ca6f:
    bVar14 = DAT_00a98440 == 3;
LAB_0065ca76:
    ppvVar3 = ExceptionList;
    if (bVar14) {
LAB_0065cbd5:
      FUN_00462390();
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x24:
    ppvVar3 = &local_c;
    piVar12 = *(int **)((int)&DAT_008e977c +
                       *(int *)(DAT_00ab27b4 + *(int *)((int)param_1 + 0x13d36) * 0x4b2 + 0x28c) *
                       0x12);
    while (ExceptionList = ppvVar3, piVar12 != (int *)0x0) {
      piVar2 = (int *)piVar12[2];
      iVar6 = *piVar12;
      cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))();
      ppvVar3 = ExceptionList;
      piVar12 = piVar2;
      if (cVar4 != '\0') {
        puVar9 = operator_new(0xc);
        iVar5 = DAT_00d0ca90;
        local_4 = 0x14;
        local_168 = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          uVar13 = *(undefined4 *)(iVar6 + 0x12);
          puVar8 = (undefined4 *)(DAT_00d0ca90 + 4);
          puVar10 = operator_new(0x14);
          if (puVar10 == (undefined2 *)0x0) {
            puVar10 = (undefined2 *)0x0;
          }
          else {
            puVar10[3] = 0;
            *(undefined1 *)(puVar10 + 2) = 0;
            *(undefined1 *)((int)puVar10 + 3) = 0;
            *(undefined1 *)(puVar10 + 1) = 0;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 0;
          }
          puVar9[1] = puVar10;
          *(undefined1 *)(puVar9 + 2) = 0;
          *(undefined1 *)((int)puVar9 + 9) = 1;
          *puVar9 = &PTR_FUN_007e6b6c;
          *(undefined1 *)((int)puVar9 + 10) = 0;
          *puVar10 = 0x11e;
          iVar6 = puVar9[1];
          local_160 = (int *)((uint)local_160 & 0xff000000);
          *(undefined4 *)(iVar6 + 8) = *puVar8;
          *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar5 + 8);
          iVar6 = puVar9[1];
          *(int **)(iVar6 + 2) = local_160;
          *(undefined2 *)(iVar6 + 6) = 0;
          *puVar9 = &PTR_FUN_007e6b4c;
          *(undefined4 *)(puVar9[1] + 0xe) = uVar13;
          *(undefined1 *)(puVar9[1] + 0x12) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00565bc0();
        ppvVar3 = ExceptionList;
      }
    }
    FUN_0044aea0();
    ppvVar3 = ExceptionList;
    if (DAT_00a98440 != 3) break;
    goto LAB_0065cbd5;
  case 0x25:
    ppvVar3 = &local_c;
    if (DAT_00dc191a != '\0') {
      ExceptionList = &local_c;
      *(undefined4 *)(*DAT_00d12b40 + 0x412) = param_3;
      FUN_007a630a();
      pvVar7 = operator_new(0x16);
      local_4 = 9;
      goto joined_r0x0065c557;
    }
    break;
  case 0x26:
    ppvVar3 = &local_c;
    if (DAT_00dc191a != '\0') {
      ExceptionList = &local_c;
      *(undefined4 *)(*DAT_00d12b40 + 0x416) = param_3;
      FUN_007a630a();
      pvVar7 = operator_new(0x16);
      local_4 = 10;
      goto joined_r0x0065c557;
    }
    break;
  case 0x27:
    ExceptionList = &local_c;
    *(uint *)(*DAT_00d12b40 + 0x41a) = (uint)(*(int *)(*DAT_00d12b40 + 0x41a) == 0);
    ppvVar3 = ExceptionList;
    break;
  case 0x28:
    ExceptionList = &local_c;
    *(uint *)(*DAT_00d12b40 + 0x41e) = (uint)(*(int *)(*DAT_00d12b40 + 0x41e) == 0);
    ppvVar3 = ExceptionList;
  }
  ExceptionList = ppvVar3;
  if (DAT_00bda0fc != '\0') {
LAB_0065cbef:
    FUN_0064c090();
  }
  ExceptionList = local_c;
  return;
}


