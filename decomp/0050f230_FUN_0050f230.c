// FUN_0050f230 @ 50f230 size=12781

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0050f230(uint param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint *puVar16;
  float10 fVar17;
  float10 fVar18;
  uint in_stack_fffffda0;
  ushort uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined2 uVar25;
  undefined4 uVar23;
  undefined1 *puVar24;
  undefined4 uVar26;
  undefined4 **ppuVar27;
  uint **ppuVar28;
  uint local_234 [64];
  undefined4 local_134 [5];
  float local_120;
  undefined4 local_e8 [5];
  float local_d4;
  undefined1 local_9c [8];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined2 local_58 [2];
  int local_54;
  int local_50;
  undefined4 local_48;
  uint local_44;
  undefined4 *local_40;
  uint *local_3c;
  undefined4 *local_38;
  char local_31;
  undefined4 *local_30;
  int *local_2c;
  uint *local_28;
  int *local_24;
  int *local_20;
  char local_19;
  undefined4 *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar15 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c19f2;
  local_10 = ExceptionList;
  uVar6 = param_2[3];
  piVar12 = (int *)(param_1 + 8);
  if ((uVar6 == *(uint *)(param_1 + 8)) && (*(int *)(param_1 + 4) == 2)) {
    *(undefined4 *)(param_1 + 4) = 0;
    return uVar6;
  }
  ExceptionList = &local_10;
  local_44 = param_1;
  if ((*(int *)(param_1 + 4) == 0x14) &&
     (ExceptionList = &local_10, iVar5 = (**(code **)(*(int *)param_2[0xa5] + 4))(), iVar5 < 1)) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar6 = FUN_0042e980();
    if ((char)uVar6 != '\0') {
      ExceptionList = local_10;
      return uVar6;
    }
    uVar10 = *(undefined4 *)((int)param_2 + 0x212);
    FUN_0050bba0(param_2,1,uVar10);
    pvVar7 = operator_new(0xc);
    uVar8 = 0;
    local_8 = 0;
    if (pvVar7 != (void *)0x0) {
      uVar8 = 1;
      uVar25 = 0;
      puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      uVar8 = FUN_00516760(param_2 + 6,uVar10,*puVar9,CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),
                           uVar8);
    }
    local_8 = 0xffffffff;
    uVar6 = FUN_00565c30(uVar8);
    ExceptionList = local_10;
    return uVar6;
  }
  if (((*(int *)(param_1 + 4) == 0x14) &&
      (iVar5 = FUN_004f0a80(), *(int *)(iVar5 + 0xc) == param_2[3])) &&
     (uVar6 = FUN_004ef790(), (char)uVar6 == '\0')) {
    *(undefined4 *)(param_1 + 4) = 0;
    ExceptionList = local_10;
    return uVar6;
  }
  uVar6 = FUN_0042e980();
  if ((char)uVar6 == '\0') {
    ExceptionList = local_10;
    return uVar6;
  }
  if (*(int *)(param_1 + 4) == 3) {
    uVar6 = FUN_0045fed0(param_2,*piVar12);
    ExceptionList = local_10;
    return uVar6;
  }
  iVar5 = (**(code **)(param_2[0x47] + 4))();
  if (((iVar5 == 0) && (*(int *)((int)param_2 + 0x176) == 0)) &&
     ((cVar4 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar4 != '\0' &&
      (*(char *)((int)param_2 + 0x17b) == '\0')))) {
    if (((*(int *)(param_1 + 0x1e) == 0) && (iVar5 = FUN_004f0a80(), iVar5 != 0)) &&
       (iVar5 = FUN_004f0a80(), *(int *)(iVar5 + 0xc) != param_2[3])) {
      iVar5 = FUN_004f0a80();
      uVar10 = *(undefined4 *)(iVar5 + 0xc);
      FUN_0050bba0(param_2,1,uVar10);
      pvVar7 = operator_new(0xc);
      local_8 = 1;
      goto joined_r0x0050f70c;
    }
    if ((*(int *)(param_1 + 0x1e) == 1) &&
       (cVar4 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar4 != '\0')) {
      local_14 = *(uint **)((int)param_2 + 0x26);
      do {
        if (local_14 == (uint *)0x0) {
          if (param_2[3] != *(int *)(param_1 + 0x22)) {
            local_18 = operator_new(0xc);
            local_8 = 2;
            if (local_18 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              local_58[0] = *(undefined2 *)(param_1 + 0x22);
              local_20 = (int *)((uint)local_20 & 0xff000000);
              FUN_004c0990(0x34,&DAT_0088f24c);
              *local_18 = &PTR_FUN_007e7804;
              local_54 = local_18[1];
              *(undefined2 *)(local_54 + 0x14) = local_58[0];
              *(int *)(local_54 + 0xe) = param_2[6];
              *(short *)(local_54 + 0x12) = (short)param_2[7];
              *(undefined1 *)(local_54 + 0x16) = 1;
              *(int **)(local_54 + 0x18) = local_20;
              *(undefined2 *)(local_54 + 0x1c) = 0;
              puVar9 = local_18;
            }
            local_8 = 0xffffffff;
            FUN_00565c30(puVar9);
            goto LAB_0050f5e2;
          }
          if (param_2[3] == *(int *)((int)param_2 + 0x212)) goto LAB_0050f5e2;
          if (*(int *)(param_1 + 4) != 0) goto LAB_0050f5ed;
          iVar5 = FUN_004f0a80();
          if (iVar5 == 0) goto LAB_0050f5e2;
          iVar5 = FUN_004f0a80();
          uVar10 = *(undefined4 *)(iVar5 + 0xc);
          FUN_0050bba0(param_2,1,uVar10);
          pvVar7 = operator_new(0xc);
          local_8 = 3;
          goto joined_r0x0050f70c;
        }
        puVar9 = (undefined4 *)FUN_00499730(&local_20,0);
        local_18 = *(undefined4 **)*puVar9;
        local_2c = (int *)local_18[0x3d];
        fVar17 = (float10)FUN_004fd510();
      } while ((fVar17 * (float10)*(float *)(param_1 + 0x2e) <= (float10)(float)local_2c) &&
              ((float)local_18[0x3c] * *(float *)(param_1 + 0xc) <= (float)local_18[0x3b]));
      if ((*(int *)((int)param_2 + 0x212) != param_2[3]) &&
         ((((cVar4 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar4 != '\0' &&
            (iVar5 = (**(code **)(param_2[0x47] + 4))(), iVar5 == 0)) &&
           (*(char *)((int)param_2 + 0x17b) == '\0')) && (*(int *)((int)param_2 + 0x176) == 0)))) {
        FUN_00512660(param_2,*(undefined4 *)((int)param_2 + 0x212));
      }
    }
  }
