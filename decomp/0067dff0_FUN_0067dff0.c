// FUN_0067dff0 @ 67dff0 size=1573

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0067dff0(int param_1,uint param_2,char param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined3 uVar10;
  undefined3 extraout_var;
  int iVar9;
  uint uVar11;
  float fVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined **local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  int local_64;
  undefined1 local_60;
  undefined1 local_5c [8];
  undefined1 local_54;
  undefined4 local_52;
  undefined1 local_4c [8];
  undefined1 local_44;
  undefined4 local_42;
  undefined4 *local_3c;
  int local_38;
  float local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d4a8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = FUN_005862f0(param_2);
  if (iVar4 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_34 = (float)(&DAT_0089cad8)[param_2];
  if (local_34 == 0.0) {
    ExceptionList = local_10;
    return 0;
  }
  local_2c = iVar4;
  if (param_3 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_006a9d50();
  }
  uVar14 = 0;
  uVar11 = -(uint)(param_4 != '\0') & param_2;
  uVar6 = FUN_006a9d50(uVar5,uVar11,0);
  uVar5 = FUN_0058bcc0(uVar6,uVar5,uVar11,uVar14);
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
  puVar7[9] = param_2;
  puVar7[10] = uVar5;
  puVar7[0xb] = 0;
  *(undefined1 *)((int)puVar7 + 0x138c3) = 0;
  iVar9 = *(int *)(param_1 + 10);
  local_54 = *(undefined1 *)(puVar7 + 0x4e2d);
  local_44 = *(undefined1 *)((int)puVar7 + 0x138b5);
  local_42 = *(undefined4 *)((int)local_34 + 6);
  FUN_00587120(iVar4);
  local_52 = *(undefined4 *)(iVar9 + 6);
  FUN_00587120(iVar4);
  uVar11 = (int)puVar7[10] >> 0x1f;
  fVar12 = (float)((puVar7[10] ^ uVar11) - uVar11);
  if (((*(uint *)(param_1 + 0x174) == param_2) && (*(char *)(param_1 + 0x178) != '\0')) &&
     (local_34 = (float)(int)ROUND(*(float *)(param_1 + 0x170)), (int)local_34 <= (int)fVar12)) {
    fVar12 = local_34;
  }
  if (10 < (int)fVar12) {
    _rand();
  }
  FUN_00468230();
  __ftol();
  _param_3 = __ftol();
  _param_4 = 0.0;
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 10) + 0xe892);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    local_28 = FUN_004e9370(*puVar2);
    iVar4 = FUN_005883a0(local_4c,local_28);
    fVar13 = (float10)FUN_004e4600((&DAT_0089cad8)[iVar4]);
    local_34 = (float)fVar13;
    fVar13 = (float10)FUN_004e4600(*(undefined4 *)(param_1 + 10));
    _param_4 = (float)((fVar13 + (float10)local_34) * (float10)_DAT_007e34c0 + (float10)_param_4);
    puVar2 = puVar1;
  }
  local_34 = (float)(int)ROUND(_param_4 * _DAT_007e34c0);
  if ((int)local_34 <= _param_3) {
    _param_3 = (int)local_34;
  }
  FUN_0044c670(0x18,param_2);
  iVar4 = __ftol();
  _param_4 = (float)(_param_3 - iVar4);
  puVar7[0xb] = 0;
  local_18 = (int *)FUN_00588190(local_4c,local_5c,1);
  local_6c = (undefined4 *)0x0;
  local_68 = (undefined4 *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_70 = &PTR_LAB_007e378c;
  local_8 = 2;
  bVar3 = false;
  local_28 = 0;
  local_1c = 0;
  do {
    if (((int)_param_4 < 1) || (0xb < local_28)) goto LAB_0067e5a8;
    piVar8 = (int *)FUN_0067e620(local_2c,puVar7,local_4c,local_18,&local_70,
                                 *(char *)((int)puVar7 + 0x138c3) == '\0',0);
    local_14 = piVar8;
    iVar4 = (**(code **)(*piVar8 + 4))();
    if (iVar4 == 0) {
      uVar10 = 0;
      if (bVar3) {
LAB_0067e5a8:
        piVar8 = local_18;
        FUN_00588400();
        iVar4 = puVar7[0x4e32];
        *(undefined1 *)(param_1 + 0x16e) = 0;
        *(float *)(param_1 + 0x166) = (float)iVar4;
        *(uint *)(param_1 + 0x16a) = param_2;
        if (piVar8 != (int *)0x0) {
          (**(code **)*piVar8)(1);
        }
        FUN_00461390(puVar7);
        local_70 = &PTR_LAB_007e378c;
        puVar7 = local_6c;
        while (puVar7 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar7[2];
          FUN_00796cd8(puVar7);
          puVar7 = puVar2;
        }
        ExceptionList = local_10;
        return 1;
      }
      if (piVar8 != (int *)0x0) {
        (**(code **)*piVar8)(1);
        uVar10 = extraout_var;
      }
      bVar3 = true;
      local_14 = (int *)FUN_0067e620(local_2c,puVar7,local_4c,local_18,&local_70,
                                     CONCAT31(uVar10,*(char *)((int)puVar7 + 0x138c3) == '\0'),1);
      piVar8 = local_14;
    }
    local_24 = (undefined4 *)piVar8[1];
    if (local_24 != (undefined4 *)0x0) {
      local_20 = puVar7 + local_1c + 0x271d;
      do {
        if ((int)_param_4 < 1) break;
        iVar4 = DAT_00ab27b4 + *(int *)*local_24 * 0x4b2;
        iVar9 = FUN_005883a0(local_4c,iVar4);
        fVar13 = (float10)FUN_004e4600((&DAT_0089cad8)[iVar9]);
        local_30 = (undefined4 *)(float)fVar13;
        local_38 = (int)ROUND((float)local_30);
        fVar13 = (float10)FUN_004e4600(*(undefined4 *)(param_1 + 10));
        local_30 = (undefined4 *)(float)(((float10)local_38 + fVar13) * (float10)_DAT_007e34c0);
        local_34 = (float)(int)ROUND((float)local_30);
        if ((float)(int)local_34 - (float)(int)local_34 * _DAT_007e6808 <= (float)(int)_param_4) {
          local_3c = *(undefined4 **)(iVar4 + 0x12);
          local_30 = local_68;
          local_68 = operator_new(0xe);
          if (local_68 == (undefined4 *)0x0) {
            local_68 = (undefined4 *)0x0;
          }
          else {
            *local_68 = local_3c;
            local_68[1] = local_30;
            local_68[2] = 0;
            *(undefined1 *)(local_68 + 3) = 0;
          }
          puVar2 = local_68;
          if (local_64 != 0) {
            local_30[2] = local_68;
            puVar2 = local_6c;
          }
          local_6c = puVar2;
          local_64 = local_64 + 1;
          (**(code **)(*local_18 + 0x18))(*(undefined4 *)(iVar4 + 0x12));
          local_20[-10000] = *(undefined4 *)(iVar4 + 0x12);
          uVar5 = FUN_005883a0(local_4c,iVar4);
          *local_20 = uVar5;
          _param_4 = (float)((int)_param_4 - (int)local_34);
          local_1c = local_1c + 1;
          local_20 = local_20 + 1;
          puVar7[0xb] = puVar7[0xb] + 1;
        }
        local_24 = (undefined4 *)local_24[2];
        piVar8 = local_14;
      } while (local_24 != (undefined4 *)0x0);
    }
    local_24 = (undefined4 *)piVar8[1];
    while (local_24 != (undefined4 *)0x0) {
      local_3c = (undefined4 *)local_24[2];
      FUN_00796cd8(*local_24);
      FUN_00796cd8(local_24);
      local_24 = local_3c;
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    if (piVar8 != (int *)0x0) {
      (**(code **)*piVar8)(1);
    }
    local_28 = local_28 + 1;
  } while( true );
}


