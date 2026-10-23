// FUN_0050cf00 @ 50cf00 size=8809

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050cf00(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  char *pcVar17;
  undefined4 *puVar18;
  undefined2 uVar19;
  bool bVar20;
  float10 fVar21;
  undefined4 in_stack_ffffff78;
  ushort uVar22;
  undefined4 in_stack_ffffff80;
  ushort uVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  uint local_4c;
  undefined4 local_44;
  uint local_38;
  float local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  int local_18;
  bool local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_2;
  uVar23 = (ushort)((uint)in_stack_ffffff80 >> 0x10);
  uVar22 = (ushort)((uint)in_stack_ffffff78 >> 0x10);
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c18f4;
  local_10 = ExceptionList;
  piVar13 = (int *)param_2[0x92];
  if ((*(int *)(param_1 + 4) == 2) && (param_2[3] == *(int *)(param_1 + 8))) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(*param_2 + 0x98))();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  cVar4 = FUN_00444290();
  if ((cVar4 == '\0') && (cVar4 = FUN_00444270(), cVar4 == '\0')) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  if ((*(int *)(param_1 + 4) == 0x1b) &&
     (iVar5 = (**(code **)(**(int **)((int)param_2 + 0x2aa) + 4))(), iVar5 < 1)) {
    if ((param_2[3] != *(int *)((int)param_2 + 0x212)) &&
       ((*(char *)(param_1 + 0x2b) != '\0' ||
        (cVar4 = (**(code **)(*piVar13 + 0x1c))(), cVar4 != '\0')))) {
      uVar7 = *(undefined4 *)((int)param_2 + 0x212);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 0;
      if (pvVar6 != (void *)0x0) {
        FUN_0042d2f0(0,0);
        FUN_00516760(param_2 + 6,uVar7);
      }
      local_8 = 0xffffffff;
      FUN_00565c30();
      ExceptionList = local_10;
      return;
    }
    if (!bVar20) goto LAB_0050d12d;
    uVar7 = FUN_00447250();
LAB_0050d0f4:
    FUN_00446d10(uVar7);
    uVar7 = FUN_00514040();
    uVar7 = FUN_00514070(uVar7);
    uVar8 = (**(code **)(*param_2 + 0xc))(uVar7);
    puVar24 = &DAT_0088ebf8;
    uVar9 = FUN_00458280(&DAT_0088ebf8,uVar8);
    FUN_006eb830(0x67,uVar9,puVar24,uVar8,uVar7);
LAB_0050d12d:
    *(undefined4 *)(param_1 + 4) = 0;
    ExceptionList = local_10;
    return;
  }
  if ((*(int *)(param_1 + 4) == 0x1c) &&
     (iVar5 = (**(code **)(**(int **)((int)param_2 + 0x2aa) + 4))(), iVar5 < 1)) {
    if ((param_2[3] != *(int *)((int)param_2 + 0x212)) &&
       ((*(char *)(param_1 + 0x2b) != '\0' ||
        (cVar4 = (**(code **)(*piVar13 + 0x1c))(), cVar4 != '\0')))) {
      uVar7 = *(undefined4 *)((int)param_2 + 0x212);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 1;
      goto joined_r0x0050d3ee;
    }
    if (!bVar20) goto LAB_0050d12d;
    uVar7 = FUN_00447250();
    goto LAB_0050d0f4;
  }
  cVar4 = FUN_0042e980();
  if (cVar4 == '\0') {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    if ((((*(short *)(param_1 + 0x1c) != 0) && (cVar4 = FUN_0042dd70(), cVar4 == '\0')) &&
        (param_2[3] != *(int *)((int)param_2 + 0x212))) &&
       ((cVar4 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar4 != '\0' &&
        (2 < *(int *)(param_1 + 4))))) {
      uVar7 = *(undefined4 *)((int)param_2 + 0x212);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 2;
      goto joined_r0x0050d3ee;
    }
    if (((*(int *)(param_1 + 4) == 0) || (*(short *)(param_1 + 0x1c) == 0)) ||
       (cVar4 = FUN_0042dd70(), cVar4 != '\0')) goto LAB_0050d244;
    iVar5 = param_2[3];
    uVar25 = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 1;
    uVar19 = 0x50;
    puVar10 = (uint *)FUN_0042d2d0(1,0xffffffff,0,1);
    local_4c = *puVar10;
    iVar16 = CONCAT22(uVar19,(short)puVar10[1]);
    goto LAB_0050e681;
  }
