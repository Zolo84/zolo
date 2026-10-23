// FUN_005bb48f @ 5bb48f size=4789

undefined4
FUN_005bb48f(int *param_1,int param_2,char param_3,undefined4 param_4,ushort param_5,char param_6)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 local_27c;
  int local_278;
  undefined4 *local_274;
  undefined4 *local_270;
  undefined4 *local_25c;
  undefined **local_244;
  undefined **local_240;
  undefined **local_23c;
  undefined **local_238;
  int local_228;
  int local_21c;
  int local_210;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined1 local_a0 [4];
  int local_9c;
  int *local_98;
  int local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  int *local_84;
  undefined4 local_80;
  int *local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  undefined4 local_60;
  undefined **local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined **local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_34;
  undefined **local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  int local_1c;
  undefined ***local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc478;
  local_10 = ExceptionList;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  ExceptionList = &local_10;
  if (DAT_00dc4b5e != '\0') {
    if (param_6 == '\0') {
      local_238 = (undefined **)&DAT_008592d8;
    }
    else {
      local_238 = &PTR_LAB_008592d4;
    }
    if (param_3 == '\0') {
      local_23c = (undefined **)&DAT_008592e0;
    }
    else {
      local_23c = &PTR_LAB_008592dc;
    }
    ExceptionList = &local_10;
    cVar2 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if (cVar2 == '\0') {
      local_240 = &PTR_LAB_008592e4;
    }
    else {
      local_240 = (undefined **)&DAT_008592e8;
    }
    if (*(char *)((int)param_1 + 0x17b) == '\0') {
      local_244 = (undefined **)&DAT_008592f0;
    }
    else {
      local_244 = &PTR_LAB_008592ec;
    }
    iVar4 = param_1[3];
    uVar3 = (**(code **)(param_1[0x47] + 4))(local_244,local_240,local_23c,local_238);
    FUN_00405ad0(s_UnitServer__Destination___d__for_008592f4,param_2,
                 *(undefined4 *)((int)param_1 + 0x1a),iVar4,uVar3);
  }
  if ((((param_6 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x30))(), cVar2 == '\0')) &&
      (cVar2 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar2 == '\0')) &&
     (*(char *)((int)param_1 + 0x17b) != '\0')) {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  if (((param_3 == '\0') || (param_2 != param_1[3])) ||
     (cVar2 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))(), cVar2 != '\0')) {
    iVar4 = (**(code **)(param_1[0x47] + 4))();
    if (iVar4 != 0) {
      local_70 = (**(code **)(*param_1 + 0x40))(0);
      if (*(int *)((int)param_1 + 0x176) != 0) {
        local_80 = (**(code **)(*param_1 + 0x40))(0);
        cVar2 = FUN_0051b210();
        if (cVar2 == '\0') {
          (**(code **)(**(int **)(*(int *)((int)param_1 + 0x176) + 0x84) + 0x48))(param_1,local_80);
        }
        else {
          (**(code **)(**(int **)(*(int *)((int)param_1 + 0x176) + 0x80) + 0x48))(param_1,local_80);
        }
      }
      local_78 = local_78 & 0xffffff00;
      local_74 = (**(code **)(param_1[0x47] + 4))();
      local_74 = local_74 + 1;
      local_7c = (int *)param_1[0x48];
      while ((local_7c != (int *)0x0 && (-1 < local_74))) {
        local_84 = (int *)*local_7c;
        iVar4 = local_84[0x19];
        iVar6 = (**(code **)(*local_84 + 0x24))();
        if (iVar4 < iVar6) {
          ExceptionList = local_10;
          return 0;
        }
        if (*(int *)(local_84[0x1e] + 0x12) == param_1[3]) {
          iVar4 = (**(code **)(param_1[0x47] + 4))();
          if ((iVar4 == 1) && (param_1[3] == *(int *)(local_84[0x1e] + 0x12))) {
            FUN_005b0270(local_84,param_1);
            local_74 = local_74 + -1;
            local_7c = (int *)param_1[0x48];
            local_78 = CONCAT31(local_78._1_3_,1);
          }
          else {
            local_7c = (int *)local_7c[2];
          }
        }
        else {
          FUN_005b0270(local_84,param_1);
          local_74 = local_74 + -1;
          local_7c = (int *)param_1[0x48];
        }
      }
      if ((local_78 & 0xff) == 1) {
        local_270 = operator_new(0xc);
        local_8 = 1;
        if (local_270 == (undefined4 *)0x0) {
          local_270 = (undefined4 *)0x0;
        }
        else {
          FUN_004c0150(0x2d,param_1 + 6);
          *local_270 = &PTR_FUN_007e3e3c;
        }
        local_8 = 0xffffffff;
        FUN_00565bc0(local_270);
      }
      if (local_70 == param_1[3]) {
        local_274 = operator_new(0xc);
        uVar1 = DAT_0088f28c;
        local_8 = 2;
        if (local_274 == (undefined4 *)0x0) {
          local_274 = (undefined4 *)0x0;
        }
        else {
          uStack_da = (undefined2)DAT_0088f28e;
          uStack_d8 = (undefined2)((uint)DAT_0088f28e >> 0x10);
          FUN_00458490(0x30,param_1 + 6);
          *local_274 = &PTR_FUN_007e5370;
          iVar4 = local_274[1];
          *(int *)(iVar4 + 0xe) = param_1[6];
          *(short *)(iVar4 + 0x12) = (short)param_1[7];
          *(undefined1 *)(local_274[1] + 0x14) = 1;
          *(undefined1 *)(local_274[1] + 0x15) = 0;
          *(undefined4 *)(local_274[1] + 0x16) = 0;
          iVar4 = local_274[1];
          *(uint *)(iVar4 + 0x1a) = CONCAT22(uStack_da,uVar1);
          *(undefined2 *)(iVar4 + 0x1e) = uStack_d8;
        }
        local_8 = 0xffffffff;
        FUN_00565bc0(local_274);
        ExceptionList = local_10;
        return 0;
      }
    }
    local_1c = FUN_004e9370(param_2);
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x30))();
      if (cVar2 == '\0') {
        iVar4 = (**(code **)(*param_1 + 0x14))();
        local_88 = *(undefined4 **)(*(int *)(iVar4 + 0x2aa) + 4);
        while (local_88 != (undefined4 *)0x0) {
          local_8c = *local_88;
          local_88 = (undefined4 *)local_88[2];
          FUN_005bacbb(local_8c);
        }
      }
      else if ((param_1[3] == 0) && (cVar2 = FUN_005230e0(param_2), cVar2 == '\0')) {
        ExceptionList = local_10;
        return 0;
      }
    }
    else {
      if (*(int *)(local_1c + 0x254) == 8) {
        if (*(char *)(local_1c + 0x471) == '\0') {
          ExceptionList = local_10;
          return 0;
        }
        uVar3 = (**(code **)(*param_1 + 0x10))();
        cVar2 = FUN_0052b150(uVar3);
        if (cVar2 == '\0') {
          ExceptionList = local_10;
          return 0;
        }
      }
      if ((param_1[3] == 0) && (cVar2 = FUN_005230e0(param_2), cVar2 == '\0')) {
        ExceptionList = local_10;
        return 0;
      }
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_5c = &PTR_FUN_007e8694;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_30 = &PTR_FUN_007e8b90;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_48 = &PTR_FUN_007e8b48;
    local_8 = 5;
    local_18 = (undefined ***)0x0;
    cVar2 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if ((cVar2 == '\0') && (param_3 == '\0')) {
      local_278 = FUN_0051c0c0();
    }
    else {
      local_278 = param_1[3];
    }
    local_14 = local_278;
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x28))();
      if (cVar2 == '\0') {
        local_18 = &local_30;
      }
      else {
        local_18 = &local_5c;
        if (local_14 == 0) {
          (**(code **)(*param_1 + 0x10))();
          local_14 = FUN_0051c0c0();
        }
      }
    }
    else {
      local_18 = &local_48;
      if (local_14 == 0) {
        (**(code **)(*param_1 + 0x18))();
        local_14 = FUN_0051c0c0();
      }
    }
    uVar3 = FUN_004e9370(param_2);
    uVar7 = FUN_004e9370(local_14);
    local_34 = FUN_00431220(param_1,uVar7,uVar3);
    cVar2 = (*(code *)(*local_18)[2])();
    if (cVar2 == '\0') {
      uVar3 = (*(code *)(*local_18)[1])();
      FUN_00405ad0(s_UnitServer__Found_a_path_of_leng_008593dc,uVar3);
      local_90 = local_90 & 0xffffff00;
      cVar2 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
      if (cVar2 == '\0') {
        if ((param_3 != '\0') &&
           (iVar4 = *(int *)(*local_18[1] + 0x12), iVar6 = FUN_00523f70(), iVar6 != iVar4)) {
          local_90 = CONCAT31(local_90._1_3_,1);
          FUN_005b91d4(param_1);
        }
      }
      else {
        local_90 = CONCAT31(local_90._1_3_,1);
      }
      pvVar8 = operator_new(0xc);
      local_8._0_1_ = 6;
      if (pvVar8 == (void *)0x0) {
        local_27c = 0;
      }
      else {
        local_27c = FUN_005667e0(param_1 + 6,param_3,local_18);
      }
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00565bc0(local_27c);
      if ((local_90 & 0xff) != 0) {
        iVar4 = param_1[3];
        uVar9 = (uint)param_5;
        uVar3 = FUN_00523f70(param_4,uVar9);
        FUN_005bca59(param_1,iVar4,uVar3,param_4,uVar9);
      }
      iVar4 = (**(code **)(param_1[0x47] + 4))();
      if (iVar4 != 0) {
        if (*(int *)((int)param_1 + 0x176) != 0) {
          uVar3 = *(undefined4 *)((int)param_1 + 0x176);
          uVar7 = FUN_0051b210();
          FUN_005b02c0(uVar3,param_1,uVar7);
        }
        local_94 = (**(code **)(param_1[0x47] + 4))();
        local_94 = local_94 + 1;
        local_98 = (int *)param_1[0x48];
        while ((local_98 != (int *)0x0 && (-1 < local_94))) {
          local_9c = *local_98;
          if (*(int *)(*(int *)(local_9c + 0x78) + 0x12) == param_1[3]) {
            local_98 = (int *)local_98[2];
          }
          else {
            FUN_005b0270(local_9c,param_1);
            local_94 = local_94 + -1;
            local_98 = (int *)param_1[0x48];
          }
        }
      }
    }
    else {
      FUN_00405ad0(s_UnitServer__No_path_in_pathfind__008593b8);
    }
    local_8._0_1_ = 4;
    local_48 = &PTR_LAB_007e518c;
    local_210 = local_44;
    while (local_210 != 0) {
      iVar4 = *(int *)(local_210 + 8);
      FUN_00796cd8(local_210);
      local_210 = iVar4;
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    local_30 = &PTR_LAB_007e518c;
    local_21c = local_2c;
    while (local_21c != 0) {
      iVar4 = *(int *)(local_21c + 8);
      FUN_00796cd8(local_21c);
      local_21c = iVar4;
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_8 = 0xffffffff;
    local_5c = &PTR_LAB_007e518c;
    local_228 = local_58;
    while (local_228 != 0) {
      iVar4 = *(int *)(local_228 + 8);
      FUN_00796cd8(local_228);
      local_228 = iVar4;
    }
    ExceptionList = local_10;
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if ((cVar2 == '\0') || (iVar4 = (**(code **)(param_1[0x47] + 4))(), iVar4 == 0)) {
    FUN_005bacbb(param_1);
  }
  else {
    FUN_005b91d4(param_1);
    local_60 = (**(code **)(*param_1 + 0x40))(0);
    local_64 = (**(code **)(param_1[0x47] + 4))();
    local_64 = local_64 + 1;
    local_68 = (int *)param_1[0x48];
    while ((local_68 != (int *)0x0 && (0 < local_64))) {
      local_6c = (int *)*local_68;
      if (*(int *)(local_6c[0x1e] + 0x12) == param_1[3]) {
LAB_005bb8dc:
        local_68 = (int *)local_68[2];
      }
      else {
        piVar5 = (int *)(**(code **)(*(int *)local_6c[0x20] + 0xc))(local_a0,param_1);
        piVar5 = (int *)(**(code **)(*piVar5 + 0x28))();
        if (*piVar5 == 0) goto LAB_005bb8dc;
        if (DAT_00dc4b5e != '\0') {
          uVar3 = (**(code **)(*local_6c + 0xc))(local_60);
          FUN_00405ad0(s_UnitServer__Retreat_attacker_uni_00859378,
                       *(undefined4 *)((int)param_1 + 0x1a),uVar3);
        }
        (**(code **)(*(int *)local_6c[0x20] + 0x48))(param_1,local_60);
        local_68 = (int *)param_1[0x48];
        local_64 = local_64 + -1;
      }
    }
    local_25c = operator_new(0xc);
    uVar1 = DAT_0088f28c;
    local_8 = 0;
    if (local_25c == (undefined4 *)0x0) {
      local_25c = (undefined4 *)0x0;
    }
    else {
      uStack_b6 = (undefined2)DAT_0088f28e;
      uStack_b4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
      FUN_00458490(0x30,param_1 + 6);
      *local_25c = &PTR_FUN_007e5370;
      iVar4 = local_25c[1];
      *(int *)(iVar4 + 0xe) = param_1[6];
      *(short *)(iVar4 + 0x12) = (short)param_1[7];
      *(undefined1 *)(local_25c[1] + 0x14) = 1;
      *(undefined1 *)(local_25c[1] + 0x15) = 0;
      *(undefined4 *)(local_25c[1] + 0x16) = 0;
      iVar4 = local_25c[1];
      *(uint *)(iVar4 + 0x1a) = CONCAT22(uStack_b6,uVar1);
      *(undefined2 *)(iVar4 + 0x1e) = uStack_b4;
    }
    local_8 = 0xffffffff;
    FUN_00565bc0(local_25c);
  }
  ExceptionList = local_10;
  return 0;
}