LAB_0050f5e2:
  if (*(int *)(param_1 + 4) != 0) {
LAB_0050f5ed:
    if (((*(short *)(param_1 + 0x1c) != 0) &&
        (cVar4 = FUN_0042dd70(DAT_00893530 + 0x14), cVar4 == '\0')) &&
       ((param_2[3] != *(int *)((int)param_2 + 0x212) &&
        (cVar4 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar4 != '\0')))) {
      uVar10 = *(undefined4 *)((int)param_2 + 0x212);
      FUN_0050bba0(param_2,1,uVar10);
      pvVar7 = operator_new(0xc);
      local_8 = 4;
      goto joined_r0x0050f70c;
    }
    if (((*(int *)(param_1 + 4) != 0) && (*(short *)(param_1 + 0x1c) != 0)) &&
       (cVar4 = FUN_0042dd70(DAT_00893530 + 0x14), cVar4 == '\0')) {
      iVar5 = param_2[3];
      uVar26 = 1;
      uVar23 = 0xbf800000;
      uVar22 = 0;
      uVar21 = 1;
      uVar20 = 0;
      uVar8 = 0xffffffff;
      uVar10 = 1;
      uVar25 = 0x50;
      puVar9 = (undefined4 *)FUN_0042d2d0(1,0xffffffff,0,1,0,0xbf800000,1);
      in_stack_fffffda0 = CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1));
      piVar12 = (int *)*puVar9;
      goto LAB_0050f7a1;
    }
  }
  local_28 = (uint *)param_2[0x92];
  local_19 = DAT_00dc1741;
  local_48 = *(undefined4 *)((int)local_28 + 6);
  cVar4 = (**(code **)(*local_28 + 0x1c))();
  if ((cVar4 != '\0') && (cVar4 = FUN_006a8720(), cVar4 == '\0')) {
    local_19 = DAT_00dc1742;
  }
  uVar19 = (ushort)(in_stack_fffffda0 >> 0x10);
  uVar6 = *(uint *)(param_1 + 4);
  switch(uVar6) {
  case 0:
    uVar6 = *(uint *)(param_1 + 0x1e);
    if (uVar6 == 0) {
      iVar5 = FUN_004f0a80();
      uVar6 = 0;
      if (iVar5 != 0) {
        iVar5 = FUN_004f0a80();
        uVar6 = *(uint *)(iVar5 + 0xc);
        if (uVar6 != param_2[3]) {
          iVar5 = FUN_004f0a80();
          uVar10 = *(undefined4 *)(iVar5 + 0xc);
          FUN_0050bba0(param_2,1,uVar10);
          pvVar7 = operator_new(0xc);
          local_8 = 5;
joined_r0x0050f70c:
          if (pvVar7 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar8 = 1;
            uVar25 = 0;
            puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            uVar10 = FUN_00516760(param_2 + 6,uVar10,*puVar9,
                                  CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),uVar8);
          }
          local_8 = 0xffffffff;
          uVar6 = FUN_00565c30(uVar10);
          ExceptionList = local_10;
          return uVar6;
        }
      }
    }
    break;
  case 9:
    cVar4 = FUN_0050c0d0(param_2);
    if (cVar4 != '\0') {
      local_40 = operator_new(0x12);
      if (local_40 == (undefined4 *)0x0) {
        local_40 = (undefined4 *)0x0;
      }
      else {
        *local_40 = &PTR_FUN_007e6eac;
        local_40[1] = 0;
        local_40[2] = 0;
        local_40[3] = 0;
        *(undefined1 *)(local_40 + 4) = 0;
      }
      local_24 = (int *)0x0;
      switch(*(undefined4 *)(param_1 + 0x26)) {
      case 1:
        uVar10 = FUN_004e9370(*piVar12);
        puVar9 = local_40;
        local_14 = (uint *)local_40[2];
        local_20 = operator_new(0xe);
        local_8 = 6;
        if (local_20 == (int *)0x0) {
          local_24 = (int *)0x0;
        }
        else {
          local_24 = (int *)FUN_0049a780(uVar10,local_14,0);
        }
        iVar5 = puVar9[3];
        local_8 = 0xffffffff;
        puVar9[2] = local_24;
        puVar9[3] = iVar5 + 1;
        if (iVar5 == 0) {
          puVar9[1] = local_24;
        }
        else {
          local_14[2] = (uint)local_24;
          local_24 = (int *)puVar9[1];
        }
        break;
      case 2:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        break;
      case 3:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        break;
      case 0xffffffff:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      }
      local_2c = (int *)0x0;
      local_3c = (uint *)0x0;
      uVar6 = 0;
      if (local_24 != (int *)0x0) {
        do {
          iVar5 = *local_24;
          local_24 = (int *)local_24[2];
          if (((*(char *)(iVar5 + 0x180) == '\0') &&
              (((*(int *)(iVar5 + 0x3ac) < 4 || (5 < *(int *)(iVar5 + 0x3ac))) &&
               (cVar4 = FUN_005216c0(iVar5), cVar4 != '\0')))) &&
             ((local_19 == '\0' || (cVar4 = FUN_004f0300(iVar5), cVar4 != '\0')))) {
            iVar13 = _rand();
            local_30 = (undefined4 *)(iVar13 % 5);
            local_28 = (uint *)(float)(int)local_30;
            puVar9 = *(undefined4 **)(*(int *)(iVar5 + 0x1c2) + 4);
            while (puVar9 != (undefined4 *)0x0) {
              puVar14 = (undefined4 *)puVar9[2];
              local_14 = (uint *)*puVar9;
              cVar4 = (**(code **)(*local_14 + 0x30))();
              puVar9 = puVar14;
              if ((cVar4 != '\0') && (cVar4 = FUN_0044b280(local_48), cVar4 != '\0')) {
                fVar17 = (float10)(**(code **)(*local_14 + 0xa4))();
                local_28 = (uint *)(float)(fVar17 * (float10)_DAT_007e7bc0 +
                                          (float10)(float)local_28);
              }
            }
            local_38 = (undefined4 *)(*(float *)(param_2[0x92] + 0xe384) * _DAT_008774a0);
            if ((*(int *)(iVar5 + 0x3d8) != 0) && (cVar4 = FUN_0044a690(local_48), cVar4 != '\0')) {
              local_38 = (undefined4 *)(_DAT_00877344 + (float)local_38);
              if (_DAT_007e3380 < *(float *)(*(int *)(iVar5 + 0x1e6) + 0x14)) {
                local_38 = (undefined4 *)
                           (*(float *)(*(int *)(iVar5 + 0x3d8) + 0xe864) *
                            *(float *)(*(int *)(iVar5 + 0x1e6) + 0x14) * _DAT_00877340 +
                           (float)local_38);
              }
            }
            local_50 = (int)ROUND((float)local_38);
            iVar13 = _rand();
            if ((iVar13 % 0x65 <= local_50) &&
               (local_30 = (undefined4 *)0x0, 0 < *(int *)(iVar5 + 0x290))) {
              local_18 = (undefined4 *)0x0;
              do {
                iVar13 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar5 + 0x298) + (int)local_18));
                puVar9 = *(undefined4 **)(*(int *)(iVar13 + 0x1c2) + 4);
                while (puVar9 != (undefined4 *)0x0) {
                  puVar14 = (undefined4 *)puVar9[2];
                  piVar12 = (int *)*puVar9;
                  cVar4 = (**(code **)(*piVar12 + 0x30))();
                  puVar9 = puVar14;
                  if (cVar4 != '\0') {
                    local_14 = *(uint **)(iVar5 + 0x12);
                    puVar16 = (uint *)FUN_00523f70();
                    if ((puVar16 == local_14) && (cVar4 = FUN_0044b280(local_48), cVar4 != '\0')) {
                      fVar17 = (float10)(**(code **)(*piVar12 + 0xa4))();
                      local_28 = (uint *)(float)(fVar17 * (float10)_DAT_007e67f8 +
                                                (float10)(float)local_28);
                    }
                  }
                }
                local_30 = (undefined4 *)((int)local_30 + 1);
                local_18 = local_18 + 3;
              } while ((int)local_30 < *(int *)(iVar5 + 0x290));
            }
            if ((float)local_3c < (float)local_28) {
              local_2c = *(int **)(iVar5 + 0x12);
              local_3c = local_28;
            }
          }
          piVar12 = local_2c;
        } while (local_24 != (int *)0x0);
        uVar6 = 0;
        if (local_2c != (int *)0x0) {
          FUN_0050bba0(param_2,1,local_2c);
          pvVar7 = operator_new(0xc);
          local_8 = 7;
          if (pvVar7 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = 1;
            uVar25 = 0;
            puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            uVar10 = FUN_00516760(param_2 + 6,piVar12,*puVar9,
                                  CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),uVar10);
          }
          local_8 = 0xffffffff;
          uVar6 = FUN_00565c30(uVar10);
        }
      }
      if (local_40 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)*local_40)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    if ((*(int *)(param_1 + 0x1e) != 1) || (uVar6 = *(uint *)(param_1 + 0x22), uVar6 != param_2[3]))
    {
      uVar6 = (**(code **)(param_2[0x47] + 4))();
      if (uVar6 != 0) {
        ExceptionList = local_10;
        return uVar6;
      }
      if (*(uint *)((int)param_2 + 0x212) == param_2[3]) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x212);
      }
      uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
      if ((char)uVar6 == '\0') {
        ExceptionList = local_10;
        return uVar6;
      }
      iVar5 = param_2[0x47];
