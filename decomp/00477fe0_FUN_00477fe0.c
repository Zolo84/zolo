// FUN_00477fe0 @ 477fe0 size=1826

/* WARNING: Removing unreachable block (ram,0x0047844f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00477fe0(int *param_1,int param_2)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  float10 extraout_ST0;
  float10 fVar13;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  float local_24;
  float local_20;
  void *local_1c;
  undefined2 uStack_18;
  undefined4 local_14;
  undefined2 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bcfec;
  pvStack_c = ExceptionList;
  local_2c = SUB42(param_1,0);
  uStack_2a = (undefined2)((uint)param_1 >> 0x10);
  local_14 = *(undefined4 *)(DAT_00893530 + 0x14);
  local_10 = *(undefined2 *)(DAT_00893530 + 0x18);
  iVar7 = *(int *)(param_2 + 4);
  iVar10 = *(int *)(iVar7 + 0x76);
  if (*(int *)(iVar7 + 0x82) == 0) {
    ExceptionList = &pvStack_c;
    local_1c = operator_new(0x8a);
    local_4 = 0;
    if (local_1c == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_004f10b0(*(int *)(param_2 + 4) + 0x28);
    }
    piVar11 = (int *)(iVar7 + 0x24);
    *(int *)(iVar7 + 0x5a) = (int)*(short *)(*(int *)(param_2 + 4) + 0x1a);
    local_4 = 0xffffffff;
    *(int *)(iVar7 + 0x5e) = (int)*(short *)(*(int *)(param_2 + 4) + 0x1c);
    *(int *)(iVar7 + 0x7a) = (int)*(short *)(*(int *)(param_2 + 4) + 0x1e);
    *(int *)(iVar7 + 0x7e) = (int)*(short *)(*(int *)(param_2 + 4) + 0x20);
    *(int *)(iVar7 + 0x82) = (int)*(short *)(*(int *)(param_2 + 4) + 0x22);
    *(int *)(iVar7 + 0x86) = (int)*(short *)(*(int *)(param_2 + 4) + 0x24);
    *(int *)(iVar7 + 0x62) = (int)*(short *)(*(int *)(param_2 + 4) + 0x68);
    *(int *)(iVar7 + 0x76) = (int)*(short *)(*(int *)(param_2 + 4) + 0x6a);
    *(int *)(iVar7 + 0x66) = (int)*(short *)(*(int *)(param_2 + 4) + 0x6c);
    *(int *)(iVar7 + 0x6a) = (int)*(short *)(*(int *)(param_2 + 4) + 0x6e);
    *(int *)(iVar7 + 0x6e) = (int)*(short *)(*(int *)(param_2 + 4) + 0x70);
    *(int *)(iVar7 + 0x72) = (int)*(short *)(*(int *)(param_2 + 4) + 0x72);
    iVar8 = *(int *)(param_2 + 4);
    iVar8 = FUN_00466b90((int)*(short *)(iVar8 + 0x1a),(int)*(short *)(iVar8 + 0x1c),
                         (int)*(short *)(iVar8 + 0x68),(int)*(short *)(iVar8 + 0x6a),1);
LAB_00478437:
    *piVar11 = iVar8;
    param_2 = iVar10;
  }
  else {
    if (*(int *)(iVar7 + 0x82) == 1) {
      ExceptionList = &pvStack_c;
      local_1c = operator_new(0x62);
      local_4 = 1;
      if (local_1c == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004f11a0(*(int *)(param_2 + 4) + 0x28);
      }
      piVar11 = (int *)(iVar7 + 0x24);
      *(int *)(iVar7 + 0x5a) = (int)*(short *)(*(int *)(param_2 + 4) + 0x1c);
      local_4 = 0xffffffff;
      *(int *)(iVar7 + 0x5e) = (int)*(short *)(*(int *)(param_2 + 4) + 0x68);
      iVar8 = FUN_00467030((int)*(short *)(*(int *)(param_2 + 4) + 0x1c),
                           (int)*(short *)(*(int *)(param_2 + 4) + 0x68),1);
      goto LAB_00478437;
    }
    if (*(int *)(iVar7 + 0x82) != 2) {
      ExceptionList = &pvStack_c;
      local_1c = operator_new(0x5e);
      local_4 = 3;
      if (local_1c == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004f0ff0();
      }
      piVar11 = (int *)(iVar7 + 0x24);
      *(int *)(iVar7 + 0x5a) = (int)*(short *)(*(int *)(param_2 + 4) + 0x1a);
      local_4 = 0xffffffff;
      iVar8 = FUN_004671c0((int)*(short *)(*(int *)(param_2 + 4) + 0x1a),1);
      goto LAB_00478437;
    }
    ExceptionList = &pvStack_c;
    local_20 = (float)FUN_00467100((int)*(short *)(iVar7 + 0x1a),1);
    iVar7 = *(int *)(param_2 + 4);
    local_24 = (float)(int)local_20;
    param_2 = iVar10;
    if (*(short *)(iVar7 + 0x26) != 0) {
      sVar2 = *(short *)(iVar7 + 0x1a);
      if ((0 < sVar2) && ((sVar2 < 4 || (sVar2 == 5)))) {
        FUN_004e9370(*(undefined2 *)(iVar7 + 0x26));
        FUN_004ecea0();
        param_2 = __ftol();
        local_24 = (float)(extraout_ST0 * (float10)local_24);
      }
      iVar7 = (int)*(short *)(*(int *)(iVar5 + 4) + 0x1a);
      piVar11 = *(int **)((int)param_1 + 0x3b7e);
      if (*(int **)((int)param_1 + 0x3b7e) != (int *)0x0) {
        do {
          piVar9 = (int *)piVar11[2];
          piVar11 = (int *)*piVar11;
          cVar6 = (**(code **)(*piVar11 + 0x10))();
          if (((cVar6 != '\0') &&
              (*(uint *)((int)piVar11 + 0x16) == (uint)*(ushort *)(*(int *)(iVar5 + 4) + 0x26))) &&
             (*(int *)((int)piVar11 + 0x5a) == iVar7)) {
            local_20 = (float)(int)((uint)*(byte *)(*(int *)(iVar5 + 4) + 0x74) + piVar11[0xc]) *
                       *(float *)(&DAT_008eff64 + iVar7 * 4);
            fVar13 = (float10)FUN_004d0d40(iVar7);
            if (fVar13 < (float10)local_20) {
              ExceptionList = pvStack_c;
              return 3;
            }
            iVar7 = (uint)*(byte *)(*(int *)(iVar5 + 4) + 0x74) + piVar11[0xc];
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            piVar11[0xc] = iVar7;
            iVar7 = FUN_00467100(*(undefined4 *)((int)piVar11 + 0x5a),iVar7);
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            piVar11[8] = iVar7;
            local_1c = *(void **)((int)piVar11 + 0x1a);
            uStack_18 = *(undefined2 *)((int)piVar11 + 0x1e);
            FUN_0042dc20(param_2);
            *(void **)((int)piVar11 + 0x1a) = local_1c;
            *(undefined2 *)((int)piVar11 + 0x1e) = uStack_18;
            ExceptionList = pvStack_c;
            return 3;
          }
          piVar11 = piVar9;
        } while (piVar9 != (int *)0x0);
        param_1 = (int *)CONCAT22(uStack_2a,local_2c);
      }
    }
    local_1c = operator_new(0x5e);
    local_4 = 2;
    if (local_1c == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_004f0fc0();
    }
    local_4 = 0xffffffff;
    *(int *)(iVar7 + 0x5a) = (int)*(short *)(*(int *)(iVar5 + 4) + 0x1a);
    piVar11 = (int *)(iVar7 + 0x24);
    local_20 = (float)iVar7;
    iVar10 = __ftol();
    *piVar11 = iVar10;
    uVar3 = *(ushort *)(*(int *)(iVar5 + 4) + 0x26);
    if (uVar3 != 0) {
      local_24 = *(float *)(DAT_00ab27b4 + 0x22 + (uint)uVar3 * 0x4b2);
      local_1c = (void *)(DAT_00ab27b4 + 0x1a + (uint)uVar3 * 0x4b2);
      piVar9 = operator_new(0xe);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        *piVar9 = iVar7;
        piVar9[1] = (int)local_24;
        piVar9[2] = 0;
        *(undefined1 *)(piVar9 + 3) = 0;
      }
      pvVar4 = *(void **)((int)local_1c + 0xc);
      *(int **)((int)local_1c + 8) = piVar9;
      *(int *)((int)local_1c + 0xc) = (int)pvVar4 + 1;
      if (pvVar4 == (void *)0x0) {
        *(int **)((int)local_1c + 4) = piVar9;
        local_1c = pvVar4;
      }
      else {
        *(int **)((int)local_24 + 8) = piVar9;
        local_1c = pvVar4;
      }
    }
  }
  *(undefined4 *)(iVar7 + 0x4a) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x7e);
  *(uint *)(iVar7 + 0x30) = (uint)*(byte *)(*(int *)(iVar5 + 4) + 0x74);
  if (-1 < param_2) {
    FUN_0042dc20(param_2);
    *(undefined4 *)(iVar7 + 0x1a) = local_14;
    *(undefined2 *)(iVar7 + 0x1e) = local_10;
    iVar10 = *(int *)(*(int *)(iVar5 + 4) + 0x76);
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    *(int *)(iVar7 + 0x20) = iVar10;
    goto LAB_00478547;
  }
  iVar10 = *(int *)(iVar5 + 4);
  iVar8 = 0;
  if (*(int *)(iVar10 + 0x82) == 0) {
    local_1c = (void *)*piVar11;
    iVar10 = FUN_00466b90((int)*(short *)(iVar10 + 0x1a),(int)*(short *)(iVar10 + 0x1c),
                          (int)*(short *)(iVar10 + 0x68),(int)*(short *)(iVar10 + 0x6a),
                          *(undefined1 *)(iVar10 + 0x74));
LAB_004784cc:
    iVar8 = (iVar10 - (int)local_1c) - param_2;
  }
  else if (*(int *)(iVar10 + 0x82) == 1) {
    local_1c = (void *)*piVar11;
    iVar10 = FUN_00467030((int)*(short *)(iVar10 + 0x1c),(int)*(short *)(iVar10 + 0x68),
                          *(undefined1 *)(iVar10 + 0x74));
    goto LAB_004784cc;
  }
  FUN_0042dc20(iVar8);
  *(undefined4 *)(iVar7 + 0x1a) = local_14;
  *(undefined2 *)(iVar7 + 0x1e) = local_10;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  *(int *)(iVar7 + 0x20) = iVar8;
  local_1c = (void *)*piVar11;
  param_1 = (int *)CONCAT22(uStack_2a,local_2c);
  *(float *)(iVar7 + 0x46) = (float)((int)local_1c + param_2) / (float)(int)local_1c;
LAB_00478547:
  fVar1 = *(float *)(*(int *)(iVar5 + 4) + 0x7a);
  if (_DAT_007e3380 <= *(float *)(*(int *)(iVar5 + 4) + 0x7a)) {
    *(float *)(iVar7 + 0x28) = fVar1;
  }
  else {
    *(float *)(iVar7 + 0x28) = -fVar1;
    *(undefined1 *)(iVar7 + 0x58) = 0;
  }
  *(uint *)(iVar7 + 0x16) = (uint)*(ushort *)(*(int *)(iVar5 + 4) + 0x26);
  *(int **)(iVar7 + 0x2c) = param_1;
  local_2c = *(undefined2 *)(*(int *)(iVar5 + 4) + 0x14);
  uVar12 = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x16);
  uStack_2a = (undefined2)uVar12;
  uStack_28 = (undefined2)((uint)uVar12 >> 0x10);
  (**(code **)(*(int *)(iVar7 + 8) + 4))(&local_2c);
  if ((_DAT_007e3380 <= *(float *)(*(int *)(iVar5 + 4) + 0x7a)) ||
     (cVar6 = (**(code **)(*param_1 + 0x1c))(), cVar6 == '\0')) {
    iVar10 = *(int *)((int)param_1 + 0x3b82);
    piVar11 = operator_new(0xe);
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      *piVar11 = iVar7;
      piVar11[1] = iVar10;
      piVar11[2] = 0;
      *(undefined1 *)(piVar11 + 3) = 0;
    }
    iVar8 = *(int *)((int)param_1 + 0x3b86);
    *(int **)((int)param_1 + 0x3b82) = piVar11;
    *(int *)((int)param_1 + 0x3b86) = iVar8 + 1;
    if (iVar8 == 0) {
      *(int **)((int)param_1 + 0x3b7e) = piVar11;
    }
    else {
      *(int **)(iVar10 + 8) = piVar11;
    }
  }
  else {
    iVar10 = *(int *)((int)param_1 + 0x3b7e);
    piVar11 = operator_new(0xe);
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      *piVar11 = iVar7;
      piVar11[1] = 0;
      piVar11[2] = iVar10;
      *(undefined1 *)(piVar11 + 3) = 0;
    }
    iVar8 = *(int *)((int)param_1 + 0x3b86);
    *(int **)((int)param_1 + 0x3b7e) = piVar11;
    *(int *)((int)param_1 + 0x3b86) = iVar8 + 1;
    if (iVar8 == 0) {
      *(int **)((int)param_1 + 0x3b82) = piVar11;
    }
    else {
      *(int **)(iVar10 + 4) = piVar11;
    }
  }
  if (DAT_00dc4b5e != '\0') {
    uVar12 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
    FUN_00429a00(s_Auto_Slider_for__s____0083ce08,uVar12);
  }
  if (((*(int *)((int)param_1 + 6) == *(int *)(DAT_00d0ca90 + 6)) && (DAT_00d12b40 != (int *)0x0))
     && ((*(int *)(*DAT_00d12b40 + 0x3ba) != 0 && (*(int *)(DAT_00d0ca90 + 0x21e20) != 0)))) {
    FUN_0046e080();
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00(s_done__0083ce00);
  }
  if ((float)param_1[0xe73] < *(float *)(*(int *)(iVar5 + 4) + 0x7e)) {
    *(undefined1 *)(iVar7 + 0x3c) = 1;
  }
  else {
    (**(code **)(*param_1 + 0x28))(-*(float *)(*(int *)(iVar5 + 4) + 0x7e));
  }
  ExceptionList = pvStack_c;
  return 3;
}


