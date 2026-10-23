// FUN_00614130 @ 614130 size=2607

void __thiscall FUN_00614130(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0807;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = _rand();
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  iVar4 = FUN_004a5c40(param_2,param_1[0x32]);
  bVar1 = iVar3 % 100 < iVar4;
  _rand();
  iVar3 = _rand();
  bVar2 = DAT_00dc17ac < iVar3 % 100 + 1;
  if ((bVar1) && (param_2 == 9)) {
    bVar2 = true;
  }
  _rand();
  _rand();
  _rand();
  if (DAT_00d0ca90 != (&DAT_0089cad8)[param_1[0x32]]) {
    if (param_2 == 4) {
      puVar5 = operator_new(0xc);
      local_4 = 3;
      if (puVar5 != (undefined4 *)0x0) {
        iVar3 = param_1[0x32];
        uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
        FUN_00465510(0x1c4,&DAT_0088f26c);
        *puVar5 = &PTR_FUN_007e6020;
        *(int *)(puVar5[1] + 0xe) = iVar3;
        *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
        *(bool *)(puVar5[1] + 0x16) = bVar1;
        *(bool *)(puVar5[1] + 0x17) = bVar2;
        *(undefined1 *)(puVar5[1] + 0x18) = 0;
        goto LAB_00614b21;
      }
LAB_00614b1f:
      puVar5 = (undefined4 *)0x0;
    }
    else {
      if (param_2 == 7) {
        puVar5 = operator_new(0xc);
        local_4 = 4;
        if (puVar5 != (undefined4 *)0x0) {
          iVar3 = param_1[0x32];
          uVar8 = *(undefined4 *)(param_1[0x24] + 6);
          FUN_00465510(0x1c6,&DAT_0088f26c);
          iVar4 = puVar5[1];
          *puVar5 = &PTR_FUN_007e6020;
          goto LAB_00614afd;
        }
        goto LAB_00614b1f;
      }
      if (param_2 == 2) {
        puVar5 = operator_new(0xc);
        local_4 = 5;
        if (puVar5 != (undefined4 *)0x0) {
          iVar3 = param_1[0x32];
          uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
          FUN_00465510(0x1c3,&DAT_0088f26c);
          iVar4 = puVar5[1];
          *puVar5 = &PTR_FUN_007e6020;
LAB_00614536:
          *(int *)(iVar4 + 0xe) = iVar3;
          *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
          *(bool *)(puVar5[1] + 0x16) = bVar1;
          *(bool *)(puVar5[1] + 0x17) = bVar2;
          *(undefined1 *)(puVar5[1] + 0x18) = 0;
          goto LAB_00614b21;
        }
        goto LAB_00614b1f;
      }
      if (param_2 == 0) {
        puVar5 = operator_new(0xc);
        local_4 = 6;
        if (puVar5 != (undefined4 *)0x0) {
          iVar3 = param_1[0x32];
          uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
          FUN_00465510(0x1c8,&DAT_0088f26c);
          iVar4 = puVar5[1];
          *puVar5 = &PTR_FUN_007e6020;
          goto LAB_00614afd;
        }
        goto LAB_00614b1f;
      }
      if (param_2 == 8) {
        puVar5 = operator_new(0xc);
        local_4 = 7;
        if (puVar5 != (undefined4 *)0x0) {
          iVar3 = param_1[0x32];
          uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
          FUN_00465510(0x1c9,&DAT_0088f26c);
          iVar4 = puVar5[1];
          *puVar5 = &PTR_FUN_007e6020;
          goto LAB_00614536;
        }
        goto LAB_00614b1f;
      }
      if (param_2 == 6) {
        puVar5 = operator_new(0xc);
        local_4 = 8;
        if (puVar5 != (undefined4 *)0x0) {
          iVar3 = param_1[0x32];
          uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
          FUN_005b8eb0(0x1c5,&DAT_0088f26c);
          *puVar5 = &PTR_FUN_007e6924;
          *(int *)(puVar5[1] + 0xe) = iVar3;
          *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
          *(bool *)(puVar5[1] + 0x16) = bVar1;
          *(bool *)(puVar5[1] + 0x17) = bVar2;
          *(undefined1 *)(puVar5[1] + 0x18) = 0;
          *(undefined4 *)(puVar5[1] + 0x1a) = param_3;
          goto LAB_00614b21;
        }
        goto LAB_00614b1f;
      }
      if (param_2 == 5) {
        puVar5 = operator_new(0xc);
        local_4 = 9;
        if (puVar5 != (undefined4 *)0x0) {
          iVar3 = param_1[0x32];
          uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
          FUN_00465510(0x1ca,&DAT_0088f26c);
          iVar4 = puVar5[1];
          *puVar5 = &PTR_FUN_007e6020;
          goto LAB_00614afd;
        }
        goto LAB_00614b1f;
      }
      if (param_2 != 9) {
        if (param_2 == 10) {
          puVar5 = operator_new(0xc);
          local_4 = 0xb;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            iVar3 = param_1[0x32];
            uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
            pvVar6 = operator_new(0x1a);
            local_4 = CONCAT31(local_4._1_3_,0xc);
            if (pvVar6 == (void *)0x0) {
              pvVar6 = (void *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            FUN_0042d320(pvVar6);
            *puVar5 = &PTR_FUN_007e62c0;
            *(undefined1 *)((int)puVar5 + 10) = 0;
            *(undefined2 *)puVar5[1] = 0x1c7;
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 8) = DAT_0088f26c;
            *(undefined2 *)(iVar4 + 0xc) = DAT_0088f270;
            puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 2) = *puVar7;
            *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar7 + 1);
            *puVar5 = &PTR_FUN_007e6020;
            *(int *)(puVar5[1] + 0xe) = iVar3;
            *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
            *(bool *)(puVar5[1] + 0x16) = bVar1;
            *(bool *)(puVar5[1] + 0x17) = bVar2;
            *(undefined1 *)(puVar5[1] + 0x18) = 1;
          }
          local_4 = 0xffffffff;
          FUN_00565bf0(puVar5);
          puVar5 = operator_new(0xc);
          local_4 = 0xd;
          if (puVar5 != (undefined4 *)0x0) {
            iVar3 = param_1[0x32];
            uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
            pvVar6 = operator_new(0x1a);
            local_4 = CONCAT31(local_4._1_3_,0xe);
            if (pvVar6 == (void *)0x0) {
              pvVar6 = (void *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            FUN_0042d320(pvVar6);
            *puVar5 = &PTR_FUN_007e62c0;
            *(undefined1 *)((int)puVar5 + 10) = 0;
            *(undefined2 *)puVar5[1] = 0x1cf;
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 8) = DAT_0088f26c;
            *(undefined2 *)(iVar4 + 0xc) = DAT_0088f270;
            puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 2) = *puVar7;
            *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar7 + 1);
            *puVar5 = &PTR_FUN_007e6020;
            *(int *)(puVar5[1] + 0xe) = iVar3;
            *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
            *(bool *)(puVar5[1] + 0x16) = bVar1;
            *(bool *)(puVar5[1] + 0x17) = bVar2;
            *(undefined1 *)(puVar5[1] + 0x18) = 1;
            goto LAB_00614b21;
          }
        }
        else if (param_2 == 3) {
          puVar5 = operator_new(0xc);
          local_4 = 0xf;
          if (puVar5 != (undefined4 *)0x0) {
            iVar3 = param_1[0x32];
            uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
            pvVar6 = operator_new(0x1a);
            local_4 = CONCAT31(local_4._1_3_,0x10);
            if (pvVar6 == (void *)0x0) {
              pvVar6 = (void *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            FUN_0042d320(pvVar6);
            *puVar5 = &PTR_FUN_007e62c0;
            *(undefined1 *)((int)puVar5 + 10) = 0;
            *(undefined2 *)puVar5[1] = 0x1cd;
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 8) = DAT_0088f26c;
            *(undefined2 *)(iVar4 + 0xc) = DAT_0088f270;
            puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 2) = *puVar7;
            *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar7 + 1);
            iVar4 = puVar5[1];
            *puVar5 = &PTR_FUN_007e6020;
LAB_00614afd:
            *(int *)(iVar4 + 0xe) = iVar3;
            *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
            *(bool *)(puVar5[1] + 0x16) = bVar1;
            *(bool *)(puVar5[1] + 0x17) = bVar2;
            *(undefined1 *)(puVar5[1] + 0x18) = 0;
            goto LAB_00614b21;
          }
        }
        else if (param_2 == 1) {
          puVar5 = operator_new(0xc);
          local_4 = 0x11;
          if (puVar5 != (undefined4 *)0x0) {
            iVar3 = param_1[0x32];
            uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
            pvVar6 = operator_new(0x1c);
            local_4 = CONCAT31(local_4._1_3_,0x12);
            if (pvVar6 == (void *)0x0) {
              pvVar6 = (void *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            FUN_0042d320(pvVar6);
            *puVar5 = &PTR_FUN_007e6904;
            *(undefined1 *)((int)puVar5 + 10) = 0;
            *(undefined2 *)puVar5[1] = 0x1ce;
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 8) = DAT_0088f26c;
            *(undefined2 *)(iVar4 + 0xc) = DAT_0088f270;
            puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 2) = *puVar7;
            *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar7 + 1);
            *puVar5 = &PTR_FUN_007e68e4;
            *(int *)(puVar5[1] + 0xe) = iVar3;
            *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
            *(bool *)(puVar5[1] + 0x16) = bVar1;
            *(bool *)(puVar5[1] + 0x17) = bVar2;
            *(undefined4 *)(puVar5[1] + 0x18) = param_4;
            goto LAB_00614b21;
          }
        }
        else {
          puVar5 = operator_new(0xc);
          local_4 = 0x13;
          if (puVar5 != (undefined4 *)0x0) {
            iVar3 = param_1[0x32];
            uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
            pvVar6 = operator_new(0x1a);
            local_4 = CONCAT31(local_4._1_3_,0x14);
            if (pvVar6 == (void *)0x0) {
              pvVar6 = (void *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            FUN_0042d320(pvVar6);
            *puVar5 = &PTR_FUN_007e62c0;
            *(undefined1 *)((int)puVar5 + 10) = 0;
            *(undefined2 *)puVar5[1] = 0x1c2;
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 8) = DAT_0088f26c;
            *(undefined2 *)(iVar4 + 0xc) = DAT_0088f270;
            puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar4 = puVar5[1];
            *(undefined4 *)(iVar4 + 2) = *puVar7;
            *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar7 + 1);
            iVar4 = puVar5[1];
            *puVar5 = &PTR_FUN_007e6020;
            goto LAB_00614afd;
          }
        }
        goto LAB_00614b1f;
      }
      puVar5 = operator_new(0xc);
      local_4 = 10;
      if (puVar5 == (undefined4 *)0x0) goto LAB_00614b1f;
      iVar3 = param_1[0x32];
      uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
      FUN_00465510(0x1c2,&DAT_0088f26c);
      *puVar5 = &PTR_FUN_007e6020;
      *(int *)(puVar5[1] + 0xe) = iVar3;
      *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
      *(bool *)(puVar5[1] + 0x16) = bVar1;
      *(bool *)(puVar5[1] + 0x17) = bVar2;
      *(undefined1 *)(puVar5[1] + 0x18) = 1;
    }
