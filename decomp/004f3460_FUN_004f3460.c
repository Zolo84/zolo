// FUN_004f3460 @ 4f3460 size=2247

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004f3460(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  undefined8 uVar9;
  int local_30 [2];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined **local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c0818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x52) = 1;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  local_4 = 0;
  local_28 = 0;
  local_26 = 0;
  uStack_24 = 0;
LAB_004f34c1:
  while (iVar3 = FUN_00535490(), iVar3 != 1) {
    if (iVar3 == 2) {
      local_20 = &PTR_LAB_007e378c;
      piVar5 = local_1c;
      while (piVar5 != (int *)0x0) {
        piVar1 = (int *)piVar5[2];
        FUN_00796cd8(piVar5);
        piVar5 = piVar1;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar5 = (int *)FUN_00534391();
    if (*piVar5 == 4) {
      FUN_005343dc();
      if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
        local_30[0] = FUN_00466b90(*(undefined4 *)(param_1 + 0x5a),*(undefined4 *)(param_1 + 0x5e),
                                   *(undefined4 *)(param_1 + 0x62),*(undefined4 *)(param_1 + 0x76),1
                                  );
        *(int *)(param_1 + 0x24) = local_30[0];
        iVar3 = (((((int)*(short *)(param_1 + 0x1e) - (int)*(short *)(DAT_00893530 + 0x18)) * 0xc -
                  (int)*(char *)(DAT_00893530 + 0x16)) + (int)*(char *)(param_1 + 0x1c)) * 0x1e -
                (int)*(char *)(DAT_00893530 + 0x15)) + (int)*(char *)(param_1 + 0x1b);
        if (iVar3 < local_30[0]) {
          *(float *)(param_1 + 0x46) = _DAT_007e3374 - (float)iVar3 / (float)local_30[0];
        }
        if (*(float *)(param_1 + 0x4a) == _DAT_007e3380) {
          fVar8 = (float10)FUN_004673a0(*(undefined4 *)(param_1 + 0x5a),
                                        *(undefined4 *)(param_1 + 0x5e),
                                        *(undefined4 *)(param_1 + 0x62),
                                        *(undefined4 *)(param_1 + 0x76));
          *(float *)(param_1 + 0x4a) = (float)fVar8;
          if (*(int *)(param_1 + 0x7a) != 0) {
            fVar8 = (float10)FUN_00467430(*(int *)(param_1 + 0x7a),*(undefined4 *)(param_1 + 0x66));
            *(float *)(param_1 + 0x4a) = (float)(fVar8 + (float10)*(float *)(param_1 + 0x4a));
          }
          if (*(int *)(param_1 + 0x7e) != 0) {
            fVar8 = (float10)FUN_00467430(*(int *)(param_1 + 0x7e),*(undefined4 *)(param_1 + 0x6a));
            *(float *)(param_1 + 0x4a) = (float)(fVar8 + (float10)*(float *)(param_1 + 0x4a));
          }
          if (*(int *)(param_1 + 0x82) != 0) {
            fVar8 = (float10)FUN_00467430(*(int *)(param_1 + 0x82),*(undefined4 *)(param_1 + 0x6e));
            *(float *)(param_1 + 0x4a) = (float)(fVar8 + (float10)*(float *)(param_1 + 0x4a));
          }
          if (*(int *)(param_1 + 0x86) != 0) {
            fVar8 = (float10)FUN_00467430(*(int *)(param_1 + 0x86),*(undefined4 *)(param_1 + 0x72));
            *(float *)(param_1 + 0x4a) = (float)(fVar8 + (float10)*(float *)(param_1 + 0x4a));
          }
        }
        if ((*(float *)(param_1 + 0x28) <= _DAT_007e3380) && (DAT_00dc4b5e != '\0')) {
          FUN_00429a00(s_WARNING___Missing_or_invalid_cos_00848ffc,
                       (double)*(float *)(param_1 + 0x28),*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
        }
      }
      if (*(float *)(param_1 + 0x28) <= _DAT_007e3380) {
        fVar8 = (float10)FUN_00466cb0(*(undefined4 *)(param_1 + 0x5a),
                                      *(undefined4 *)(param_1 + 0x5e),
                                      *(undefined4 *)(param_1 + 0x62),
                                      *(undefined4 *)(param_1 + 0x76),
                                      *(undefined4 *)(param_1 + 0x7a),
                                      *(undefined4 *)(param_1 + 0x66),
                                      *(undefined4 *)(param_1 + 0x7e),
                                      *(undefined4 *)(param_1 + 0x6a),
                                      *(undefined4 *)(param_1 + 0x82),
                                      *(undefined4 *)(param_1 + 0x6e),
                                      *(undefined4 *)(param_1 + 0x86),
                                      *(undefined4 *)(param_1 + 0x72),1);
        *(float *)(param_1 + 0x28) = (float)fVar8;
      }
      if ((float)_DAT_007e8420 < *(float *)(param_1 + 0x46)) {
        *(float *)(param_1 + 0x46) = *(float *)(param_1 + 0x46) / (float)*(int *)(param_1 + 0x24);
      }
      if ((DAT_0088f28e == *(int *)(param_1 + 0xe)) && (DAT_0088f28c == *(short *)(param_1 + 0xc)))
      {
        FUN_00428eb0(local_30);
        local_30[0] = CONCAT22(local_30[0]._2_2_,0x1268);
        (**(code **)(*(int *)(param_1 + 8) + 4))(local_30);
      }
      local_20 = &PTR_LAB_007e378c;
      piVar5 = local_1c;
      while (piVar5 != (int *)0x0) {
        piVar1 = (int *)piVar5[2];
        FUN_00796cd8(piVar5);
        piVar5 = piVar1;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar5 = local_1c;
  if (DAT_00dc4b5e != '\0') {
    iVar3 = param_2[1];
    for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
      cVar2 = (*(code *)local_20[3])(*piVar5,iVar3);
      if (cVar2 != '\0') {
        if (piVar5 != (int *)0x0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    piVar1 = local_18;
    iVar3 = param_2[1];
    local_18 = operator_new(0xe);
    if (local_18 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      *local_18 = iVar3;
      local_18[1] = (int)piVar1;
      local_18[2] = 0;
      *(undefined1 *)(local_18 + 3) = 0;
    }
    iVar3 = local_14 + 1;
    bVar7 = local_14 != 0;
    piVar5 = local_18;
    local_14 = iVar3;
    if (bVar7) {
      piVar1[2] = (int)local_18;
      piVar5 = local_1c;
    }
  }
  local_1c = piVar5;
  iVar3 = param_2[1];
  if (iVar3 < 0x299) {
    if (iVar3 == 0x298) {
      uVar4 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      goto LAB_004f34c1;
    }
    if (0x1aa < iVar3) {
      switch(iVar3) {
      case 0x1b3:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x4a) = (float)fVar8;
        break;
      default:
switchD_004f35b6_caseD_7c:
        FUN_005349b0(s_Unknown_variable_in_Development_00849060);
        break;
      case 0x20e:
        iVar3 = FUN_004fe160(param_2 + 0x103);
        *(int *)(param_1 + 0x5e) = iVar3;
        if (iVar3 == 0x8c) {
          iVar6 = *(int *)(*param_2 + 0x212) + 1;
          iVar3 = *param_2 + 0x216;
          uVar9 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_brigade_type___s_008490f4);
          goto LAB_004f365b;
        }
        break;
      case 0x215:
        *(bool *)(param_1 + 0x58) = param_2[0x103] == 0x111;
        break;
      case 0x23c:
        uVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x30) = uVar4;
        break;
      case 0x24b:
        uVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        break;
      case 0x296:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x3e) = (float)fVar8;
        break;
      case 0x297:
        fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x46) = (float)fVar8;
      }
      goto LAB_004f34c1;
    }
    if (iVar3 == 0x1aa) {
      uVar4 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x52) = uVar4;
      goto LAB_004f34c1;
    }
    switch(iVar3) {
    case 0x7b:
      *(bool *)(param_1 + 0x3c) = param_2[0x103] == 0x111;
      goto LAB_004f34c1;
    default:
      goto switchD_004f35b6_caseD_7c;
    case 0xc0:
      fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x28) = (float)fVar8;
      if ((float10)_DAT_007e3380 < fVar8) goto LAB_004f34c1;
      iVar6 = *(int *)(*param_2 + 0x212) + 1;
      iVar3 = *param_2 + 0x216;
      uVar9 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_cost_value___s__f_00849128);
      break;
    case 0xe9:
      FUN_00425ba0(param_2 + 0x104);
      goto LAB_004f34c1;
    case 0xf4:
      uVar4 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x16) = uVar4;
      goto LAB_004f34c1;
    case 0xfd:
      FUN_0054f130(param_2);
      goto LAB_004f34c1;
    case 0x115:
      *(bool *)(param_1 + 0x56) = param_2[0x103] == 0x111;
      goto LAB_004f34c1;
    case 0x141:
      iVar3 = FUN_004fdae0(param_2 + 0x103);
      *(int *)(param_1 + 0x5a) = iVar3;
      if (iVar3 != 0x8c) goto LAB_004f34c1;
      iVar6 = *(int *)(*param_2 + 0x212) + 1;
      iVar3 = *param_2 + 0x216;
      uVar9 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_division_type____0084916c);
    }
  }
  else {
    if (iVar3 < 0x514) {
      if (iVar3 == 0x513) {
        uVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x6a) = uVar4;
      }
      else if (iVar3 < 0x342) {
        if (iVar3 == 0x341) {
          uVar4 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x62) = uVar4;
        }
        else if (iVar3 == 0x299) {
          uVar4 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x20) = uVar4;
        }
        else if (iVar3 == 0x29a) {
          uVar4 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x24) = uVar4;
        }
        else {
          if (iVar3 != 0x29b) goto switchD_004f35b6_caseD_7c;
          fVar8 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x4e) = (float)fVar8;
        }
      }
      else if (iVar3 == 0x342) {
        uVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x76) = uVar4;
      }
      else if (iVar3 == 0x362) {
        *(bool *)(param_1 + 0x57) = param_2[0x103] == 0x111;
      }
      else {
        if (iVar3 != 0x512) goto switchD_004f35b6_caseD_7c;
        uVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x66) = uVar4;
      }
      goto LAB_004f34c1;
    }
    switch(iVar3) {
    case 0x514:
      uVar4 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x6e) = uVar4;
      goto LAB_004f34c1;
    case 0x515:
      uVar4 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x72) = uVar4;
      goto LAB_004f34c1;
    default:
      goto switchD_004f35b6_caseD_7c;
    case 0x517:
      iVar3 = FUN_004fe160(param_2 + 0x103);
      *(int *)(param_1 + 0x7a) = iVar3;
      if (iVar3 == 0x8c) {
        iVar6 = *(int *)(*param_2 + 0x212) + 1;
        iVar3 = *param_2 + 0x216;
        uVar9 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_brigade_type___s_008490f4);
        break;
      }
      goto LAB_004f34c1;
    case 0x518:
      iVar3 = FUN_004fe160(param_2 + 0x103);
      *(int *)(param_1 + 0x7e) = iVar3;
      if (iVar3 != 0x8c) goto LAB_004f34c1;
      iVar6 = *(int *)(*param_2 + 0x212) + 1;
      iVar3 = *param_2 + 0x216;
      uVar9 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_brigade_type___s_008490f4);
      break;
    case 0x519:
      iVar3 = FUN_004fe160(param_2 + 0x103);
      *(int *)(param_1 + 0x82) = iVar3;
      if (iVar3 != 0x8c) goto LAB_004f34c1;
      iVar6 = *(int *)(*param_2 + 0x212) + 1;
      iVar3 = *param_2 + 0x216;
      uVar9 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_brigade_type___s_008490f4);
      break;
    case 0x51a:
      iVar3 = FUN_004fe160(param_2 + 0x103);
      *(int *)(param_1 + 0x86) = iVar3;
      if (iVar3 != 0x8c) goto LAB_004f34c1;
      iVar6 = *(int *)(*param_2 + 0x212) + 1;
      iVar3 = *param_2 + 0x216;
      uVar9 = CONCAT44(param_2 + 0x104,s_ERROR___Invalid_brigade_type___s_008490f4);
      break;
    case 0x523:
      FUN_00427ed0(param_2);
      cVar2 = (**(code **)(*(int *)(param_1 + 8) + 4))(&local_28);
      if (cVar2 == '\0') {
        iVar3 = *param_2;
        if (DAT_00dc4b5f == '\0') {
          FUN_00429a00(s_ERROR___Div__development_ID_conf_00849084,local_28,
                       CONCAT22(uStack_24,local_26),iVar3 + 0x216,*(int *)(iVar3 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        else {
          FUN_00429a50(s_ID_conflict__type____d_id___d__a_008490c8,local_28,
                       CONCAT22(uStack_24,local_26),iVar3 + 0x216,*(int *)(iVar3 + 0x212) + 1);
        }
      }
      goto LAB_004f34c1;
    }
  }
LAB_004f365b:
  FUN_00429a00(uVar9,iVar3,iVar6);
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
  goto LAB_004f34c1;
}