LAB_0050d244:
  param_2._3_1_ = DAT_00dc1741;
  cVar4 = (**(code **)(*piVar13 + 0x1c))();
  if ((cVar4 != '\0') && (cVar4 = FUN_006a8720(), cVar4 == '\0')) {
    param_2._3_1_ = DAT_00dc1742;
  }
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    cVar4 = FUN_0042ddd0();
    if ((((cVar4 != '\0') && (iVar5 = (**(code **)(piVar1[0x47] + 4))(), iVar5 == 0)) &&
        (cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))(), cVar4 != '\0')) &&
       (*(char *)((int)piVar1 + 0x17b) == '\0')) {
      uVar7 = *(undefined4 *)(param_1 + 8);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 3;
      if (pvVar6 != (void *)0x0) {
        FUN_0042d2f0(0,0);
        FUN_00516760(piVar1 + 6,uVar7);
      }
      local_8 = 0xffffffff;
      FUN_00565c30();
    }
    iVar5 = piVar1[3];
    if (*(int *)(param_1 + 8) != iVar5) {
      ExceptionList = local_10;
      return;
    }
    uVar25 = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 1;
    uVar19 = 0x50;
    puVar10 = (uint *)FUN_0042d2d0(1,0xffffffff,0,1);
    local_4c = *puVar10;
    iVar16 = CONCAT22(uVar19,(short)puVar10[1]);
    goto LAB_0050e681;
  case 2:
    cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
    if (((cVar4 == '\0') || (iVar5 = FUN_00518b70(), iVar5 == 0)) ||
       (iVar5 = FUN_00518b70(), *(int *)(iVar5 + 0xc) == piVar1[3])) {
      iVar5 = piVar1[3];
      if (iVar5 == *(int *)(param_1 + 8)) {
        uVar25 = 1;
        uVar9 = 0;
        uVar8 = 0xffffffff;
        uVar7 = 1;
        uVar19 = 0x50;
        puVar10 = (uint *)FUN_0042d2d0(1,0xffffffff,0,1);
        local_4c = *puVar10;
        iVar16 = CONCAT22(uVar19,(short)puVar10[1]);
        uVar19 = 0x50;
        piVar13 = (int *)FUN_0042d2d0(local_4c,iVar16);
        local_44 = *piVar13;
        iVar11 = CONCAT22(uVar19,(short)piVar13[1]);
        goto LAB_0050f14c;
      }
      cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return;
      }
      uVar7 = *(undefined4 *)(param_1 + 8);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 5;
    }
    else {
      iVar5 = FUN_00518b70();
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 4;
    }
    goto joined_r0x0050d3ee;
  default:
    goto switchD_0050d283_caseD_3;
  case 0x17:
    cVar4 = FUN_0050c0d0();
    if (cVar4 != '\0') {
      local_28 = operator_new(0x12);
      if (local_28 == (undefined4 *)0x0) {
        local_28 = (undefined4 *)0x0;
      }
      else {
        local_28[1] = 0;
        local_28[2] = 0;
        local_28[3] = 0;
        *(undefined1 *)(local_28 + 4) = 0;
        *local_28 = &PTR_FUN_007e6eac;
      }
      local_1c = (int *)0x0;
      switch(*(undefined4 *)(param_1 + 0x26)) {
      case 1:
        FUN_004e9370();
        iVar5 = local_28[2];
        pvVar6 = operator_new(0xe);
        local_8 = 6;
        if (pvVar6 == (void *)0x0) {
          local_1c = (int *)0x0;
        }
        else {
          local_1c = (int *)FUN_0049a780();
        }
        iVar16 = local_28[3];
        local_8 = 0xffffffff;
        local_28[2] = local_1c;
        local_28[3] = iVar16 + 1;
        if (iVar16 == 0) {
          local_28[1] = local_1c;
        }
        else {
          *(int **)(iVar5 + 8) = local_1c;
          local_1c = (int *)local_28[1];
        }
        break;
      case 2:
        iVar5 = FUN_004e9370();
        local_1c = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        break;
      case 3:
        iVar5 = FUN_004e9370();
        local_1c = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        break;
      case 0xffffffff:
        iVar5 = FUN_004e9370();
        local_1c = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      }
      local_18 = 0;
      local_2c = 0.0;
      if (local_1c != (int *)0x0) {
        do {
          piVar13 = (int *)local_1c[2];
          iVar5 = *local_1c;
          if ((*(char *)(iVar5 + 0x180) == '\0') &&
             ((param_2._3_1_ == '\0' || (cVar4 = FUN_00518d60(), cVar4 != '\0')))) {
            uVar12 = _rand();
            uVar12 = uVar12 & 0x80000007;
            if ((int)uVar12 < 0) {
              uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
            }
            fVar3 = (float)(int)(uVar12 + 1);
            iVar16 = *(int *)(iVar5 + 0x14a);
            while (iVar16 != 0) {
              iVar16 = *(int *)(iVar16 + 8);
              cVar4 = FUN_0044b280();
              if (cVar4 != '\0') {
                iVar11 = _rand();
                fVar3 = (float)(iVar11 % 10) + fVar3 + _DAT_007e682c;
              }
            }
            if (local_2c < fVar3) {
              local_18 = *(int *)(iVar5 + 0x12);
              local_2c = fVar3;
            }
          }
          local_1c = piVar13;
        } while (piVar13 != (int *)0x0);
        if (local_18 != 0) {
          FUN_0050bba0();
          pvVar6 = operator_new(0xc);
          local_8 = 7;
          if (pvVar6 != (void *)0x0) {
            FUN_0042d2f0(0,0);
            FUN_00516760(piVar1 + 6,local_18);
          }
          local_8 = 0xffffffff;
          FUN_00565c30();
        }
      }
      if (local_28 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)*local_28)();
      ExceptionList = local_10;
      return;
    }
    if ((*(int *)(param_1 + 0x1e) == 1) && (*(int *)(param_1 + 0x22) == piVar1[3])) {
      *(undefined4 *)(param_1 + 0x1e) = 0;
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)((int)piVar1 + 0x26);
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return;
    }
    while( true ) {
      puVar18 = (undefined4 *)FUN_00499730();
      iVar16 = *(int *)*puVar18;
      fVar3 = *(float *)(iVar16 + 0xf4);
      fVar21 = (float10)FUN_004fd510();
      if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
         (*(float *)(iVar16 + 0xec) < *(float *)(iVar16 + 0xf0) * *(float *)(param_1 + 0xc))) break;
      if (iVar5 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    break;
  case 0x18:
    cVar4 = FUN_0050c0d0();
    if (cVar4 != '\0') {
      local_20 = operator_new(0x12);
      if (local_20 == (undefined4 *)0x0) {
        local_20 = (undefined4 *)0x0;
      }
      else {
        local_20[1] = 0;
        local_20[2] = 0;
        local_20[3] = 0;
        *(undefined1 *)(local_20 + 4) = 0;
        *local_20 = &PTR_FUN_007e6eac;
      }
      local_1c = (int *)0x0;
      switch(*(undefined4 *)(param_1 + 0x26)) {
      case 1:
        FUN_004e9370();
        iVar5 = local_20[2];
        pvVar6 = operator_new(0xe);
        local_8 = 8;
        if (pvVar6 == (void *)0x0) {
          local_1c = (int *)0x0;
        }
        else {
          local_1c = (int *)FUN_0049a780();
        }
        iVar16 = local_20[3];
        local_8 = 0xffffffff;
        local_20[2] = local_1c;
        local_20[3] = iVar16 + 1;
        if (iVar16 == 0) {
          local_20[1] = local_1c;
        }
        else {
          *(int **)(iVar5 + 8) = local_1c;
          local_1c = (int *)local_20[1];
        }
        break;
      case 3:
        iVar5 = FUN_004e9370();
        local_1c = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        break;
      case 0xffffffff:
      case 2:
        iVar5 = FUN_004e9370();
        local_1c = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      }
      local_24 = (undefined4 *)0x0;
      local_2c = 0.0;
      if (local_1c != (int *)0x0) {
        do {
          piVar13 = (int *)local_1c[2];
          iVar5 = *local_1c;
          if ((*(char *)(iVar5 + 0x180) == '\0') &&
             ((param_2._3_1_ == '\0' || (cVar4 = FUN_00518d60(), cVar4 != '\0')))) {
            iVar16 = _rand();
            fVar3 = (float)(iVar16 % 3 + 1);
            piVar15 = *(int **)(iVar5 + 0x14a);
            while (piVar15 != (int *)0x0) {
              piVar2 = (int *)piVar15[2];
              if (*(int *)(piVar1[0x92] + 6) == *piVar15) {
                iVar16 = _rand();
                fVar3 = (float)(iVar16 % 0x14) + fVar3 + _DAT_007e6858;
                piVar15 = piVar2;
              }
              else {
                cVar4 = FUN_0044a690();
                piVar15 = piVar2;
                if (cVar4 != '\0') {
                  iVar16 = _rand();
                  fVar3 = (float)(iVar16 % 10) + fVar3 + _DAT_007e682c;
                }
              }
            }
            if (local_2c < fVar3) {
              local_24 = *(undefined4 **)(iVar5 + 0x12);
              local_2c = fVar3;
            }
          }
          local_1c = piVar13;
        } while (piVar13 != (int *)0x0);
        if (local_24 != (undefined4 *)0x0) {
          FUN_0050bba0();
          pvVar6 = operator_new(0xc);
          local_8 = 9;
          if (pvVar6 != (void *)0x0) {
            FUN_0042d2f0(0,0);
            FUN_00516760(piVar1 + 6,local_24);
          }
          local_8 = 0xffffffff;
          FUN_00565c30();
        }
      }
      if (local_20 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)*local_20)();
      ExceptionList = local_10;
      return;
    }
    if ((*(int *)(param_1 + 0x1e) == 1) && (*(int *)(param_1 + 0x22) == piVar1[3])) {
      *(undefined4 *)(param_1 + 0x1e) = 0;
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)((int)piVar1 + 0x26);
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return;
    }
    while( true ) {
      puVar18 = (undefined4 *)FUN_00499730();
      iVar16 = *(int *)*puVar18;
      fVar3 = *(float *)(iVar16 + 0xf4);
      fVar21 = (float10)FUN_004fd510();
      if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
         (*(float *)(iVar16 + 0xec) < *(float *)(iVar16 + 0xf0) * *(float *)(param_1 + 0xc))) break;
      if (iVar5 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    break;
  case 0x19:
    cVar4 = FUN_0050c0d0();
    if (cVar4 != '\0') {
      local_1c = operator_new(0x12);
      if (local_1c == (undefined4 *)0x0) {
        local_1c = (undefined4 *)0x0;
      }
      else {
        local_1c[1] = 0;
        local_1c[2] = 0;
        local_1c[3] = 0;
        *(undefined1 *)(local_1c + 4) = 0;
        *local_1c = (int)&PTR_FUN_007e6eac;
      }
      piVar13 = (int *)0x0;
      switch(*(undefined4 *)(param_1 + 0x26)) {
      case 1:
        FUN_004e9370();
        iVar5 = local_1c[2];
        pvVar6 = operator_new(0xe);
        local_8 = 10;
        if (pvVar6 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_0049a780();
        }
        local_1c[2] = uVar7;
        iVar16 = local_1c[3];
        local_8 = 0xffffffff;
        local_1c[3] = iVar16 + 1;
        if (iVar16 == 0) {
          local_1c[1] = local_1c[2];
          piVar13 = (int *)local_1c[1];
        }
        else {
          *(int *)(iVar5 + 8) = local_1c[2];
          piVar13 = (int *)local_1c[1];
        }
        break;
      case 2:
        iVar5 = FUN_004e9370();
        piVar13 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        break;
      case 3:
        iVar5 = FUN_004e9370();
        piVar13 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
        break;
      case 0xffffffff:
        iVar5 = FUN_004e9370();
        piVar13 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
      }
      local_18 = 0;
      local_2c = 0.0;
      if (piVar13 != (int *)0x0) {
        do {
          piVar15 = (int *)piVar13[2];
          iVar5 = *piVar13;
          if ((*(char *)(iVar5 + 0x180) == '\0') &&
             ((param_2._3_1_ == '\0' || (cVar4 = FUN_00518d60(), cVar4 != '\0')))) {
            uVar12 = _rand();
            uVar12 = uVar12 & 0x80000007;
            if ((int)uVar12 < 0) {
              uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
            }
            fVar3 = (float)(int)(uVar12 + 1);
            puVar18 = *(undefined4 **)(*(int *)(iVar5 + 0x1c2) + 4);
            while (puVar18 != (undefined4 *)0x0) {
              piVar13 = (int *)*puVar18;
              puVar18 = (undefined4 *)puVar18[2];
              cVar4 = (**(code **)(*piVar13 + 0x2c))();
              if ((cVar4 != '\0') && (cVar4 = FUN_0044b280(), cVar4 != '\0')) {
                fVar21 = (float10)(**(code **)(*piVar13 + 0xa4))();
                fVar3 = (float)(fVar21 + (float10)fVar3);
              }
            }
            if (local_2c < fVar3) {
              local_18 = *(int *)(iVar5 + 0x12);
              local_2c = fVar3;
            }
          }
          piVar13 = piVar15;
        } while (piVar15 != (int *)0x0);
        if (local_18 != 0) {
          FUN_0050bba0();
          pvVar6 = operator_new(0xc);
          local_8 = 0xb;
          if (pvVar6 != (void *)0x0) {
            FUN_0042d2f0(0,0);
            FUN_00516760(piVar1 + 6,local_18);
          }
          local_8 = 0xffffffff;
          FUN_00565c30();
        }
      }
      if (local_1c == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)*local_1c)();
      ExceptionList = local_10;
      return;
    }
    if ((*(int *)(param_1 + 0x1e) == 1) && (*(int *)(param_1 + 0x22) == piVar1[3])) {
      *(undefined4 *)(param_1 + 0x1e) = 0;
      ExceptionList = local_10;
      return;
    }
    iVar5 = *(int *)((int)piVar1 + 0x26);
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return;
    }
    while( true ) {
      puVar18 = (undefined4 *)FUN_00499730();
      iVar16 = *(int *)*puVar18;
      fVar3 = *(float *)(iVar16 + 0xf4);
      fVar21 = (float10)FUN_004fd510();
      if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
         (*(float *)(iVar16 + 0xec) < *(float *)(iVar16 + 0xf0) * *(float *)(param_1 + 0xc))) break;
      if (iVar5 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    break;
  case 0x1a:
    cVar4 = FUN_0050c0d0();
    if (cVar4 == '\0') {
      iVar5 = *(int *)((int)piVar1 + 0x26);
      if (iVar5 == 0) {
        ExceptionList = local_10;
        return;
      }
      while( true ) {
        puVar18 = (undefined4 *)FUN_00499730();
        iVar16 = *(int *)*puVar18;
        fVar3 = *(float *)(iVar16 + 0xf4);
        fVar21 = (float10)FUN_004fd510();
        if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
           (*(float *)(iVar16 + 0xec) < *(float *)(iVar16 + 0xf0) * *(float *)(param_1 + 0xc)))
        break;
        if (iVar5 == 0) {
          ExceptionList = local_10;
          return;
        }
      }
      break;
    }
    iVar5 = FUN_004e9370();
    uVar7 = *(undefined4 *)(iVar5 + 0x3dc);
    FUN_0050bba0();
    pvVar6 = operator_new(0xc);
    local_8 = 0xc;