LAB_00510d52:
      uVar6 = (**(code **)(iVar5 + 4))();
      if (uVar6 != 0) {
        ExceptionList = local_10;
        return uVar6;
      }
      if (*(byte *)((int)param_2 + 0x17b) != 0) {
        ExceptionList = local_10;
        return (uint)*(byte *)((int)param_2 + 0x17b);
      }
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      uVar6 = FUN_00512660(param_2,*(undefined4 *)((int)param_2 + 0x212));
      ExceptionList = local_10;
      return uVar6;
    }
    goto LAB_00512403;
  case 10:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 != '\0') && (*(int *)((int)param_2 + 0x176) == 0)) {
      local_14 = operator_new(0x12);
      if (local_14 == (uint *)0x0) {
        local_14 = (uint *)0x0;
      }
      else {
        *local_14 = (uint)&PTR_FUN_007e6eac;
        local_14[1] = 0;
        local_14[2] = 0;
        local_14[3] = 0;
        *(undefined1 *)(local_14 + 4) = 0;
      }
      local_24 = (int *)0x0;
      switch(*(undefined4 *)(param_1 + 0x26)) {
      case 1:
        uVar10 = FUN_004e9370(*piVar12);
        puVar16 = local_14;
        local_2c = (int *)local_14[2];
        local_20 = operator_new(0xe);
        local_8 = 8;
        if (local_20 == (int *)0x0) {
          local_24 = (int *)0x0;
        }
        else {
          local_24 = (int *)FUN_0049a780(uVar10,local_2c,0);
        }
        uVar6 = puVar16[3];
        local_8 = 0xffffffff;
        puVar16[2] = (uint)local_24;
        puVar16[3] = uVar6 + 1;
        if (uVar6 == 0) {
          puVar16[1] = (uint)local_24;
        }
        else {
          local_2c[2] = (int)local_24;
          local_24 = (int *)puVar16[1];
        }
        break;
      case 2:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        break;
      case 3:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        break;
      case 0xffffffff:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      }
      puVar16 = local_28;
      local_18 = (undefined4 *)0x0;
      local_30 = (undefined4 *)0x0;
      local_40 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
      if (local_24 == (int *)0x0) goto LAB_005100da;
      local_3c = local_234;
      do {
        piVar12 = (int *)*local_24;
        local_24 = (int *)local_24[2];
        local_20 = piVar12;
        if ((((char)piVar12[0x60] == '\0') && ((piVar12[0xeb] < 4 || (5 < piVar12[0xeb])))) &&
           ((local_19 == '\0' || (cVar4 = FUN_004f0300(piVar12), cVar4 != '\0')))) {
          if (*(char *)((int)piVar12 + 0x46e) == '\0') {
            if ((int)local_40 < 0x40) {
              *local_3c = *(uint *)((int)piVar12 + 0x12);
              local_40 = (undefined4 *)((int)local_40 + 1);
              local_3c = local_3c + 1;
            }
          }
          else {
            local_38 = (undefined4 *)0x0;
            local_28 = (uint *)0x0;
            local_31 = '\0';
            local_2c = *(int **)(*(int *)((int)piVar12 + 0x1c2) + 4);
            if (local_2c != (int *)0x0) {
              do {
                piVar12 = (int *)*local_2c;
                local_2c = (int *)local_2c[2];
                if ((((*(char *)((int)piVar12 + 0x17d) == '\0') && (piVar12[0x92] != 0)) &&
                    (cVar4 = (**(code **)(*piVar12 + 0x28))(), cVar4 != '\0')) &&
                   (cVar4 = FUN_0044b280(local_48), cVar4 != '\0')) {
                  fVar17 = (float10)FUN_0051a470();
                  local_28 = (uint *)(float)(fVar17 + (float10)(float)local_28);
                  piVar12 = (int *)piVar12[0x48];
                  while (piVar12 != (int *)0x0) {
                    piVar15 = piVar12 + 2;
                    iVar5 = *piVar12;
                    piVar12 = (int *)*piVar15;
                    if (*(int *)(iVar5 + 0x74) == 1) {
                      piVar3 = *(int **)(*(int *)(iVar5 + 0x80) + 0x2c);
                      while (piVar3 != (int *)0x0) {
                        piVar1 = (int *)piVar3[2];
                        puVar2 = (uint *)(&DAT_0089cad8)[*piVar3];
                        piVar3 = piVar1;
                        if ((puVar2 != (uint *)0x0) &&
                           ((puVar2 == puVar16 ||
                            (((puVar2[0xcd4] != 0 && (puVar16[0xcd4] != 0)) &&
                             (puVar2[0xcd4] == puVar16[0xcd4])))))) {
                          local_31 = '\x01';
                        }
                      }
                      piVar3 = *(int **)(*(int *)(iVar5 + 0x84) + 0x2c);
                      while (piVar3 != (int *)0x0) {
                        piVar1 = (int *)piVar3[2];
                        puVar2 = (uint *)(&DAT_0089cad8)[*piVar3];
                        piVar3 = piVar1;
                        if ((puVar2 != (uint *)0x0) &&
                           ((puVar2 == puVar16 ||
                            (((puVar2[0xcd4] != 0 && (puVar16[0xcd4] != 0)) &&
                             (puVar2[0xcd4] == puVar16[0xcd4])))))) {
                          local_31 = '\x01';
                        }
                      }
                    }
                  }
                }
              } while (local_2c != (int *)0x0);
              if (local_31 == '\x01') {
                iVar5 = _rand();
                iVar13 = __ftol();
                local_50 = iVar5 % (iVar13 + 1);
                local_38 = (undefined4 *)
                           ((float)local_28 * _DAT_007e6800 + (float)local_50 + _DAT_007e3374);
              }
              else if (_DAT_007e3380 < (float)local_28) {
                local_38 = (undefined4 *)(_DAT_007e3374 / (float)local_28);
              }
            }
            if ((float)local_30 < (float)local_38) {
              local_30 = local_38;
              local_18 = *(undefined4 **)((int)local_20 + 0x12);
            }
          }
        }
        puVar14 = local_40;
      } while (local_24 != (int *)0x0);
      puVar9 = local_18;
      if (local_18 == (undefined4 *)0x0) {
        if ((int)local_40 < 1) goto LAB_005100da;
        iVar5 = _rand();
        puVar9 = (undefined4 *)(iVar5 / (int)puVar14);
        local_18 = (undefined4 *)local_234[iVar5 % (int)puVar14];
        if (local_18 == (undefined4 *)0x0) goto LAB_005100da;
      }
      puVar14 = local_18;
      if ((undefined4 *)param_2[3] != local_18) {
        FUN_0050bba0(param_2,1,local_18);
        pvVar7 = operator_new(0xc);
        local_8 = 9;
        if (pvVar7 == (void *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
          uVar25 = 0;
          puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          uVar10 = FUN_00516760(param_2 + 6,puVar14,*puVar9,
                                CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),uVar10);
        }
        local_8 = 0xffffffff;
        puVar9 = (undefined4 *)FUN_00565c30(uVar10);
      }
LAB_005100da:
      if (local_14 == (uint *)0x0) {
        ExceptionList = local_10;
        return (uint)puVar9;
      }
      uVar6 = (**(code **)*local_14)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    if ((*(int *)(param_1 + 0x1e) != 1) || (uVar6 = *(uint *)(param_1 + 0x22), uVar6 != param_2[3]))
    {
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      if (*(uint *)((int)param_2 + 0x212) == param_2[3]) {
        ExceptionList = local_10;
        return param_2[3];
      }
      uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
      if ((char)uVar6 == '\0') {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)(param_2[0x47] + 4))();
      if (uVar6 != 0) {
        ExceptionList = local_10;
        return uVar6;
      }
      if (*(byte *)((int)param_2 + 0x17b) != 0) {
        ExceptionList = local_10;
        return (uint)*(byte *)((int)param_2 + 0x17b);
      }
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      uVar6 = FUN_00512660(param_2,*(undefined4 *)((int)param_2 + 0x212));
      ExceptionList = local_10;
      return uVar6;
    }
    goto LAB_00512403;
  case 0xb:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 != '\0') && (*(int *)((int)param_2 + 0x176) == 0)) {
      local_2c = operator_new(0x12);
      if (local_2c == (undefined4 *)0x0) {
        local_2c = (undefined4 *)0x0;
      }
      else {
        *local_2c = (int)&PTR_FUN_007e6eac;
        local_2c[1] = 0;
        local_2c[2] = 0;
        local_2c[3] = 0;
        *(undefined1 *)(local_2c + 4) = 0;
      }
      local_24 = (int *)0x0;
      switch(*(undefined4 *)(param_1 + 0x26)) {
      case 1:
        uVar10 = FUN_004e9370(*piVar12);
        piVar12 = local_2c;
        local_14 = (uint *)local_2c[2];
        local_20 = operator_new(0xe);
        local_8 = 10;
        if (local_20 == (int *)0x0) {
          local_24 = (int *)0x0;
        }
        else {
          local_24 = (int *)FUN_0049a780(uVar10,local_14,0);
        }
        iVar5 = piVar12[3];
        local_8 = 0xffffffff;
        piVar12[2] = (int)local_24;
        piVar12[3] = iVar5 + 1;
        if (iVar5 == 0) {
          piVar12[1] = (int)local_24;
        }
        else {
          local_14[2] = (uint)local_24;
          local_24 = (int *)piVar12[1];
        }
        break;
      case 2:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        break;
      case 3:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        break;
      case 0xffffffff:
        iVar5 = FUN_004e9370(*piVar12);
        local_24 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      }
      puVar16 = local_28;
      uVar6 = 0;
      local_38 = (undefined4 *)0x0;
      local_30 = (undefined4 *)0x0;
      local_40 = (undefined4 *)0x0;
      if (local_24 == (int *)0x0) goto LAB_005105a8;
      local_3c = local_234;
      do {
        iVar5 = *local_24;
        local_24 = (int *)local_24[2];
        local_50 = iVar5;
        if (((*(char *)(iVar5 + 0x180) == '\0') &&
            ((*(int *)(iVar5 + 0x3ac) < 4 || (5 < *(int *)(iVar5 + 0x3ac))))) &&
           ((local_19 == '\0' || (cVar4 = FUN_004f0300(iVar5), cVar4 != '\0')))) {
          if (*(char *)(iVar5 + 0x46e) == '\0') {
            if ((int)local_40 < 0x40) {
              *local_3c = *(uint *)(iVar5 + 0x12);
              local_40 = (undefined4 *)((int)local_40 + 1);
              local_3c = local_3c + 1;
            }
          }
          else {
            local_18 = (undefined4 *)0x0;
            local_28 = (uint *)0x0;
            local_31 = '\0';
            local_14 = *(uint **)(*(int *)(iVar5 + 0x1c2) + 4);
            if (local_14 != (uint *)0x0) {
              do {
                piVar12 = (int *)*local_14;
                local_14 = (uint *)local_14[2];
                if ((((*(char *)((int)piVar12 + 0x17d) == '\0') && (piVar12[0x92] != 0)) &&
                    (cVar4 = (**(code **)(*piVar12 + 0x28))(), cVar4 != '\0')) &&
                   (cVar4 = FUN_0044b280(local_48), cVar4 != '\0')) {
                  fVar17 = (float10)FUN_0051a470();
                  local_28 = (uint *)(float)(fVar17 + (float10)(float)local_28);
                  piVar12 = (int *)piVar12[0x48];
                  while (piVar12 != (int *)0x0) {
                    piVar15 = piVar12 + 2;
                    iVar5 = *piVar12;
                    piVar12 = (int *)*piVar15;
                    if (*(int *)(iVar5 + 0x74) == 1) {
                      piVar3 = *(int **)(*(int *)(iVar5 + 0x80) + 0x2c);
                      while (piVar3 != (int *)0x0) {
                        piVar1 = (int *)piVar3[2];
                        puVar2 = (uint *)(&DAT_0089cad8)[*piVar3];
                        piVar3 = piVar1;
                        if ((puVar2 != (uint *)0x0) &&
                           ((puVar2 == puVar16 ||
                            (((puVar2[0xcd4] != 0 && (puVar16[0xcd4] != 0)) &&
                             (puVar2[0xcd4] == puVar16[0xcd4])))))) {
                          local_31 = '\x01';
                        }
                      }
                      piVar3 = *(int **)(*(int *)(iVar5 + 0x84) + 0x2c);
                      while (piVar3 != (int *)0x0) {
                        piVar1 = (int *)piVar3[2];
                        puVar2 = (uint *)(&DAT_0089cad8)[*piVar3];
                        piVar3 = piVar1;
                        if ((puVar2 != (uint *)0x0) &&
                           ((puVar2 == puVar16 ||
                            (((puVar2[0xcd4] != 0 && (puVar16[0xcd4] != 0)) &&
                             (puVar2[0xcd4] == puVar16[0xcd4])))))) {
                          local_31 = '\x01';
                        }
                      }
                    }
                  }
                }
              } while (local_14 != (uint *)0x0);
              if (local_31 == '\x01') {
                iVar5 = _rand();
                iVar13 = __ftol();
                local_20 = (int *)(iVar5 % (iVar13 + 1));
                local_18 = (undefined4 *)
                           ((float)local_28 * _DAT_007e6800 + (float)(int)local_20 + _DAT_007e3374);
              }
              else if (_DAT_007e3380 < (float)local_28) {
                local_18 = (undefined4 *)(_DAT_007e3374 / (float)local_28);
              }
            }
            if ((float)local_30 < (float)local_18) {
              local_30 = local_18;
              local_38 = *(undefined4 **)(local_50 + 0x12);
            }
          }
        }
        puVar9 = local_40;
      } while (local_24 != (int *)0x0);
      if (local_38 == (undefined4 *)0x0) {
        uVar6 = 0;
        if ((int)local_40 < 1) goto LAB_005105a8;
        iVar5 = _rand();
        uVar6 = iVar5 / (int)puVar9;
        local_38 = (undefined4 *)local_234[iVar5 % (int)puVar9];
        if (local_38 == (undefined4 *)0x0) goto LAB_005105a8;
      }
      puVar9 = local_38;
      FUN_0050bba0(param_2,1,local_38);
      pvVar7 = operator_new(0xc);
      local_8 = 0xb;
      if (pvVar7 == (void *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
        uVar25 = 0;
        puVar14 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        uVar10 = FUN_00516760(param_2 + 6,puVar9,*puVar14,
                              CONCAT22(uVar25,*(undefined2 *)(puVar14 + 1)),uVar10);
      }
      local_8 = 0xffffffff;
      uVar6 = FUN_00565c30(uVar10);
LAB_005105a8:
      if (local_2c == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)*local_2c)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    if ((*(int *)(param_1 + 0x1e) != 1) || (uVar6 = *(uint *)(param_1 + 0x22), uVar6 != param_2[3]))
    {
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      if (*(uint *)((int)param_2 + 0x212) == param_2[3]) {
        ExceptionList = local_10;
        return param_2[3];
      }
      uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
      if ((char)uVar6 == '\0') {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)(param_2[0x47] + 4))();
      if (uVar6 != 0) {
        ExceptionList = local_10;
        return uVar6;
      }
      if (*(byte *)((int)param_2 + 0x17b) != 0) {
        ExceptionList = local_10;
        return (uint)*(byte *)((int)param_2 + 0x17b);
      }
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      uVar6 = FUN_00512660(param_2,*(undefined4 *)((int)param_2 + 0x212));
      ExceptionList = local_10;
      return uVar6;
    }
    goto LAB_00512403;
  case 0xc:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 == '\0') || (*(int *)((int)param_2 + 0x176) != 0)) {
      if ((*(int *)(param_1 + 0x1e) != 1) ||
         (uVar6 = param_2[3], *(uint *)(param_1 + 0x22) != uVar6)) {
        if (*(uint *)((int)param_2 + 0x176) != 0) {
          ExceptionList = local_10;
          return *(uint *)((int)param_2 + 0x176);
        }
        if (*(uint *)((int)param_2 + 0x212) == param_2[3]) {
          ExceptionList = local_10;
          return param_2[3];
        }
        uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
        if ((char)uVar6 == '\0') {
          ExceptionList = local_10;
          return uVar6;
        }
        uVar6 = (**(code **)(param_2[0x47] + 4))();
        if (uVar6 != 0) {
          ExceptionList = local_10;
          return uVar6;
        }
        if (*(byte *)((int)param_2 + 0x17b) != 0) {
          ExceptionList = local_10;
          return (uint)*(byte *)((int)param_2 + 0x17b);
        }
        if (*(uint *)((int)param_2 + 0x176) != 0) {
          ExceptionList = local_10;
          return *(uint *)((int)param_2 + 0x176);
        }
        uVar6 = FUN_00512660(param_2,*(undefined4 *)((int)param_2 + 0x212));
        ExceptionList = local_10;
        return uVar6;
      }
      goto LAB_00512403;
    }
    puVar9 = (undefined4 *)FUN_00525c20();
    puVar14 = local_134;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar14 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar9;
    if (local_120 == _DAT_007e3380) {
      ExceptionList = local_10;
      return 0;
    }
    local_18 = operator_new(0x12);
    if (local_18 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      *(undefined1 *)(local_18 + 4) = 0;
      *local_18 = &PTR_FUN_007e6eac;
    }
    piVar15 = (int *)0x0;
    iVar5 = 1;
    switch(*(undefined4 *)(local_44 + 0x26)) {
    case 1:
      uVar10 = FUN_004e9370(*piVar12);
      puVar9 = local_18;
      local_14 = (uint *)local_18[2];
      puVar14 = operator_new(0xe);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        *puVar14 = uVar10;
        puVar14[1] = local_14;
        puVar14[2] = 0;
        *(undefined1 *)(puVar14 + 3) = 0;
      }
      iVar13 = puVar9[3];
      puVar9[2] = puVar14;
      puVar9[3] = iVar13 + 1;
      if (iVar13 == 0) {
        puVar9[1] = puVar14;
        piVar15 = (int *)local_18[1];
      }
      else {
        local_14[2] = (uint)puVar14;
        piVar15 = (int *)local_18[1];
      }
      break;
    case 2:
      iVar5 = FUN_004e9370(*piVar12);
      piVar15 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      iVar5 = FUN_004e9370(*piVar12);
      iVar5 = (**(code **)(*(int *)((int)&DAT_008ea368 + *(int *)(iVar5 + 0x288) * 0x12) + 4))();
      break;
    case 3:
      iVar5 = FUN_004e9370(*piVar12);
      piVar15 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
      iVar5 = FUN_004e9370(*piVar12);
      piVar12 = (int *)((int)&DAT_008e9778 + *(int *)(iVar5 + 0x28c) * 0x12);
