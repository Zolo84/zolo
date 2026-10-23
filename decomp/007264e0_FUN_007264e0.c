// FUN_007264e0 @ 7264e0 size=14476

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007264e0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined4 uStack_120;
  undefined2 *puStack_11c;
  undefined1 local_104 [8];
  undefined1 local_fc [8];
  undefined1 local_f4 [8];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  int local_30;
  undefined4 *local_2c;
  float local_28;
  float local_24;
  int local_20;
  undefined4 *local_1c;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = (int)param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007ddd17;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_30 = param_1;
  local_34 = operator_new(0x23c0);
  local_8 = 0;
  if (local_34 == (int *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = (undefined4 *)FUN_0070ccf0();
  }
  local_2c[9] = param_2;
  local_8 = 0xffffffff;
  *(undefined4 *)((int)local_2c + 0x1256) = *(undefined4 *)((int)param_2 + 6);
  piVar6 = *(int **)(param_1 + 4);
  do {
    if (piVar6 == (int *)0x0) {
      if (local_2c != (undefined4 *)0x0) {
        (**(code **)*local_2c)();
      }
      ExceptionList = local_10;
      return;
    }
    local_34 = (int *)piVar6[2];
    iVar13 = *piVar6;
    cVar8 = FUN_007105e0();
    if ((cVar8 == '\0') || (0x12a < *(int *)(iVar13 + 4) - 0xbU)) goto switchD_00726590_caseD_b6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)&PTR_caseD_b4_0072a03c + *(int *)(iVar13 + 4) + 1)) {
    case 0:
      puVar12 = operator_new(0xc);
      local_8 = 7;
      local_14 = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        local_20 = *(int *)(iVar13 + 0xc);
        local_84 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar7 + 6);
        puStack_11c = (undefined2 *)0x726b46;
        FUN_0072a840();
        *puVar12 = &PTR_FUN_007ea09c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_84;
        *(undefined4 *)(puVar12[1] + 0x12) = 0;
        *(undefined4 *)(puVar12[1] + 0x16) = uVar11;
        *(int *)(puVar12[1] + 0x1a) = local_20;
      }
      goto LAB_00729d37;
    case 1:
      local_40 = *(undefined4 *)(iVar13 + 8);
      FUN_005885d0();
      iVar9 = __ftol();
      puVar12 = operator_new(0xc);
      local_8 = 8;
      local_14 = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        local_20 = *(int *)(iVar7 + 6);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726be0;
        FUN_0072a840();
        *puVar12 = &PTR_FUN_007ea09c;
        *(float *)(puVar12[1] + 0xe) = (float)iVar9;
        *(undefined4 *)(puVar12[1] + 0x12) = 0;
        *(int *)(puVar12[1] + 0x16) = local_20;
        *(undefined4 *)(puVar12[1] + 0x1a) = uVar11;
      }
      goto LAB_00729d37;
    case 2:
      if ((&DAT_0089cad8)[*(int *)(iVar13 + 0xc)] != 0) {
        puVar12 = operator_new(0xc);
        local_8 = 0x58;
        local_1c = puVar12;
        if (puVar12 != (undefined4 *)0x0) {
          local_68 = *(undefined4 *)(iVar13 + 8);
          puStack_11c = (undefined2 *)0x7289f3;
          FUN_0072a710();
          *puVar12 = &PTR_FUN_007e6dec;
          *(undefined4 *)(puVar12[1] + 0xe) = local_68;
        }
        goto LAB_00729d37;
      }
      break;
    case 3:
      puVar12 = operator_new(0xc);
      local_8 = 0x1c;
      if (puVar12 != (undefined4 *)0x0) {
        local_ac = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x72728b;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 1;
        *(undefined4 *)(puVar12[1] + 0x12) = local_ac;
      }
      goto LAB_00729d37;
    case 4:
      puVar12 = operator_new(0xc);
      local_8 = 0x1d;
      if (puVar12 != (undefined4 *)0x0) {
        local_6c = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x7272e8;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 2;
        *(undefined4 *)(puVar12[1] + 0x12) = local_6c;
      }
      goto LAB_00729d37;
    case 5:
      puVar12 = operator_new(0xc);
      local_8 = 0x1e;
      if (puVar12 != (undefined4 *)0x0) {
        local_ec = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x727345;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 3;
        *(undefined4 *)(puVar12[1] + 0x12) = local_ec;
      }
      goto LAB_00729d37;
    case 6:
      puVar12 = operator_new(0xc);
      local_8 = 0x20;
      if (puVar12 != (undefined4 *)0x0) {
        local_b4 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x7273ff;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 5;
        *(undefined4 *)(puVar12[1] + 0x12) = local_b4;
      }
      goto LAB_00729d37;
    case 7:
      puVar12 = operator_new(0xc);
      local_8 = 0x21;
      if (puVar12 != (undefined4 *)0x0) {
        local_7c = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x72745c;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 6;
        *(undefined4 *)(puVar12[1] + 0x12) = local_7c;
      }
      goto LAB_00729d37;
    case 8:
      puVar12 = operator_new(0xc);
      local_8 = 0x1f;
      if (puVar12 != (undefined4 *)0x0) {
        local_74 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x7273a2;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 4;
        *(undefined4 *)(puVar12[1] + 0x12) = local_74;
      }
      goto LAB_00729d37;
    case 9:
      puVar12 = operator_new(0xc);
      local_8 = 0x22;
      if (puVar12 != (undefined4 *)0x0) {
        local_d8 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x7274b9;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 7;
        *(undefined4 *)(puVar12[1] + 0x12) = local_d8;
      }
      goto LAB_00729d37;
    case 10:
      puVar12 = operator_new(0xc);
      local_8 = 0x23;
      if (puVar12 != (undefined4 *)0x0) {
        local_38 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x727516;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 8;
        *(undefined4 *)(puVar12[1] + 0x12) = local_38;
      }
      goto LAB_00729d37;
    case 0xb:
      puVar12 = operator_new(0xc);
      local_8 = 0x24;
      if (puVar12 != (undefined4 *)0x0) {
        local_bc = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x727573;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 9;
        *(undefined4 *)(puVar12[1] + 0x12) = local_bc;
      }
      goto LAB_00729d37;
    case 0xc:
      puVar12 = operator_new(0xc);
      local_8 = 0x25;
      if (puVar12 != (undefined4 *)0x0) {
        local_8c = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x7275d3;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = 10;
        *(undefined4 *)(puVar12[1] + 0x12) = local_8c;
      }
      goto LAB_00729d37;
    case 0xd:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7265a4;
      FUN_00712d10();
      break;
    case 0xe:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7265b9;
      FUN_00712d10();
      break;
    case 0xf:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7265ce;
      FUN_00712d10();
      break;
    case 0x10:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7265e3;
      FUN_00712d10();
      break;
    case 0x11:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7265f8;
      FUN_00712d10();
      break;
    case 0x12:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72660d;
      FUN_00712d10();
      break;
    case 0x13:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726622;
      FUN_00712d10();
      break;
    case 0x14:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726637;
      FUN_00712d10();
      break;
    case 0x15:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72664c;
      FUN_00712d10();
      break;
    case 0x16:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726661;
      FUN_00712d10();
      break;
    case 0x17:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726676;
      FUN_00712d10();
      break;
    case 0x18:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72668b;
      FUN_00712d10();
      break;
    case 0x19:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7266a0;
      FUN_00712d10();
      break;
    case 0x1a:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7266b5;
      FUN_00712d10();
      break;
    case 0x1b:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7266ca;
      FUN_00712d10();
      break;
    case 0x1c:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7266df;
      FUN_00712d10();
      break;
    case 0x1d:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7266f4;
      FUN_00712d10();
      break;
    case 0x1e:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726709;
      FUN_00712d10();
      break;
    case 0x1f:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72671e;
      FUN_00712d10();
      break;
    case 0x20:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726733;
      FUN_00712d10();
      break;
    case 0x21:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726748;
      FUN_00712d10();
      break;
    case 0x22:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72675d;
      FUN_00712d10();
      break;
    case 0x23:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726772;
      FUN_00712d10();
      break;
    case 0x24:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726787;
      FUN_00712d10();
      break;
    case 0x25:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72679c;
      FUN_00712d10();
      break;
    case 0x26:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7267c6;
      FUN_00712d10();
      break;
    case 0x27:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7267b1;
      FUN_00712d10();
      break;
    case 0x28:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7267f0;
      FUN_00712d10();
      break;
    case 0x29:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7267db;
      FUN_00712d10();
      break;
    case 0x2a:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726805;
      FUN_00712d10();
      break;
    case 0x2b:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72681a;
      FUN_00712d10();
      break;
    case 0x2c:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726844;
      FUN_00712d10();
      break;
    case 0x2d:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72682f;
      FUN_00712d10();
      break;
    case 0x2e:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726859;
      FUN_00712d10();
      break;
    case 0x2f:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72686e;
      FUN_00712d10();
      break;
    case 0x30:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x726883;
      FUN_00712d10();
      break;
    case 0x31:
      puVar12 = operator_new(0xc);
      local_8 = 0xb;
      local_14 = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        uVar3 = *(undefined1 *)(iVar13 + 0x13c);
        local_c0 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726ce8;
        FUN_0072abc0();
        *puVar12 = &PTR_FUN_007e99dc;
        uVar10 = __ftol();
        *(undefined4 *)(puVar12[1] + 0xe) = uVar10;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
        *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      }
      goto LAB_00729d37;
    case 0x32:
      puVar12 = operator_new(0xc);
      local_8 = 0xc;
      local_14 = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        uVar3 = *(undefined1 *)(iVar13 + 0x13c);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726d55;
        FUN_0072ac50();
        *puVar12 = &PTR_FUN_007e999c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined1 *)(puVar12[1] + 0x12) = 1;
        *(undefined1 *)(puVar12[1] + 0x13) = uVar3;
      }
      goto LAB_00729d37;
    case 0x33:
      puVar12 = operator_new(0xc);
      local_8 = 0xd;
      local_14 = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        uVar3 = *(undefined1 *)(iVar13 + 0x13c);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726db8;
        FUN_0072ac50();
        *puVar12 = &PTR_FUN_007e999c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined1 *)(puVar12[1] + 0x12) = 0;
        *(undefined1 *)(puVar12[1] + 0x13) = uVar3;
      }
      goto LAB_00729d37;
    case 0x34:
      puVar12 = operator_new(0xc);
      local_8 = 0xe;
      if (puVar12 != (undefined4 *)0x0) {
        puStack_11c = (undefined2 *)0x726e0f;
        FUN_004c0150();
        *puVar12 = &PTR_FUN_007e3e3c;
      }
      goto LAB_00729d37;
    case 0x35:
      pvVar14 = operator_new(0xc);
      local_8 = 0x65;
      if (pvVar14 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x1a1;
        uStack_120 = 0x728e73;
        FUN_0071e250();
      }
      goto LAB_00729d37;
    case 0x36:
      pvVar14 = operator_new(0xc);
      local_8 = 0x66;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        puStack_11c = (undefined2 *)0x728eb0;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x1a8;
        puStack_124 = (undefined1 *)0x728ebd;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x37:
      pvVar14 = operator_new(0xc);
      local_8 = 0x67;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        puStack_11c = (undefined2 *)0x728efa;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x1a9;
        puStack_124 = (undefined1 *)0x728f07;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x38:
      puVar12 = operator_new(0xc);
      local_8 = 0xf;
      if (puVar12 != (undefined4 *)0x0) {
        local_c8 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726e5c;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_c8;
      }
      goto LAB_00729d37;
    case 0x39:
      puVar12 = operator_new(0xc);
      local_8 = 0x10;
      if (puVar12 != (undefined4 *)0x0) {
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726eb2;
        FUN_0072ace0();
        *puVar12 = &PTR_FUN_007e997c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
      }
      goto LAB_00729d37;
    case 0x3a:
      param_2 = operator_new(0xc);
      local_8 = 0x14;
      if (param_2 != (undefined4 *)0x0) {
        iVar13 = *(int *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726fda;
        FUN_0072ace0();
        *param_2 = &PTR_FUN_007e997c;
LAB_00726c92:
        *(int *)(param_2[1] + 0xe) = iVar13;
      }
      goto LAB_00729d37;
    case 0x3b:
      param_2 = operator_new(0xc);
      local_8 = 0x12;
      if (param_2 != (undefined4 *)0x0) {
        local_c4 = *(float *)(iVar13 + 8);
        iVar13 = (int)ROUND(local_c4);
        local_44 = iVar13;
LAB_00726c85:
        puStack_11c = (undefined2 *)0x726c8c;
        FUN_00499310();
        *param_2 = &PTR_FUN_007e5f60;
        goto LAB_00726c92;
      }
      goto LAB_00729d37;
    case 0x3c:
      puVar12 = operator_new(0xc);
      local_8 = 0x13;
      if (puVar12 != (undefined4 *)0x0) {
        local_9c = *(float *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x726f84;
        FUN_0072a710();
        fVar4 = local_9c * _DAT_007e46cc;
        *puVar12 = &PTR_FUN_007e6dec;
        *(float *)(puVar12[1] + 0xe) = fVar4;
      }
      goto LAB_00729d37;
    case 0x3d:
      puVar12 = operator_new(0xc);
      local_8 = 0x11;
      if (puVar12 != (undefined4 *)0x0) {
        puStack_11c = (undefined2 *)0x726ef9;
        FUN_004c0150();
        *puVar12 = &PTR_FUN_007e3e3c;
      }
      goto LAB_00729d37;
    case 0x3e:
      puVar12 = operator_new(0xc);
      local_8 = 0x15;
      if (puVar12 != (undefined4 *)0x0) {
        local_4c = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x727019;
        FUN_0072ad70();
        *puVar12 = &PTR_FUN_007e993c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_4c;
      }
      goto LAB_00729d37;
    case 0x3f:
      puVar12 = operator_new(0xc);
      local_8 = 0x16;
      if (puVar12 != (undefined4 *)0x0) {
        local_e4 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x72706f;
        FUN_0072ae00();
        *puVar12 = &PTR_FUN_007e991c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_e4;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
      }
      goto LAB_00729d37;
    case 0x40:
      puVar12 = operator_new(0xc);
      local_8 = 0x17;
      if (puVar12 != (undefined4 *)0x0) {
        local_54 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x7270cb;
        FUN_0072ae00();
        *puVar12 = &PTR_FUN_007e991c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_54;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
      }
      goto LAB_00729d37;
    case 0x41:
      puVar12 = operator_new(0xc);
      local_8 = 0x18;
      if (puVar12 != (undefined4 *)0x0) {
        local_a4 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x727127;
        FUN_0072ae00();
        *puVar12 = &PTR_FUN_007e991c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_a4;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
      }
      goto LAB_00729d37;
    case 0x42:
      puVar12 = operator_new(0xc);
      local_8 = 0x19;
      if (puVar12 != (undefined4 *)0x0) {
        local_5c = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x727180;
        FUN_0072ae90();
        *puVar12 = &PTR_FUN_007e98dc;
        *(undefined4 *)(puVar12[1] + 0xe) = local_5c;
      }
      goto LAB_00729d37;
    case 0x43:
      puVar12 = operator_new(0xc);
      local_8 = 0x1a;
      if (puVar12 != (undefined4 *)0x0) {
        local_cc = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x7271d6;
        FUN_0072af20();
        *puVar12 = &PTR_FUN_007e989c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_cc;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
      }
      goto LAB_00729d37;
    case 0x44:
      puVar12 = operator_new(0xc);
      local_8 = 0x1b;
      if (puVar12 != (undefined4 *)0x0) {
        local_64 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x727232;
        FUN_0072af20();
        *puVar12 = &PTR_FUN_007e989c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_64;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
      }
      goto LAB_00729d37;
    case 0x45:
      iVar13 = 0;
      goto LAB_0072987a;
    case 0x46:
      iVar13 = 1;
      goto LAB_0072987a;
    case 0x47:
      iVar13 = 2;
      goto LAB_0072987a;
    case 0x48:
      iVar13 = 3;
LAB_0072987a:
      FUN_0070a4b0();
      if (iVar13 == 3) {
        iVar13 = FUN_0070a500();
        if (iVar13 == 1) {
          FUN_0070a480();
        }
        else if (iVar13 == 2) {
          FUN_0054ed30();
        }
      }
      local_1c = operator_new(0xc);
      local_8 = 0x84;
      if (local_1c != (undefined4 *)0x0) {
        puStack_11c = (undefined2 *)0x729d1e;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x182;
        puStack_124 = (undefined1 *)0x729d2b;
        FUN_0071cfa0();
      }
      goto LAB_00729d37;
    case 0x49:
      pvVar14 = operator_new(0xc);
      local_8 = 0x77;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        puStack_11c = (undefined2 *)0x72945d;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x169;
        puStack_124 = (undefined1 *)0x72946a;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x4a:
      pvVar14 = operator_new(0xc);
      local_8 = 0x78;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        puStack_11c = (undefined2 *)0x7294a7;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x16a;
        puStack_124 = (undefined1 *)0x7294b4;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x4b:
      puVar12 = operator_new(0xc);
      local_8 = 0x55;
      if (puVar12 != (undefined4 *)0x0) {
        local_60 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x7288fe;
        FUN_0072ab30();
        iVar13 = puVar12[1];
        *puVar12 = &PTR_FUN_007e983c;
        uVar11 = __ftol();
        *(undefined4 *)(iVar13 + 0xe) = uVar11;
      }
      goto LAB_00729d37;
    case 0x4c:
      puVar12 = operator_new(0xc);
      local_8 = 0x57;
      if (puVar12 != (undefined4 *)0x0) {
        puStack_11c = (undefined2 *)0x728985;
        FUN_0072afb0();
        *puVar12 = &PTR_FUN_007ea9bc;
      }
      goto LAB_00729d37;
    case 0x4d:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7298d8;
      FUN_007134e0();
      break;
    case 0x4e:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7298ed;
      FUN_007134e0();
      break;
    case 0x4f:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729902;
      FUN_007134e0();
      break;
    case 0x50:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729917;
      FUN_007134e0();
      break;
    case 0x51:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72992c;
      FUN_007134e0();
      break;
    case 0x52:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729941;
      FUN_007134e0();
      break;
    case 0x53:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729956;
      FUN_007134e0();
      break;
    case 0x54:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x72996b;
      FUN_007134e0();
      break;
    case 0x55:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729980;
      FUN_007134e0();
      break;
    case 0x56:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729995;
      FUN_007134e0();
      break;
    case 0x57:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7299aa;
      FUN_007134e0();
      break;
    case 0x58:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7299bf;
      FUN_007134e0();
      break;
    case 0x59:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7299d4;
      FUN_007134e0();
      break;
    case 0x5a:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7299e9;
      FUN_007134e0();
      break;
    case 0x5b:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x7299fe;
      FUN_007134e0();
      break;
    case 0x5c:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729a13;
      FUN_007134e0();
      break;
    case 0x5d:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729a28;
      FUN_007134e0();
      break;
    case 0x5e:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729a3d;
      FUN_007134e0();
      break;
    case 0x5f:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729a52;
      FUN_007134e0();
      break;
    case 0x60:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729a67;
      FUN_007134e0();
      break;
    case 0x61:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729a7c;
      FUN_007134e0();
      break;
    case 0x62:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729a91;
      FUN_007134e0();
      break;
    case 99:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729aa6;
      FUN_007134e0();
      break;
    case 100:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729abb;
      FUN_007134e0();
      break;
    case 0x65:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729ad0;
      FUN_007134e0();
      break;
    case 0x66:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729ae5;
      FUN_007134e0();
      break;
    case 0x67:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729afa;
      FUN_007134e0();
      break;
    case 0x68:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729b0f;
      FUN_007134e0();
      break;
    case 0x69:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729b24;
      FUN_007134e0();
      break;
    case 0x6a:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729b39;
      FUN_007134e0();
      break;
    case 0x6b:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729b4e;
      FUN_007134e0();
      break;
    case 0x6c:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729b63;
      FUN_007134e0();
      break;
    case 0x6d:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729b78;
      FUN_007134e0();
      break;
    case 0x6e:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729b8d;
      FUN_007134e0();
      break;
    case 0x6f:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729ba2;
      FUN_007134e0();
      break;
    case 0x70:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729bb7;
      FUN_007134e0();
      break;
    case 0x71:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729bcc;
      FUN_007134e0();
      break;
    case 0x72:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729be1;
      FUN_007134e0();
      break;
    case 0x73:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729bf6;
      FUN_007134e0();
      break;
    case 0x74:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c0b;
      FUN_007134e0();
      break;
    case 0x75:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c20;
      FUN_007134e0();
      break;
    case 0x76:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c35;
      FUN_007134e0();
      break;
    case 0x77:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c4a;
      FUN_007134e0();
      break;
    case 0x78:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c5f;
      FUN_007134e0();
      break;
    case 0x79:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c74;
      FUN_007134e0();
      break;
    case 0x7a:
      param_2 = operator_new(0xc);
      local_8 = 0x56;
      if (param_2 != (undefined4 *)0x0) {
        iVar13 = *(int *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x728950;
        FUN_00499020();
        *param_2 = &PTR_FUN_007e6ab8;
        goto LAB_00726c92;
      }
      goto LAB_00729d37;
    case 0x7b:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      puStack_11c = (undefined2 *)0x729118;
      FUN_0070a300();
      iVar13 = FUN_0070a3a0();
      if ((iVar13 != 0) && (iVar13 = FUN_0070a3c0(), iVar13 != 0)) {
        pvVar14 = operator_new(0xc);
        local_8 = 0x6f;
        if (pvVar14 != (void *)0x0) {
          puStack_11c = &DAT_0088f28c;
          uStack_120 = 0x72916c;
          puStack_11c = (undefined2 *)FUN_0045f730();
          uStack_120 = 0x729175;
          uStack_120 = FUN_00447250();
          puStack_124 = (undefined1 *)0x72917d;
          puStack_124 = (undefined1 *)FUN_0045fec0();
          uStack_128 = 0x6c;
          FUN_0071c830();
        }
        goto LAB_00729d37;
      }
      break;
    case 0x7c:
      pvVar14 = operator_new(0xc);
      local_8 = 0x79;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x72;
        uStack_120 = 0x7294f3;
        FUN_0071c480();
      }
      goto LAB_00729d37;
    case 0x7d:
      pvVar14 = operator_new(0xc);
      local_8 = 0x7a;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x73;
        uStack_120 = 0x729532;
        FUN_0071c480();
      }
      goto LAB_00729d37;
    case 0x7e:
      pvVar14 = operator_new(0xc);
      local_8 = 0x7b;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x74;
        uStack_120 = 0x729571;
        FUN_0071c480();
      }
      goto LAB_00729d37;
    case 0x7f:
      pvVar14 = operator_new(0xc);
      local_8 = 0x7c;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x75;
        uStack_120 = 0x7295b0;
        FUN_0071c480();
      }
      goto LAB_00729d37;
    case 0x80:
      pvVar14 = operator_new(0xc);
      local_8 = 0x7d;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x76;
        uStack_120 = 0x7295ef;
        FUN_0071c480();
      }
      goto LAB_00729d37;
    case 0x81:
      pvVar14 = operator_new(0xc);
      local_8 = 0x7e;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x77;
        uStack_120 = 0x72962e;
        FUN_0071c480();
      }
      goto LAB_00729d37;
    case 0x82:
      pvVar14 = operator_new(0xc);
      local_8 = 0x7f;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x78;
        uStack_120 = 0x72966d;
        FUN_0071c480();
      }
      goto LAB_00729d37;
    case 0x83:
      param_2 = operator_new(0xc);
      local_8 = 10;
      if (param_2 != (undefined4 *)0x0) {
        iVar13 = *(int *)(iVar13 + 0xc);
        goto LAB_00726c85;
      }
      goto LAB_00729d37;
    case 0x84:
      local_1c = operator_new(0xc);
      local_8 = 0x70;
      if (local_1c != (undefined4 *)0x0) {
        FUN_00496e60();
        puStack_11c = (undefined2 *)0x7291bb;
        FUN_0044dc80();
        FUN_0070a4b0();
        __ftol();
        puStack_11c = (undefined2 *)0x7291db;
        puStack_11c = (undefined2 *)FUN_00496e60();
        uStack_120 = 0x7291e3;
        uStack_120 = FUN_00458280();
        puStack_124 = (undefined1 *)0x7291eb;
        uVar11 = FUN_0045fec0();
        FUN_00446d10(uVar11);
        FUN_004638c0(0x62);
      }
      goto LAB_00729d37;
    case 0x85:
      pvVar14 = operator_new(0xc);
      local_8 = 0x71;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        puStack_11c = (undefined2 *)0x72923d;
        FUN_00516890();
        puStack_11c = (undefined2 *)0x729248;
        puStack_11c = (undefined2 *)FUN_00496e60();
        uStack_120 = 0x729250;
        uStack_120 = FUN_00458280();
        puStack_124 = (undefined1 *)0x729258;
        uVar11 = FUN_0045fec0();
        local_1c = &uStack_128;
        FUN_00446d10(uVar11);
        FUN_004638c0(0x62);
      }
      goto LAB_00729d37;
    case 0x86:
      FUN_00496e60();
      FUN_0044dc80();
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      puStack_11c = (undefined2 *)0x7292ab;
      FUN_0045bbf0();
      break;
    case 0x87:
      pvVar14 = operator_new(0xc);
      local_8 = 0x72;
      if (pvVar14 != (void *)0x0) {
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x7292e2;
        FUN_006902c0();
      }
      goto LAB_00729d37;
    case 0x88:
      FUN_00496e60();
      FUN_00465c30();
      puStack_11c = (undefined2 *)0x7292fe;
      local_1c = operator_new(0xc);
      local_8 = 0x73;
      if (local_1c != (undefined4 *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x1a3;
        uStack_120 = 0x729337;
        FUN_0071e250();
      }
      goto LAB_00729d37;
    case 0x89:
      FUN_00496e60();
      FUN_00465c30();
      puStack_11c = (undefined2 *)0x729353;
      local_1c = operator_new(0xc);
      local_8 = 0x74;
      if (local_1c != (undefined4 *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x1a4;
        uStack_120 = 0x72938c;
        FUN_0071e250();
      }
      goto LAB_00729d37;
    case 0x8a:
      pvVar14 = operator_new(0xc);
      local_8 = 0x75;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        puStack_11c = (undefined2 *)0x7293c9;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x1a5;
        puStack_124 = (undefined1 *)0x7293d6;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x8b:
      pvVar14 = operator_new(0xc);
      local_8 = 0x76;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        puStack_11c = (undefined2 *)0x729413;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x1a6;
        puStack_124 = (undefined1 *)0x729420;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x8c:
      fVar4 = *(float *)(iVar13 + 8) * _DAT_007e543c;
      switch(*(undefined4 *)(iVar13 + 0xc)) {
      case 0:
        fVar1 = *(float *)(iVar7 + 0x3958);
        puVar12 = operator_new(0xc);
        local_8 = 1;
        local_14 = puVar12;
        if (puVar12 == (undefined4 *)0x0) {
LAB_00726aee:
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puStack_11c = (undefined2 *)0x7268e1;
          FUN_00465b00();
          *puVar12 = &PTR_FUN_007e64d4;
          *(float *)(puVar12[1] + 0xe) = fVar1 * fVar4;
          *(undefined4 *)(puVar12[1] + 0x12) = 0xffffffff;
        }
        break;
      case 1:
        fVar1 = *(float *)(iVar7 + 0x3960);
        puVar12 = operator_new(0xc);
        local_8 = 2;
        local_14 = puVar12;
        if (puVar12 == (undefined4 *)0x0) goto LAB_00726aee;
        puStack_11c = (undefined2 *)0x726939;
        FUN_00465b00();
        *puVar12 = &PTR_FUN_007e64d4;
        *(float *)(puVar12[1] + 0xe) = fVar1 * fVar4;
        *(undefined4 *)(puVar12[1] + 0x12) = 0xffffffff;
        break;
      case 2:
        fVar1 = *(float *)(iVar7 + 0x395c);
        puVar12 = operator_new(0xc);
        local_8 = 3;
        local_14 = puVar12;
        if (puVar12 == (undefined4 *)0x0) goto LAB_00726aee;
        puStack_11c = (undefined2 *)0x726991;
        FUN_00465b00();
        *puVar12 = &PTR_FUN_007e64d4;
        *(float *)(puVar12[1] + 0xe) = fVar1 * fVar4;
        *(undefined4 *)(puVar12[1] + 0x12) = 0xffffffff;
        break;
      case 3:
        fVar1 = *(float *)(iVar7 + 0x3964);
        puVar12 = operator_new(0xc);
        local_8 = 4;
        local_14 = puVar12;
        if (puVar12 == (undefined4 *)0x0) goto LAB_00726aee;
        puStack_11c = (undefined2 *)0x7269e9;
        FUN_00465b00();
        *puVar12 = &PTR_FUN_007e64d4;
        *(float *)(puVar12[1] + 0xe) = fVar1 * fVar4;
        *(undefined4 *)(puVar12[1] + 0x12) = 0xffffffff;
        break;
      case 4:
        local_20 = *(int *)(iVar7 + 0x3954);
        fVar1 = (float)local_20 * *(float *)(*(int *)(iVar7 + 0x244) + 0x6a) * _DAT_00d7ca6c;
        puVar12 = operator_new(0xc);
        local_8 = 5;
        local_14 = puVar12;
        if (puVar12 == (undefined4 *)0x0) goto LAB_00726aee;
        puStack_11c = (undefined2 *)0x726a5e;
        FUN_00465b00();
        *puVar12 = &PTR_FUN_007e64d4;
        *(float *)(puVar12[1] + 0xe) = fVar1 * fVar4;
        *(undefined4 *)(puVar12[1] + 0x12) = 0xffffffff;
        break;
      case 5:
        local_20 = *(int *)(iVar7 + 0x3954);
        fVar1 = *(float *)(iVar7 + 0x37ee);
        fVar2 = *(float *)(iVar7 + 0x11a8c);
        fVar5 = (float)local_20 * _DAT_00d7ca64;
        puVar12 = operator_new(0xc);
        local_8 = 6;
        local_14 = puVar12;
        if (puVar12 == (undefined4 *)0x0) goto LAB_00726aee;
        puStack_11c = (undefined2 *)0x726ad3;
        FUN_00465b00();
        *puVar12 = &PTR_FUN_007e64d4;
        *(float *)(puVar12[1] + 0xe) = fVar5 * fVar1 * fVar2 * fVar4;
        *(undefined4 *)(puVar12[1] + 0x12) = 0xffffffff;
        break;
      default:
        goto switchD_00726590_caseD_b6;
      }
      local_8 = 0xffffffff;
      if (puVar12 != (undefined4 *)0x0) goto LAB_00729d37;
      break;
    case 0x8d:
      puVar12 = operator_new(0xc);
      local_8 = 0x59;
      if (puVar12 != (undefined4 *)0x0) {
        local_70 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x728a43;
        FUN_00499310();
        iVar13 = puVar12[1];
        *puVar12 = &PTR_FUN_007e5f60;
        uVar11 = __ftol();
        *(undefined4 *)(iVar13 + 0xe) = uVar11;
      }
      goto LAB_00729d37;
    case 0x8e:
      puVar12 = operator_new(0xc);
      local_8 = 0x5a;
      if (puVar12 != (undefined4 *)0x0) {
        local_78 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728a9b;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_78;
      }
      goto LAB_00729d37;
    case 0x8f:
      puVar12 = operator_new(0xc);
      local_8 = 0x5b;
      if (puVar12 != (undefined4 *)0x0) {
        local_80 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728af4;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_80;
      }
      goto LAB_00729d37;
    case 0x90:
      puVar12 = operator_new(0xc);
      local_8 = 0x5c;
      if (puVar12 != (undefined4 *)0x0) {
        local_88 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728b50;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_88;
      }
      goto LAB_00729d37;
    case 0x91:
      puVar12 = operator_new(0xc);
      local_8 = 0x5d;
      if (puVar12 != (undefined4 *)0x0) {
        local_90 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728baf;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_90;
      }
      goto LAB_00729d37;
    case 0x92:
      puVar12 = operator_new(0xc);
      local_8 = 0x5e;
      if (puVar12 != (undefined4 *)0x0) {
        local_98 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728c0e;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_98;
      }
      goto LAB_00729d37;
    case 0x93:
      puVar12 = operator_new(0xc);
      local_8 = 0x5f;
      if (puVar12 != (undefined4 *)0x0) {
        local_a0 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728c6d;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_a0;
      }
      goto LAB_00729d37;
    case 0x94:
      puVar12 = operator_new(0xc);
      local_8 = 0x60;
      if (puVar12 != (undefined4 *)0x0) {
        local_a8 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728ccc;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_a8;
      }
      goto LAB_00729d37;
    case 0x95:
      cVar8 = FUN_0070a530();
      if (cVar8 == '\0') {
        pvVar14 = operator_new(0xc);
        local_8 = 100;
        if (pvVar14 != (void *)0x0) {
          FUN_0070a4b0();
          FUN_00496e60();
          puStack_11c = (undefined2 *)0x728e27;
          puStack_11c = (undefined2 *)FUN_0045fec0();
          uStack_120 = 0x1a0;
          puStack_124 = (undefined1 *)0x728e34;
          FUN_0071c520();
        }
      }
      else {
        pvVar14 = operator_new(0xc);
        local_8 = 99;
        if (pvVar14 != (void *)0x0) {
          FUN_0070a4b0();
          FUN_00496e60();
          puStack_11c = (undefined2 *)0x728ddf;
          puStack_11c = (undefined2 *)FUN_0045fec0();
          uStack_120 = 0x19f;
          puStack_124 = (undefined1 *)0x728dec;
          FUN_0071c520();
        }
      }
      goto LAB_00729d37;
    case 0x96:
      puVar12 = operator_new(0xc);
      local_8 = 0x61;
      if (puVar12 != (undefined4 *)0x0) {
        local_b0 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728d27;
        FUN_0072a7a0();
        *puVar12 = &PTR_FUN_007e9d3c;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar11;
        *(undefined4 *)(puVar12[1] + 0x12) = local_b0;
      }
      goto LAB_00729d37;
    case 0x97:
      pvVar14 = operator_new(0xc);
      local_8 = 0x68;
      if (pvVar14 != (void *)0x0) {
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x728f3e;
        FUN_006902c0();
      }
      goto LAB_00729d37;
    case 0x98:
      pvVar14 = operator_new(0xc);
      local_8 = 0x69;
      if (pvVar14 != (void *)0x0) {
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x728f75;
        FUN_006902c0();
      }
      goto LAB_00729d37;
    case 0x99:
      pvVar14 = operator_new(0xc);
      local_8 = 0x6a;
      if (pvVar14 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        puStack_11c = (undefined2 *)0x1aa;
        uStack_120 = 0x728fb4;
        FUN_0071e250();
      }
      goto LAB_00729d37;
    case 0x9a:
      pvVar14 = operator_new(0xc);
      local_8 = 0x6b;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        puStack_11c = (undefined2 *)0x728ff1;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x19c;
        puStack_124 = (undefined1 *)0x728ffe;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x9b:
      pvVar14 = operator_new(0xc);
      local_8 = 0x62;
      if (pvVar14 != (void *)0x0) {
        local_b8 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)(iVar7 + 4);
        uStack_120 = 0x19b;
        puStack_124 = (undefined1 *)0x728d97;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x9c:
      iVar13 = FUN_00496e60();
      if (0 < iVar13) {
        pvVar14 = operator_new(0xc);
        local_8 = 0x6e;
        if (pvVar14 != (void *)0x0) {
          FUN_0070a4b0();
          FUN_00496e60();
          puStack_11c = (undefined2 *)0x7290de;
          puStack_11c = (undefined2 *)FUN_0070a4d0();
          uStack_120 = 0x7290e6;
          uStack_120 = FUN_0045fec0();
          puStack_124 = (undefined1 *)0x1ad;
          uStack_128 = 0x7290f3;
          FUN_0071cd90();
        }
        goto LAB_00729d37;
      }
      break;
    case 0x9d:
      pvVar14 = operator_new(0xc);
      local_8 = 0x6c;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        puStack_11c = (undefined2 *)0x72903b;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x19d;
        puStack_124 = (undefined1 *)0x729048;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x9e:
      pvVar14 = operator_new(0xc);
      local_8 = 0x6d;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        puStack_11c = (undefined2 *)0x729085;
        puStack_11c = (undefined2 *)FUN_0045fec0();
        uStack_120 = 0x19e;
        puStack_124 = (undefined1 *)0x729092;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0x9f:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      puStack_11c = (undefined2 *)0x729692;
      FUN_0070a300();
      pvVar14 = operator_new(0xc);
      local_8 = 0x80;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4c0();
        FUN_0070a4d0();
        puStack_124 = local_f4;
        local_1c = &uStack_120;
        uStack_128 = 0x7296d4;
        FUN_00449290();
        puStack_124 = (undefined1 *)0x7296db;
        puStack_124 = (undefined1 *)FUN_0070a4d0();
        uStack_128 = 0x7296e1;
        FUN_00465bd0();
        puStack_124 = (undefined1 *)0x7296ee;
        puStack_124 = (undefined1 *)FUN_0044df10();
        uStack_128 = 0x1b5;
        FUN_0071cee0();
      }
      goto LAB_00729d37;
    case 0xa0:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      puStack_11c = (undefined2 *)0x729720;
      FUN_0070a300();
      pvVar14 = operator_new(0xc);
      local_8 = 0x81;
      if (pvVar14 != (void *)0x0) {
        FUN_0070a4c0();
        FUN_0070a4d0();
        puStack_124 = local_fc;
        local_1c = &uStack_120;
        uStack_128 = 0x729762;
        FUN_00449290();
        puStack_124 = (undefined1 *)0x729769;
        puStack_124 = (undefined1 *)FUN_0070a4d0();
        uStack_128 = 0x72976f;
        FUN_00465bd0();
        puStack_124 = (undefined1 *)0x72977c;
        puStack_124 = (undefined1 *)FUN_0044df10();
        uStack_128 = 0x1b6;
        FUN_0071cee0();
      }
      goto LAB_00729d37;
    case 0xa1:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      puStack_11c = (undefined2 *)0x7297ae;
      FUN_0070a300();
      pvVar14 = operator_new(0xc);
      local_8 = 0x82;
      if (pvVar14 != (void *)0x0) {
        local_1c = &uStack_120;
        puStack_124 = local_104;
        uStack_128 = 0x7297e4;
        FUN_00449290();
        puStack_124 = (undefined1 *)0x7297eb;
        puStack_124 = (undefined1 *)FUN_0070a4d0();
        uStack_128 = 0x7297f1;
        FUN_00465bd0();
        puStack_124 = (undefined1 *)0x7297fe;
        puStack_124 = (undefined1 *)FUN_0044df10();
        uStack_128 = 0x1b7;
        FUN_0071cee0();
      }
      goto LAB_00729d37;
    case 0xa2:
      local_1c = operator_new(0xc);
      local_8 = 0x83;
      if (local_1c != (undefined4 *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        puStack_11c = (undefined2 *)0x729853;
        puStack_11c = (undefined2 *)FUN_00496e60();
        uStack_120 = 0x729859;
        FUN_00465bd0();
        puStack_11c = (undefined2 *)0x729866;
        puStack_11c = (undefined2 *)FUN_0044df10();
        uStack_120 = 0x1b8;
        puStack_124 = (undefined1 *)0x729873;
        FUN_0071c520();
      }
      goto LAB_00729d37;
    case 0xa3:
      puVar12 = operator_new(0xc);
      local_8 = 0x26;
      local_14 = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        local_e8 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x10);
        uVar10 = *(undefined4 *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x72763c;
        FUN_0072b040();
        *puVar12 = &PTR_FUN_007e985c;
        *(undefined4 *)(puVar12[1] + 0xe) = local_e8;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar10;
        *(undefined4 *)(puVar12[1] + 0x16) = uVar11;
      }
      goto LAB_00729d37;
    case 0xa4:
      switch(*(undefined4 *)(iVar13 + 0xc)) {
      case 0:
        iVar9 = *(int *)(iVar13 + 0x10);
        if (iVar9 == 5) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bf9) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x2d;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727a45;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bf9) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x2e;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727a8e;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 6) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bf3) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x2f;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x72799d;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bf3) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x30;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x7279e6;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 7) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bff) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x31;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x7278f5;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bff) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x32;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x72793e;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        break;
      case 1:
        iVar9 = *(int *)(iVar13 + 0x10);
        if (iVar9 == 5) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bfa) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x39;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727e69;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bfa) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x3a;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727eb2;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 6) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bf4) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x3b;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727dc1;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bf4) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x3c;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727e0a;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 7) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3c00) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x3d;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727d19;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3c00) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x3e;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727d62;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        break;
      case 2:
        iVar9 = *(int *)(iVar13 + 0x10);
        if (iVar9 == 5) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bfb) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x27;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727833;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bfb) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x28;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x72787c;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 6) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bf5) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x29;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x72778b;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bf5) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x2a;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x7277d4;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 7) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3c01) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x2b;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x7276e3;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3c01) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x2c;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x72772c;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        break;
      case 3:
        iVar9 = *(int *)(iVar13 + 0x10);
        if (iVar9 == 5) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bfc) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x33;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727c57;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bfc) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x34;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727ca0;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 6) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bf6) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x35;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727baf;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bf6) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x36;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727bf8;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 7) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3c02) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x37;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727b07;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3c02) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x38;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727b50;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        break;
      case 4:
        iVar9 = *(int *)(iVar13 + 0x10);
        if (iVar9 == 5) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bfd) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x3f;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x72807b;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bfd) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x40;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x7280c4;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 6) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bf7) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x41;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727fd3;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bf7) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x42;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x72801c;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 7) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3c03) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x43;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x727f2b;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3c03) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x44;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x727f74;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        break;
      case 5:
        iVar9 = *(int *)(iVar13 + 0x10);
        if (iVar9 == 5) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bfe) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x45;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x72828d;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bfe) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x46;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x7282d6;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 6) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3bf8) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x47;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x7281e5;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3bf8) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x48;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x72822e;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
        else if (iVar9 == 7) {
          if (*(float *)(iVar13 + 8) == _DAT_007e3380) {
            if (*(char *)(iVar7 + 0x3c04) != '\0') {
              puVar12 = operator_new(0xc);
              local_8 = 0x49;
              if (puVar12 != (undefined4 *)0x0) {
                puStack_11c = (undefined2 *)0x72813d;
                FUN_004c0150();
                *puVar12 = &PTR_FUN_007e3e3c;
              }
              goto LAB_00729d37;
            }
          }
          else if (*(char *)(iVar7 + 0x3c04) == '\0') {
            puVar12 = operator_new(0xc);
            local_8 = 0x4a;
            if (puVar12 != (undefined4 *)0x0) {
              puStack_11c = (undefined2 *)0x728186;
              FUN_004c0150();
              *puVar12 = &PTR_FUN_007e3e3c;
            }
            goto LAB_00729d37;
          }
        }
      }
      break;
    case 0xa5:
      puVar12 = operator_new(0xc);
      local_8 = 0x4b;
      if (puVar12 != (undefined4 *)0x0) {
        puStack_11c = (undefined2 *)0x728317;
        FUN_004c0150();
        *puVar12 = &PTR_FUN_007e3e3c;
      }
      goto LAB_00729d37;
    case 0xa6:
      if ((&DAT_0089cad8)[*(int *)(iVar13 + 0x14)] != 0) {
        puVar12 = operator_new(0xc);
        local_8 = 0x4c;
        if (puVar12 != (undefined4 *)0x0) {
          puStack_11c = (undefined2 *)0x72836a;
          FUN_0054ede0();
          *puVar12 = &PTR_FUN_007e93f4;
          uVar15 = 0xffffffff;
          pcVar17 = (char *)(iVar13 + 0x28);
          do {
            pcVar18 = pcVar17;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar18 = pcVar17 + 1;
            cVar8 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar8 != '\0');
          uVar15 = ~uVar15;
          pcVar17 = pcVar18 + -uVar15;
          pcVar18 = (char *)(puVar12[1] + 0xe);
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar18 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
        goto LAB_00729d37;
      }
      break;
    case 0xa7:
      iVar9 = (&DAT_0089cad8)[*(int *)(iVar13 + 0xc)];
      local_20 = (&DAT_0089cad8)[*(int *)(iVar13 + 0x14)];
      if ((iVar9 == 0) || (local_20 == 0)) break;
      local_15 = 1;
      local_16 = 1;
      param_2._3_1_ = 1;
      uVar11 = __ftol();
      switch(uVar11) {
      case 1:
        local_16 = 0;
      case 3:
switchD_00728455_caseD_3:
        param_2._3_1_ = 0;
        break;
      case 2:
        local_15 = 0;
        goto switchD_00728455_caseD_3;
      case 0xfffffffe:
        local_15 = 0;
        break;
      case 0xffffffff:
        local_16 = 0;
      }
      puVar12 = operator_new(0xc);
      local_8 = 0x4e;
      local_14 = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        uVar11 = *(undefined4 *)(iVar9 + 6);
        local_20 = *(int *)(local_20 + 6);
        puStack_11c = (undefined2 *)0x7284b0;
        FUN_00465510();
        *puVar12 = &PTR_FUN_007e6020;
        *(int *)(puVar12[1] + 0xe) = local_20;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
        *(undefined1 *)(puVar12[1] + 0x16) = local_15;
        *(undefined1 *)(puVar12[1] + 0x17) = local_16;
        *(undefined1 *)(puVar12[1] + 0x18) = param_2._3_1_;
      }
      goto LAB_00729d37;
    case 0xa8:
      if ((&DAT_0089cad8)[*(int *)(iVar13 + 0x14)] != 0) {
        puVar12 = operator_new(0xc);
        local_8 = 0x4d;
        if (puVar12 != (undefined4 *)0x0) {
          puStack_11c = (undefined2 *)0x7283de;
          FUN_0054ede0();
          *puVar12 = &PTR_FUN_007e93f4;
          uVar15 = 0xffffffff;
          pcVar17 = (char *)(iVar13 + 0x28);
          do {
            pcVar18 = pcVar17;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar18 = pcVar17 + 1;
            cVar8 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar8 != '\0');
          uVar15 = ~uVar15;
          pcVar17 = pcVar18 + -uVar15;
          pcVar18 = (char *)(puVar12[1] + 0xe);
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar18 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
        goto LAB_00729d37;
      }
      break;
    case 0xa9:
      param_2 = *(undefined4 **)(iVar13 + 0xc);
      if (*(char *)(iVar13 + 0x13d) != '\0') {
        if (param_2 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)0xfffffffe;
        }
        else if (param_2 == (undefined4 *)0x1) {
          param_2 = (undefined4 *)0xfffffffc;
        }
        else if (param_2 == (undefined4 *)0x2) {
          param_2 = (undefined4 *)0xfffffffd;
        }
        else {
          param_2 = (undefined4 *)0xffffffff;
        }
      }
      puVar12 = operator_new(0xc);
      local_8 = 0x4f;
      local_1c = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        local_20 = *(int *)(iVar13 + 0x24);
        local_14 = *(undefined4 **)(iVar13 + 0x18);
        local_3c = *(undefined4 *)(iVar13 + 0x16a);
        local_94 = *(undefined4 *)(iVar13 + 8);
        puStack_11c = (undefined2 *)0x728572;
        FUN_0072b0d0();
        *puVar12 = &PTR_FUN_007eaafc;
        *(undefined4 *)(puVar12[1] + 0xe) = local_94;
        *(undefined4 *)(puVar12[1] + 0x12) = local_3c;
        *(undefined4 **)(puVar12[1] + 0x16) = param_2;
        *(bool *)(puVar12[1] + 0x1a) = local_20 == 0;
        *(bool *)(puVar12[1] + 0x1b) = local_14 == (undefined4 *)0x0;
      }
      goto LAB_00729d37;
    case 0xaa:
      param_2 = *(undefined4 **)(iVar13 + 0xc);
      if (*(char *)(iVar13 + 0x13d) != '\0') {
        if (param_2 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)0xffffffff;
        }
        else if (param_2 == (undefined4 *)0x1) {
          param_2 = (undefined4 *)0xfffffffe;
        }
        else if (param_2 == (undefined4 *)0x2) {
          param_2 = (undefined4 *)0xfffffffd;
        }
      }
      puVar12 = operator_new(0xc);
      local_8 = 0x50;
      local_1c = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        local_48 = *(undefined4 *)(iVar13 + 8);
        local_14 = *(undefined4 **)(iVar13 + 0x24);
        iVar13 = *(int *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x728630;
        FUN_0072b160();
        *puVar12 = &PTR_FUN_007eab3c;
        *(undefined4 **)(puVar12[1] + 0xe) = param_2;
        *(bool *)(puVar12[1] + 0x12) = iVar13 == 0;
        *(bool *)(puVar12[1] + 0x13) = local_14 == (undefined4 *)0x0;
        iVar13 = puVar12[1];
        uVar11 = __ftol();
        *(undefined4 *)(iVar13 + 0x14) = uVar11;
      }
      goto LAB_00729d37;
    case 0xab:
      param_2 = *(undefined4 **)(iVar13 + 0xc);
      if (*(char *)(iVar13 + 0x13d) != '\0') {
        if (param_2 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)0xffffffff;
        }
        else if (param_2 == (undefined4 *)0x1) {
          param_2 = (undefined4 *)0xfffffffe;
        }
        else if (param_2 == (undefined4 *)0x2) {
          param_2 = (undefined4 *)0xfffffffd;
        }
      }
      puVar12 = operator_new(0xc);
      local_8 = 0x51;
      local_1c = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        local_14 = *(undefined4 **)(iVar13 + 0x24);
        local_50 = *(undefined4 *)(iVar13 + 8);
        iVar13 = *(int *)(iVar13 + 0x18);
        puStack_11c = (undefined2 *)0x7286e4;
        FUN_0072b1f0();
        *puVar12 = &PTR_FUN_007eab7c;
        *(undefined4 **)(puVar12[1] + 0xe) = param_2;
        *(bool *)(puVar12[1] + 0x12) = iVar13 == 0;
        *(bool *)(puVar12[1] + 0x13) = local_14 == (undefined4 *)0x0;
        *(undefined4 *)(puVar12[1] + 0x14) = local_50;
      }
      goto LAB_00729d37;
    case 0xac:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c86;
      FUN_007134e0();
      break;
    case 0xad:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729c9b;
      FUN_007134e0();
      break;
    case 0xae:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729cb0;
      FUN_007134e0();
      break;
    case 0xaf:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729cc5;
      FUN_007134e0();
      break;
    case 0xb0:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729cd7;
      FUN_007134e0();
      break;
    case 0xb1:
      puStack_11c = (undefined2 *)iVar7;
      uStack_120 = 0x729ce9;
      FUN_007134e0();
      break;
    case 0xb2:
      param_2 = *(undefined4 **)(iVar13 + 0xc);
      if (*(char *)(iVar13 + 0x13d) != '\0') {
        if (param_2 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)0xfffffffe;
        }
        else if (param_2 == (undefined4 *)0x1) {
          param_2 = (undefined4 *)0xfffffffc;
        }
        else if (param_2 == (undefined4 *)0x2) {
          param_2 = (undefined4 *)0xfffffffd;
        }
        else {
          param_2 = (undefined4 *)0xffffffff;
        }
      }
      puVar12 = operator_new(0xc);
      local_8 = 0x52;
      local_1c = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        local_14 = *(undefined4 **)(iVar13 + 0x18);
        local_58 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0x14);
        puStack_11c = (undefined2 *)0x728798;
        FUN_0072b310();
        *puVar12 = &PTR_FUN_007eabfc;
        *(undefined4 **)(puVar12[1] + 0xe) = param_2;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar11;
        *(undefined4 **)(puVar12[1] + 0x16) = local_14;
        iVar13 = puVar12[1];
        uVar11 = __ftol();
        *(undefined4 *)(iVar13 + 0x1a) = uVar11;
      }
      goto LAB_00729d37;
    case 0xb3:
      puVar12 = operator_new(0xc);
      local_8 = 9;
      if (puVar12 != (undefined4 *)0x0) {
        iVar13 = *(int *)(iVar13 + 0xc);
        puStack_11c = (undefined2 *)0x726c43;
        FUN_00499310();
        *puVar12 = &PTR_FUN_007e5f60;
        *(int *)(puVar12[1] + 0xe) = -iVar13;
      }
      goto LAB_00729d37;
    case 0xb4:
      local_28 = *(float *)(iVar7 + 0x3822);
      iVar9 = *(int *)(iVar13 + 0x10);
      if (iVar9 == 0) {
        local_28 = *(float *)(iVar13 + 8) + local_28;
      }
      else if (iVar9 == 1) {
        local_28 = *(float *)(iVar13 + 8);
      }
      else if (iVar9 == 2) {
        local_28 = DAT_00d7d480;
      }
      puVar12 = operator_new(0xc);
      local_8 = 0x53;
      if (puVar12 != (undefined4 *)0x0) {
        puStack_11c = (undefined2 *)0x728832;
        FUN_0072a710();
        *puVar12 = &PTR_FUN_007e6dec;
        *(float *)(puVar12[1] + 0xe) = local_28;
      }
      goto LAB_00729d37;
    case 0xb5:
      iVar9 = *(int *)(iVar13 + 0x10);
      local_24 = *(float *)(iVar7 + 0x3826);
      if (iVar9 == 0) {
        local_24 = *(float *)(iVar13 + 8) + local_24;
      }
      else if (iVar9 == 1) {
        local_24 = *(float *)(iVar13 + 8);
      }
      else if (iVar9 == 2) {
        local_24 = DAT_00d7d484;
      }
      puVar12 = operator_new(0xc);
      local_8 = 0x54;
      if (puVar12 != (undefined4 *)0x0) {
        puStack_11c = (undefined2 *)0x7288ae;
        FUN_0072a710();
        *puVar12 = &PTR_FUN_007e6dec;
        *(float *)(puVar12[1] + 0xe) = local_24;
      }
LAB_00729d37:
      local_8 = 0xffffffff;
      FUN_00565c30();
    }
switchD_00726590_caseD_b6:
    piVar6 = local_34;
  } while( true );
}


