// FUN_00469920 @ 469920 size=2177

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00469920(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  int *local_4c;
  int local_44;
  undefined1 local_3c [8];
  undefined4 local_34;
  undefined2 local_30;
  undefined8 local_2c;
  int *local_24;
  float local_20;
  int local_1c;
  float local_18;
  char local_13;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bca18;
  local_10 = ExceptionList;
  iVar5 = (&DAT_0089cad8)[param_2];
  if (iVar5 == 0) {
    return (float10)_DAT_007e3d28;
  }
  ExceptionList = &local_10;
  local_1c = iVar5;
  cVar3 = (**(code **)(*param_1 + 0x450))(param_2,0);
  if (cVar3 == '\0') {
    ExceptionList = local_10;
    return (float10)_DAT_007e3d28;
  }
  if (*(int *)(*(int *)(iVar5 + 0x12da) + 0x3b30) == *(int *)((int)param_1 + 6)) {
    ExceptionList = local_10;
    return (float10)_DAT_007e3d28;
  }
  iVar4 = FUN_00527630(0);
  if (iVar4 < 1) {
    ExceptionList = local_10;
    return (float10)_DAT_007e3d28;
  }
  if (*(int *)(*(int *)(iVar5 + 0x12da) + 0x3b30) != 0) {
    ExceptionList = local_10;
    return (float10)_DAT_007e3d28;
  }
  local_11 = '\0';
  piVar10 = DAT_00d615f6;
joined_r0x00469a1f:
  if (piVar10 == (int *)0x0) {
    iVar4 = _rand();
    local_24 = (int *)(iVar4 % 0x3c);
    local_2c = (double)-((float)(int)local_24 + _DAT_007e681c);
    fVar12 = (float10)FUN_005885d0();
    fVar12 = (float10)local_2c - fVar12 * (float10)_DAT_007e3358;
    local_18 = (float)fVar12;
    if (((float10)_DAT_007e3380 < fVar12) && (cVar3 = FUN_0044beb0(), cVar3 != '\0')) {
      local_18 = local_18 + _DAT_007e4090;
    }
    local_12 = '\0';
    fVar12 = (float10)FUN_004687f0(0,param_1);
    local_24 = (int *)(float)fVar12;
    fVar12 = (float10)FUN_004687f0(1,iVar5);
    local_20 = (float)((float10)(float)local_24 / fVar12);
    cVar3 = FUN_0044d840();
    if (cVar3 == '\0') {
      if ((*(float *)(iVar5 + 0x11836) < _DAT_007e6868) && (local_20 < _DAT_007e3374)) {
        local_18 = local_18 + _DAT_007e681c;
      }
    }
    else {
      cVar3 = FUN_0044d840();
      if (cVar3 != '\0') {
        local_18 = local_18 - _DAT_007e6828;
      }
      local_24 = (int *)(_DAT_007e3374 / local_20);
      iVar4 = FUN_0044dc80(5);
      local_2c = (double)CONCAT44(iVar4 + -4,(undefined4)local_2c);
      fVar1 = (float)(iVar4 + -4);
      if (fVar1 < (float)local_24) {
        local_24 = (int *)fVar1;
      }
      cVar3 = FUN_004a0a80();
      if ((cVar3 == '\0') && (_DAT_007e3374 <= (float)local_24)) {
        local_24 = (int *)0x3f800000;
      }
      local_18 = *(float *)(iVar5 + 0x334c) * (float)local_24 + local_18;
    }
    if (param_1[0xcd4] != 0) {
      local_2c = (double)CONCAT44(*(undefined4 *)((int)param_1 + 6),(undefined4)local_2c);
      iVar5 = FUN_00584c90();
      if ((int *)iVar5 != local_2c._4_4_) {
        cVar3 = FUN_0044d840();
        fVar1 = _DAT_007e6860;
        if (cVar3 != '\0') {
          fVar1 = _DAT_007e6864;
        }
        local_18 = local_18 - fVar1;
      }
    }
    if (*(char *)(param_2 + 0xe8d6 + (int)param_1) == '\0') {
      cVar3 = FUN_004a0a80();
      if ((cVar3 == '\0') || (cVar3 = FUN_004a0a80(), cVar3 == '\0')) {
        local_18 = local_18 - _DAT_007e6818;
      }
      else {
        local_18 = local_18 - _DAT_007e681c;
      }
    }
    iVar5 = FUN_0044d810();
    iVar4 = FUN_0044d810();
    uVar9 = iVar4 - iVar5 >> 0x1f;
    iVar5 = ((iVar4 - iVar5 ^ uVar9) - uVar9) * 10;
    local_2c = (double)CONCAT44(iVar5,(undefined4)local_2c);
    local_18 = (float)iVar5 + local_18;
    iVar5 = FUN_0044d810();
    if (iVar5 == 0) {
      local_18 = local_18 + _DAT_007e682c;
    }
    else {
      iVar5 = FUN_0044d810();
      if (iVar5 == 1) {
        local_18 = local_18 + _DAT_007e4090;
      }
    }
    iVar5 = FUN_006b5820(param_2);
    local_2c = (double)CONCAT44(iVar5,(undefined4)local_2c);
    if (_DAT_007e3374 <= (float)iVar5) {
      iVar5 = FUN_006b5820(param_2);
      fVar1 = (float)iVar5 + (float)iVar5;
      local_2c = (double)CONCAT44(fVar1,(undefined4)local_2c);
      local_24 = (int *)(int)ROUND(fVar1);
      iVar5 = _rand();
      local_2c = (double)CONCAT44(iVar5 % (int)local_24,(undefined4)local_2c);
      local_18 = (float)(iVar5 % (int)local_24) + local_18;
      iVar5 = FUN_006b5820(param_2);
      local_2c = (double)CONCAT44(iVar5,(undefined4)local_2c);
      if (_DAT_007e685c <= (float)iVar5) {
        local_11 = '\x01';
      }
    }
    iVar5 = FUN_006b58b0(param_2);
    local_2c = (double)CONCAT44(iVar5,(undefined4)local_2c);
    local_18 = local_18 - (float)iVar5;
    piVar6 = (int *)FUN_006b5880(param_2);
    local_4c = (int *)0x0;
    local_44 = 0;
    local_18 = local_18 - (float)(int)piVar6;
    local_8 = 0;
    iVar5 = 1;
    piVar10 = (int *)0x0;
    local_2c._4_4_ = piVar6;
    do {
      cVar3 = FUN_0044b280(iVar5);
      piVar6 = piVar10;
      piVar2 = local_4c;
      if (cVar3 != '\0') {
        local_2c._4_4_ = piVar10;
        piVar6 = operator_new(0xe);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar5;
          piVar6[1] = (int)piVar10;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar4 = local_44 + 1;
        bVar11 = local_44 != 0;
        piVar2 = piVar6;
        local_44 = iVar4;
        if (bVar11) {
          local_2c._4_4_[2] = (int)piVar6;
          piVar2 = local_4c;
        }
      }
      local_4c = piVar2;
      iVar5 = iVar5 + 1;
      piVar10 = piVar6;
    } while (iVar5 < 0x157);
    local_13 = '\0';
    local_24 = local_4c;
    if (local_4c == (int *)0x0) {
LAB_00469ef6:
      iVar5 = FUN_004a0750();
      if ((*(int *)(iVar5 + 0x3fe) < 0xce4) &&
         ((*(char *)(DAT_00893530 + 0x16) < '\x03' || ('\x05' < *(char *)(DAT_00893530 + 0x16))))) {
        while (local_4c != (int *)0x0) {
          piVar10 = (int *)local_4c[2];
          FUN_00796cd8(local_4c);
          local_4c = piVar10;
        }
        ExceptionList = local_10;
        return (float10)_DAT_007e3d28;
      }
      if (*(int *)(param_1[0x48] + 0xcc) < 1) {
        while (local_4c != (int *)0x0) {
          piVar10 = (int *)local_4c[2];
          FUN_00796cd8(local_4c);
          local_4c = piVar10;
        }
        ExceptionList = local_10;
        return (float10)_DAT_007e3d28;
      }
      iVar5 = *(int *)(*(int *)(local_1c + 0x12da) + 0x3b30);
      if ((iVar5 != 0) &&
         (local_2c._4_4_ = (int *)FUN_006b5880(iVar5), _DAT_007e3380 < (float)(int)local_2c._4_4_))
      {
        while (local_4c != (int *)0x0) {
          piVar10 = (int *)local_4c[2];
          FUN_00796cd8(local_4c);
          local_4c = piVar10;
        }
        ExceptionList = local_10;
        return (float10)_DAT_007e3d28;
      }
      if (local_13 != '\0') {
        while (local_4c != (int *)0x0) {
          piVar10 = (int *)local_4c[2];
          FUN_00796cd8(local_4c);
          local_4c = piVar10;
        }
        ExceptionList = local_10;
        return (float10)_DAT_007e3d28;
      }
      local_2c._4_4_ = (int *)(*(int *)(param_1[0x48] + 0xcc) + -0x32);
      local_18 = (float)(int)local_2c._4_4_ + local_18;
    }
    else {
      do {
        iVar5 = *local_24;
        local_24 = (int *)local_24[2];
        iVar4 = (&DAT_0089cad8)[iVar5];
        cVar3 = FUN_0044b280(iVar5);
        if (cVar3 != '\0') {
          local_13 = '\x01';
        }
        iVar7 = FUN_005862f0(*(undefined4 *)(local_1c + 6));
        if ((iVar7 != 0) && (cVar3 = FUN_00584e20(*(undefined4 *)(local_1c + 6)), cVar3 != '\0')) {
          local_2c._4_4_ = (int *)FUN_006b58b0(iVar5);
          local_18 = (float)(int)local_2c._4_4_ + local_18;
          cVar3 = FUN_005861c0(iVar5);
          if (cVar3 != '\0') {
            local_34 = *(undefined4 *)(iVar4 + 0x12d4);
            local_30 = *(undefined2 *)(iVar4 + 0x12d8);
            iVar7 = FUN_0042e060(local_3c,&local_34);
            if (((int)*(char *)(iVar7 + 2) + *(short *)(iVar7 + 4) * 0xc < 3) &&
               (*(int *)(iVar4 + 0x3350) == 0)) {
              local_11 = '\x01';
              local_12 = '\x01';
              local_2c._4_4_ =
                   (int *)(*(float *)(local_1c + 0x334c) + *(float *)(local_1c + 0x334c));
              iVar4 = *(int *)(*DAT_00d12b40 + 0x362);
              uVar8 = FUN_0044e1b0();
              uVar8 = FUN_0044e1b0(uVar8);
              fVar13 = (float10)FUN_0044a9c0(uVar8);
              fVar12 = (float10)(float)local_2c._4_4_;
              local_2c._4_4_ = (int *)(iVar4 * 0x14);
              local_18 = (float)((fVar12 - fVar13) + (float10)(int)local_2c._4_4_ +
                                 (float10)local_18 + (float10)_DAT_007e6858);
            }
          }
        }
        local_2c._4_4_ = (int *)FUN_006b58b0(iVar5);
        if (((_DAT_007e685c <= (float)(int)local_2c._4_4_) &&
            (iVar4 = FUN_005862f0(iVar5), iVar4 != 0)) &&
           (cVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x26) + 0x22) + 0x24))(iVar5),
           cVar3 != '\0')) {
          local_11 = '\x01';
        }
      } while (local_24 != (int *)0x0);
      if (local_12 == '\0') goto LAB_00469ef6;
    }
    iVar5 = FUN_0044dc80(5);
    iVar5 = (iVar5 + -5) * 5;
    fVar1 = _DAT_007e34c0;
    if ((_DAT_007e34c0 <= local_20) && (fVar1 = local_20, _DAT_007e3374 < local_20)) {
      fVar1 = (local_20 - _DAT_007e3374) * _DAT_007e4090 + local_20;
    }
    local_18 = ((float)iVar5 + local_18) / fVar1;
    if (local_12 != '\0') {
      iVar5 = *(int *)(*DAT_00d12b40 + 0x362) * 100;
      local_18 = (float)iVar5 + local_18;
    }
    local_2c = (double)CONCAT44(iVar5,(undefined4)local_2c);
    if (local_11 == '\0') {
      local_18 = local_18 * _DAT_007e6800;
    }
    cVar3 = FUN_0044beb0();
    if (cVar3 != '\0') {
      local_18 = local_18 * _DAT_007e34c0;
    }
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x12da) + 0x3b30);
    if (iVar5 != 0) {
      if ((*(char *)(*(int *)(local_1c + 0x12da) + iVar5 * 0x2c + 0x2c) == '\0') ||
         (_DAT_00dc18ec <= *(float *)(param_1[0x48] + 0xdc))) {
        if (iVar5 != param_2) {
          while (local_4c != (int *)0x0) {
            piVar10 = (int *)local_4c[2];
            FUN_00796cd8(local_4c);
            local_4c = piVar10;
          }
LAB_0046a188:
          ExceptionList = local_10;
          return (float10)_DAT_007e3d28;
        }
      }
      else {
        local_18 = 100.0;
      }
    }
    while (local_4c != (int *)0x0) {
      piVar10 = (int *)local_4c[2];
      FUN_00796cd8(local_4c);
      local_4c = piVar10;
    }
    ExceptionList = local_10;
    return (float10)local_18;
  }
  piVar6 = (int *)piVar10[2];
  iVar4 = *piVar10;
  piVar10 = piVar6;
  if ((((*(int *)(iVar4 + 0x1a) != param_2) && (*(int *)(iVar4 + 0x16) != param_2)) ||
      ((iVar5 = local_1c, *(int *)(iVar4 + 0x1a) != *(int *)((int)param_1 + 6) &&
       (*(int *)(iVar4 + 0x16) != *(int *)((int)param_1 + 6))))) || (*(int *)(iVar4 + 0x1e) != 2))
  goto joined_r0x00469a1f;
  goto LAB_0046a188;
}


