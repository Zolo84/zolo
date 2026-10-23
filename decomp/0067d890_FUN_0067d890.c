// FUN_0067d890 @ 67d890 size=1879

undefined4 __thiscall FUN_0067d890(int param_1,uint param_2,char param_3,char param_4,char param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined3 uVar12;
  undefined3 extraout_var;
  uint uVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined **local_7c [5];
  undefined **local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_5c;
  undefined1 local_58;
  undefined1 local_54 [8];
  undefined1 local_4c;
  undefined4 local_4a;
  undefined1 local_44 [8];
  undefined1 local_3c;
  undefined4 local_3a;
  undefined4 *local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d4a63;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_1;
  iVar4 = FUN_005862f0(param_2);
  if (iVar4 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_14 = (int *)(&DAT_0089cad8)[param_2];
  if (local_14 == (int *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  local_28 = iVar4;
  if (param_3 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_006a9d50();
  }
  uVar15 = 0;
  uVar13 = -(uint)(param_4 != '\0') & param_2;
  uVar6 = FUN_006a9d50(uVar5,uVar13,0);
  uVar5 = FUN_0058bcc0(uVar6,uVar5,uVar13,uVar15);
  puVar7 = operator_new(0x138d4);
  local_8 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_00425b20();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00428b00();
    *(undefined ***)((int)puVar7 + 0x12) = &PTR_LAB_007e4068;
    *(undefined4 *)((int)puVar7 + 0x16) = 0;
    *(undefined2 *)((int)puVar7 + 0x1a) = 0;
    puVar7[7] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    *(undefined1 *)(puVar7 + 0x4e2d) = 0;
    *(undefined1 *)((int)puVar7 + 0x138b5) = 0;
    *(undefined4 *)((int)puVar7 + 0x138b6) = 0;
    *(undefined4 *)((int)puVar7 + 0x138ba) = 0;
    *(undefined4 *)((int)puVar7 + 0x138be) = 0;
    *(undefined1 *)((int)puVar7 + 0x138c2) = 0;
    *(undefined1 *)((int)puVar7 + 0x138c3) = 0;
    puVar7[0x4e31] = 0;
    puVar7[0x4e32] = 0;
    *(undefined1 *)(puVar7 + 0x4e34) = 0;
    *(undefined1 *)((int)puVar7 + 0x138d1) = 0;
    *(undefined1 *)((int)puVar7 + 0x138d2) = 0;
    *puVar7 = &PTR_FUN_007e6c28;
    puVar7[2] = &PTR_LAB_007e6c14;
    *(undefined ***)((int)puVar7 + 0x12) = &PTR_FUN_007e6c0c;
  }
  local_8 = 0xffffffff;
  (**(code **)(puVar7[2] + 8))();
  *(undefined4 *)((int)puVar7 + 0x1a) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined2 *)((int)puVar7 + 0x1e) = *(undefined2 *)(iVar4 + 0x10);
  uVar6 = FUN_006a9d50();
  puVar7[8] = uVar6;
  puVar7[10] = uVar5;
  puVar7[9] = param_2;
  puVar7[0xb] = 0;
  *(undefined1 *)((int)puVar7 + 0x138c3) = 1;
  if (param_5 != '\0') {
    FUN_00461390(puVar7);
    if (puVar7 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return 1;
    }
    (**(code **)*puVar7)(1);
    ExceptionList = local_10;
    return 1;
  }
  cVar3 = FUN_004a0b90(param_2);
  if (cVar3 != '\0') {
    *(undefined1 *)((int)puVar7 + 0x138c2) = 1;
    ExceptionList = local_10;
    return 1;
  }
  local_3c = *(undefined1 *)(puVar7 + 0x4e2d);
  local_4c = *(undefined1 *)((int)puVar7 + 0x138b5);
  local_3a = *(undefined4 *)(*(int *)(param_1 + 10) + 6);
  FUN_00587120(iVar4);
  local_4a = *(undefined4 *)((int)local_14 + 6);
  FUN_00587120(iVar4);
  uVar13 = (int)puVar7[10] >> 0x1f;
  _param_4 = (puVar7[10] ^ uVar13) - uVar13;
  if (((*(uint *)(param_1 + 0x174) == param_2) && (*(char *)(param_1 + 0x178) == '\0')) &&
     (iVar4 = __ftol(), _param_4 <= iVar4)) {
    _param_4 = iVar4;
  }
  if (10 < _param_4) {
    iVar4 = _rand();
    _param_4 = (_param_4 * 0x5a) / 100 + iVar4 % ((int)(_param_4 + (_param_4 >> 0x1f & 3U)) >> 2);
  }
  if (((int)puVar7[10] < 0) && (*(char *)((int)puVar7 + 0x138c3) != '\0')) {
    iVar4 = _rand();
    _param_4 = iVar4 % 3 + 1;
  }
  FUN_006a9d50();
  FUN_004734e0();
  local_7c[0] = &PTR_FUN_007e5258;
  local_8 = 2;
  FUN_00680620(local_7c);
  piVar11 = local_14;
  cVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8b2) + 0x24))
                    (*(undefined4 *)((int)local_14 + 0x117de));
  if (cVar3 == '\0') {
    cVar3 = FUN_00430a90(*(undefined4 *)((int)piVar11 + 6));
    local_8 = 0xffffffff;
    local_7c[0] = &PTR_LAB_007e3ff0;
    if (cVar3 == '\0') goto LAB_0067db93;
    FUN_004309c0();
    if (0x14 < _param_4) {
      _param_4 = _param_4 + -0x14;
      *(undefined1 *)((int)puVar7 + 0x138d1) = 1;
      goto LAB_0067dd16;
    }
  }
  else {
LAB_0067db93:
    local_8 = 0xffffffff;
    local_7c[0] = &PTR_LAB_007e3ff0;
    FUN_004309c0();
  }
  if ((*(int *)(*(int *)((int)piVar11 + 0x12da) + 0x3b30) == 0) &&
     (cVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8b2) + 0x24))
                        (*(undefined4 *)((int)piVar11 + 0x117de)), cVar3 == '\0')) {
    _param_3 = 0;
    iVar4 = FUN_006a9d50();
    if (*(char *)(iVar4 + 0xe8d6 + (int)piVar11) == '\0') {
      _param_3 = 0x32;
    }
    iVar4 = _rand();
    if ((iVar4 % 100 < _param_3) && (0x46 < _param_4)) {
      _param_4 = _param_4 + -0x46;
      *(undefined1 *)(puVar7 + 0x4e34) = 1;
      goto LAB_0067dd16;
    }
  }
  cVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8b2) + 0x24))
                    (*(undefined4 *)((int)piVar11 + 0x117de));
  if (cVar3 == '\0') {
    iVar4 = FUN_00527630(0);
    iVar8 = FUN_00527630(0);
    piVar11 = (int *)((int)local_14 + 0xe88e);
    iVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe88e) + 4))();
    iVar10 = (**(code **)(*piVar11 + 4))();
    iVar4 = (iVar8 - iVar4) + (iVar10 - iVar9);
    if (0x32 < iVar4) {
      iVar4 = 0x32;
    }
    iVar8 = _rand();
    param_1 = local_18;
    if ((iVar8 % 100 < iVar4) && (0x32 < _param_4)) {
      _param_4 = _param_4 + -0x32;
      *(undefined1 *)((int)puVar7 + 0x138d2) = 1;
    }
  }