LAB_00511328:
      iVar5 = (**(code **)(*piVar12 + 4))();
      break;
    case 0xffffffff:
      iVar5 = FUN_004e9370(*piVar12);
      piVar15 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      iVar5 = FUN_004e9370(*piVar12);
      piVar12 = (int *)((int)&DAT_008ea368 + *(int *)(iVar5 + 0x288) * 0x12);
      goto LAB_00511328;
    }
    local_3c = (uint *)0x0;
    local_30 = (undefined4 *)0x0;
    iVar13 = _rand();
    uVar6 = iVar13 / iVar5;
    iVar13 = iVar13 % iVar5;
    local_14 = (uint *)0x0;
    if (piVar15 != (int *)0x0) {
      do {
        piVar12 = (int *)piVar15[2];
        iVar13 = iVar13 + -1;
        iVar5 = *piVar15;
        uVar6 = (uint)*(byte *)(iVar5 + 0x180);
        if (((*(byte *)(iVar5 + 0x180) == 0) &&
            (((uVar6 = *(uint *)(iVar5 + 0x3ac), (int)uVar6 < 4 || (5 < (int)uVar6)) &&
             (*(int *)(iVar5 + 0x3d8) != 0)))) &&
           ((uVar6 = FUN_0044b280(local_48), (char)uVar6 != '\0' &&
            ((local_19 == '\0' || (uVar6 = FUN_004f0300(iVar5), (char)uVar6 != '\0')))))) {
          if ((iVar13 < 1) && (local_14 == (uint *)0x0)) {
            local_14 = *(uint **)(iVar5 + 0x12);
          }
          fVar17 = (float10)(**(code **)(*local_28 + 0x46c))(local_134,local_134,iVar5);
          uVar6 = 0;
          if ((float10)(float)local_30 < fVar17) {
            local_30 = (undefined4 *)(float)fVar17;
            local_3c = *(uint **)(iVar5 + 0x12);
          }
        }
        piVar15 = piVar12;
      } while (piVar12 != (int *)0x0);
      puVar16 = local_3c;
      if ((local_3c != (uint *)0x0) || (puVar16 = local_14, local_14 != (uint *)0x0)) {
        FUN_0050bba0(param_2,1,puVar16);
        uVar6 = 0x511407;
        pvVar7 = operator_new(0xc);
        local_8 = 0x11;
        if (pvVar7 == (void *)0x0) {
          uVar10 = 0;
        }
        else {
          local_20 = (int *)((uint)local_20 & 0xff000000);
          uVar10 = FUN_00516760(param_2 + 6,puVar16,local_20,uVar6 & 0xffff0000,1);
        }
        local_8 = 0xffffffff;
        uVar6 = FUN_00565c30(uVar10);
      }
    }
    if (local_18 != (undefined4 *)0x0) {
      uVar6 = (**(code **)*local_18)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    break;
  case 0xd:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 != '\0') && (*(int *)((int)param_2 + 0x176) == 0)) {
      puVar9 = (undefined4 *)FUN_00525c20();
      puVar14 = local_e8;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined2 *)puVar14 = *(undefined2 *)puVar9;
      if (local_d4 == _DAT_007e3380) {
        ExceptionList = local_10;
        return 0;
      }
      local_18 = operator_new(0x12);
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        *(undefined1 *)(local_18 + 4) = 0;
        *local_18 = &PTR_FUN_007e6eac;
      }
      piVar15 = (int *)0x0;
      iVar5 = 1;
      switch(*(undefined4 *)(local_44 + 0x26)) {
      case 1:
        uVar10 = FUN_004e9370(*piVar12);
        puVar9 = local_18;
        local_14 = (uint *)local_18[2];
        local_20 = operator_new(0xe);
        local_8 = 0xe;
        if (local_20 == (int *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0049a780(uVar10,local_14,0);
        }
        iVar13 = puVar9[3];
        local_8 = 0xffffffff;
        puVar9[2] = uVar6;
        puVar9[3] = iVar13 + 1;
        if (iVar13 == 0) {
          puVar9[1] = uVar6;
          piVar15 = (int *)local_18[1];
        }
        else {
          local_14[2] = uVar6;
          piVar15 = (int *)local_18[1];
        }
        break;
      case 3:
        iVar5 = FUN_004e9370(*piVar12);
        piVar15 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        iVar5 = FUN_004e9370(*piVar12);
        iVar5 = (**(code **)(*(int *)((int)&DAT_008e9778 + *(int *)(iVar5 + 0x28c) * 0x12) + 4))();
        break;
      case 0xffffffff:
      case 2:
        iVar5 = FUN_004e9370(*piVar12);
        piVar15 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        iVar5 = FUN_004e9370(*piVar12);
        iVar5 = (**(code **)(*(int *)((int)&DAT_008ea368 + *(int *)(iVar5 + 0x288) * 0x12) + 4))();
      }
      local_3c = (uint *)0x0;
      local_30 = (undefined4 *)0x0;
      iVar13 = _rand();
      uVar6 = iVar13 / iVar5;
      iVar13 = iVar13 % iVar5;
      local_14 = (uint *)0x0;
      if (piVar15 != (int *)0x0) {
        do {
          piVar12 = (int *)piVar15[2];
          iVar13 = iVar13 + -1;
          iVar5 = *piVar15;
          uVar6 = (uint)*(byte *)(iVar5 + 0x180);
          if ((((*(byte *)(iVar5 + 0x180) == 0) &&
               (((uVar6 = *(uint *)(iVar5 + 0x3ac), (int)uVar6 < 4 || (5 < (int)uVar6)) &&
                (*(int *)(iVar5 + 0x3d8) != 0)))) &&
              (uVar6 = FUN_0044b280(local_48), (char)uVar6 != '\0')) &&
             ((local_19 == '\0' || (uVar6 = FUN_004f0300(iVar5), (char)uVar6 != '\0')))) {
            fVar17 = (float10)FUN_004ecea0();
            uVar6 = 0;
            if ((float10)_DAT_007e5dd0 <= fVar17) {
              if ((iVar13 < 1) && (local_14 == (uint *)0x0)) {
                local_14 = *(uint **)(iVar5 + 0x12);
              }
              fVar17 = (float10)(**(code **)(*local_28 + 0x464))(local_e8,local_e8,iVar5);
              uVar6 = 0;
              if ((float10)(float)local_30 < fVar17) {
                local_3c = *(uint **)(iVar5 + 0x12);
                local_30 = (undefined4 *)(float)fVar17;
              }
            }
          }
          piVar15 = piVar12;
        } while (piVar12 != (int *)0x0);
        puVar16 = local_3c;
        if ((local_3c != (uint *)0x0) || (puVar16 = local_14, local_14 != (uint *)0x0)) {
          FUN_0050bba0(param_2,1,puVar16);
          pvVar7 = operator_new(0xc);
          local_8 = 0xf;
          if (pvVar7 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = 1;
            uVar25 = 0;
            puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            uVar10 = FUN_00516760(param_2 + 6,puVar16,*puVar9,
                                  CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),uVar10);
          }
          local_8 = 0xffffffff;
          uVar6 = FUN_00565c30(uVar10);
        }
      }
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)*local_18)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    if ((*(int *)(param_1 + 0x1e) != 1) || (uVar6 = *(uint *)(param_1 + 0x22), uVar6 != param_2[3]))
    {
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      if (*(uint *)((int)param_2 + 0x212) == param_2[3]) {
        ExceptionList = local_10;
        return param_2[3];
      }
      uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
      if ((char)uVar6 == '\0') {
        ExceptionList = local_10;
        return uVar6;
      }
      iVar5 = param_2[0x47];
      goto LAB_00510d52;
    }
    goto LAB_00512403;
  case 0xe:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 != '\0') && (*(int *)((int)param_2 + 0x176) == 0)) {
      puVar9 = (undefined4 *)FUN_00525c20();
      puVar14 = local_e8;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined2 *)puVar14 = *(undefined2 *)puVar9;
      if (local_d4 == _DAT_007e3380) {
        ExceptionList = local_10;
        return 0;
      }
      local_18 = operator_new(0x12);
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        *(undefined1 *)(local_18 + 4) = 0;
        *local_18 = &PTR_FUN_007e6eac;
      }
      piVar15 = (int *)0x0;
      iVar5 = 1;
      switch(*(undefined4 *)(local_44 + 0x26)) {
      case 1:
        uVar10 = FUN_004e9370(*piVar12);
        puVar9 = local_18;
        local_14 = (uint *)local_18[2];
        local_20 = operator_new(0xe);
        local_8 = 0xc;
        if (local_20 == (int *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0049a780(uVar10,local_14,0);
        }
        iVar13 = puVar9[3];
        local_8 = 0xffffffff;
        puVar9[2] = uVar6;
        puVar9[3] = iVar13 + 1;
        if (iVar13 == 0) {
          puVar9[1] = uVar6;
          piVar15 = (int *)local_18[1];
        }
        else {
          local_14[2] = uVar6;
          piVar15 = (int *)local_18[1];
        }
        break;
      case 3:
        iVar5 = FUN_004e9370(*piVar12);
        piVar15 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        iVar5 = FUN_004e9370(*piVar12);
        iVar5 = (**(code **)(*(int *)((int)&DAT_008e9778 + *(int *)(iVar5 + 0x28c) * 0x12) + 4))();
        break;
      case 0xffffffff:
      case 2:
        iVar5 = FUN_004e9370(*piVar12);
        piVar15 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        iVar5 = FUN_004e9370(*piVar12);
        iVar5 = (**(code **)(*(int *)((int)&DAT_008ea368 + *(int *)(iVar5 + 0x288) * 0x12) + 4))();
      }
      local_3c = (uint *)0x0;
      local_30 = (undefined4 *)0x0;
      iVar13 = _rand();
      uVar6 = iVar13 / iVar5;
      iVar13 = iVar13 % iVar5;
      local_14 = (uint *)0x0;
      if (piVar15 != (int *)0x0) {
        do {
          piVar12 = (int *)piVar15[2];
          iVar13 = iVar13 + -1;
          iVar5 = *piVar15;
          uVar6 = (uint)*(byte *)(iVar5 + 0x180);
          if ((*(byte *)(iVar5 + 0x180) == 0) &&
             ((uVar6 = *(uint *)(iVar5 + 0x3ac), (int)uVar6 < 4 || (5 < (int)uVar6)))) {
            iVar11 = FUN_004ece80();
            uVar6 = 0;
            if ((iVar11 != 0) && (uVar6 = FUN_0044b280(local_48), (char)uVar6 != '\0')) {
              iVar11 = FUN_004ece80();
              uVar6 = 0;
              if ((_DAT_007e6800 <= *(float *)(iVar11 + 0x14)) &&
                 ((local_19 == '\0' || (uVar6 = FUN_004f0300(iVar5), (char)uVar6 != '\0')))) {
                if ((iVar13 < 1) && (local_14 == (uint *)0x0)) {
                  local_14 = *(uint **)(iVar5 + 0x12);
                }
                fVar17 = (float10)(**(code **)(*local_28 + 0x468))(local_e8,local_e8,iVar5);
                uVar6 = 0;
                if ((float10)(float)local_30 < fVar17) {
                  local_3c = *(uint **)(iVar5 + 0x12);
                  local_30 = (undefined4 *)(float)fVar17;
                }
              }
            }
          }
          piVar15 = piVar12;
        } while (piVar12 != (int *)0x0);
        puVar16 = local_3c;
        if ((local_3c != (uint *)0x0) || (puVar16 = local_14, local_14 != (uint *)0x0)) {
          FUN_0050bba0(param_2,1,puVar16);
          pvVar7 = operator_new(0xc);
          local_8 = 0xd;
          if (pvVar7 == (void *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = 1;
            uVar25 = 0;
            puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            uVar10 = FUN_00516760(param_2 + 6,puVar16,*puVar9,
                                  CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),uVar10);
          }
          local_8 = 0xffffffff;
          uVar6 = FUN_00565c30(uVar10);
        }
      }
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)*local_18)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    if ((*(int *)(param_1 + 0x1e) != 1) || (uVar6 = *(uint *)(param_1 + 0x22), uVar6 != param_2[3]))
    {
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      if (*(uint *)((int)param_2 + 0x212) == param_2[3]) {
        ExceptionList = local_10;
        return param_2[3];
      }
      uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
      if ((char)uVar6 == '\0') {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)(param_2[0x47] + 4))();
      if (uVar6 != 0) {
        ExceptionList = local_10;
        return uVar6;
      }
      if (*(byte *)((int)param_2 + 0x17b) != 0) {
        ExceptionList = local_10;
        return (uint)*(byte *)((int)param_2 + 0x17b);
      }
      if (*(uint *)((int)param_2 + 0x176) != 0) {
        ExceptionList = local_10;
        return *(uint *)((int)param_2 + 0x176);
      }
      uVar6 = FUN_00512660(param_2,*(undefined4 *)((int)param_2 + 0x212));
      ExceptionList = local_10;
      return uVar6;
    }
    goto LAB_00512403;
  case 0xf:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 == '\0') || (*(int *)((int)param_2 + 0x176) != 0)) {
      if ((*(int *)(param_1 + 0x1e) != 1) ||
         (uVar6 = param_2[3], *(uint *)(param_1 + 0x22) != uVar6)) {
        if (*(uint *)((int)param_2 + 0x176) != 0) {
          ExceptionList = local_10;
          return *(uint *)((int)param_2 + 0x176);
        }
        if (*(uint *)((int)param_2 + 0x212) == param_2[3]) {
          ExceptionList = local_10;
          return param_2[3];
        }
        uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))();
        if ((char)uVar6 == '\0') {
          ExceptionList = local_10;
          return uVar6;
        }
        uVar6 = (**(code **)(param_2[0x47] + 4))();
        if (uVar6 != 0) {
          ExceptionList = local_10;
          return uVar6;
        }
        if (*(byte *)((int)param_2 + 0x17b) != 0) {
          ExceptionList = local_10;
          return (uint)*(byte *)((int)param_2 + 0x17b);
        }
        if (*(uint *)((int)param_2 + 0x176) != 0) {
          ExceptionList = local_10;
          return *(uint *)((int)param_2 + 0x176);
        }
        uVar6 = FUN_00512660(param_2,*(undefined4 *)((int)param_2 + 0x212));
        ExceptionList = local_10;
        return uVar6;
      }
      goto LAB_00512403;
    }
    puVar9 = (undefined4 *)FUN_00525c20();
    puVar14 = local_e8;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar14 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar9;
    if (local_d4 == _DAT_007e3380) {
      ExceptionList = local_10;
      return 0;
    }
    local_18 = operator_new(0x12);
    piVar15 = (int *)0x0;
    if (local_18 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      *(undefined1 *)(local_18 + 4) = 0;
      *local_18 = &PTR_FUN_007e6eac;
    }
    iVar5 = 1;
    switch(*(undefined4 *)(local_44 + 0x26)) {
    case 1:
      iVar13 = FUN_004e9370(*piVar12);
      puVar9 = local_18;
      local_14 = (uint *)local_18[2];
      piVar15 = operator_new(0xe);
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        *piVar15 = iVar13;
        piVar15[1] = (int)local_14;
        piVar15[2] = 0;
        *(undefined1 *)(piVar15 + 3) = 0;
      }
      iVar13 = puVar9[3];
      puVar9[2] = piVar15;
      puVar9[3] = iVar13 + 1;
      if (iVar13 == 0) {
        puVar9[1] = piVar15;
      }
      else {
        local_14[2] = (uint)piVar15;
        piVar15 = (int *)puVar9[1];
      }
      break;
    case 2:
      iVar5 = FUN_004e9370(*piVar12);
      piVar15 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      iVar5 = FUN_004e9370(*piVar12);
      iVar5 = (**(code **)(*(int *)((int)&DAT_008ea368 + *(int *)(iVar5 + 0x288) * 0x12) + 4))();
      break;
    case 3:
      iVar5 = FUN_004e9370(*piVar12);
      piVar15 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
      iVar5 = FUN_004e9370(*piVar12);
      piVar12 = (int *)((int)&DAT_008e9778 + *(int *)(iVar5 + 0x28c) * 0x12);
