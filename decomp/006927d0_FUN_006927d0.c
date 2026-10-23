// FUN_006927d0 @ 6927d0 size=4634

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006927d0(int *param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined ***pppuVar16;
  undefined4 uVar17;
  undefined1 local_8d0 [2048];
  int local_d0;
  float local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [4];
  int *local_bc;
  int local_b8;
  undefined **local_b4;
  int *local_b0;
  int *local_ac;
  int local_a8;
  undefined1 local_a4;
  undefined **local_a0;
  int *local_9c;
  int *local_98;
  int local_94;
  undefined **local_8c;
  int *local_88;
  int *local_84;
  int local_80;
  int local_78;
  int local_74;
  int *local_70;
  undefined **local_6c;
  int *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  int *local_58;
  int local_54;
  int local_50;
  float local_4c;
  int *local_48;
  undefined **local_44;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 local_34;
  int local_30;
  int *local_2c;
  char local_25;
  float local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d546f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_1;
  cVar5 = FUN_006a8720();
  if (cVar5 != '\0') {
    ExceptionList = local_10;
    return;
  }
  iVar6 = *(int *)(*(int *)((int)param_1 + 10) + 0x120);
  local_30 = iVar6 + 0xee;
  if (*(char *)(iVar6 + 0xf2) == '\0') {
    ExceptionList = local_10;
    return;
  }
  local_25 = '\0';
  iVar6 = (**(code **)(*param_1 + 0x1e8))();
  iVar6 = *(int *)(iVar6 + 4);
  do {
    if (iVar6 == 0) goto LAB_00692871;
    iVar6 = *(int *)(iVar6 + 8);
    local_1c = (int *)FUN_0044e1d0();
    piVar7 = (int *)FUN_0068a080();
  } while (piVar7 != local_1c);
  local_25 = '\x01';
  if (*(char *)(local_30 + 0x3e) == '\0') {
    ExceptionList = local_10;
    return;
  }
LAB_00692871:
  (**(code **)(**(int **)((int)param_1 + 0x7e) + 0x1c4))();
  local_74 = FUN_00527fb0();
  iVar6 = 0;
  if (local_74 < 0x29) {
    if (local_74 < 0x15) {
      if (local_74 < 0xb) {
        if (0 < local_74) {
          iVar6 = 1;
        }
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 3;
    }
  }
  else {
    iVar6 = 4;
  }
  local_c4 = FUN_006a0c90();
  if (iVar6 <= local_c4) {
    ExceptionList = local_10;
    return;
  }
  local_50 = 0;
  FUN_004734e0();
  local_8c = &PTR_FUN_007e5258;
  local_8 = 0;
  iVar6 = 1;
  do {
    cVar5 = FUN_0044b280(iVar6);
    piVar7 = local_84;
    piVar11 = local_88;
    if (cVar5 != '\0') {
      local_58 = operator_new(0xe);
      local_8._0_1_ = 1;
      if (local_58 == (int *)0x0) {
        local_84 = (int *)0x0;
      }
      else {
        local_84 = (int *)FUN_00473a90(iVar6,piVar7,0);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      iVar12 = local_80 + 1;
      bVar13 = local_80 != 0;
      piVar11 = local_84;
      local_80 = iVar12;
      if (bVar13) {
        piVar7[2] = (int)local_84;
        piVar11 = local_88;
      }
    }
    local_88 = piVar11;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x158);
  local_70 = (int *)0x0;
  if (*(char *)(local_30 + 0x3f) != '\0') {
    local_70 = (int *)FUN_00695520();
  }
  FUN_00457e10();
  local_a0 = &PTR_FUN_007e4c84;
  local_8._0_1_ = 2;
  piVar7 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508);
  while (piVar7 != (int *)0x0) {
    piVar11 = (int *)piVar7[2];
    piVar2 = (int *)*piVar7;
    *(undefined4 *)((int)piVar2 + 0x216) = 0xc8435000;
    local_48 = piVar11;
    cVar5 = (**(code **)(*piVar2 + 0x28))();
    piVar7 = piVar11;
    if (((((cVar5 != '\0') && (iVar6 = (**(code **)(piVar2[0x47] + 4))(), iVar6 == 0)) &&
         (*(int *)((int)piVar2 + 0x176) == 0)) && (*(char *)((int)piVar2 + 0x17b) == '\0')) &&
       (((((int *)piVar2[0x7d] == (int *)0x0 ||
          ((cVar5 = (**(code **)(*(int *)piVar2[0x7d] + 0xfc))(), cVar5 == '\0' &&
           (cVar5 = (**(code **)(*(int *)piVar2[0x7d] + 0x104))(), cVar5 == '\0')))) &&
         (0 < piVar2[3])) &&
        ((cVar5 = FUN_00525660(), cVar5 == '\0' && (cVar5 = FUN_00525720(), cVar5 == '\0')))))) {
      uVar15 = 0;
      FUN_0051b230(0);
      cVar5 = FUN_004ed260(uVar15);
      if ((cVar5 == '\0') && (cVar5 = FUN_005256c0(), cVar5 == '\0')) {
        iVar6 = FUN_0051b230();
        iVar6 = *(int *)(iVar6 + 0x482);
        local_1c = (int *)((float)-*(int *)(iVar6 + 0x56) * _DAT_007e4090);
        fVar14 = (float10)FUN_0044a9c0(piVar2[3],0);
        local_14 = (float)((float10)(float)local_1c - fVar14);
        fVar14 = (float10)FUN_00525ba0();
        local_14 = (float)((float10)local_14 - fVar14);
        local_1c = (int *)FUN_00525800(7,1);
        local_14 = (float)(int)local_1c * _DAT_007e4088 + local_14;
        local_1c = (int *)FUN_00525800(8,1);
        local_14 = (float)(int)local_1c * _DAT_007e681c + local_14;
        local_1c = (int *)FUN_00525800(0xb,1);
        local_14 = local_14 - (float)(int)local_1c * _DAT_007e681c;
        local_1c = (int *)FUN_00525800(1,1);
        iVar12 = *(int *)((int)local_18 + 10);
        local_14 = local_14 - (float)(int)local_1c * _DAT_007e4090;
        iVar8 = FUN_00522770();
        if (iVar8 != iVar12) {
          local_14 = local_14 - _DAT_007e4088;
        }
        iVar12 = FUN_0044e1d0();
        fVar1 = local_14;
        if (iVar6 == iVar12) {
          if (local_25 == '\0') {
            fVar1 = local_14 + _DAT_007e6828;
          }
          else {
            fVar1 = local_14 - _DAT_007e4088;
          }
        }
        *(float *)((int)piVar2 + 0x216) = fVar1;
        piVar7 = local_48;
        param_1 = local_18;
      }
    }
  }
  while( true ) {
    piVar11 = local_98;
    iVar6 = 0;
    local_4c = -100000.0;
    piVar7 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508);
    if (piVar7 == (int *)0x0) break;
    do {
      piVar2 = piVar7 + 2;
      fVar1 = *(float *)(*piVar7 + 0x216);
      if (local_4c < fVar1) {
        iVar6 = *piVar7;
        local_4c = fVar1;
      }
      piVar7 = (int *)*piVar2;
    } while ((int *)*piVar2 != (int *)0x0);
    if (iVar6 == 0) break;
    local_58 = operator_new(0xe);
    local_8._0_1_ = 3;
    if (local_58 == (int *)0x0) {
      local_98 = (int *)0x0;
    }
    else {
      local_98 = (int *)FUN_0045bab0(iVar6,piVar11,0);
    }
    local_8._0_1_ = 2;
    if (local_94 == 0) {
      *(undefined4 *)(iVar6 + 0x216) = 0xc8435000;
      local_9c = local_98;
      local_94 = local_94 + 1;
    }
    else {
      piVar11[2] = (int)local_98;
      *(undefined4 *)(iVar6 + 0x216) = 0xc8435000;
      local_94 = local_94 + 1;
    }
  }
  local_78 = FUN_00527b40();
  if (local_78 == 0) {
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00527230();
    local_8 = 0xffffffff;
    local_8c = &PTR_LAB_007e3ff0;
    FUN_004309c0();
    ExceptionList = local_10;
    return;
  }
  local_68 = (int *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_6c = &PTR_FUN_007e6eac;
  pppuVar16 = &local_6c;
  local_8._0_1_ = 4;
  FUN_0044e1d0(pppuVar16);
  FUN_004ca7c3(pppuVar16);
  iVar6 = FUN_0044e1d0();
  local_c8 = *(undefined4 *)(iVar6 + 0x52);
  iVar6 = FUN_004e9370(local_c8);
  if (*(int *)(iVar6 + 0x46a) == 0) {
    local_8._0_1_ = 2;
    local_6c = &PTR_FUN_007e6eac;
    FUN_00499f60();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00527230();
    local_8 = 0xffffffff;
    local_8c = &PTR_LAB_007e3ff0;
    FUN_004309c0();
    ExceptionList = local_10;
    return;
  }
  piVar7 = local_88;
  if (local_88 == (int *)0x0) {
LAB_0069332a:
    local_6c = &PTR_FUN_007e6eac;
    piVar7 = local_68;
    while (piVar7 != (int *)0x0) {
      piVar11 = (int *)piVar7[2];
      FUN_00796cd8(piVar7);
      piVar7 = piVar11;
    }
    local_68 = (int *)0x0;
    local_64 = 0;
    local_60 = 0;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00527230();
    local_8c = &PTR_LAB_007e3ff0;
    piVar7 = local_88;
    if (local_88 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    do {
      piVar11 = (int *)piVar7[2];
      FUN_00796cd8(piVar7);
      piVar7 = piVar11;
    } while (piVar11 != (int *)0x0);
    ExceptionList = local_10;
    return;
  }
  do {
    local_2c = (int *)piVar7[2];
    local_b8 = (&DAT_0089cad8)[*piVar7];
    piVar7 = *(int **)(local_b8 + 0xe86e);
    if (*(int **)(local_b8 + 0xe86e) != (int *)0x0) {
LAB_00692d59:
      piVar11 = (int *)piVar7[2];
      iVar6 = *piVar7;
      local_bc = (int *)(iVar6 + 0x28);
      local_20 = iVar6;
      local_1c = piVar11;
      iVar12 = (**(code **)(*(int *)(iVar6 + 0x28) + 4))();
      if ((iVar12 != 0) && (cVar5 = FUN_006a0c40(iVar6), cVar5 == '\0')) {
        local_44 = &PTR_FUN_007e6eac;
        local_40 = (int *)0x0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_004ca7c3(&local_44);
        piVar7 = local_68;
        piVar2 = local_40;
        if (0 < local_38) {
          while (piVar7 != (int *)0x0) {
            piVar3 = (int *)piVar7[2];
            iVar6 = *piVar7;
            local_48 = piVar2;
            while (piVar11 = local_1c, piVar7 = piVar3, local_48 != (int *)0x0) {
              FUN_005162a0(local_c0,0);
              cVar5 = FUN_004ed600(*(undefined4 *)((int)param_1 + 10),*(undefined4 *)(iVar6 + 0x12))
              ;
              piVar2 = local_40;
              if (cVar5 != '\0') {
                piVar7 = *(int **)(local_20 + 0x2c);
                iVar6 = local_30;
                goto joined_r0x00692e2b;
              }
            }
          }
        }
        local_8._0_1_ = 4;
        local_44 = &PTR_FUN_007e6eac;
        FUN_00499f60();
      }
      goto LAB_0069330c;
    }
LAB_00693317:
    piVar7 = local_2c;
  } while (local_2c != (int *)0x0);
  if (local_50 < 1) goto LAB_0069332a;
  iVar6 = FUN_004e9370(local_50);
  local_58 = (int *)iVar6;
  local_20 = FUN_00692220(iVar6);
  if ((((DAT_0087b630 == '\0') && (3 < local_20)) && (local_78 < local_20)) &&
     (local_20 = local_20 / 2, local_20 < 2)) {
    local_20 = 1;
  }
  else if (2 < local_20) goto LAB_0069340d;
  iVar6 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x482) + 0x28) + 4))();
  if (((3 < iVar6) && (2 < local_78)) && (2 < local_74)) {
    local_20 = 3;
  }
