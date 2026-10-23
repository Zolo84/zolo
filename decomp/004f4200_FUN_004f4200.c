// FUN_004f4200 @ 4f4200 size=1622

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004f4200(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  float10 fVar10;
  undefined8 uVar11;
  int local_30 [2];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007c08a3;
  local_c = ExceptionList;
  local_28 = 0;
  local_26 = 0;
  uStack_24 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  local_4 = 0;
LAB_004f424c:
  do {
    while (iVar5 = FUN_00535490(), iVar5 != 1) {
      if (iVar5 == 2) {
        local_20 = &PTR_LAB_007e378c;
        puVar1 = local_1c;
        while (puVar1 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar1[2];
          FUN_00796cd8(puVar1);
          puVar1 = puVar3;
        }
        ExceptionList = local_c;
        return 0;
      }
      piVar8 = (int *)FUN_00534391();
      if (*piVar8 == 4) {
        FUN_005343dc();
        if ((*(int *)(param_1 + 0x2c) != 0) && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0')) {
          local_30[0] = FUN_00467030();
          *(int *)(param_1 + 0x24) = local_30[0];
          iVar5 = (((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(DAT_00893530 + 0x18)) * 0xc
                    - (int)*(char *)(DAT_00893530 + 0x16)) + (int)*(char *)(param_1 + 0x1c)) * 0x1e
                  - (int)*(char *)(DAT_00893530 + 0x15)) + (int)*(char *)(param_1 + 0x1b);
          if (iVar5 < local_30[0]) {
            *(float *)(param_1 + 0x46) = _DAT_007e3374 - (float)iVar5 / (float)local_30[0];
          }
          if (*(float *)(param_1 + 0x4a) == _DAT_007e3380) {
            fVar10 = (float10)FUN_00467430(*(undefined4 *)(param_1 + 0x5a),
                                           *(undefined4 *)(param_1 + 0x5e));
            *(float *)(param_1 + 0x4a) = (float)fVar10;
          }
          if ((*(float *)(param_1 + 0x28) <= _DAT_007e3380) && (DAT_00dc4b5e != '\0')) {
            FUN_00429a00(s_WARNING___Missing_or_invalid_cos_008491a4,
                         (double)*(float *)(param_1 + 0x28),*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
          }
        }
        if (*(float *)(param_1 + 0x28) <= _DAT_007e3380) {
          fVar10 = (float10)FUN_004672f0(*(undefined4 *)(param_1 + 0x5a),
                                         *(undefined4 *)(param_1 + 0x5e));
          *(float *)(param_1 + 0x28) = (float)fVar10;
        }
        if ((float)_DAT_007e8420 < *(float *)(param_1 + 0x46)) {
          *(float *)(param_1 + 0x46) = *(float *)(param_1 + 0x46) / (float)*(int *)(param_1 + 0x24);
        }
        if ((DAT_0088f28e == *(int *)(param_1 + 0xe)) && (DAT_0088f28c == *(short *)(param_1 + 0xc))
           ) {
          FUN_00428eb0(local_30);
          local_30[0] = CONCAT22(local_30[0]._2_2_,0x1268);
          (**(code **)(*(int *)(param_1 + 8) + 4))(local_30);
        }
        local_20 = &PTR_LAB_007e378c;
        puVar1 = local_1c;
        while (puVar1 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar1[2];
          FUN_00796cd8(puVar1);
          puVar1 = puVar3;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    puVar1 = local_1c;
    if (DAT_00dc4b5e != '\0') {
      iVar5 = param_2[1];
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
        cVar4 = (*(code *)local_20[3])(*puVar1,iVar5);
        if (cVar4 != '\0') {
          if (puVar1 != (undefined4 *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      puVar3 = local_18;
      pvVar6 = operator_new(0xe);
      local_4._0_1_ = 1;
      if (pvVar6 == (void *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        local_18 = (undefined4 *)FUN_0049a7a0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar5 = local_14 + 1;
      bVar9 = local_14 != 0;
      puVar1 = local_18;
      local_14 = iVar5;
      if (bVar9) {
        puVar3[2] = local_18;
        puVar1 = local_1c;
      }
    }
    local_1c = puVar1;
    iVar5 = param_2[1];
    if (iVar5 < 0x23d) {
      if (iVar5 != 0x23c) {
        if (iVar5 < 0x116) {
          if (iVar5 == 0x115) {
            *(bool *)(param_1 + 0x56) = param_2[0x103] == 0x111;
            goto LAB_004f424c;
          }
          switch(iVar5) {
          case 0x7b:
            *(bool *)(param_1 + 0x3c) = param_2[0x103] == 0x111;
            goto LAB_004f424c;
          case 0xc0:
            fVar10 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x28) = (float)fVar10;
            if (fVar10 <= (float10)_DAT_007e3380) {
              iVar2 = *param_2;
              iVar5 = *(int *)(iVar2 + 0x212);
              uVar11 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_cost_value___s__f_00849128);
              goto LAB_004f43b6;
            }
            goto LAB_004f424c;
          case 0xe9:
            FUN_00425ba0(param_2 + 0x104);
            goto LAB_004f424c;
          case 0xf4:
            uVar7 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 0x16) = uVar7;
            goto LAB_004f424c;
          case 0xfd:
            FUN_0054f130(param_2);
            goto LAB_004f424c;
          }
        }
        else {
          switch(iVar5) {
          case 0x141:
            iVar5 = FUN_004fe160(param_2 + 0x103);
            *(int *)(param_1 + 0x5a) = iVar5;
            if (iVar5 == 0x8c) {
              iVar2 = *param_2;
              iVar5 = *(int *)(iVar2 + 0x212);
              uVar11 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_brigade_type___s_008490f4);
LAB_004f43b6:
              FUN_00429a00(uVar11,iVar2 + 0x216,iVar5 + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            goto LAB_004f424c;
          case 0x1aa:
            uVar7 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 0x52) = uVar7;
            goto LAB_004f424c;
          case 0x1b3:
            fVar10 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x4a) = (float)fVar10;
            goto LAB_004f424c;
          case 0x215:
            *(bool *)(param_1 + 0x58) = param_2[0x103] == 0x111;
            goto LAB_004f424c;
          }
        }
switchD_004f434c_caseD_7c:
        FUN_005349b0(s_Unknown_variable_in_Development_00849060);
        goto LAB_004f424c;
      }
      uVar7 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x30) = uVar7;
      goto LAB_004f424c;
    }
    if (iVar5 < 0x29b) {
      if (iVar5 == 0x29a) {
        uVar7 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x24) = uVar7;
      }
      else {
        switch(iVar5) {
        case 0x24b:
          uVar7 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x38) = uVar7;
          break;
        default:
          goto switchD_004f434c_caseD_7c;
        case 0x296:
          fVar10 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x3e) = (float)fVar10;
          break;
        case 0x297:
          fVar10 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x46) = (float)fVar10;
          break;
        case 0x298:
          uVar7 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x34) = uVar7;
          break;
        case 0x299:
          uVar7 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x20) = uVar7;
        }
      }
    }
    else if (iVar5 < 0x363) {
      if (iVar5 == 0x362) {
        *(bool *)(param_1 + 0x57) = param_2[0x103] == 0x111;
      }
      else if (iVar5 == 0x29b) {
        fVar10 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x4e) = (float)fVar10;
      }
      else {
        if (iVar5 != 0x341) goto switchD_004f434c_caseD_7c;
        uVar7 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x5e) = uVar7;
      }
    }
    else {
      if (iVar5 != 0x523) goto switchD_004f434c_caseD_7c;
      FUN_00427ed0(param_2);
      cVar4 = (**(code **)(*(int *)(param_1 + 8) + 4))(&local_28);
      if (cVar4 == '\0') {
        iVar5 = *param_2;
        if (DAT_00dc4b5f == '\0') {
          FUN_00429a00(s_ERROR___Brig__development_ID_con_00849208,local_28,
                       CONCAT22(uStack_24,local_26),iVar5 + 0x216,*(int *)(iVar5 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        else {
          FUN_00429a50(s_ID_conflict__type____d_id___d__a_008490c8,local_28,
                       CONCAT22(uStack_24,local_26),iVar5 + 0x216,*(int *)(iVar5 + 0x212) + 1);
        }
      }
    }
  } while( true );
}