LAB_00510f37:
      iVar5 = (**(code **)(*piVar12 + 4))();
      break;
    case 0xffffffff:
      iVar5 = FUN_004e9370(*piVar12);
      piVar15 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      iVar5 = FUN_004e9370(*piVar12);
      piVar12 = (int *)((int)&DAT_008ea368 + *(int *)(iVar5 + 0x288) * 0x12);
      goto LAB_00510f37;
    }
    piVar12 = (int *)0x0;
    local_30 = (undefined4 *)0x0;
    iVar13 = _rand();
    uVar6 = iVar13 / iVar5;
    local_14 = (uint *)(iVar13 % iVar5);
    local_2c = (int *)0x0;
    if (piVar15 != (int *)0x0) {
      do {
        piVar3 = (int *)piVar15[2];
        local_14 = (uint *)((int)local_14 + -1);
        iVar5 = *piVar15;
        uVar6 = (uint)*(byte *)(iVar5 + 0x180);
        if (((*(byte *)(iVar5 + 0x180) == 0) &&
            (((((uVar6 = *(uint *)(iVar5 + 0x3ac), (int)uVar6 < 4 || (5 < (int)uVar6)) &&
               (*(int *)(iVar5 + 0x3d8) != 0)) &&
              (uVar6 = FUN_0044b280(local_48), (char)uVar6 != '\0')) &&
             ((local_19 == '\0' || (uVar6 = FUN_004f0300(iVar5), (char)uVar6 != '\0')))))) &&
           (uVar6 = 0,
           *(float *)(*(int *)(iVar5 + 0x1d6) + 0x14) + *(float *)(*(int *)(iVar5 + 0x1e6) + 0x14) +
           *(float *)(*(int *)(iVar5 + 0x1ea) + 0x14) + *(float *)(*(int *)(iVar5 + 0x1ee) + 0x14)
           != _DAT_007e3380)) {
          if (((int)local_14 < 1) && (local_2c == (int *)0x0)) {
            local_2c = *(int **)(iVar5 + 0x12);
          }
          fVar17 = (float10)(**(code **)(*local_28 + 0x474))(local_e8,local_e8,iVar5);
          uVar6 = 0;
          if ((float10)(float)local_30 < fVar17) {
            local_30 = (undefined4 *)(float)fVar17;
            piVar12 = *(int **)(iVar5 + 0x12);
          }
        }
        piVar15 = piVar3;
      } while (piVar3 != (int *)0x0);
      if ((piVar12 != (int *)0x0) || (piVar12 = local_2c, local_2c != (int *)0x0)) {
        FUN_0050bba0(param_2,1,piVar12);
        uVar6 = 0x511074;
        pvVar7 = operator_new(0xc);
        local_8 = 0x10;
        if (pvVar7 == (void *)0x0) {
          uVar10 = 0;
        }
        else {
          local_20 = (int *)((uint)local_20 & 0xff000000);
          uVar10 = FUN_00516760(param_2 + 6,piVar12,local_20,uVar6 & 0xffff0000,1);
        }
        local_8 = 0xffffffff;
        uVar6 = FUN_00565c30(uVar10);
      }
    }
    if (local_18 != (undefined4 *)0x0) {
      uVar6 = (**(code **)*local_18)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    break;
  case 0x10:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 == '\0') || (*(int *)((int)param_2 + 0x176) != 0)) {
      uVar6 = FUN_005129f0(param_2);
      if ((char)uVar6 == '\0') {
        cVar4 = FUN_00516330();
        goto joined_r0x00511aae;
      }
      goto LAB_00512403;
    }
    puVar9 = operator_new(0x12);
    local_30 = (undefined4 *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *(undefined1 *)(puVar9 + 4) = 0;
      *puVar9 = &PTR_FUN_007e6eac;
      local_30 = puVar9;
    }
    FUN_00516290();
    uVar10 = FUN_00514060();
    switch(uVar10) {
    default:
      goto switchD_005117aa_caseD_0;
    case 1:
      uVar10 = FUN_00514050();
      FUN_004ce950(uVar10);
      puVar24 = local_6c;
      break;
    case 2:
      puVar24 = local_74;
      FUN_00514050(puVar24);
      uVar10 = FUN_00513f50();
      FUN_00512560(uVar10);
      break;
    case 3:
      puVar24 = local_7c;
      FUN_00514050(puVar24);
      uVar10 = FUN_00513f60();
      FUN_00512570(uVar10);
      break;
    case 0xffffffff:
      puVar24 = local_84;
      FUN_00514050(puVar24);
      uVar10 = FUN_00513f50();
      FUN_00512560(uVar10);
    }
    uVar10 = FUN_00516270(puVar24);
    FUN_005162d0(uVar10);