joined_r0x0050d3ee:
    if (pvVar6 != (void *)0x0) {
      FUN_0042d2f0(0,0);
      FUN_00516760(piVar1 + 6,uVar7);
    }
LAB_0050ee41:
    local_8 = 0xffffffff;
    FUN_00565c30();
    ExceptionList = local_10;
    return;
  case 0x1b:
    cVar4 = FUN_0050c0d0();
    if (cVar4 != '\0') {
      iVar5 = piVar1[3];
      iVar16 = FUN_004e9370();
      if (iVar5 == *(int *)(iVar16 + 0x3dc)) {
        piVar13 = *(int **)(*(int *)((int)piVar1 + 0x2aa) + 4);
        if (piVar13 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
        do {
          piVar1 = (int *)piVar13[2];
          piVar13 = (int *)*piVar13;
          if ((*(char *)((int)piVar13 + 0x17b) == '\0') &&
             (cVar4 = (**(code **)(*piVar13 + 0x9c))(), cVar4 != '\0')) {
            FUN_00419460();
            FUN_00419440();
            (**(code **)(**(int **)((int)piVar13 + 0x15e) + 0x18))();
            cVar4 = (**(code **)(*(int *)((int)piVar13 + 0x22e) + 8))();
            if (cVar4 != '\0') {
              uVar7 = *(undefined4 *)(param_1 + 8);
              FUN_0050bba0();
              pvVar6 = operator_new(0xc);
              local_8 = 0xf;
              if (pvVar6 != (void *)0x0) {
                FUN_00516760(piVar13 + 6,uVar7);
              }
              local_8 = 0xffffffff;
              FUN_00565c30();
            }
          }
          piVar13 = piVar1;
        } while (piVar1 != (int *)0x0);
        ExceptionList = local_10;
        return;
      }
      iVar5 = (**(code **)(**(int **)((int)piVar1 + 0x2aa) + 4))();
      if (iVar5 < 1) {
        ExceptionList = local_10;
        return;
      }
      iVar5 = FUN_004e9370();
      uVar7 = *(undefined4 *)(iVar5 + 0x3dc);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 0x10;
      if (pvVar6 != (void *)0x0) {
        FUN_00516760(piVar1 + 6,uVar7);
      }
      goto LAB_0050ee41;
    }
    piVar13 = *(int **)((int)piVar1 + 0x26);
    if (*(int **)((int)piVar1 + 0x26) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    while( true ) {
      piVar15 = (int *)piVar13[2];
      iVar5 = *piVar13;
      fVar3 = *(float *)(iVar5 + 0xf4);
      fVar21 = (float10)FUN_004fd510();
      if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
         (*(float *)(iVar5 + 0xec) < *(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc))) break;
      piVar13 = piVar15;
      if (piVar15 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
    }
    goto LAB_0050e8ba;
  case 0x1c:
    cVar4 = FUN_0050c0d0();
    if (cVar4 != '\0') {
      iVar5 = (**(code **)(**(int **)((int)piVar1 + 0x2aa) + 4))();
      if (iVar5 < 1) {
        ExceptionList = local_10;
        return;
      }
      uVar7 = *(undefined4 *)(param_1 + 8);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 0x11;
      if (pvVar6 != (void *)0x0) {
        FUN_00516760(piVar1 + 6,uVar7);
      }
      goto LAB_0050ee41;
    }
    piVar13 = *(int **)((int)piVar1 + 0x26);
    if (*(int **)((int)piVar1 + 0x26) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    while( true ) {
      piVar15 = (int *)piVar13[2];
      iVar5 = *piVar13;
      fVar3 = *(float *)(iVar5 + 0xf4);
      fVar21 = (float10)FUN_004fd510();
      if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
         (*(float *)(iVar5 + 0xec) < *(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc))) break;
      piVar13 = piVar15;
      if (piVar15 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
    }
    goto LAB_0050e8ba;
  case 0x1d:
    cVar4 = FUN_0050c0d0();
    if (cVar4 != '\0') {
      local_1c = operator_new(0x12);
      if (local_1c == (undefined4 *)0x0) {
        local_1c = (undefined4 *)0x0;
      }
      else {
        local_1c[1] = 0;
        local_1c[2] = 0;
        local_1c[3] = 0;
        *(undefined1 *)(local_1c + 4) = 0;
        *local_1c = (int)&PTR_FUN_007e6eac;
      }
      piVar13 = (int *)0x0;
      switch(*(undefined4 *)(param_1 + 0x26)) {
      case 1:
        FUN_004e9370();
        iVar5 = local_1c[2];
        pvVar6 = operator_new(0xe);
        local_8 = 0xd;
        if (pvVar6 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_0049a780();
        }
        local_1c[2] = uVar7;
        iVar16 = local_1c[3];
        local_8 = 0xffffffff;
        local_1c[3] = iVar16 + 1;
        if (iVar16 == 0) {
          local_1c[1] = local_1c[2];
          piVar13 = (int *)local_1c[1];
        }
        else {
          *(int *)(iVar5 + 8) = local_1c[2];
          piVar13 = (int *)local_1c[1];
        }
        break;
      case 2:
        iVar5 = FUN_004e9370();
        piVar13 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar5 + 0x288) * 0x12);
        break;
      case 0xffffffff:
      case 3:
        iVar5 = FUN_004e9370();
        piVar13 = *(int **)((int)&DAT_008e977c + *(int *)(iVar5 + 0x28c) * 0x12);
      }
      local_28 = (undefined4 *)0x0;
      local_2c = 0.0;
      if (piVar13 != (int *)0x0) {
        do {
          piVar15 = (int *)piVar13[2];
          iVar5 = *piVar13;
          if ((*(char *)(iVar5 + 0x180) == '\0') &&
             ((param_2._3_1_ == '\0' || (cVar4 = FUN_00518d60(), cVar4 != '\0')))) {
            iVar16 = _rand();
            fVar3 = (float)(iVar16 % 10 + 1);
            if (local_2c < fVar3) {
              local_28 = *(undefined4 **)(iVar5 + 0x12);
              local_2c = fVar3;
            }
          }
          piVar13 = piVar15;
        } while (piVar15 != (int *)0x0);
        if (local_28 != (undefined4 *)0x0) {
          FUN_0050bba0();
          pvVar6 = operator_new(0xc);
          local_8 = 0xe;
          if (pvVar6 != (void *)0x0) {
            FUN_0042d2f0(0,0);
            FUN_00516760(piVar1 + 6,local_28);
          }
          local_8 = 0xffffffff;
          FUN_00565c30();
        }
      }
      if (local_1c == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)*local_1c)();
      ExceptionList = local_10;
      return;
    }
    if ((*(int *)(param_1 + 0x1e) == 1) && (*(int *)(param_1 + 0x22) == piVar1[3])) {
      *(undefined4 *)(param_1 + 0x1e) = 0;
      ExceptionList = local_10;
      return;
    }
    piVar13 = *(int **)((int)piVar1 + 0x26);
    if (*(int **)((int)piVar1 + 0x26) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    while( true ) {
      piVar15 = (int *)piVar13[2];
      iVar5 = *piVar13;
      fVar3 = *(float *)(iVar5 + 0xf4);
      fVar21 = (float10)FUN_004fd510();
      if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
         (*(float *)(iVar5 + 0xec) < *(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc))) break;
      piVar13 = piVar15;
      if (piVar15 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
    }
    break;
  case 0x1e:
    FUN_004e9370();
    cVar4 = FUN_0044b280();
    if (cVar4 != '\0') {
      cVar4 = FUN_0050c0d0();
      if (cVar4 != '\0') {
        iVar5 = FUN_004e9370();
        uVar7 = *(undefined4 *)(iVar5 + 0x3dc);
        FUN_0050bba0();
        pvVar6 = operator_new(0xc);
        local_8 = 0x12;
        if (pvVar6 != (void *)0x0) {
          FUN_00516760(piVar1 + 6,uVar7);
        }
        goto LAB_0050ee41;
      }
      piVar13 = *(int **)((int)piVar1 + 0x26);
      if (*(int **)((int)piVar1 + 0x26) == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      while( true ) {
        piVar15 = (int *)piVar13[2];
        iVar5 = *piVar13;
        fVar3 = *(float *)(iVar5 + 0xf4);
        fVar21 = (float10)FUN_004fd510();
        if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
           (*(float *)(iVar5 + 0xec) < *(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc))) break;
        piVar13 = piVar15;
        if (piVar15 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
      }
      goto LAB_0050e8ba;
    }
    uVar25 = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 1;
    iVar5 = piVar1[3];
    local_44 = local_44 & 0xff000000;
    iVar16 = (uint)uVar23 << 0x10;
    local_4c = local_44;
    goto LAB_0050e681;
  case 0x1f:
    FUN_004e9370();
    cVar4 = FUN_0044b280();
    if (cVar4 != '\0') {
      cVar4 = FUN_0050c0d0();
      if (cVar4 != '\0') {
        iVar5 = FUN_004e9370();
        uVar7 = *(undefined4 *)(iVar5 + 0x3dc);
        FUN_0050bba0();
        pvVar6 = operator_new(0xc);
        local_8 = 0x13;
        if (pvVar6 != (void *)0x0) {
          FUN_00516760(piVar1 + 6,uVar7);
        }
        goto LAB_0050ee41;
      }
      piVar13 = *(int **)((int)piVar1 + 0x26);
      if (*(int **)((int)piVar1 + 0x26) == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      while( true ) {
        piVar15 = (int *)piVar13[2];
        iVar5 = *piVar13;
        fVar3 = *(float *)(iVar5 + 0xf4);
        fVar21 = (float10)FUN_004fd510();
        if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
           (*(float *)(iVar5 + 0xec) < *(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc))) break;
        piVar13 = piVar15;
        if (piVar15 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
      }
      goto LAB_0050e8ba;
    }
    uVar25 = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 1;
    iVar5 = piVar1[3];
    local_44 = local_44 & 0xff000000;
    iVar16 = (uint)uVar23 << 0x10;
    local_4c = local_44;
LAB_0050e681:
    uVar19 = 0x50;
    piVar13 = (int *)FUN_0042d2d0(local_4c,iVar16,uVar7,uVar8,uVar9,uVar25);
    local_44 = *piVar13;
    iVar11 = CONCAT22(uVar19,(short)piVar13[1]);
LAB_0050f14c:
    FUN_0050b600(piVar1,0,iVar5,0,1,1,local_44,iVar11,local_4c,iVar16,uVar7,uVar8,uVar9,uVar25);
    ExceptionList = local_10;
    return;
  case 0x20:
    iVar5 = piVar1[3];
    if (iVar5 == *(int *)(param_1 + 8)) {
      uVar25 = 1;
      uVar9 = 0;
      uVar8 = 0xffffffff;
      uVar7 = 1;
      local_44 = (uint)local_44._3_1_ << 0x18;
      iVar16 = (uint)uVar23 << 0x10;
      uVar19 = 0x50;
      local_4c = local_44;
      piVar13 = (int *)FUN_0042d2d0(local_44,iVar16,1,0xffffffff,0,1);
      local_44 = *piVar13;
      iVar11 = CONCAT22(uVar19,(short)piVar13[1]);
      goto LAB_0050f14c;
    }
    cVar4 = FUN_0050c0d0();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return;
      }
      uVar7 = *(undefined4 *)(param_1 + 8);
      FUN_0050bba0();
      pvVar6 = operator_new(0xc);
      local_8 = 0x14;
      if (pvVar6 != (void *)0x0) {
        FUN_00516760(piVar1 + 6,uVar7);
      }
      goto LAB_0050ee41;
    }
    piVar13 = *(int **)((int)piVar1 + 0x26);
    if (*(int **)((int)piVar1 + 0x26) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    while( true ) {
      piVar15 = (int *)piVar13[2];
      iVar5 = *piVar13;
      fVar3 = *(float *)(iVar5 + 0xf4);
      fVar21 = (float10)FUN_004fd510();
      if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
         (*(float *)(iVar5 + 0xec) < *(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc))) break;
      piVar13 = piVar15;
      if (piVar15 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
    }
LAB_0050e8ba:
    bVar20 = *(int *)((int)piVar1 + 0x212) == piVar1[3];
    goto LAB_0050e8c5;
  case 0x21:
    if (*(int *)((int)piVar1 + 0x212) != 0) {
      cVar4 = FUN_0050c0d0();
      if (cVar4 == '\0') {
        if ((*(int *)(param_1 + 0x1e) == 1) && (*(int *)(param_1 + 0x22) == piVar1[3])) {
          *(undefined4 *)(param_1 + 0x1e) = 0;
          ExceptionList = local_10;
          return;
        }
        iVar5 = (**(code **)(piVar1[0x47] + 4))();
        if (iVar5 != 0) {
          ExceptionList = local_10;
          return;
        }
        if (piVar1[3] == *(int *)((int)piVar1 + 0x212)) {
          ExceptionList = local_10;
          return;
        }
        cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
        if (cVar4 == '\0') {
          piVar13 = *(int **)((int)piVar1 + 0x26);
          if (*(int **)((int)piVar1 + 0x26) == (int *)0x0) {
            ExceptionList = local_10;
            return;
          }
          while( true ) {
            piVar15 = (int *)piVar13[2];
            iVar5 = *piVar13;
            fVar3 = *(float *)(iVar5 + 0xf4);
            fVar21 = (float10)FUN_004fd510();
            if (((float10)fVar3 < fVar21 * (float10)*(float *)(param_1 + 0x2e)) ||
               (*(float *)(iVar5 + 0xec) < *(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc)))
            break;
            piVar13 = piVar15;
            if (piVar15 == (int *)0x0) {
              ExceptionList = local_10;
              return;
            }
          }
        }
        if (*(int *)((int)piVar1 + 0x212) == piVar1[3]) {
          ExceptionList = local_10;
          return;
        }
        cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
        if (cVar4 == '\0') {
          ExceptionList = local_10;
          return;
        }
        iVar5 = (**(code **)(piVar1[0x47] + 4))();
        if (iVar5 != 0) {
          ExceptionList = local_10;
          return;
        }
        if (*(char *)((int)piVar1 + 0x17b) != '\0') {
          ExceptionList = local_10;
          return;
        }
        if (*(int *)((int)piVar1 + 0x176) != 0) {
          ExceptionList = local_10;
          return;
        }
        uVar7 = *(undefined4 *)((int)piVar1 + 0x212);
        puVar18 = operator_new(0xc);
        local_8 = 0x19;
        uVar19 = (undefined2)uVar7;
        if (puVar18 != (undefined4 *)0x0) {
          FUN_00516380();
          *puVar18 = &PTR_FUN_007e875c;
          *(undefined2 *)(puVar18[1] + 0xe) = 1;
          *(undefined2 *)(puVar18[1] + 0x10) = uVar19;
        }
        local_8 = 0xffffffff;
        FUN_00565bc0();
        puVar18 = operator_new(0xc);
        local_8 = 0x1a;
        if (puVar18 != (undefined4 *)0x0) {
          local_38 = local_38 & 0xff000000;
          pvVar6 = operator_new(0x1e);
          local_8 = CONCAT31(local_8._1_3_,0x1b);
          if (pvVar6 == (void *)0x0) {
            pvVar6 = (void *)0x0;
          }
          else {
            FUN_0042d6c0();
            *(undefined2 *)((int)pvVar6 + 0xe) = 0;
            *(undefined4 *)((int)pvVar6 + 0x10) = 0;
            FUN_0042d2d0();
          }
          puVar18[1] = pvVar6;
          *(undefined1 *)(puVar18 + 2) = 0;
          *(undefined1 *)((int)puVar18 + 9) = 1;
          *puVar18 = &PTR_FUN_007e77e4;
          *(undefined1 *)((int)puVar18 + 10) = 0;
          *(undefined2 *)puVar18[1] = 0x34;
          iVar5 = puVar18[1];
          *(undefined4 *)(iVar5 + 8) = _DAT_0088f24c;
          *(undefined2 *)(iVar5 + 0xc) = DAT_0088f24e._2_2_;
          iVar5 = puVar18[1];
          local_4c = local_4c & 0xff000000;
          *(uint *)(iVar5 + 2) = local_4c;
          *(undefined2 *)(iVar5 + 6) = 0;
          *puVar18 = &PTR_FUN_007e7804;
          iVar5 = puVar18[1];
          *(undefined2 *)(iVar5 + 0x14) = uVar19;
          *(int *)(iVar5 + 0xe) = piVar1[6];
          *(short *)(iVar5 + 0x12) = (short)piVar1[7];
          *(undefined1 *)(iVar5 + 0x16) = 1;
          *(uint *)(iVar5 + 0x18) = local_38;
          *(undefined2 *)(iVar5 + 0x1c) = 0;
        }
        local_8 = 0xffffffff;
        FUN_00565c30();
        ExceptionList = local_10;
        return;
      }
      cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return;
      }
      iVar5 = (**(code **)(piVar1[0x47] + 4))();
      if (iVar5 != 0) {
        ExceptionList = local_10;
        return;
      }
      local_24 = operator_new(0x12);
      if (local_24 == (undefined4 *)0x0) {
        local_24 = (undefined4 *)0x0;
      }
      else {
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
        *(undefined1 *)(local_24 + 4) = 0;
        *local_24 = &PTR_FUN_007e6eac;
      }
      iVar5 = FUN_004e9370();
      piVar15 = *(int **)(&DAT_008ed06c + *(int *)(iVar5 + 0x288) * 0x12);
      while (piVar15 != (int *)0x0) {
        piVar2 = (int *)piVar15[2];
        iVar5 = *piVar15;
        piVar15 = piVar2;
        if (0x1c5 < iVar5) {
          piVar2 = *(int **)((int)&DAT_008ea36c + iVar5 * 0x12);
          while (piVar2 != (int *)0x0) {
            iVar5 = *piVar2;
            piVar2 = (int *)piVar2[2];
            if (((*(char *)(iVar5 + 0x180) == '\0') && (cVar4 = FUN_004ed1c0(), cVar4 == '\0')) &&
               ((param_2._3_1_ == '\0' || (cVar4 = FUN_00518d60(), cVar4 != '\0')))) {
              iVar16 = local_24[2];
              piVar14 = operator_new(0xe);
              if (piVar14 == (int *)0x0) {
                piVar14 = (int *)0x0;
              }
              else {
                *piVar14 = iVar5;
                piVar14[1] = iVar16;
                piVar14[2] = 0;
                *(undefined1 *)(piVar14 + 3) = 0;
              }
              local_24[2] = piVar14;
              iVar5 = local_24[3];
              local_24[3] = iVar5 + 1;
              if (iVar5 == 0) {
                local_24[1] = local_24[2];
              }
              else {
                *(undefined4 *)(iVar16 + 8) = local_24[2];
              }
            }
          }
        }
      }
      local_11 = false;
      bVar20 = false;
      piVar15 = (int *)local_24[1];
      if ((int *)local_24[1] != (int *)0x0) {
LAB_0050eab7:
        if ((!local_11) && (!bVar20)) {
          piVar2 = (int *)piVar15[2];
          iVar5 = *piVar15;
          piVar15 = *(int **)(*(int *)(iVar5 + 0x1c2) + 4);
joined_r0x0050eae3:
          do {
            if (((piVar15 == (int *)0x0) || (local_11)) || (bVar20)) goto LAB_0050ed3b;
            piVar14 = (int *)*piVar15;
            piVar15 = (int *)piVar15[2];
            cVar4 = (**(code **)(*piVar14 + 0x2c))();
          } while ((cVar4 == '\0') || (cVar4 = FUN_0044b280(), cVar4 == '\0'));
          iVar16 = (**(code **)(piVar14[0x47] + 4))();
          if ((iVar16 == 0) &&
             ((*(int *)((int)piVar14 + 0x176) == 0 &&
              (pcVar17 = (char *)FUN_0042e060(),
              3 < (int)*pcVar17 +
                  ((int)pcVar17[1] + ((int)pcVar17[2] + *(short *)(pcVar17 + 4) * 0xc) * 0x1e) *
                  0x18)))) {
            local_2c = 1.0;
            fVar3 = (*(float *)((int)piVar13 + 0x37c2) + *(float *)(piVar14[0x92] + 0x37c6)) -
                    _DAT_007e7a60;
            if (_DAT_007e3380 < fVar3) {
              local_2c = fVar3 * _DAT_007e543c + _DAT_007e3374;
            }
            iVar16 = (**(code **)(*(int *)((int)piVar14 + 0x22) + 4))();
            local_1c = (int *)((float)iVar16 * local_2c);
            switch(*(undefined4 *)(iVar5 + 0x3ac)) {
            case 2:
            case 3:
              fVar3 = _DAT_007e34c0;
              break;
            case 4:
            case 5:
              fVar3 = _DAT_007e40b8;
              break;
            default:
              goto switchD_0050ec02_default;
            }
            local_1c = (int *)((float)local_1c * fVar3);
switchD_0050ec02_default:
            cVar4 = (**(code **)(*(int *)((int)piVar14 + 0x22e) + 8))();
            if (cVar4 != '\0') {
              local_1c = (int *)((float)local_1c + (float)local_1c);
            }
            fVar3 = (float)piVar13[0x38f9] * (float)local_1c * _DAT_007e4090;
            iVar16 = _rand();
            local_11 = iVar16 % 0x65 <= (int)ROUND(fVar3);
            if (!local_11) goto joined_r0x0050eae3;
          }
          else {
            local_11 = true;
          }
          iVar16 = *piVar1;
          (**(code **)(*piVar14 + 0x14))();
          cVar4 = (**(code **)(iVar16 + 0x6c))();
          if (cVar4 == '\0') {
            local_11 = false;
            bVar20 = true;
          }
          else {
            uVar7 = *(undefined4 *)(iVar5 + 0x12);
            pvVar6 = operator_new(0xc);
            local_8 = 0x15;
            if (pvVar6 != (void *)0x0) {
              FUN_00516450();
            }
            local_8 = 0xffffffff;
            FUN_00565bc0();
            pvVar6 = operator_new(0xc);
            local_8 = 0x16;
            if (pvVar6 != (void *)0x0) {
              FUN_00516760(piVar1 + 6,uVar7);
            }
            local_8 = 0xffffffff;
            FUN_00565c30();
          }
          goto joined_r0x0050eae3;
        }
      }
LAB_0050ed46:
      if (local_24 != (undefined4 *)0x0) {
        (**(code **)*local_24)();
      }
      if (local_11) {
        ExceptionList = local_10;
        return;
      }
      if (*(int *)((int)piVar1 + 0x212) == piVar1[3]) {
        ExceptionList = local_10;
        return;
      }
      cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
      if (cVar4 == '\0') {
        ExceptionList = local_10;
        return;
      }
      iVar5 = (**(code **)(piVar1[0x47] + 4))();
      if (iVar5 != 0) {
        ExceptionList = local_10;
        return;
      }
      if (*(char *)((int)piVar1 + 0x17b) != '\0') {
        ExceptionList = local_10;
        return;
      }
      if (*(int *)((int)piVar1 + 0x176) != 0) {
        ExceptionList = local_10;
        return;
      }
      uVar7 = *(undefined4 *)((int)piVar1 + 0x212);
      pvVar6 = operator_new(0xc);
      local_8 = 0x17;
      if (pvVar6 != (void *)0x0) {
        FUN_00516450();
      }
      local_8 = 0xffffffff;
      FUN_00565bc0();
      pvVar6 = operator_new(0xc);
      local_8 = 0x18;
      if (pvVar6 != (void *)0x0) {
        FUN_00516760(piVar1 + 6,uVar7);
      }
      goto LAB_0050ee41;
    }
    uVar25 = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 1;
    local_4c = local_4c & 0xff000000;
    local_44 = (uint)local_44._3_1_ << 0x18;
    iVar16 = (uint)uVar23 << 0x10;
    iVar11 = (uint)uVar22 << 0x10;
    iVar5 = piVar1[3];
    goto LAB_0050f14c;
  }
  bVar20 = *(int *)((int)piVar1 + 0x212) == piVar1[3];
LAB_0050e8c5:
  if ((((!bVar20) && (cVar4 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))(), cVar4 != '\0')) &&
      (iVar5 = (**(code **)(piVar1[0x47] + 4))(), iVar5 == 0)) &&
     ((*(char *)((int)piVar1 + 0x17b) == '\0' && (*(int *)((int)piVar1 + 0x176) == 0)))) {
    FUN_00512660();
    ExceptionList = local_10;
    return;
  }
switchD_0050d283_caseD_3:
  ExceptionList = local_10;
  return;
LAB_0050ed3b:
  piVar15 = piVar2;
  if (piVar2 == (int *)0x0) goto LAB_0050ed46;
  goto LAB_0050eab7;
}