LAB_00614b21:
    local_4 = 0xffffffff;
    FUN_00565bf0(puVar5);
    iVar3 = (&DAT_0089cad8)[param_1[0x32]];
    goto joined_r0x00614b41;
  }
  if (param_2 == 10) {
    puVar5 = operator_new(0xc);
    local_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
      FUN_00465510(0x1c7,&DAT_0088f26c);
      *puVar5 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar5[1] + 0xe) = uVar8;
      *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
      *(undefined1 *)(puVar5[1] + 0x16) = 0;
      *(undefined1 *)(puVar5[1] + 0x17) = 0;
      *(undefined1 *)(puVar5[1] + 0x18) = 0;
    }
    local_4 = 0xffffffff;
    FUN_00565bf0(puVar5);
    puVar5 = operator_new(0xc);
    local_4 = 1;
    if (puVar5 == (undefined4 *)0x0) {
LAB_0061432b:
      puVar5 = (undefined4 *)0x0;
    }
    else {
      iVar3 = param_1[0x32];
      uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
      FUN_00465510(0x1cf,&DAT_0088f26c);
      *puVar5 = &PTR_FUN_007e6020;
      *(int *)(puVar5[1] + 0xe) = iVar3;
      *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
      *(bool *)(puVar5[1] + 0x16) = bVar1;
      *(bool *)(puVar5[1] + 0x17) = bVar2;
      *(undefined1 *)(puVar5[1] + 0x18) = 1;
    }
LAB_0061432d:
    local_4 = 0xffffffff;
    FUN_00565bf0(puVar5);
  }
  else if (param_2 == 9) {
    puVar5 = operator_new(0xc);
    local_4 = 2;
    if (puVar5 == (undefined4 *)0x0) goto LAB_0061432b;
    uVar8 = *(undefined4 *)(DAT_00d0ca90 + 6);
    FUN_00465510(0x1c2,&DAT_0088f26c);
    *puVar5 = &PTR_FUN_007e6020;
    *(undefined4 *)(puVar5[1] + 0xe) = uVar8;
    *(undefined4 *)(puVar5[1] + 0x12) = uVar8;
    *(undefined1 *)(puVar5[1] + 0x16) = 1;
    *(undefined1 *)(puVar5[1] + 0x17) = 1;
    *(undefined1 *)(puVar5[1] + 0x18) = 0;
    goto LAB_0061432d;
  }
  iVar3 = (&DAT_0089cad8)[param_1[0x32]];
joined_r0x00614b41:
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x48))();
  }
  ExceptionList = local_c;
  return;
}