switchD_005117aa_caseD_0:
    local_24 = (int *)0x0;
    local_38 = (undefined4 *)0x0;
    uVar6 = FUN_005162c0();
    if ((char)uVar6 != '\0') {
      do {
        FUN_005162a0(local_5c,0);
        iVar5 = FUN_005162b0();
        local_50 = iVar5;
        cVar4 = FUN_00514000();
        if ((((cVar4 == '\0') && (cVar4 = FUN_004e8f30(), cVar4 == '\0')) &&
            (cVar4 = FUN_0050c570(iVar5), cVar4 == '\0')) &&
           ((local_19 == '\0' || (cVar4 = FUN_004f0300(iVar5), cVar4 != '\0')))) {
          ppuVar28 = &local_14;
          local_18 = (undefined4 *)0x0;
          local_2c = (int *)0x0;
          FUN_00513fe0(ppuVar28);
          FUN_004986f0(ppuVar28);
          cVar4 = FUN_00498730();
          while (cVar4 != '\0') {
            FUN_00498700(local_8c,0);
            piVar12 = (int *)FUN_00498710();
            local_20 = piVar12;
            cVar4 = (**(code **)(*piVar12 + 0x2c))();
            if (cVar4 != '\0') {
              uVar10 = local_48;
              FUN_00494b80(local_48);
              cVar4 = FUN_0044b280(uVar10);
              if (cVar4 == '\0') {
                FUN_00494b80();
                iVar5 = FUN_00465c40();
                iVar13 = FUN_00465c40();
                if (iVar5 == iVar13) {
                  fVar17 = (float10)(**(code **)(*local_20 + 0xa4))();
                  local_2c = (int *)(float)(fVar17 * (float10)_DAT_007e87a0 +
                                           (float10)(float)local_2c);
                }
              }
              else {
                fVar17 = (float10)(**(code **)(*piVar12 + 0xa4))();
                local_18 = (undefined4 *)(float)(fVar17 + (float10)(float)local_18);
              }
            }
            cVar4 = FUN_00498730();
          }
          cVar4 = FUN_00513f70();
          puVar9 = local_18;
          if (cVar4 != '\0') {
            piVar12 = (int *)FUN_00494b80();
            cVar4 = (**(code **)(*piVar12 + 0x1c))();
            puVar9 = local_18;
            if (cVar4 == '\0') {
              iVar5 = _rand();
              local_20 = (int *)(iVar5 % 5 + 1);
              puVar9 = (undefined4 *)((float)(int)local_20 + (float)local_18);
            }
          }
          if (_DAT_007e3380 < (float)puVar9) {
            puVar9 = (undefined4 *)((float)puVar9 + (float)local_2c);
          }
          if ((float)local_38 < (float)puVar9) {
            local_38 = puVar9;
            local_24 = (int *)FUN_0048b970();
          }
        }
        cVar4 = FUN_005162c0();
      } while (cVar4 != '\0');
      uVar6 = 0;
      if (local_24 != (int *)0x0) {
        uVar6 = FUN_00512660(param_2,local_24);
      }
    }
    if (local_30 != (undefined4 *)0x0) {
      uVar6 = (**(code **)*local_30)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    break;
  case 0x11:
    FUN_00494b80();
    uVar10 = FUN_00458280();
    FUN_00514050(uVar10);
    FUN_00513f90();
    cVar4 = FUN_0044b280(uVar10);
    if (cVar4 == '\0') {
      uVar6 = FUN_0050bca0(param_2);
      ExceptionList = local_10;
      return uVar6;
    }
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 != '\0') && (cVar4 = FUN_00516330(), cVar4 == '\0')) {
      FUN_00512660(param_2,*piVar12);
    }
    uVar6 = FUN_005129f0(param_2);
    if ((char)uVar6 == '\0') {
      cVar4 = FUN_00516330();
joined_r0x00511aae:
      if (cVar4 == '\0') goto LAB_00511ac0;
LAB_00511ab0:
      uVar6 = FUN_0050c360(param_2);
      if ((char)uVar6 == '\0') {
        ExceptionList = local_10;
        return uVar6;
      }
LAB_00511ac0:
      uVar6 = FUN_005125f0(param_2);
      ExceptionList = local_10;
      return uVar6;
    }
    goto LAB_00512403;
  case 0x12:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 == '\0') || (cVar4 = FUN_00516330(), cVar4 != '\0')) goto LAB_00511ab0;
    local_20 = operator_new(0x12);
    local_8 = 0x14;
    if (local_20 == (int *)0x0) {
      local_30 = (undefined4 *)0x0;
    }
    else {
      local_30 = (undefined4 *)FUN_004cd2f0();
    }
    local_8 = 0xffffffff;
    FUN_00516290();
    uVar10 = FUN_00514060();
    switch(uVar10) {
    default:
      goto switchD_00511b3a_caseD_0;
    case 1:
      uVar10 = FUN_00514050();
      FUN_004ce950(uVar10);
      puVar24 = local_88;
      break;
    case 2:
      puVar24 = local_70;
      FUN_00514050(puVar24);
      uVar10 = FUN_00513f50();
      FUN_00512560(uVar10);
      break;
    case 3:
      puVar24 = local_94;
      FUN_00514050(puVar24);
      uVar10 = FUN_00513f60();
      FUN_00512570(uVar10);
      break;
    case 0xffffffff:
      puVar24 = local_68;
      FUN_00514050(puVar24);
      uVar10 = FUN_00513f50();
      FUN_00512560(uVar10);
    }
    uVar10 = FUN_00516270(puVar24);
    FUN_005162d0(uVar10);
