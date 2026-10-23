// FUN_007901b0 @ 7901b0 size=4157

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007901b0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *local_2d4;
  void *local_2d0;
  int local_2cc;
  undefined4 *local_2c0;
  undefined4 *local_2bc;
  void *local_2b8;
  undefined4 local_2ac;
  int *local_288;
  uint local_278;
  int *local_1f8;
  undefined *local_140;
  undefined1 local_13c [256];
  int local_3c;
  int local_38;
  int *local_34;
  undefined **local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined1 local_20;
  undefined **local_1e;
  undefined **local_16;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007e16c0;
  local_10 = ExceptionList;
  if (DAT_00dc4b7c == '\0') {
    DAT_00dc4b7c = 1;
    ExceptionList = &local_10;
    if (DAT_00893530 != 0) {
      ExceptionList = &local_10;
      FUN_0042ccc0();
    }
    FUN_00790195();
    FUN_00581ab0();
    FUN_00577f20();
    FUN_00577d20();
    if (DAT_00bd14fc != 0) {
      FUN_005822e0(0);
    }
    if ((DAT_00d0ca90 != 0) && (*(char *)(DAT_00d0ca90 + 0x21e90) != '\0')) {
      FUN_00654700();
    }
    if ((((DAT_00dc4b5d == '\0') && (DAT_00d43159 == '\0')) &&
        (*(char *)((int)DAT_00893750 + 0x111) != '\0')) && ((char)DAT_00893750[0x48] == '\0')) {
      (**(code **)(*DAT_0088eba8 + 0x34))();
      FUN_006d09e0(0);
    }
    if (DAT_00893750[3] != 0) {
      cVar2 = FUN_0042e9a0();
      if (cVar2 == '\0') {
        FUN_00583ac0(DAT_00877218,DAT_0087721c,0x10,DAT_0088fae8 != 0);
        FUN_005846f0();
        FUN_006d37e0();
        FUN_0064e6b0();
      }
      else {
        FUN_00583ac0(DAT_00877218,DAT_0087721c,0x10,DAT_0088fae8 != 0);
        FUN_005846f0();
        FUN_006d37e0();
        FUN_006ff200(1);
        local_2c = (int *)0x0;
        local_28 = (int *)0x0;
        local_24 = 0;
        local_20 = 0;
        local_30 = &PTR_LAB_007e36b4;
        local_8 = 0;
        FUN_00418f40();
        local_30 = &PTR_FUN_007e36fc;
        local_1e = &PTR_LAB_007e36e8;
        local_16 = &PTR_LAB_007e36e4;
        local_8 = 1;
        local_34 = *(int **)(DAT_00d13360 + 0x16);
        while (piVar1 = local_28, local_34 != (int *)0x0) {
          iVar5 = *local_34;
          local_34 = (int *)local_34[2];
          local_288 = operator_new(0xe);
          if (local_288 == (int *)0x0) {
            local_288 = (int *)0x0;
          }
          else {
            *local_288 = iVar5;
            local_288[1] = (int)piVar1;
            local_288[2] = 0;
            *(undefined1 *)(local_288 + 3) = 0;
          }
          local_28 = local_288;
          if (local_24 == 0) {
            local_2c = local_288;
            local_24 = local_24 + 1;
          }
          else {
            piVar1[2] = (int)local_288;
            local_24 = local_24 + 1;
          }
        }
        local_1f8 = local_2c;
        while (local_1f8 != (int *)0x0) {
          piVar1 = (int *)local_1f8[2];
          if ((undefined4 *)*local_1f8 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*local_1f8)(1);
          }
          FUN_00796cd8(local_1f8);
          local_1f8 = piVar1;
        }
        local_2c = (int *)0x0;
        local_28 = (int *)0x0;
        local_24 = 0;
        (**(code **)(*(int *)(DAT_00d13360 + 0x12) + 0x14))();
        local_8 = 0xffffffff;
        FUN_004161c0();
      }
      if (DAT_00893750 != (int *)0x0) {
        (**(code **)(*DAT_00893750 + 8))(1);
      }
      DAT_00893750 = (int *)0x0;
      if (DAT_008e4320 != (undefined4 *)0x0) {
        (**(code **)*DAT_008e4320)(1);
      }
      DAT_008e4320 = (undefined4 *)0x0;
    }
    if ((DAT_00893750 != (int *)0x0) && (*(char *)((int)DAT_00893750 + 0x111) != '\0')) {
      if (DAT_00dc4b6c != (undefined4 *)0x0) {
        (**(code **)*DAT_00dc4b6c)(1);
      }
      DAT_00dc4b6c = (undefined4 *)0x0;
      if (DAT_00dc4b70 != (undefined4 *)0x0) {
        (**(code **)*DAT_00dc4b70)(1);
      }
      DAT_00dc4b70 = (undefined4 *)0x0;
    }
    if (((DAT_00dc4b70 == (undefined4 *)0x0) || (DAT_00dc4b6c == (undefined4 *)0x0)) ||
       (cVar2 = FUN_0042e910(), cVar2 == '\0')) {
      if (DAT_00dc4b6c != (undefined4 *)0x0) {
        (**(code **)*DAT_00dc4b6c)(1);
      }
      DAT_00dc4b6c = (undefined4 *)0x0;
      if (DAT_00dc4b70 != (undefined4 *)0x0) {
        (**(code **)*DAT_00dc4b70)(1);
      }
      DAT_00dc4b70 = (undefined4 *)0x0;
    }
    else if (DAT_00d43159 == '\x01') {
      if (DAT_00dc4b6c != (undefined4 *)0x0) {
        (**(code **)*DAT_00dc4b6c)(1);
      }
      DAT_00dc4b6c = (undefined4 *)0x0;
      if (DAT_00dc4b70 != (undefined4 *)0x0) {
        (**(code **)*DAT_00dc4b70)(1);
      }
      DAT_00dc4b70 = (undefined4 *)0x0;
    }
    else {
      FUN_00583f10();
      FUN_00406270(*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1,*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1
                   ,DAT_00bd1bac);
      local_38 = 0;
      for (local_3c = 0; local_3c < *(int *)(DAT_00bd1500 + 0xb70); local_3c = local_3c + 1) {
        if (*(char *)(DAT_00bd1500 + 0x3d0 + local_3c * 0x3e) == '\0') {
          local_38 = local_38 + 1;
          FUN_004136a0(s_eurostilecond14bold_bmp_0087b688);
          local_140 = &DAT_00dc4b8c;
          if (*(char *)(DAT_00bd1500 + 0x3d1 + local_3c * 0x3e) != '\0') {
            if (DAT_00893750[1] == *(int *)(DAT_00bd1500 + 0x3d2 + local_3c * 0x3e)) {
              local_140 = &DAT_0087b6a0;
            }
            else {
              local_140 = &DAT_0087b6a4;
            }
          }
          if (*(char *)(DAT_00bd1500 + 0x3d1 + local_3c * 0x3e) == '\0') {
            local_2ac = FUN_0042b6c9(s_MP_WAITING_0087b6b8);
          }
          else {
            local_2ac = FUN_0042b6c9(s_MP_OK_0087b6b0);
          }
          iVar5 = DAT_00bd1500;
          uVar3 = FUN_004af740(*(undefined4 *)(DAT_00bd1500 + 0x3cc + local_3c * 0x3e),local_2ac,
                               local_140);
          FUN_007a630a(local_13c,s__s__s_____s__s_0087b6c4,
                       *(undefined4 *)(iVar5 + 0x3c0 + local_3c * 0x3e),uVar3);
          uVar9 = 0;
          uVar3 = 0xffff;
          iVar8 = DAT_00bd1bac;
          iVar5 = FUN_005841b0(DAT_00bd1bac,0xffff,0);
          iVar5 = iVar5 / 2 + 0x18 + local_38 * 0x10;
          iVar4 = FUN_005841a0(iVar5);
          FUN_00413509(local_13c,iVar4 / 2,iVar5,iVar8,uVar3,uVar9);
        }
      }
    }
    if (DAT_00dc4b5d == '\0') {
      FUN_00583f10();
    }
    if (DAT_00bd1500 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(DAT_00bd1500 + 0x37b);
    }
    if ((cVar2 != '\0') && (DAT_00d43154 == 0)) {
      iVar5 = *(int *)(DAT_00893530 + 0x20) - _DAT_00dc4b80;
      if (iVar5 < 0) {
        _DAT_00dc4b80 = 0;
      }
      if (100 < iVar5) {
        if (*(int *)(DAT_00bd1500 + 0xb70) != 0) {
          local_2bc = operator_new(0xc);
          local_8 = 2;
          if (local_2bc == (undefined4 *)0x0) {
            local_2bc = (undefined4 *)0x0;
          }
          else {
            uVar3 = *(undefined4 *)(DAT_00bd1500 + 900);
            local_2b8 = operator_new(0x12);
            local_8._0_1_ = 3;
            if (local_2b8 == (void *)0x0) {
              local_2b8 = (void *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            local_2bc[1] = local_2b8;
            *(undefined1 *)(local_2bc + 2) = 0;
            *(undefined1 *)((int)local_2bc + 9) = 1;
            *local_2bc = &PTR_LAB_007e3ebc;
            local_8 = CONCAT31(local_8._1_3_,4);
            *local_2bc = &PTR_FUN_007e5f80;
            *(undefined1 *)((int)local_2bc + 10) = 0;
            *(undefined2 *)local_2bc[1] = 0x132;
            iVar5 = local_2bc[1];
            *(undefined4 *)(iVar5 + 8) = DAT_0088f254;
            *(undefined2 *)(iVar5 + 0xc) = DAT_0088f258;
            puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar5 = local_2bc[1];
            *(undefined4 *)(iVar5 + 2) = *puVar6;
            *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar6 + 1);
            *local_2bc = &PTR_FUN_007e5f60;
            *(undefined4 *)(local_2bc[1] + 0xe) = uVar3;
          }
          local_8 = 0xffffffff;
          local_2c0 = operator_new(0xe);
          if (local_2c0 == (undefined4 *)0x0) {
            local_2c0 = (undefined4 *)0x0;
          }
          else {
            local_2c0[1] = 0;
            *(undefined1 *)(local_2c0 + 2) = 0;
            *(undefined1 *)((int)local_2c0 + 9) = 1;
            *local_2c0 = &PTR_LAB_007e3ebc;
            local_8 = 6;
            *local_2c0 = &PTR_FUN_007e943c;
            FUN_005661a0(local_2bc);
          }
          local_8 = 0xffffffff;
          FUN_00582390(local_2c0,*(undefined4 *)(DAT_00bd1500 + 0x3b0));
          if (local_2c0 != (undefined4 *)0x0) {
            (**(code **)*local_2c0)(1);
          }
          if (local_2bc != (undefined4 *)0x0) {
            (**(code **)*local_2bc)(1);
          }
        }
        _DAT_00dc4b80 = *(int *)(DAT_00893530 + 0x20);
      }
      cVar2 = FUN_0042e980();
      if (cVar2 != '\0') {
        cVar2 = FUN_00582540(*(undefined4 *)(DAT_00893530 + 0x24),
                             *(undefined4 *)(DAT_00893530 + 0x20));
        if (cVar2 == '\0') {
          if (DAT_00d36194 != 0) {
            *(undefined1 *)(DAT_00d36194 + 0x5c) = 0;
            DAT_00d36194 = 0;
          }
        }
        else {
          if (DAT_00d36194 == 0) {
            pvVar7 = operator_new(0x844);
            local_8 = 7;
            if (pvVar7 == (void *)0x0) {
              local_2cc = 0;
            }
            else {
              local_2cc = FUN_006dfa00();
            }
            local_8 = 0xffffffff;
            DAT_00d36194 = local_2cc;
            FUN_006dfa80();
          }
          *(undefined1 *)(DAT_00d36194 + 0x5c) = 1;
        }
      }
    }
    FUN_00577eb0();
    local_2d4 = operator_new(0xc);
    local_8 = 8;
    if (local_2d4 == (undefined4 *)0x0) {
      local_2d4 = (undefined4 *)0x0;
    }
    else {
      local_2d0 = operator_new(0xe);
      if (local_2d0 == (void *)0x0) {
        local_2d0 = (void *)0x0;
      }
      else {
        *(undefined2 *)((int)local_2d0 + 6) = 0;
        *(undefined1 *)((int)local_2d0 + 4) = 0;
        *(undefined1 *)((int)local_2d0 + 3) = 0;
        *(undefined1 *)((int)local_2d0 + 2) = 0;
        *(undefined2 *)((int)local_2d0 + 8) = 0;
        *(undefined4 *)((int)local_2d0 + 10) = 0;
      }
      local_2d4[1] = local_2d0;
      *(undefined1 *)(local_2d4 + 2) = 0;
      *(undefined1 *)((int)local_2d4 + 9) = 1;
      *local_2d4 = &PTR_LAB_007e3ebc;
      *local_2d4 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)local_2d4 + 10) = 0;
      *(undefined2 *)local_2d4[1] = 0x1b;
      iVar5 = local_2d4[1];
      *(undefined4 *)(iVar5 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar5 + 0xc) = DAT_0088f2a0;
      local_278 = local_278 & 0xff000000;
      iVar5 = local_2d4[1];
      *(uint *)(iVar5 + 2) = local_278;
      *(undefined2 *)(iVar5 + 6) = 0;
      *local_2d4 = &PTR_FUN_007e3e3c;
    }
    local_8 = 0xffffffff;
    FUN_00565c30(local_2d4);
    if (DAT_00893750 != (int *)0x0) {
      FUN_00430110();
    }
    DAT_00dc4b7c = '\0';
  }
  ExceptionList = local_10;
  return;
}