LAB_0069340d:
  local_4c = -100000.0;
  local_24 = 0.0;
  local_b0 = (int *)0x0;
  local_ac = (int *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_b4 = &PTR_FUN_007e5258;
  local_8 = CONCAT31(local_8._1_3_,6);
  iVar6 = 1;
  piVar7 = (int *)0x0;
  do {
    iVar12 = FUN_006a9d50();
    if ((iVar6 == iVar12) ||
       (cVar5 = FUN_0044b300(iVar6), piVar11 = piVar7, piVar2 = local_b0, cVar5 != '\0')) {
      piVar11 = operator_new(0xe);
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        *piVar11 = iVar6;
        piVar11[1] = (int)piVar7;
        piVar11[2] = 0;
        *(undefined1 *)(piVar11 + 3) = 0;
      }
      iVar12 = local_a8 + 1;
      bVar13 = local_a8 != 0;
      piVar2 = piVar11;
      local_ac = piVar11;
      local_a8 = iVar12;
      if (bVar13) {
        piVar7[2] = (int)piVar11;
        piVar2 = local_b0;
      }
    }
    local_b0 = piVar2;
    iVar6 = iVar6 + 1;
    piVar7 = piVar11;
  } while (iVar6 < 0x157);
  piVar7 = local_b0;
  if (local_b0 != (int *)0x0) {
    do {
      local_2c = (int *)piVar7[2];
      piVar11 = *(int **)((&DAT_0089cad8)[*piVar7] + 0xe86e);
      if (*(int **)((&DAT_0089cad8)[*piVar7] + 0xe86e) != (int *)0x0) {
LAB_006934f4:
        local_48 = (int *)piVar11[2];
        local_1c = (int *)*piVar11;
        local_40 = (int *)0x0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_44 = &PTR_FUN_007e6eac;
        local_8._0_1_ = 7;
        FUN_004ca7c3(&local_44);
        piVar2 = local_18;
        piVar7 = local_68;
        piVar11 = local_40;
        if (local_38 < 1) {
          local_8 = CONCAT31(local_8._1_3_,6);
          local_44 = &PTR_FUN_007e6eac;
          piVar7 = local_40;
          while (piVar7 != (int *)0x0) {
            iVar6 = *(int *)((int)piVar7 + 8);
            FUN_00796cd8(piVar7);
            piVar7 = (int *)iVar6;
          }
        }
        else {
          while (piVar7 != (int *)0x0) {
            piVar3 = (int *)piVar7[2];
            iVar6 = *piVar7;
            local_74 = (int)piVar11;
            while (piVar7 = piVar3, local_74 != 0) {
              FUN_005162a0(local_c0,0);
              cVar5 = FUN_004ed600(*(undefined4 *)((int)piVar2 + 10),*(undefined4 *)(iVar6 + 0x12));
              piVar11 = local_40;
              if (cVar5 != '\0') {
                piVar7 = (int *)local_1c[0xb];
                goto joined_r0x006935da;
              }
            }
          }
          local_8 = CONCAT31(local_8._1_3_,6);
          local_44 = &PTR_FUN_007e6eac;
          while (piVar11 != (int *)0x0) {
            iVar6 = *(int *)((int)piVar11 + 8);
            FUN_00796cd8(piVar11);
            piVar11 = (int *)iVar6;
          }
        }
        goto LAB_0069378f;
      }
LAB_00693798:
      piVar7 = local_2c;
    } while (local_2c != (int *)0x0);
    if (local_24 != 0.0) {
      FUN_006a9d50();
      local_2c = (int *)0x0;
      piVar7 = local_9c;
      while ((piVar7 != (int *)0x0 && ((int)local_2c < local_20))) {
        piVar11 = (int *)piVar7[2];
        iVar6 = *piVar7;
        iVar12 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
        local_2c = (int *)((int)local_2c + iVar12);
        *(int *)(iVar6 + 0x298) = local_50;
        *(float *)(iVar6 + 0x294) = local_24;
        if ((float)*(int *)(iVar6 + 0xc) != local_24) {
          iVar12 = FUN_0051b230();
          iVar12 = *(int *)(iVar12 + 0x482);
          iVar8 = FUN_004e9370(local_24);
          if (iVar12 == *(int *)(iVar8 + 0x482)) {
            uVar17 = 0;
            uVar15 = FUN_004e9370(local_24,0);
            FUN_006aaff0(iVar6,uVar15,uVar17);
          }
        }
        (**(code **)(**(int **)((int)local_18 + 0x7e) + 0x1a8))(iVar6);
        piVar7 = piVar11;
      }
      piVar7 = (int *)FUN_004e9370(local_24);
      piVar11 = (int *)FUN_004e9370(local_50);
      iVar6 = *(int *)((int)local_18 + 10);
      uVar15 = (**(code **)(*piVar7 + 0xc))();
      uVar15 = (**(code **)(*piVar11 + 0xc))(local_2c,local_20,uVar15);
      uVar15 = (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))(uVar15);
      FUN_007a630a(local_8d0,s__s_initializing_invasion_of__s_w_00867ecc,uVar15);
      FUN_00458570(local_8d0);
      FUN_0068f420(local_8d0);
      piVar7 = local_b0;
      do {
        piVar11 = (int *)piVar7[2];
        FUN_00796cd8(piVar7);
        piVar7 = piVar11;
      } while (piVar11 != (int *)0x0);
      local_6c = &PTR_FUN_007e6eac;
      piVar7 = local_68;
      while (piVar7 != (int *)0x0) {
        piVar11 = (int *)piVar7[2];
        FUN_00796cd8(piVar7);
        piVar7 = piVar11;
      }
      local_68 = (int *)0x0;
      local_64 = 0;
      local_60 = 0;
      local_8 = local_8 & 0xffffff00;
      FUN_00527230();
      local_8c = &PTR_LAB_007e3ff0;
      piVar7 = local_88;
      while (piVar7 != (int *)0x0) {
        piVar11 = (int *)piVar7[2];
        FUN_00796cd8(piVar7);
        piVar7 = piVar11;
      }
      ExceptionList = local_10;
      return;
    }
    local_2c = (int *)0x0;
    local_24 = 0.0;
    piVar7 = local_b0;
    while (piVar7 != (int *)0x0) {
      piVar11 = (int *)piVar7[2];
      FUN_00796cd8(piVar7);
      piVar7 = piVar11;
    }
  }
  local_6c = &PTR_FUN_007e6eac;
  piVar7 = local_68;
  while (piVar7 != (int *)0x0) {
    piVar11 = (int *)piVar7[2];
    FUN_00796cd8(piVar7);
    piVar7 = piVar11;
  }
  local_68 = (int *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_8 = local_8 & 0xffffff00;
  FUN_00527230();
  local_8c = &PTR_LAB_007e3ff0;
  piVar7 = local_88;
  if (local_88 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
  do {
    piVar11 = (int *)piVar7[2];
    FUN_00796cd8(piVar7);
    piVar7 = piVar11;
  } while (piVar11 != (int *)0x0);
  ExceptionList = local_10;
  return;
joined_r0x00692e2b:
  iVar12 = local_78;
  local_78 = iVar12;
  local_30 = iVar6;
  if (piVar7 != (int *)0x0) {
    iVar8 = *piVar7;
    local_58 = (int *)piVar7[2];
    piVar7 = local_58;
    if ((*(char *)(iVar8 + 0x470) != '\0') && (0 < *(int *)(iVar8 + 0x182))) {
      local_20 = FUN_006b8ee0(*(undefined4 *)(iVar8 + 0x12));
      local_14 = (float)local_20;
      piVar7 = local_58;
      if (((*(char *)(iVar6 + 0x40) == '\0') || (iVar6 = local_30, _DAT_007e3380 < local_14)) &&
         (iVar6 = local_30, _DAT_007e3380 <= local_14)) {
        if ((local_14 == _DAT_007e3380) && (cVar5 = FUN_004e4b60(), cVar5 != '\0')) {
          local_20 = *(int *)(iVar8 + 0x19e);
          local_24 = (float)local_20 * _DAT_007e4088;
          iVar6 = FUN_004ece90();
          if (iVar6 != 0) {
            iVar6 = FUN_004ece90();
            local_24 = *(float *)(iVar6 + 0x10) * _DAT_007e4090 + local_24;
          }
          iVar6 = FUN_004ece80();
          if (iVar6 != 0) {
            iVar6 = FUN_004ece80();
            local_24 = *(float *)(iVar6 + 0x10) * _DAT_007e4090 + local_24;
          }
          fVar14 = (float10)FUN_004ed140();
          piVar7 = local_58;
          iVar6 = local_30;
          if ((float10)*(float *)(iVar8 + 0x20a) + (float10)*(float *)(iVar8 + 0x20a) +
              (float10)*(float *)(iVar8 + 0x202) * (float10)_DAT_007e4090 +
              (float10)*(float *)(iVar8 + 0x1fe) * (float10)_DAT_007e4090 +
              fVar14 * (float10)_DAT_007e682c + (float10)local_24 +
              (float10)*(float *)(iVar8 + 0x206) < (float10)_DAT_007e681c) goto joined_r0x00692e2b;
        }
        cVar5 = FUN_006a0c10(*(undefined4 *)(iVar8 + 0x12));
        piVar7 = local_58;
        iVar6 = local_30;
        if (cVar5 == '\0') {
          if ((*(int *)(local_b8 + 6) == 0x157) &&
             (*(int *)(iVar8 + 0x3d4) != *(int *)((int)local_18 + 10))) {
            uVar15 = FUN_006a9d50();
            cVar5 = FUN_0044b300(uVar15);
            piVar7 = local_58;
            iVar6 = local_30;
            if (cVar5 == '\0') goto joined_r0x00692e2b;
          }
          iVar9 = FUN_00692220(iVar8);
          iVar4 = local_30;
          if ((((DAT_0087b630 == '\0') && (6 < iVar9)) && (iVar12 < iVar9)) &&
             (iVar9 = iVar9 / 2, iVar9 < 2)) {
            iVar9 = 1;
          }
          piVar7 = local_58;
          iVar6 = local_30;
          if (((local_70 == (int *)0x0) || (iVar9 < 4)) &&
             ((iVar9 <= iVar12 && (iVar9 / 2 <= local_74 / (local_c4 + 1))))) {
            local_cc = *(float *)(local_30 + 10);
            local_14 = local_14 / (*(float *)(local_30 + 6) + _DAT_007e46cc);
            local_d0 = (int)ROUND(local_cc);
            iVar6 = local_d0;
            if (local_d0 < 1) {
              iVar6 = 1;
            }
            local_20 = _rand();
            local_20 = local_20 % (iVar6 * 10);
            local_14 = (float)local_20 + local_14;
            fVar14 = (float10)FUN_004ed6d0(local_c8);
            piVar7 = local_58;
            iVar6 = local_30;
            if (fVar14 <= (float10)*(float *)(iVar4 + 0x1a)) {
              local_14 = (float)((float10)local_14 -
                                fVar14 * (float10)*(float *)(iVar4 + 0x16) * (float10)_DAT_007e4090)
              ;
              iVar6 = FUN_00527630(0);
              if (0 < iVar6) {
                fVar14 = (float10)FUN_004ed020();
                local_14 = (float)((float10)local_14 -
                                  fVar14 * (float10)*(float *)(iVar4 + 0xe) * (float10)_DAT_007e4088
                                  );
              }
              cVar5 = FUN_004e4b60();
              if (cVar5 != '\0') {
                local_14 = (*(float *)(iVar4 + 0x26) - _DAT_007e3374) * _DAT_007e68c8 + local_14;
              }
              iVar6 = (**(code **)(*local_bc + 4))();
              if (iVar6 == 1) {
                local_14 = (*(float *)(iVar4 + 0x22) - _DAT_007e3374) * _DAT_007e68c8 + local_14;
              }
              local_20 = FUN_00527630(0);
              local_14 = local_14 - (float)local_20 * *(float *)(iVar4 + 0x2a) * _DAT_007e6818;
              iVar6 = FUN_004ece80();
              if (iVar6 != 0) {
                iVar6 = FUN_004ece80();
                local_14 = *(float *)(iVar6 + 0x10) * *(float *)(iVar4 + 0x32) * _DAT_007e4088 +
                           local_14;
              }
              iVar6 = FUN_004ece90();
              if (iVar6 != 0) {
                iVar6 = FUN_004ece90();
                local_14 = *(float *)(iVar6 + 0x10) * *(float *)(iVar4 + 0x36) * _DAT_007e4088 +
                           local_14;
              }
              local_24 = 0.0;
              if (0 < *(int *)(iVar8 + 0x290)) {
                local_20 = 0;
                do {
                  puVar10 = (undefined4 *)(*(int *)(iVar8 + 0x298) + local_20);
                  if (puVar10[1] != 4) {
                    iVar6 = FUN_004e9370(*puVar10);
                    if (((*(int *)(iVar6 + 0x254) != 8) && (*(int *)(iVar6 + 0x254) != 9)) &&
                       (iVar12 = *(int *)(iVar6 + 0x3d8), iVar12 != 0)) {
                      if (*(char *)(*(int *)(*(int *)((int)local_18 + 10) + 0x12da) +
                                   *(int *)(iVar12 + 6) * 0x2c + 0x2c) == '\0') {
                        piVar7 = local_58;
                        iVar6 = local_30;
                        if (iVar12 == *(int *)((int)local_18 + 10)) goto joined_r0x00692e2b;
                        uVar15 = FUN_006a9d50();
                        cVar5 = FUN_0044b300(uVar15);
                        piVar7 = local_58;
                        iVar6 = local_30;
                        if (cVar5 != '\0') goto joined_r0x00692e2b;
                      }
                      else {
                        local_54 = FUN_00527630(0);
                        iVar6 = local_30;
                        local_14 = local_14 -
                                   (float)local_54 * *(float *)(local_30 + 0x2e) * _DAT_007e682c;
                        iVar12 = FUN_004ece80();
                        if (iVar12 != 0) {
                          iVar12 = FUN_004ece80();
                          local_14 = *(float *)(iVar12 + 0x10) * *(float *)(iVar6 + 0x32) *
                                     _DAT_007e682c + local_14;
                        }
                        iVar6 = FUN_004ece90();
                        if (iVar6 != 0) {
                          iVar6 = FUN_004ece90();
                          local_14 = *(float *)(iVar6 + 0x10) * *(float *)(local_30 + 0x36) *
                                     _DAT_007e682c + local_14;
                        }
                      }
                    }
                  }
                  local_24 = (float)((int)local_24 + 1);
                  local_20 = local_20 + 0xc;
                } while ((int)local_24 < *(int *)(iVar8 + 0x290));
              }
              piVar7 = local_58;
              iVar6 = local_30;
              if ((local_4c < local_14) &&
                 (fVar14 = (float10)FUN_00695690(iVar8), piVar7 = local_58, iVar6 = local_30,
                 fVar14 <= (float10)*(float *)(local_30 + 0x1e))) {
                local_50 = *(int *)(iVar8 + 0x12);
                local_4c = local_14;
              }
            }
          }
        }
      }
    }
    goto joined_r0x00692e2b;
  }
  local_8._1_3_ = (uint3)(local_8 >> 8);
  local_8._0_1_ = 4;
  local_44 = &PTR_FUN_007e6eac;
  piVar11 = local_1c;
  param_1 = local_18;
  piVar7 = local_40;
  while (local_1c = piVar11, local_18 = param_1, piVar7 != (int *)0x0) {
    piVar2 = (int *)piVar7[2];
    FUN_00796cd8(piVar7);
    piVar11 = local_1c;
    param_1 = local_18;
    piVar7 = piVar2;
  }
  local_40 = (int *)0x0;
  local_3c = 0;
  local_38 = 0;
LAB_0069330c:
  piVar7 = piVar11;
  if (piVar11 == (int *)0x0) goto LAB_00693317;
  goto LAB_00692d59;
joined_r0x006935da:
  if (piVar7 != (int *)0x0) {
    iVar6 = *piVar7;
    local_70 = (int *)piVar7[2];
    piVar7 = local_70;
    if ((((*(char *)(iVar6 + 0x470) != '\0') &&
         (iVar12 = FUN_004ece90(), piVar7 = local_70, iVar12 != 0)) &&
        (cVar5 = FUN_006a0ca0(*(undefined4 *)(iVar6 + 0x12)), piVar7 = local_70, cVar5 == '\0')) &&
       ((fVar14 = (float10)FUN_0044a9c0(*(undefined4 *)(iVar6 + 0x12),local_50), piVar7 = local_70,
        fVar14 <= (float10)*(float *)(local_30 + 0x1e) && (*(int *)(iVar6 + 0x3dc) != 0)))) {
      uVar15 = *(undefined4 *)((int)local_58 + 0x3dc);
      uVar17 = *(undefined4 *)((int)local_18 + 10);
      FUN_004e9370(*(int *)(iVar6 + 0x3dc),uVar17,uVar15);
      cVar5 = FUN_004ed600(uVar17,uVar15);
      piVar7 = local_70;
      if (cVar5 != '\0') {
        fVar14 = (float10)FUN_004ed6d0(local_50);
        local_14 = (float)-fVar14;
        piVar7 = local_9c;
joined_r0x00693691:
        if (piVar7 != (int *)0x0) {
          piVar11 = (int *)piVar7[2];
          iVar12 = *piVar7;
          piVar7 = piVar11;
          if (*(int *)(iVar12 + 0xc) != *(int *)(iVar6 + 0x12)) goto LAB_006936b7;
          local_54 = (**(code **)(*(int *)(iVar12 + 0x22) + 4))();
          fVar1 = (float)local_54 + (float)local_54;
          goto LAB_006936dd;
        }
        piVar11 = (int *)FUN_0044e1d0();
        piVar7 = local_1c;
        if (piVar11 == local_1c) {
          local_14 = local_14 + _DAT_007e384c;
        }
        cVar5 = (**(code **)(*(int *)(local_30 + 0x58) + 0x24))(*(undefined4 *)(iVar6 + 0x12));
        if (cVar5 != '\0') {
          local_14 = local_14 + _DAT_007e3844;
        }
        iVar12 = (**(code **)(piVar7[10] + 4))();
        fVar1 = local_14;
        if (iVar12 == 1) {
          fVar1 = local_14 - _DAT_007e67d4;
        }
        piVar7 = local_70;
        if (local_4c < fVar1) {
          local_24 = *(float *)(iVar6 + 0x12);
          local_4c = fVar1;
        }
      }
    }
    goto joined_r0x006935da;
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  local_44 = &PTR_FUN_007e6eac;
  iVar6 = (int)local_40;
  while (iVar6 != 0) {
    iVar12 = *(int *)(iVar6 + 8);
    FUN_00796cd8(iVar6);
    iVar6 = iVar12;
  }
LAB_0069378f:
  local_38 = 0;
  local_3c = 0;
  local_40 = (int *)0x0;
  piVar11 = local_48;
  if (local_48 == (int *)0x0) goto LAB_00693798;
  goto LAB_006934f4;
LAB_006936b7:
  iVar8 = FUN_0051b230();
  if (*(int *)(iVar8 + 0x482) == *(int *)(iVar6 + 0x482)) {
    local_54 = (**(code **)(*(int *)(iVar12 + 0x22) + 4))();
    fVar1 = (float)local_54;
LAB_006936dd:
    local_14 = fVar1 + local_14;
  }
  goto joined_r0x00693691;
}