switchD_00511b3a_caseD_0:
    local_38 = (undefined4 *)0x0;
    local_2c = (undefined4 *)0x0;
    cVar4 = FUN_005162c0();
    if (cVar4 == '\0') {
LAB_00511d19:
      uVar6 = FUN_005125f0(param_2);
    }
    else {
      do {
        FUN_005162a0(local_78,0);
        uVar10 = FUN_005162b0();
        cVar4 = FUN_00514000();
        if (((cVar4 == '\0') && (cVar4 = FUN_0050c570(uVar10), cVar4 == '\0')) &&
           ((local_19 == '\0' || (cVar4 = FUN_004f0300(uVar10), cVar4 != '\0')))) {
          ppuVar28 = &local_14;
          local_18 = (undefined4 *)0x0;
          FUN_00513fa0(ppuVar28);
          FUN_00516230(ppuVar28);
          cVar4 = FUN_00516260();
          while (cVar4 != '\0') {
            FUN_00516240(local_90,0);
            uVar10 = FUN_00516250();
            FUN_00494b80(uVar10);
            cVar4 = FUN_0044b280(uVar10);
            if (cVar4 != '\0') {
              iVar5 = _rand();
              local_20 = (int *)(iVar5 % 10);
              local_18 = (undefined4 *)((float)(int)local_20 + (float)local_18 + _DAT_007e682c);
            }
            cVar4 = FUN_00516260();
          }
          cVar4 = FUN_00513f70();
          puVar9 = local_18;
          if (cVar4 != '\0') {
            piVar12 = (int *)FUN_00494b80();
            cVar4 = (**(code **)(*piVar12 + 0x1c))();
            puVar9 = local_18;
            if (cVar4 == '\0') {
              iVar5 = _rand();
              local_20 = (int *)(iVar5 % 5 + 1);
              puVar9 = (undefined4 *)((float)(int)local_20 + (float)local_18);
            }
          }
          if ((float)local_2c < (float)puVar9) {
            local_2c = puVar9;
            local_38 = (undefined4 *)FUN_0048b970();
          }
        }
        cVar4 = FUN_005162c0();
      } while (cVar4 != '\0');
      if (local_38 == (undefined4 *)0x0) goto LAB_00511d19;
      uVar6 = FUN_00512660(param_2,local_38);
    }
    if (local_30 != (undefined4 *)0x0) {
      uVar6 = (**(code **)*local_30)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    break;
  case 0x13:
    FUN_00494b80();
    uVar10 = FUN_00458280();
    FUN_00514050(uVar10);
    FUN_00513f90();
    cVar4 = FUN_0044b280(uVar10);
    if (cVar4 == '\x01') {
      uVar6 = FUN_0050bca0(param_2);
      ExceptionList = local_10;
      return uVar6;
    }
    cVar4 = FUN_0050c0d0(param_2);
    if (cVar4 != '\0') {
      local_2c = (int *)FUN_00514050();
      uVar10 = FUN_00514010();
      FUN_004e9370(uVar10);
      fVar17 = (float10)FUN_00514030();
      fVar18 = (float10)FUN_00514020();
      if (fVar18 * (float10)_DAT_007e3844 < (float10)(float)fVar17) {
        ExceptionList = local_10;
        return 0;
      }
      ppuVar27 = &local_18;
      local_24 = (int *)0x0;
      local_38 = (undefined4 *)0x51ba43b7;
      FUN_00513f40(ppuVar27);
      FUN_00512580();
      FUN_00516270(ppuVar27);
      cVar4 = FUN_005162c0();
      if (cVar4 != '\0') {
        do {
          FUN_005162a0(local_80,0);
          uVar10 = FUN_005162b0();
          cVar4 = FUN_00514000();
          if (((cVar4 == '\0') && (cVar4 = FUN_0050c570(uVar10), cVar4 == '\0')) &&
             ((local_19 == '\0' || (cVar4 = FUN_004f0300(uVar10), cVar4 != '\0')))) {
            ppuVar28 = &local_14;
            param_2 = (undefined4 *)0x0;
            FUN_00513fe0(ppuVar28);
            FUN_004986f0(ppuVar28);
            cVar4 = FUN_00498730();
            while (cVar4 != '\0') {
              FUN_00498700(local_60,0);
              piVar12 = (int *)FUN_00498710();
              cVar4 = (**(code **)(*piVar12 + 0x30))();
              if (cVar4 != '\0') {
                uVar10 = local_48;
                FUN_00494b80(local_48);
                cVar4 = FUN_0044b280(uVar10);
                if (cVar4 != '\0') {
                  fVar17 = (float10)(**(code **)(*piVar12 + 0xa4))();
                  param_2 = (int *)(float)((float10)(float)param_2 - fVar17);
                }
              }
              cVar4 = FUN_00498730();
            }
            if ((float)param_2 < (float)local_38) {
              local_38 = param_2;
              local_24 = (int *)FUN_0048b970();
            }
          }
          cVar4 = FUN_005162c0();
        } while (cVar4 != '\0');
        if (local_24 != (int *)0x0) {
          uVar6 = FUN_00512660(piVar15,local_24);
          ExceptionList = local_10;
          return uVar6;
        }
      }
      goto LAB_00511f35;
    }
    uVar6 = FUN_00516340();
LAB_00511f2d:
    if ((char)uVar6 == '\0') {
LAB_00511f35:
      uVar6 = FUN_005125f0(piVar15);
      ExceptionList = local_10;
      return uVar6;
    }
    break;
  case 0x14:
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 != '\0') && (iVar5 = (**(code **)(*(int *)param_2[0xa5] + 4))(), 0 < iVar5)) {
      iVar5 = *piVar12;
      FUN_0050bba0(param_2,1,iVar5);
      uVar6 = 0x511546;
      pvVar7 = operator_new(0xc);
      local_8 = 0x12;
      if (pvVar7 == (void *)0x0) {
        uVar10 = 0;
      }
      else {
        local_20 = (int *)((uint)local_20 & 0xff000000);
        uVar10 = FUN_00516760(param_2 + 6,iVar5,local_20,uVar6 & 0xffff0000,1);
      }
      local_8 = 0xffffffff;
      FUN_00565c30(uVar10);
    }
    uVar6 = (**(code **)(*(int *)param_2[0xa5] + 4))();
    if (uVar6 == 0) {
      uVar26 = 1;
      uVar23 = 0xbf800000;
      uVar22 = 0;
      uVar21 = 1;
      uVar20 = 0;
      uVar8 = 0xffffffff;
      uVar10 = 1;
      iVar5 = param_2[3];
      local_20 = (int *)((uint)local_20 & 0xff000000);
      in_stack_fffffda0 = (uint)uVar19 << 0x10;
      piVar12 = local_20;
LAB_0050f7a1:
      uVar25 = 0x50;
      puVar9 = (undefined4 *)
               FUN_0042d2d0(piVar12,in_stack_fffffda0,uVar10,uVar8,uVar20,uVar21,uVar22,uVar23,
                            uVar26);
      uVar6 = FUN_0050b600(param_2,0,iVar5,0,1,1,*puVar9,
                           CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),piVar12,in_stack_fffffda0,
                           uVar10,uVar8,uVar20,uVar21,uVar22,uVar23,uVar26);
      ExceptionList = local_10;
      return uVar6;
    }
    break;
  case 0x15:
    uVar10 = *(undefined4 *)(param_2[0x92] + 6);
    FUN_004e9370(*piVar12);
    cVar4 = FUN_0044b280(uVar10);
    if (cVar4 == '\0') {
      uVar26 = 1;
      uVar23 = 0xbf800000;
      uVar22 = 0;
      uVar21 = 1;
      uVar20 = 0;
      uVar8 = 0xffffffff;
      uVar10 = 1;
      iVar5 = param_2[3];
      local_20 = (int *)((uint)local_20 & 0xff000000);
      in_stack_fffffda0 = in_stack_fffffda0 & 0xffff0000;
      uVar25 = 0x51;
      piVar12 = local_20;
      puVar9 = (undefined4 *)
               FUN_0042d2d0(local_20,in_stack_fffffda0,1,0xffffffff,0,1,0,0xbf800000,1);
      FUN_0050b600(param_2,0,iVar5,0,1,1,*puVar9,CONCAT22(uVar25,*(undefined2 *)(puVar9 + 1)),
                   piVar12,in_stack_fffffda0,uVar10,uVar8,uVar20,uVar21,uVar22,uVar23,uVar26);
    }
    else {
      cVar4 = FUN_0050c0d0(param_2);
      if ((((cVar4 != '\0') && (*(int *)((int)param_2 + 0x176) == 0)) && (param_2[3] != *piVar12))
         && (cVar4 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar4 != '\0')) {
        iVar5 = *piVar12;
        FUN_0050bba0(param_2,1,iVar5);
        uVar6 = 0x5116bb;
        pvVar7 = operator_new(0xc);
        local_8 = 0x13;
        if (pvVar7 == (void *)0x0) {
          uVar10 = 0;
        }
        else {
          local_20 = (int *)((uint)local_20 & 0xff000000);
          uVar10 = FUN_00516760(param_2 + 6,iVar5,local_20,uVar6 & 0xffff0000,1);
        }
        local_8 = 0xffffffff;
        FUN_00565c30(uVar10);
      }
    }
    uVar6 = (**(code **)(*param_2 + 0x7c))();
    if ((char)uVar6 == '\0') {
      uVar26 = 1;
      uVar23 = 0xbf800000;
      uVar22 = 0;
      uVar21 = 1;
      uVar20 = 0;
      uVar8 = 0xffffffff;
      uVar10 = 1;
      iVar5 = param_2[3];
      local_20 = (int *)((uint)local_20 & 0xff000000);
      in_stack_fffffda0 = in_stack_fffffda0 & 0xffff0000;
      piVar12 = local_20;
      goto LAB_0050f7a1;
    }
    break;
  case 0x16:
    uVar6 = FUN_00516370();
    if ((int)uVar6 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      ExceptionList = local_10;
      return uVar6;
    }
    uVar10 = FUN_00516370();
    uVar8 = FUN_004e9370(uVar10);
    uVar10 = local_48;
    FUN_00513f90(local_48);
    cVar4 = FUN_0044a690(uVar10);
    if (cVar4 == '\0') {
      FUN_00513f90();
      uVar10 = FUN_00458280();
      FUN_00490f60(uVar10);
      uVar6 = FUN_005861a0(uVar10);
      if ((char)uVar6 == '\0') {
        *(undefined4 *)(param_1 + 4) = 0;
        ExceptionList = local_10;
        return uVar6;
      }
    }
    cVar4 = FUN_0050c0d0(param_2);
    if ((cVar4 != '\0') && (cVar4 = FUN_00516310(), cVar4 == '\0')) {
      local_20 = operator_new(0x12);
      local_8 = 0x15;
      if (local_20 == (int *)0x0) {
        local_28 = (undefined4 *)0x0;
      }
      else {
        local_28 = (uint *)FUN_004cd2f0();
      }
      local_8 = 0xffffffff;
      FUN_004ce950(uVar8);
      local_14 = (uint *)0x0;
      iVar5 = FUN_00513fb0();
      if (0 < iVar5) {
        do {
          uVar10 = FUN_00513fc0(local_14);
          cVar4 = FUN_005216c0(uVar10);
          if (cVar4 != '\0') {
            FUN_004ce950(uVar10);
          }
          puVar16 = (uint *)((int)local_14 + 1);
          local_14 = puVar16;
          iVar5 = FUN_00513fb0();
        } while ((int)puVar16 < iVar5);
      }
      puVar9 = (undefined4 *)0x0;
      local_18 = (undefined4 *)0x0;
      local_2c = (int *)0x0;
      FUN_00516270(&local_30);
      cVar4 = FUN_005162c0();
      if (cVar4 != '\0') {
        do {
          FUN_005162a0(local_64,0);
          uVar10 = FUN_005162b0();
          cVar4 = FUN_00514000();
          if (((cVar4 == '\0') && (cVar4 = FUN_0050c570(uVar10), cVar4 == '\0')) &&
             ((local_19 == '\0' || (cVar4 = FUN_004f0300(uVar10), cVar4 != '\0')))) {
            ppuVar27 = &local_40;
            local_24 = (int *)0x0;
            FUN_00513fe0(ppuVar27);
            FUN_004986f0(ppuVar27);
            cVar4 = FUN_00498730();
            while (cVar4 != '\0') {
              FUN_00498700(&local_54,0);
              piVar12 = (int *)FUN_00498710();
              cVar4 = (**(code **)(*piVar12 + 0x30))();
              if ((cVar4 != '\0') &&
                 ((cVar4 = FUN_00516310(), cVar4 != '\0' || (cVar4 = FUN_00516330(), cVar4 != '\0'))
                 )) {
                uVar10 = local_48;
                FUN_00494b80(local_48);
                cVar4 = FUN_0044b280(uVar10);
                if (cVar4 != '\0') {
                  fVar17 = (float10)(**(code **)(*piVar12 + 0xa4))();
                  local_24 = (int *)(float)(fVar17 * (float10)_DAT_007e7bc0 +
                                           (float10)(float)local_24);
                }
              }
              cVar4 = FUN_00498730();
            }
            uVar10 = 0x16;
            FUN_00494b80(0x16);
            fVar17 = (float10)FUN_005162e0(uVar10);
            local_38 = (undefined4 *)(float)(fVar17 * (float10)_DAT_008774e8);
            iVar5 = FUN_00513f90();
            if (iVar5 != 0) {
              uVar10 = local_48;
              FUN_00513f90(local_48);
              cVar4 = FUN_0044a690(uVar10);
              if (cVar4 != '\0') {
                local_38 = (undefined4 *)((float)local_38 + _DAT_00877344);
                FUN_00513ff0(8);
                fVar17 = (float10)FUN_00516840();
                if ((float10)_DAT_007e3380 < fVar17) {
                  FUN_00513ff0(8);
                  fVar17 = (float10)FUN_00516840();
                  local_20 = (int *)(float)fVar17;
                  FUN_00513f90();
                  fVar17 = (float10)FUN_005162f0();
                  local_38 = (undefined4 *)
                             (float)(fVar17 * (float10)(float)local_20 * (float10)_DAT_00877340 +
                                    (float10)(float)local_38);
                }
              }
            }
            iVar5 = FUN_00516890(local_38);
            iVar13 = FUN_00516870(100);
            if (iVar13 <= iVar5) {
              puVar16 = (uint *)0x0;
              local_14 = (uint *)0x0;
              iVar5 = FUN_00513fb0();
              if (0 < iVar5) {
                do {
                  FUN_00513fc0(puVar16);
                  ppuVar28 = &local_3c;
                  FUN_00513fe0(ppuVar28);
                  FUN_004986f0(ppuVar28);
                  cVar4 = FUN_00498730();
                  while (cVar4 != '\0') {
                    FUN_00498700(local_58,0);
                    piVar12 = (int *)FUN_00498710();
                    cVar4 = (**(code **)(*piVar12 + 0x30))();
                    if (cVar4 != '\0') {
                      iVar5 = FUN_0048b970();
                      iVar13 = FUN_00523f70();
                      if (iVar13 == iVar5) {
                        uVar10 = local_48;
                        FUN_00494b80(local_48);
                        cVar4 = FUN_0044b280(uVar10);
                        if (cVar4 != '\0') {
                          fVar17 = (float10)(**(code **)(*piVar12 + 0xa4))();
                          local_24 = (int *)(float)(fVar17 * (float10)_DAT_007e67f8 +
                                                   (float10)(float)local_24);
                        }
                      }
                    }
                    cVar4 = FUN_00498730();
                    puVar16 = local_14;
                  }
                  puVar16 = (uint *)((int)puVar16 + 1);
                  local_14 = puVar16;
                  iVar5 = FUN_00513fb0();
                } while ((int)puVar16 < iVar5);
              }
            }
            puVar9 = local_18;
            if ((float)local_2c < (float)local_24) {
              local_2c = local_24;
              local_18 = (undefined4 *)FUN_0048b970();
              puVar9 = local_18;
            }
          }
          cVar4 = FUN_005162c0();
        } while (cVar4 != '\0');
        if (puVar9 != (undefined4 *)0x0) {
          uVar10 = FUN_00516360();
          puVar24 = local_9c;
          FUN_00462830(puVar24,uVar10);
          FUN_0042e060(puVar24,uVar10);
          iVar5 = FUN_00512530();
          if (1 < iVar5) {
            iVar5 = FUN_00516370();
            iVar13 = FUN_00516300();
            if ((iVar13 == iVar5) && (puVar14 = (undefined4 *)FUN_00516300(), puVar14 == puVar9)) {
              FUN_00516280();
              puVar9 = (undefined4 *)FUN_0048b970();
            }
            uVar6 = FUN_00512660(param_2,puVar9);
            goto LAB_005123c0;
          }
        }
      }
      iVar5 = FUN_00516300();
      iVar13 = FUN_00516370();
      if (iVar5 == iVar13) {
        *(undefined4 *)(local_44 + 0x1e) = 0;
        uVar6 = local_44;
      }
      else {
        uVar6 = FUN_005125f0(param_2);
      }
LAB_005123c0:
      if (local_28 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = (**(code **)*local_28)(1);
      ExceptionList = local_10;
      return uVar6;
    }
    uVar6 = FUN_005129f0(param_2);
    if (((char)uVar6 == '\0') && (uVar6 = FUN_00516310(), (char)uVar6 == '\0')) {
      uVar6 = FUN_00516310();
      goto LAB_00511f2d;
    }
LAB_00512403:
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  ExceptionList = local_10;
  return uVar6;
}