LAB_0067dd16:
  FUN_0044c670(0x18,param_2);
  iVar4 = __ftol();
  _param_4 = _param_4 + iVar4;
  puVar7[0xb] = 0;
  local_14 = (int *)FUN_00588190(local_44,local_54,0);
  local_64 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_68 = &PTR_LAB_007e378c;
  local_8 = 3;
  bVar2 = false;
  local_24 = 0;
  local_1c = 0;
  do {
    if ((_param_4 < 1) || (0xb < local_24)) goto LAB_0067df6e;
    piVar11 = (int *)FUN_0067e620(local_28,puVar7,local_44,local_14,&local_68,
                                  *(char *)((int)puVar7 + 0x138c3) == '\0',0);
    iVar4 = (**(code **)(*piVar11 + 4))();
    if (iVar4 == 0) {
      uVar12 = 0;
      if (bVar2) {
LAB_0067df6e:
        piVar11 = local_14;
        FUN_00588400();
        iVar4 = puVar7[0x4e32];
        *(undefined1 *)(param_1 + 0x16e) = 1;
        *(float *)(param_1 + 0x166) = (float)iVar4;
        *(uint *)(param_1 + 0x16a) = param_2;
        if (piVar11 != (int *)0x0) {
          (**(code **)*piVar11)(1);
        }
        FUN_00461390(puVar7);
        if (puVar7 != (undefined4 *)0x0) {
          (**(code **)*puVar7)(1);
        }
        local_68 = &PTR_LAB_007e378c;
        puVar7 = local_64;
        while (puVar7 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar7[2];
          FUN_00796cd8(puVar7);
          puVar7 = puVar1;
        }
        ExceptionList = local_10;
        return 1;
      }
      if (piVar11 != (int *)0x0) {
        (**(code **)*piVar11)(1);
        uVar12 = extraout_var;
      }
      bVar2 = true;
      piVar11 = (int *)FUN_0067e620(local_28,puVar7,local_44,local_14,&local_68,
                                    CONCAT31(uVar12,*(char *)((int)puVar7 + 0x138c3) == '\0'),1);
    }
    local_20 = (undefined4 *)piVar11[1];
    if (local_20 != (undefined4 *)0x0) {
      local_34 = puVar7 + local_1c + 0x271d;
      do {
        if (_param_4 < 1) break;
        iVar4 = DAT_00ab27b4 + *(int *)*local_20 * 0x4b2;
        fVar14 = (float10)FUN_004e4600(*(undefined4 *)
                                        (DAT_00ab27b4 + 0x3d4 + *(int *)*local_20 * 0x4b2));
        local_2c = (undefined4 *)(float)fVar14;
        local_30 = (int)ROUND((float)local_2c);
        if (local_30 <= _param_4) {
          uVar5 = *(undefined4 *)(iVar4 + 0x12);
          local_2c = local_60;
          local_60 = operator_new(0xe);
          if (local_60 == (undefined4 *)0x0) {
            local_60 = (undefined4 *)0x0;
          }
          else {
            *local_60 = uVar5;
            local_60[1] = local_2c;
            local_60[2] = 0;
            *(undefined1 *)(local_60 + 3) = 0;
          }
          puVar1 = local_60;
          if (local_5c != 0) {
            local_2c[2] = local_60;
            puVar1 = local_64;
          }
          local_64 = puVar1;
          local_5c = local_5c + 1;
          (**(code **)(*local_14 + 0x18))(*(undefined4 *)(iVar4 + 0x12));
          puVar1 = local_34;
          local_34[-10000] = *(undefined4 *)(iVar4 + 0x12);
          uVar5 = FUN_005883a0(local_44,iVar4);
          *puVar1 = uVar5;
          _param_4 = _param_4 - local_30;
          local_1c = local_1c + 1;
          local_34 = puVar1 + 1;
          puVar7[0xb] = puVar7[0xb] + 1;
          param_1 = local_18;
        }
        local_20 = (undefined4 *)local_20[2];
      } while (local_20 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)piVar11[1];
    while (puVar1 != (undefined4 *)0x0) {
      local_34 = (undefined4 *)puVar1[2];
      FUN_00796cd8(*puVar1);
      FUN_00796cd8(puVar1);
      puVar1 = local_34;
    }
    piVar11[1] = 0;
    piVar11[2] = 0;
    piVar11[3] = 0;
    if (piVar11 != (int *)0x0) {
      (**(code **)*piVar11)(1);
    }
    local_24 = local_24 + 1;
  } while( true );
}


