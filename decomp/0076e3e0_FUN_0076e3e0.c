// FUN_0076e3e0 @ 76e3e0 size=2334

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076e3e0(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int local_23c;
  char cStack_235;
  undefined4 *local_234;
  int local_230;
  void *local_22c;
  int local_228;
  undefined2 local_224;
  int local_222;
  undefined2 local_21c;
  int local_21a;
  undefined1 local_214 [4];
  void *local_210;
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0ccc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_22c = operator_new(8);
  local_4 = 0;
  if (local_22c == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_00426120(param_1);
  }
  local_4 = 0xffffffff;
  local_234 = puVar4;
  iVar5 = FUN_00426720();
  iVar5 = iVar5 + -1;
  local_22c = (void *)iVar5;
  FUN_00426330(1);
  if (DAT_00dc4b5e == '\0') goto LAB_0076e4ed;
  if (DAT_00dc3a00 == '\0') {
LAB_0076e4a0:
    FUN_007a630a(local_10c,param_1);
  }
  else {
    FUN_007a630a(local_10c,s__s__s_0083a350,&DAT_00dc3a00,param_1);
    iVar6 = FUN_007a6615(local_10c,&DAT_008390e0);
    if (iVar6 == 0) goto LAB_0076e4a0;
    FUN_007a6429(iVar6);
  }
  FUN_00429a00(&DAT_0083f5a0,local_10c);
  if ((DAT_00dc4b5e != '\0') && (iVar5 < 1)) {
    FUN_00429a00(s_WARNING___No_leaders_found_in____0087849c,param_1);
  }
LAB_0076e4ed:
  local_230 = 0;
  if (0 < iVar5) {
    do {
      local_210 = operator_new(0x68);
      local_4 = 1;
      if (local_210 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_00509d30();
      }
      puVar4 = local_234;
      local_4 = 0xffffffff;
      FUN_004265c0(local_20c);
      FUN_00425ba0(local_20c);
      FUN_00426380(&local_23c);
      FUN_004265c0(local_20c);
      iVar5 = FUN_004af6b0(local_20c);
      if (iVar5 == 0) {
        if (DAT_00dc4b5f != '\0') {
          FUN_00429a50(s_Error_in_leader_file___s____Inva_00878454,param_1,local_20c,local_23c);
        }
        FUN_00429a00(s_ERROR___Invalid_country_TAG___s__00878400,local_20c,local_23c,param_1,
                     local_230 + 2);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      if ((0 < param_2) && (iVar5 != param_2)) {
        if (piVar7 != (int *)0x0) {
          (**(code **)*piVar7)(1);
        }
        if (puVar4 == (undefined4 *)0x0) {
          ExceptionList = pvStack_c;
          return;
        }
        (**(code **)*puVar4)(1);
        ExceptionList = pvStack_c;
        return;
      }
      local_224 = 6;
      local_222 = local_23c;
      piVar8 = (int *)FUN_0050b140(&local_224);
      if (piVar8 == (int *)0x0) {
        local_21a = local_23c;
        local_21c = 6;
        (**(code **)(piVar7[3] + 4))(&local_21c);
        piVar8 = (int *)((int)piVar7 + 0x4e);
        *(int *)((int)piVar7 + 0x16) = iVar5;
        *(int *)((int)piVar7 + 0x1a) = iVar5;
        iVar5 = 4;
        piVar11 = piVar8;
        do {
          FUN_00426380(&local_23c);
          *piVar11 = local_23c;
          piVar11 = piVar11 + -1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (DAT_00dc4b5e != '\0') {
          iVar5 = 3;
          do {
            if (piVar8[-1] < *piVar8) {
              FUN_00429a00(s_ERROR___Rank__d_year___d__is_big_008781e4,iVar5,*piVar8,iVar5 + -1,
                           piVar8[-1],*(undefined4 *)((int)piVar7 + 0x12),param_1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            iVar5 = iVar5 + -1;
            piVar8 = piVar8 + -1;
          } while (0 < iVar5);
        }
        FUN_0050a2b0();
        FUN_00426380(&local_23c);
        FUN_00426380(&local_23c);
        *(int *)((int)piVar7 + 0x3e) = local_23c;
        FUN_00426380(&local_23c);
        *(int *)((int)piVar7 + 0x1e) = local_23c;
        FUN_00426380(&local_23c);
        FUN_00509f50(local_23c);
        FUN_00426380(&local_23c);
        fVar2 = (float)local_23c;
        if ((float)local_23c < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        *(float *)((int)piVar7 + 0x36) = fVar2;
        FUN_00426380(&local_23c);
        *(int *)((int)piVar7 + 0x3a) = local_23c;
        FUN_00426380(&local_23c);
        FUN_0050ad30(local_23c);
        FUN_004265c0(local_20c);
        FUN_0050a2e0(local_20c);
        FUN_00426380(&local_23c);
        *(int *)((int)piVar7 + 0x52) = local_23c;
        FUN_00426380(&local_23c);
        *(int *)((int)piVar7 + 0x56) = local_23c;
        if ((DAT_00dc4b5e != '\0') && (local_23c <= *(int *)((int)piVar7 + 0x52))) {
          FUN_00429a00(s_ERROR___End_year_for_leader_ID_d_008783b0,
                       *(undefined4 *)((int)piVar7 + 0x12),param_1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        if (DAT_00dc195d != '\0') {
          cStack_235 = '\0';
          FUN_00426380(&local_23c);
          iVar5 = *(int *)((int)piVar7 + 0x52);
          cVar3 = cStack_235;
          if (local_23c < iVar5) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar7 + 0xc))(*(undefined4 *)((int)piVar7 + 0x12));
              FUN_00429a50(s_Leader_file_error___s___Retireme_0087818c,param_1,local_23c,iVar5,uVar9
                          );
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = *(undefined4 *)((int)piVar7 + 0x52);
              uVar10 = (**(code **)(*piVar7 + 0xc))(*(undefined4 *)((int)piVar7 + 0x12),param_1);
              FUN_00429a00(s_ERROR___Retirement_Year___d__<_S_00878308,local_23c,uVar9,uVar10);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            cVar3 = '\x01';
          }
          if (local_23c < *(int *)((int)piVar7 + 0x56)) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = *(undefined4 *)((int)piVar7 + 0x52);
              uVar10 = (**(code **)(*piVar7 + 0xc))(*(undefined4 *)((int)piVar7 + 0x12));
              FUN_00429a50(s_Leader_file_error___s___Retireme_00878134,param_1,local_23c,uVar9,
                           uVar10);
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = *(undefined4 *)((int)piVar7 + 0x56);
              uVar10 = (**(code **)(*piVar7 + 0xc))(*(undefined4 *)((int)piVar7 + 0x12),param_1);
              FUN_00429a00(s_ERROR___Retirement_Year___d__<_E_00878264,local_23c,uVar9,uVar10);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          else if (cVar3 == '\0') {
            *(int *)((int)piVar7 + 0x5a) = local_23c;
          }
        }
        FUN_00426330(1);
        iVar5 = local_228;
        fVar2 = (float)(int)(&DAT_0084a0ec)[*(int *)((int)piVar7 + 0x32)];
        if (*(float *)((int)piVar7 + 0x36) < fVar2) {
          if (fVar2 < _DAT_007e3380) {
            fVar2 = _DAT_007e3380;
          }
          *(float *)((int)piVar7 + 0x36) = fVar2;
        }
        iVar6 = *(int *)(local_228 + 0x167e6);
        puVar4 = operator_new(0xe);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = piVar7;
          puVar4[1] = iVar6;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        iVar1 = *(int *)(iVar5 + 0x167ea);
        *(undefined4 **)(iVar5 + 0x167e6) = puVar4;
        *(int *)(iVar5 + 0x167ea) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(iVar5 + 0x167e2) = puVar4;
        }
        else {
          *(undefined4 **)(iVar6 + 8) = puVar4;
        }
      }
      else {
        if ((*(int *)((int)piVar8 + 0x62) == 0) && (*(int *)((int)piVar8 + 0x5e) == 0)) {
          *(int *)((int)piVar8 + 0x16) = iVar5;
          *(int *)((int)piVar8 + 0x1a) = iVar5;
          if (*(char *)((int)piVar8 + 0x2d) == '\0') {
            uVar9 = (**(code **)(*piVar7 + 0xc))();
            FUN_00425ba0(uVar9);
            piVar11 = (int *)((int)piVar8 + 0x4e);
            iVar5 = 4;
            do {
              FUN_00426380(&local_23c);
              *piVar11 = local_23c;
              piVar11 = piVar11 + -1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            FUN_00426380(&local_23c);
            FUN_00426380(&local_23c);
            *(int *)((int)piVar8 + 0x3e) = local_23c;
            FUN_00426380(&local_23c);
            if (*(int *)((int)piVar8 + 0x1e) == 0) {
              *(int *)((int)piVar8 + 0x1e) = local_23c;
            }
            FUN_00426380(&local_23c);
            FUN_00426380(&local_23c);
            FUN_00426380(&local_23c);
            *(int *)((int)piVar8 + 0x3a) = local_23c;
            FUN_00426380(&local_23c);
            FUN_0050ad30(local_23c);
            FUN_004265c0(local_20c);
            FUN_0050a2e0(local_20c);
            FUN_00426380(&local_23c);
            *(int *)((int)piVar8 + 0x52) = local_23c;
            FUN_00426380(&local_23c);
            *(int *)((int)piVar8 + 0x56) = local_23c;
            if ((DAT_00dc4b5e != '\0') && (local_23c <= *(int *)((int)piVar8 + 0x52))) {
              FUN_00429a00(s_ERROR___End_year_for_leader_ID_d_008783b0,
                           *(undefined4 *)((int)piVar8 + 0x12),param_1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            if (DAT_00dc195d != '\0') {
              cStack_235 = '\0';
              FUN_00426380(&local_23c);
              iVar5 = *(int *)((int)piVar8 + 0x52);
              if (local_23c < iVar5) {
                if (DAT_00dc4b5f != '\0') {
                  uVar9 = (**(code **)(*piVar8 + 0xc))(*(undefined4 *)((int)piVar8 + 0x12));
                  FUN_00429a50(s_Leader_file_error__Retirement_Ye_0087835c,param_1,local_23c,iVar5,
                               uVar9);
                }
                if (DAT_00dc4b5e != '\0') {
                  uVar9 = *(undefined4 *)((int)piVar8 + 0x52);
                  uVar10 = (**(code **)(*piVar8 + 0xc))(*(undefined4 *)((int)piVar8 + 0x12),param_1)
                  ;
                  FUN_00429a00(s_ERROR___Retirement_Year___d__<_S_00878308,local_23c,uVar9,uVar10);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                cStack_235 = '\x01';
              }
              iVar5 = *(int *)((int)piVar8 + 0x56);
              if (local_23c < iVar5) {
                if (DAT_00dc4b5f != '\0') {
                  uVar9 = (**(code **)(*piVar8 + 0xc))(*(undefined4 *)((int)piVar8 + 0x12));
                  FUN_00429a50(s_Leader_file_error__Retirement_Ye_008782b4,param_1,local_23c,iVar5,
                               uVar9);
                }
                if (DAT_00dc4b5e != '\0') {
                  uVar9 = *(undefined4 *)((int)piVar8 + 0x56);
                  uVar10 = (**(code **)(*piVar8 + 0xc))(*(undefined4 *)((int)piVar8 + 0x12),param_1)
                  ;
                  FUN_00429a00(s_ERROR___Retirement_Year___d__<_E_00878264,local_23c,uVar9,uVar10);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
              }
              if (cStack_235 == '\0') {
                *(int *)((int)piVar8 + 0x5a) = local_23c;
              }
            }
            fVar2 = (float)(int)(&DAT_0084a0ec)[*(int *)((int)piVar8 + 0x32)];
            if (*(float *)((int)piVar8 + 0x36) < fVar2) {
              if (fVar2 < _DAT_007e3380) {
                fVar2 = _DAT_007e3380;
              }
              *(float *)((int)piVar8 + 0x36) = fVar2;
            }
          }
          else {
            *(undefined1 *)((int)piVar8 + 0x2d) = 0;
          }
          iVar5 = local_228;
          piVar11 = (int *)(**(code **)(*(int *)(local_228 + 0x167de) + 0x28))(local_214,piVar8);
          if (*piVar11 == 0) {
            iVar6 = *(int *)(iVar5 + 0x167e6);
            puVar4 = operator_new(0xe);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = piVar8;
              puVar4[1] = iVar6;
              puVar4[2] = 0;
              *(undefined1 *)(puVar4 + 3) = 0;
            }
            iVar1 = *(int *)(iVar5 + 0x167ea);
            *(undefined4 **)(iVar5 + 0x167e6) = puVar4;
            *(int *)(iVar5 + 0x167ea) = iVar1 + 1;
            if (iVar1 == 0) {
              *(undefined4 **)(iVar5 + 0x167e2) = puVar4;
            }
            else {
              *(undefined4 **)(iVar6 + 8) = puVar4;
            }
          }
        }
        if ((DAT_00dc4b5e != '\0') &&
           ((DAT_00893750 == 0 || (*(char *)(DAT_00893750 + 0x111) == '\0')))) {
          FUN_00429a00(s_ERROR___Already_loaded_leader_ID_00878238,
                       *(undefined4 *)((int)piVar8 + 0x12),param_1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        if (piVar7 != (int *)0x0) {
          (**(code **)*piVar7)(1);
        }
        FUN_00426330(1);
      }
      local_230 = local_230 + 1;
      puVar4 = local_234;
    } while (local_230 < (int)local_22c);
  }
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  ExceptionList = pvStack_c;
  return;
}


