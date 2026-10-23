// FUN_005393b9 @ 5393b9 size=4743

int * __fastcall FUN_005393b9(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  undefined4 *local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  undefined4 *local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  undefined4 *local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  undefined4 *local_274;
  undefined4 *local_270;
  int local_26c;
  int local_268;
  undefined4 *local_264;
  undefined4 *local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  undefined4 *local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  undefined4 *local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  undefined4 *local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int *local_210;
  undefined1 local_110 [256];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c2ae6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_210 = operator_new(0x1e);
  local_8 = 0;
  if (local_210 == (int *)0x0) {
    local_210 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_210 = (int)&PTR_FUN_007e492c;
    local_210[4] = 0;
    local_210[5] = 0;
    local_210[6] = 0;
    *(undefined1 *)(local_210 + 7) = 0;
    local_210[3] = (int)&PTR_LAB_007e3ac0;
    *local_210 = (int)&PTR_FUN_007e3a28;
    local_210[3] = (int)&PTR_LAB_007e39f8;
  }
  local_8 = 0xffffffff;
  local_224 = operator_new(0x14);
  local_8 = 1;
  if (local_224 == (undefined4 *)0x0) {
    local_224 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x10);
    local_8._0_1_ = 2;
    if (pvVar3 == (void *)0x0) {
      local_214 = 0;
    }
    else {
      local_214 = FUN_0053ee00(param_1 + 0x13d80);
    }
    local_224[1] = 0;
    local_224[2] = 0;
    *local_224 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 3;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (pvVar3 == (void *)0x0) {
      local_218 = 0;
    }
    else {
      local_218 = FUN_0053e740(0x74);
    }
    if (local_218 == 0) {
      local_21c = 0;
    }
    else {
      *(int *)(local_218 + 8) = *(int *)(local_218 + 8) + 1;
      local_21c = local_218;
    }
    local_224[3] = local_21c;
    if (local_214 == 0) {
      local_220 = 0;
    }
    else {
      *(int *)(local_214 + 8) = *(int *)(local_214 + 8) + 1;
      local_220 = local_214;
    }
    local_224[4] = local_220;
    *local_224 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_210 + 0x84))(local_224);
  local_238 = operator_new(0x14);
  local_8 = 5;
  if (local_238 == (undefined4 *)0x0) {
    local_238 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x10);
    local_8._0_1_ = 6;
    if (pvVar3 == (void *)0x0) {
      local_228 = 0;
    }
    else {
      local_228 = FUN_0053ee00(param_1 + 0x13e80);
    }
    local_238[1] = 0;
    local_238[2] = 0;
    *local_238 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 7;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,8);
    if (pvVar3 == (void *)0x0) {
      local_22c = 0;
    }
    else {
      local_22c = FUN_0053e740(0x198);
    }
    if (local_22c == 0) {
      local_230 = 0;
    }
    else {
      *(int *)(local_22c + 8) = *(int *)(local_22c + 8) + 1;
      local_230 = local_22c;
    }
    local_238[3] = local_230;
    if (local_228 == 0) {
      local_234 = 0;
    }
    else {
      *(int *)(local_228 + 8) = *(int *)(local_228 + 8) + 1;
      local_234 = local_228;
    }
    local_238[4] = local_234;
    *local_238 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_210 + 0x84))(local_238);
  FUN_00429d20(param_1 + 0x14680,local_110);
  local_24c = operator_new(0x14);
  local_8 = 9;
  if (local_24c == (undefined4 *)0x0) {
    local_24c = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x10);
    local_8._0_1_ = 10;
    if (pvVar3 == (void *)0x0) {
      local_23c = 0;
    }
    else {
      local_23c = FUN_0053ee00(local_110);
    }
    local_24c[1] = 0;
    local_24c[2] = 0;
    *local_24c = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0xb;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    if (pvVar3 == (void *)0x0) {
      local_240 = 0;
    }
    else {
      local_240 = FUN_0053e740(0x199);
    }
    if (local_240 == 0) {
      local_244 = 0;
    }
    else {
      *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
      local_244 = local_240;
    }
    local_24c[3] = local_244;
    if (local_23c == 0) {
      local_248 = 0;
    }
    else {
      *(int *)(local_23c + 8) = *(int *)(local_23c + 8) + 1;
      local_248 = local_23c;
    }
    local_24c[4] = local_248;
    *local_24c = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_210 + 0x84))(local_24c);
  local_260 = operator_new(0x14);
  local_8 = 0xd;
  if (local_260 == (undefined4 *)0x0) {
    local_260 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x10);
    local_8._0_1_ = 0xe;
    if (pvVar3 == (void *)0x0) {
      local_250 = 0;
    }
    else {
      local_250 = FUN_0053ee00(param_1 + 0x14280);
    }
    local_260[1] = 0;
    local_260[2] = 0;
    *local_260 = &PTR_LAB_007e38f8;
    local_8._0_1_ = 0xf;
    pvVar3 = operator_new(0x14);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    if (pvVar3 == (void *)0x0) {
      local_254 = 0;
    }
    else {
      local_254 = FUN_0053e740(0x1db);
    }
    if (local_254 == 0) {
      local_258 = 0;
    }
    else {
      *(int *)(local_254 + 8) = *(int *)(local_254 + 8) + 1;
      local_258 = local_254;
    }
    local_260[3] = local_258;
    if (local_250 == 0) {
      local_25c = 0;
    }
    else {
      *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
      local_25c = local_250;
    }
    local_260[4] = local_25c;
    *local_260 = &PTR_FUN_007e3878;
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_210 + 0x84))(local_260);
  if (*(char *)(param_1 + 0x13c7a) != '\0') {
    local_274 = operator_new(0x14);
    local_8 = 0x11;
    if (local_274 == (undefined4 *)0x0) {
      local_274 = (undefined4 *)0x0;
    }
    else {
      local_264 = operator_new(0xe);
      if (local_264 == (undefined4 *)0x0) {
        local_264 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)(param_1 + 0x13c7a);
        local_264[1] = 6;
        local_264[2] = 0;
        *local_264 = &PTR_LAB_007e38f8;
        *local_264 = &PTR_FUN_007e49c4;
        *(undefined1 *)(local_264 + 3) = uVar1;
        *local_264 = &PTR_FUN_007e76a0;
      }
      local_274[1] = 0;
      local_274[2] = 0;
      *local_274 = &PTR_LAB_007e38f8;
      local_8._0_1_ = 0x12;
      pvVar3 = operator_new(0x14);
      local_8 = CONCAT31(local_8._1_3_,0x13);
      if (pvVar3 == (void *)0x0) {
        local_268 = 0;
      }
      else {
        local_268 = FUN_0053e740(0x245);
      }
      if (local_268 == 0) {
        local_26c = 0;
      }
      else {
        *(int *)(local_268 + 8) = *(int *)(local_268 + 8) + 1;
        local_26c = local_268;
      }
      local_274[3] = local_26c;
      if (local_264 == (undefined4 *)0x0) {
        local_270 = (undefined4 *)0x0;
      }
      else {
        local_264[2] = local_264[2] + 1;
        local_270 = local_264;
      }
      local_274[4] = local_270;
      *local_274 = &PTR_FUN_007e3878;
    }
    local_8 = 0xffffffff;
    (**(code **)(*local_210 + 0x84))(local_274);
  }
  iVar2 = (&DAT_0089cad8)[*(int *)(param_1 + -4)];
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x148b4) != '\0') {
      local_2b0 = operator_new(0x14);
      local_8 = 0x1c;
      if (local_2b0 == (undefined4 *)0x0) {
        local_2b0 = (undefined4 *)0x0;
      }
      else {
        pvVar3 = operator_new(0x10);
        local_8._0_1_ = 0x1d;
        if (pvVar3 == (void *)0x0) {
          local_2a0 = 0;
        }
        else {
          local_2a0 = FUN_0053ee00(param_1 + 0x148b4);
        }
        local_2b0[1] = 0;
        local_2b0[2] = 0;
        *local_2b0 = &PTR_LAB_007e38f8;
        local_8._0_1_ = 0x1e;
        pvVar3 = operator_new(0x14);
        local_8 = CONCAT31(local_8._1_3_,0x1f);
        if (pvVar3 == (void *)0x0) {
          local_2a4 = 0;
        }
        else {
          local_2a4 = FUN_0053e740(0x573);
        }
        if (local_2a4 == 0) {
          local_2a8 = 0;
        }
        else {
          *(int *)(local_2a4 + 8) = *(int *)(local_2a4 + 8) + 1;
          local_2a8 = local_2a4;
        }
        local_2b0[3] = local_2a8;
        if (local_2a0 == 0) {
          local_2ac = 0;
        }
        else {
          *(int *)(local_2a0 + 8) = *(int *)(local_2a0 + 8) + 1;
          local_2ac = local_2a0;
        }
        local_2b0[4] = local_2ac;
        *local_2b0 = &PTR_FUN_007e3878;
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_210 + 0x84))(local_2b0);
    }
    if (*(char *)(param_1 + 0x149b4) != '\0') {
      local_2c4 = operator_new(0x14);
      local_8 = 0x20;
      if (local_2c4 == (undefined4 *)0x0) {
        local_2c4 = (undefined4 *)0x0;
      }
      else {
        pvVar3 = operator_new(0x10);
        local_8._0_1_ = 0x21;
        if (pvVar3 == (void *)0x0) {
          local_2b4 = 0;
        }
        else {
          local_2b4 = FUN_0053ee00(param_1 + 0x149b4);
        }
        local_2c4[1] = 0;
        local_2c4[2] = 0;
        *local_2c4 = &PTR_LAB_007e38f8;
        local_8._0_1_ = 0x22;
        pvVar3 = operator_new(0x14);
        local_8 = CONCAT31(local_8._1_3_,0x23);
        if (pvVar3 == (void *)0x0) {
          local_2b8 = 0;
        }
        else {
          local_2b8 = FUN_0053e740(0xe9);
        }
        if (local_2b8 == 0) {
          local_2bc = 0;
        }
        else {
          *(int *)(local_2b8 + 8) = *(int *)(local_2b8 + 8) + 1;
          local_2bc = local_2b8;
        }
        local_2c4[3] = local_2bc;
        if (local_2b4 == 0) {
          local_2c0 = 0;
        }
        else {
          *(int *)(local_2b4 + 8) = *(int *)(local_2b4 + 8) + 1;
          local_2c0 = local_2b4;
        }
        local_2c4[4] = local_2c0;
        *local_2c4 = &PTR_FUN_007e3878;
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_210 + 0x84))(local_2c4);
    }
  }
  else {
    if (*(char *)(iVar2 + 0x31a) != '\0') {
      local_288 = operator_new(0x14);
      local_8 = 0x14;
      if (local_288 == (undefined4 *)0x0) {
        local_288 = (undefined4 *)0x0;
      }
      else {
        pvVar3 = operator_new(0x10);
        local_8._0_1_ = 0x15;
        if (pvVar3 == (void *)0x0) {
          local_278 = 0;
        }
        else {
          local_278 = FUN_0053ee00(iVar2 + 0x31a);
        }
        local_288[1] = 0;
        local_288[2] = 0;
        *local_288 = &PTR_LAB_007e38f8;
        local_8._0_1_ = 0x16;
        pvVar3 = operator_new(0x14);
        local_8 = CONCAT31(local_8._1_3_,0x17);
        if (pvVar3 == (void *)0x0) {
          local_27c = 0;
        }
        else {
          local_27c = FUN_0053e740(0x573);
        }
        if (local_27c == 0) {
          local_280 = 0;
        }
        else {
          *(int *)(local_27c + 8) = *(int *)(local_27c + 8) + 1;
          local_280 = local_27c;
        }
        local_288[3] = local_280;
        if (local_278 == 0) {
          local_284 = 0;
        }
        else {
          *(int *)(local_278 + 8) = *(int *)(local_278 + 8) + 1;
          local_284 = local_278;
        }
        local_288[4] = local_284;
        *local_288 = &PTR_FUN_007e3878;
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_210 + 0x84))(local_288);
    }
    if (*(char *)(iVar2 + 0x41a) != '\0') {
      local_29c = operator_new(0x14);
      local_8 = 0x18;
      if (local_29c == (undefined4 *)0x0) {
        local_29c = (undefined4 *)0x0;
      }
      else {
        pvVar3 = operator_new(0x10);
        local_8._0_1_ = 0x19;
        if (pvVar3 == (void *)0x0) {
          local_28c = 0;
        }
        else {
          local_28c = FUN_0053ee00(iVar2 + 0x41a);
        }
        local_29c[1] = 0;
        local_29c[2] = 0;
        *local_29c = &PTR_LAB_007e38f8;
        local_8._0_1_ = 0x1a;
        pvVar3 = operator_new(0x14);
        local_8 = CONCAT31(local_8._1_3_,0x1b);
        if (pvVar3 == (void *)0x0) {
          local_290 = 0;
        }
        else {
          local_290 = FUN_0053e740(0xe9);
        }
        if (local_290 == 0) {
          local_294 = 0;
        }
        else {
          *(int *)(local_290 + 8) = *(int *)(local_290 + 8) + 1;
          local_294 = local_290;
        }
        local_29c[3] = local_294;
        if (local_28c == 0) {
          local_298 = 0;
        }
        else {
          *(int *)(local_28c + 8) = *(int *)(local_28c + 8) + 1;
          local_298 = local_28c;
        }
        local_29c[4] = local_298;
        *local_29c = &PTR_FUN_007e3878;
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_210 + 0x84))(local_29c);
    }
  }
  ExceptionList = local_10;
  return local_210;
}


