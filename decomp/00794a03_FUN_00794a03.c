// FUN_00794a03 @ 794a03 size=3530

LRESULT FUN_00794a03(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  LRESULT LVar6;
  int iVar7;
  undefined4 *local_1ac;
  void *local_1a8;
  undefined4 *local_1a4;
  void *local_1a0;
  undefined4 *local_19c;
  undefined4 local_198;
  undefined4 *local_190;
  undefined4 *local_18c;
  undefined4 *local_188;
  uint local_160;
  tagRECT local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007e1785;
  local_10 = ExceptionList;
  if (0x105 < param_2) {
    if (param_2 < 0x20b) {
      if (param_2 == 0x20a) {
        if (DAT_00893530 == 0) {
          return 0;
        }
        if (DAT_00bd13f0 != 0) {
          return 0;
        }
        ExceptionList = &local_10;
        local_19c = operator_new(0xc);
        local_8 = 3;
        if (local_19c == (undefined4 *)0x0) {
          local_19c = (undefined4 *)0x0;
        }
        else {
          iVar3 = (param_4 >> 0x10) - DAT_00bd1534;
          iVar7 = (param_4 & 0xffff) - DAT_00bd1530;
          pvVar4 = operator_new(0x1e);
          local_8._0_1_ = 4;
          if (pvVar4 == (void *)0x0) {
            local_198 = 0;
          }
          else {
            local_198 = FUN_00581f50();
          }
          local_8._0_1_ = 3;
          FUN_0042d320(local_198);
          local_8 = CONCAT31(local_8._1_3_,5);
          *local_19c = &PTR_FUN_007eae68;
          *(undefined1 *)((int)local_19c + 10) = 0;
          *(undefined2 *)local_19c[1] = 0xc;
          iVar1 = local_19c[1];
          *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
          puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar1 = local_19c[1];
          *(undefined4 *)(iVar1 + 2) = *puVar5;
          *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar5 + 1);
          *local_19c = &PTR_FUN_007eae48;
          *(undefined4 *)(local_19c[1] + 0xe) = 0;
          *(int *)(local_19c[1] + 0x12) = (int)(short)((short)(param_3 >> 0x10) / 0x78);
          iVar1 = local_19c[1];
          *(int *)(iVar1 + 0x16) = iVar7;
          *(int *)(iVar1 + 0x1a) = iVar3;
        }
        local_8 = 0xffffffff;
        FUN_00577f00(local_19c);
        ExceptionList = local_10;
        return 0;
      }
      switch(param_2) {
      case 0x201:
        ExceptionList = &local_10;
        if ((DAT_0088eb2c != (undefined1 *)0x0) &&
           (ExceptionList = &local_10, cVar2 = FUN_0040e500(), cVar2 != '\0')) {
          FUN_0040e460();
        }
        if (DAT_00893530 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        if (DAT_00bd13f0 != 0) {
          ExceptionList = local_10;
          return 0;
        }
        DAT_00bd13ec = 1;
        local_188 = operator_new(0xc);
        local_8 = 0;
        if (local_188 == (undefined4 *)0x0) {
          local_188 = (undefined4 *)0x0;
        }
        else {
          FUN_00795ab0(0x11,&DAT_0088f29c);
          *local_188 = &PTR_FUN_007eae48;
          *(undefined4 *)(local_188[1] + 0xe) = 0;
          *(WPARAM *)(local_188[1] + 0x12) = param_3;
          iVar3 = local_188[1];
          *(uint *)(iVar3 + 0x16) = param_4 & 0xffff;
          *(uint *)(iVar3 + 0x1a) = param_4 >> 0x10;
        }
        local_8 = 0xffffffff;
        FUN_00577f00(local_188);
        ExceptionList = local_10;
        return 0;
      case 0x202:
        ExceptionList = &local_10;
        if ((DAT_0088eb2c != (undefined1 *)0x0) &&
           (ExceptionList = &local_10, cVar2 = FUN_0040e500(), cVar2 != '\0')) {
          FUN_0040e460();
          *DAT_0088eb2c = 0;
          ExceptionList = local_10;
          return 0;
        }
        if (DAT_00893530 == 0) {
          ExceptionList = local_10;
          return 0;
        }
        if (DAT_00bd13f0 != 0) {
          ExceptionList = local_10;
          return 0;
        }
        DAT_00bd13ec = 0;
        local_18c = operator_new(0xc);
        local_8 = 1;
        if (local_18c == (undefined4 *)0x0) {
          local_18c = (undefined4 *)0x0;
        }
        else {
          FUN_00795ab0(0xe,&DAT_0088f29c);
          *local_18c = &PTR_FUN_007eae48;
          *(undefined4 *)(local_18c[1] + 0xe) = 0;
          *(WPARAM *)(local_18c[1] + 0x12) = param_3;
          iVar3 = local_18c[1];
          *(uint *)(iVar3 + 0x16) = param_4 & 0xffff;
          *(uint *)(iVar3 + 0x1a) = param_4 >> 0x10;
        }
        local_8 = 0xffffffff;
        FUN_00577f00(local_18c);
        ExceptionList = local_10;
        return 0;
      case 0x203:
        if (DAT_00893530 == 0) {
          return 0;
        }
        if (DAT_00bd13f0 != 0) {
          return 0;
        }
        ExceptionList = &local_10;
        local_190 = operator_new(0xc);
        local_8 = 2;
        if (local_190 == (undefined4 *)0x0) {
          local_190 = (undefined4 *)0x0;
        }
        else {
          FUN_00795ab0(0x14,&DAT_0088f29c);
          *local_190 = &PTR_FUN_007eae48;
          *(undefined4 *)(local_190[1] + 0xe) = 0;
          *(WPARAM *)(local_190[1] + 0x12) = param_3;
          iVar3 = local_190[1];
          *(uint *)(iVar3 + 0x16) = param_4 & 0xffff;
          *(uint *)(iVar3 + 0x1a) = param_4 >> 0x10;
        }
        local_8 = 0xffffffff;
        FUN_00577f00(local_190);
        ExceptionList = local_10;
        return 0;
      case 0x204:
        if (DAT_00893530 == 0) {
          return 0;
        }
        if (DAT_00bd13f0 != 0) {
          return 0;
        }
        DAT_00bd13ed = 1;
        ExceptionList = &local_10;
        local_1a4 = operator_new(0xc);
        local_8 = 6;
        if (local_1a4 == (undefined4 *)0x0) {
          local_1a4 = (undefined4 *)0x0;
        }
        else {
          local_1a0 = operator_new(0x1e);
          local_8._0_1_ = 7;
          if (local_1a0 == (void *)0x0) {
            local_1a0 = (void *)0x0;
          }
          else {
            FUN_0042d6c0();
          }
          local_8._0_1_ = 6;
          FUN_0042d320(local_1a0);
          local_8 = CONCAT31(local_8._1_3_,8);
          *local_1a4 = &PTR_FUN_007eae68;
          *(undefined1 *)((int)local_1a4 + 10) = 0;
          *(undefined2 *)local_1a4[1] = 0x12;
          iVar3 = local_1a4[1];
          *(undefined4 *)(iVar3 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar3 + 0xc) = DAT_0088f2a0;
          puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar3 = local_1a4[1];
          *(undefined4 *)(iVar3 + 2) = *puVar5;
          *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar5 + 1);
          *local_1a4 = &PTR_FUN_007eae48;
          *(undefined4 *)(local_1a4[1] + 0xe) = 0;
          *(WPARAM *)(local_1a4[1] + 0x12) = param_3;
          iVar3 = local_1a4[1];
          *(uint *)(iVar3 + 0x16) = param_4 & 0xffff;
          *(uint *)(iVar3 + 0x1a) = param_4 >> 0x10;
        }
        local_8 = 0xffffffff;
        FUN_00577f00(local_1a4);
        ExceptionList = local_10;
        return 0;
      case 0x205:
        if (DAT_00893530 == 0) {
          return 0;
        }
        if (DAT_00bd13f0 != 0) {
          return 0;
        }
        DAT_00bd13ed = 0;
        ExceptionList = &local_10;
        local_1ac = operator_new(0xc);
        local_8 = 9;
        if (local_1ac == (undefined4 *)0x0) {
          local_1ac = (undefined4 *)0x0;
        }
        else {
          local_1a8 = operator_new(0x1e);
          local_8 = CONCAT31(local_8._1_3_,10);
          if (local_1a8 == (void *)0x0) {
            local_1a8 = (void *)0x0;
          }
          else {
            FUN_0042d2d0();
            *(undefined2 *)((int)local_1a8 + 8) = 0;
            *(undefined4 *)((int)local_1a8 + 10) = 0;
          }
          local_1ac[1] = local_1a8;
          *(undefined1 *)(local_1ac + 2) = 0;
          *(undefined1 *)((int)local_1ac + 9) = 1;
          *local_1ac = &PTR_LAB_007e3ebc;
          *local_1ac = &PTR_FUN_007eae68;
          *(undefined1 *)((int)local_1ac + 10) = 0;
          *(undefined2 *)local_1ac[1] = 0xf;
          iVar3 = local_1ac[1];
          *(undefined4 *)(iVar3 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar3 + 0xc) = DAT_0088f2a0;
          local_160 = local_160 & 0xff000000;
          iVar3 = local_1ac[1];
          *(uint *)(iVar3 + 2) = local_160;
          *(undefined2 *)(iVar3 + 6) = 0;
          *local_1ac = &PTR_FUN_007eae48;
          *(undefined4 *)(local_1ac[1] + 0xe) = 0;
          *(WPARAM *)(local_1ac[1] + 0x12) = param_3;
          iVar3 = local_1ac[1];
          *(uint *)(iVar3 + 0x16) = param_4 & 0xffff;
          *(uint *)(iVar3 + 0x1a) = param_4 >> 0x10;
        }
        local_8 = 0xffffffff;
        FUN_00577f00(local_1ac);
        ExceptionList = local_10;
        return 0;
      }
    }
    else {
      if (param_2 == 0x216) {
        ExceptionList = &local_10;
        GetWindowRect(DAT_00dc4a58,&local_20);
        FUN_005841f0(&local_20);
        ExceptionList = local_10;
        return 0;
      }
      if (param_2 == 0x3b9) {
        return 0;
      }
    }
switchD_00794a90_caseD_3:
    ExceptionList = &local_10;
    LVar6 = DefWindowProcA(param_1,param_2,param_3,param_4);
    ExceptionList = local_10;
    return LVar6;
  }
  if (param_2 == 0x105) {
LAB_00795051:
    ExceptionList = &local_10;
    if (((param_3 == 0x1b) && (ExceptionList = &local_10, DAT_0088eb2c != (undefined1 *)0x0)) &&
       (ExceptionList = &local_10, cVar2 = FUN_0040e500(), cVar2 != '\0')) {
      FUN_0040e460();
      *DAT_0088eb2c = 0;
    }
    if ((DAT_00893530 != 0) && (FUN_00581a90(param_3,param_4), DAT_00bd13f0 != 0)) {
      DAT_00bd13f0 = DAT_00bd13f0 ^ 1;
    }
  }
  else {
    if (param_2 < 0x101) {
      if (param_2 != 0x100) {
        switch(param_2) {
        case 2:
        case 0x12:
          ExceptionList = &local_10;
          cVar2 = FUN_0040e500();
          if (cVar2 != '\0') {
            FUN_0040e460();
          }
          *DAT_0088eb2c = 0;
          FUN_0078f9ce();
          PostQuitMessage(0);
          DAT_00dc4b5c = 1;
          ExceptionList = local_10;
          return 0;
        case 0x14:
          return 0;
        case 0x1c:
          DAT_0087b63c = param_3;
          if (DAT_00893530 == 0) {
            return 0;
          }
          if (param_3 != 0) {
            ExceptionList = &local_10;
            FUN_0042cc70();
            if (DAT_0088fae8 != 0) {
              ExceptionList = local_10;
              return 0;
            }
            FUN_00584690();
            ExceptionList = local_10;
            return 0;
          }
          if (DAT_0088fae8 == 1) {
            return 0;
          }
          *(undefined1 *)(DAT_00893530 + 0x1e) = 0;
          return 0;
        }
        goto switchD_00794a90_caseD_3;
      }
    }
    else {
      if (param_2 == 0x101) goto LAB_00795051;
      if (param_2 == 0x102) {
        if (DAT_00893530 == 0) {
          return 0;
        }
        if (DAT_00bd13ef != '\0') {
          return 0;
        }
        ExceptionList = &local_10;
        FUN_00581350(param_3,param_4);
        ExceptionList = local_10;
        return 0;
      }
      if (param_2 != 0x104) goto switchD_00794a90_caseD_3;
    }
    if ((DAT_00893530 != 0) &&
       (ExceptionList = &local_10, FUN_00581490(param_3,param_4), DAT_00bd13ef != '\0')) {
      if (param_3 == 0x6b) {
        param_3 = 0x2b;
      }
      if (param_3 == 0x6d) {
        param_3 = 0x2d;
      }
      FUN_00581350(param_3,param_4);
    }
  }
  ExceptionList = local_10;
  return 0;
}


