// FUN_0057cea0 @ 57cea0 size=1810

void __thiscall FUN_0057cea0(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint local_478;
  char *local_468;
  char *local_464;
  int local_460;
  undefined1 local_458 [100];
  undefined1 local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8b5c;
  local_c = ExceptionList;
  iVar13 = *param_2;
  if (iVar13 == 3) {
    ExceptionList = &local_c;
    puVar10 = (undefined *)FUN_0042b6c9(s_JOINMPGAME_00857258);
    iVar13 = 0;
    if (param_2[1] == 0) {
      puVar10 = &DAT_0083f5a0;
      pcVar14 = s___707Group_Created_00857244;
    }
    else if ((char *)param_2[8] == (char *)0x0) {
      pcVar14 = s_unknown_0083cea0;
    }
    else {
      uVar12 = 0xffffffff;
      pcVar14 = (char *)param_2[8];
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      pcVar14 = operator_new(~uVar12);
      FUN_00429d20(param_2[8],pcVar14);
    }
    if (DAT_00d43159 == '\x01') {
      FUN_007a630a(local_458,puVar10,pcVar14);
      pvVar7 = operator_new(0xc);
      local_4 = 0;
      if (pvVar7 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00566410(local_458,0xffffffff,0xffffffff,0);
      }
      local_4 = 0xffffffff;
      FUN_00565c50(uVar5);
      FUN_00568040(s__s_joined_00857238,pcVar14);
    }
    if ((*(char *)(param_1 + 0x37a) == '\x01') && (DAT_00d43154 != 0)) {
      puVar3 = operator_new(0xc);
      local_4 = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar4 = operator_new(0xe);
        if (puVar4 == (undefined2 *)0x0) {
          puVar4 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar4[4] = 0;
          *(undefined4 *)(puVar4 + 5) = 0;
        }
        puVar3[1] = puVar4;
        *(undefined1 *)(puVar3 + 2) = 0;
        *(undefined1 *)((int)puVar3 + 9) = 1;
        *puVar3 = &PTR_FUN_007e3e5c;
        *(undefined1 *)((int)puVar3 + 10) = 0;
        *puVar4 = 7;
        iVar6 = puVar3[1];
        *(undefined4 *)(iVar6 + 8) = DAT_0088f29c;
        local_478 = (uint)puVar3 & 0xff000000;
        *(undefined2 *)(iVar6 + 0xc) = DAT_0088f2a0;
        iVar6 = puVar3[1];
        *(uint *)(iVar6 + 2) = local_478;
        *(undefined2 *)(iVar6 + 6) = 0;
        *puVar3 = &PTR_FUN_007e3e3c;
      }
      local_4 = 0xffffffff;
      FUN_00565c50(puVar3);
      if (*(char *)(param_1 + 0x37b) != '\0') {
        puVar3 = operator_new(0xc);
        local_4 = 2;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          iVar6 = *(int *)(param_1 + 900);
          uVar2 = FUN_0042e980();
          uVar5 = *(undefined4 *)(param_1 + 0x3cc + iVar6 * 0x3e);
          uVar9 = *(undefined4 *)(param_1 + 0x3b0 + iVar6 * 0x3e);
          pvVar7 = operator_new(0x18);
          local_4._0_1_ = 3;
          if (pvVar7 == (void *)0x0) {
            pvVar7 = (void *)0x0;
          }
          else {
            FUN_0042d6c0();
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_0042d320(pvVar7);
          *puVar3 = &PTR_FUN_007ea35c;
          *(undefined1 *)((int)puVar3 + 10) = 0;
          *(undefined2 *)puVar3[1] = 3;
          iVar6 = puVar3[1];
          *(undefined4 *)(iVar6 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar6 + 0xc) = DAT_0088f2a0;
          puVar11 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar6 = puVar3[1];
          *(undefined4 *)(iVar6 + 2) = *puVar11;
          *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar11 + 1);
          *puVar3 = &PTR_FUN_007ea2fc;
          *(undefined4 *)(puVar3[1] + 0xe) = uVar9;
          *(undefined4 *)(puVar3[1] + 0x12) = uVar5;
          *(undefined1 *)(puVar3[1] + 0x16) = uVar2;
        }
        local_4 = 0xffffffff;
        FUN_00565c70(puVar3);
      }
      if ((param_2[1] != 0) && (0 < *(int *)(param_1 + 0xb70))) {
        do {
          FUN_0057de10(iVar13);
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(param_1 + 0xb70));
      }
    }
  }
  else if (iVar13 == 5) {
    ExceptionList = &local_c;
    uVar5 = FUN_0042b6c9(s_LEFTMPGAME_00857294);
    local_464 = (char *)param_2[9];
    uVar12 = 0xffffffff;
    local_460 = -1;
    pcVar14 = local_464;
    if (local_464 == (char *)0x0) {
      local_468 = s_unknown_0083cea0;
      local_464 = s_unknown_0083cea0;
    }
    else {
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      local_468 = operator_new(~uVar12);
      FUN_00429d20(param_2[9],local_468);
    }
    cVar1 = FUN_0042e8e0();
    if (cVar1 == '\0') {
      iVar13 = 0;
      if (*(int *)(param_1 + 0xb70) < 1) {
        ExceptionList = local_c;
        return;
      }
      piVar15 = (int *)(param_1 + 0x3c0);
      do {
        if ((*piVar15 != 0) && (iVar6 = FUN_007a8730(local_464,*piVar15), iVar6 == 0)) {
          local_460 = iVar13;
        }
        iVar13 = iVar13 + 1;
        piVar15 = (int *)((int)piVar15 + 0x3e);
      } while (iVar13 < *(int *)(param_1 + 0xb70));
      if (local_460 == -1) {
        ExceptionList = local_c;
        return;
      }
      FUN_0057e0f0(local_460,*(undefined1 *)(param_1 + 0x37a));
      if (DAT_00d43159 == '\x01') {
        FUN_007a630a(local_3f4,uVar5,local_468);
        pvVar7 = operator_new(0xc);
        local_4 = 4;
        if (pvVar7 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00566410(local_3f4,0xffffffff,0xffffffff,0);
        }
        local_4 = 0xffffffff;
        FUN_00565c50(uVar5);
      }
      *(undefined1 *)(DAT_00bd1500 + 0xbd4) = 1;
      ExceptionList = local_c;
      return;
    }
    cVar1 = FUN_0042e8e0();
    if ((cVar1 != '\0') && (iVar13 = 0, 0 < *(int *)(param_1 + 0xb70))) {
      do {
        iVar6 = param_1 + iVar13 * 0x3e;
        iVar8 = FUN_007a8730(local_464,*(undefined4 *)(param_1 + 0x3c0 + iVar13 * 0x3e));
        if (iVar8 == 0) {
          if (iVar13 == 0) {
            pvVar7 = operator_new(0xc);
            local_4 = 7;
            if (pvVar7 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar17 = 0;
              uVar16 = 0xffffffff;
              uVar9 = 0xffffffff;
              uVar5 = FUN_0042b6c9(s_HOSTLEFT_00857264);
              uVar5 = FUN_00566410(uVar5,uVar9,uVar16,uVar17);
            }
            local_4 = 0xffffffff;
            FUN_00565c50(uVar5);
            pvVar7 = operator_new(0x9e);
            local_4 = 8;
            if (pvVar7 != (void *)0x0) {
              FUN_006e3a60(s_HOST_DROP_MSG_CLIENT_00857270,0);
            }
            local_4 = 0xffffffff;
          }
          else {
            uVar5 = FUN_004af740(*(undefined4 *)(iVar6 + 0x3cc));
            pcVar14 = local_468;
            uVar9 = FUN_0042b6c9(s_CLIENTLEFT_00857288);
            FUN_007a630a(local_3f4,uVar9,pcVar14,uVar5);
            pvVar7 = operator_new(0xc);
            local_4 = 5;
            if (pvVar7 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00566410(local_3f4,0xffffffff,0xffffffff,0);
            }
            local_4 = 0xffffffff;
            FUN_00565c50(uVar5);
            *(undefined1 *)(iVar6 + 0x3d1) = 0;
            *(undefined1 *)(iVar6 + 0x3d0) = 1;
            if (iVar13 == *(int *)(param_1 + 900)) {
              pvVar7 = operator_new(0x9e);
              local_4 = 6;
              if (pvVar7 != (void *)0x0) {
                FUN_006e3a60(s_HOST_DROP_MSG_CLIENT_00857270,0);
              }
              local_4 = 0xffffffff;
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0xb70));
    }
  }
  else if ((iVar13 == 0x31) && (DAT_00d43154 != 0)) {
    ExceptionList = &local_c;
    puVar3 = operator_new(0xc);
    local_4 = 9;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0xe);
      if (puVar4 == (undefined2 *)0x0) {
        puVar4 = (undefined2 *)0x0;
      }
      else {
        puVar4[3] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined1 *)((int)puVar4 + 3) = 0;
        *(undefined1 *)(puVar4 + 1) = 0;
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 5) = 0;
      }
      puVar3[1] = puVar4;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 9) = 1;
      *puVar3 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)puVar3 + 10) = 0;
      *puVar4 = 10;
      iVar13 = puVar3[1];
      local_478 = (uint)puVar3 & 0xff000000;
      *(undefined4 *)(iVar13 + 8) = DAT_0088f2bc;
      *(undefined2 *)(iVar13 + 0xc) = DAT_0088f2c0;
      iVar13 = puVar3[1];
      *(uint *)(iVar13 + 2) = local_478;
      *(undefined2 *)(iVar13 + 6) = 0;
      *puVar3 = &PTR_FUN_007e3e3c;
    }
    local_4 = 0xffffffff;
    FUN_00565c50(puVar3);
  }
  *(uint *)(param_1 + 0xbcc) = *(uint *)(param_1 + 0xbcc) & 0x1f;
  ExceptionList = local_c;
  return;
}


