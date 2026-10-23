// FUN_006b8060 @ 6b8060 size=1603

undefined4 __thiscall FUN_006b8060(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined2 local_28;
  undefined4 local_26;
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d6ea4;
  local_c = ExceptionList;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
LAB_006b80a2:
  do {
    while (iVar4 = FUN_00535490(), iVar4 != 1) {
      piVar6 = (int *)FUN_00534391();
      if (*piVar6 == 4) {
        FUN_005343dc();
        local_20 = &PTR_LAB_007e378c;
        puVar9 = local_1c;
        while (puVar9 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar9[2];
          FUN_00796cd8(puVar9);
          puVar9 = puVar2;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    puVar9 = local_1c;
    if (DAT_00dc4b5e != '\0') {
      iVar4 = param_2[1];
      for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)puVar9[2]) {
        cVar3 = (*(code *)local_20[3])(*puVar9,iVar4);
        if (cVar3 != '\0') {
          if (puVar9 != (undefined4 *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      puVar2 = local_18;
      iVar4 = param_2[1];
      pvVar5 = operator_new(0xe);
      local_4._0_1_ = 1;
      if (pvVar5 == (void *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        local_18 = (undefined4 *)FUN_0049a7a0(iVar4,puVar2,0);
      }
      local_4._0_1_ = 0;
      iVar4 = local_14 + 1;
      bVar10 = local_14 != 0;
      puVar9 = local_18;
      local_14 = iVar4;
      if (bVar10) {
        puVar2[2] = local_18;
        puVar9 = local_1c;
      }
    }
    local_1c = puVar9;
    iVar4 = param_2[1];
    if (0x3df < iVar4) {
      if (iVar4 != 0x4a6) {
LAB_006b860a:
        FUN_005349b0(s_ai_tech_sharing_prefs___Unexpect_00869fbc);
        local_20 = &PTR_LAB_007e378c;
        puVar9 = local_1c;
        while (puVar9 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar9[2];
          FUN_00796cd8(puVar9);
          puVar9 = puVar2;
        }
        ExceptionList = local_c;
        return 0xfffffffe;
      }
      puVar9 = *(undefined4 **)(param_1 + 0x3e);
      while (puVar9 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar9[2];
        FUN_00796cd8(*puVar9);
        FUN_00796cd8(puVar9);
        puVar9 = puVar2;
      }
      *(undefined4 *)(param_1 + 0x3e) = 0;
      *(undefined4 *)(param_1 + 0x42) = 0;
      *(undefined4 *)(param_1 + 0x46) = 0;
      do {
        while (iVar4 = FUN_00535490(), iVar4 == 1) {
          iVar4 = FUN_007a7b3c(param_2 + 2);
          pvVar5 = operator_new(8);
          local_4._0_1_ = 4;
          if (pvVar5 == (void *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_0076c790();
          }
          local_4._0_1_ = 0;
          *piVar6 = iVar4;
          iVar7 = FUN_007a7b3c(param_2 + 0x104);
          piVar6[1] = iVar7;
          cVar3 = (**(code **)(*(int *)(param_1 + 0x3a) + 0x24))(piVar6);
          if (cVar3 == '\0') {
            iVar7 = *(int *)(param_1 + 0x42);
            puVar9 = operator_new(0xe);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = piVar6;
              puVar9[1] = iVar7;
              puVar9[2] = 0;
              *(undefined1 *)(puVar9 + 3) = 0;
            }
            iVar1 = *(int *)(param_1 + 0x46);
            *(undefined4 **)(param_1 + 0x42) = puVar9;
            *(int *)(param_1 + 0x46) = iVar1 + 1;
            if (iVar1 == 0) {
              *(undefined4 **)(param_1 + 0x3e) = puVar9;
            }
            else {
              *(undefined4 **)(iVar7 + 8) = puVar9;
            }
          }
          if (DAT_00dc4b5e != '\0') {
            iVar7 = 0;
            puVar9 = *(undefined4 **)(param_1 + 0x3e);
            if (*(undefined4 **)(param_1 + 0x3e) != (undefined4 *)0x0) {
              do {
                piVar6 = puVar9 + 2;
                if (*(int *)*puVar9 == iVar4) {
                  iVar7 = iVar7 + 1;
                }
                puVar9 = (undefined4 *)*piVar6;
              } while ((undefined4 *)*piVar6 != (undefined4 *)0x0);
              if (1 < iVar7) {
                FUN_00429a00(s_ERROR___Tech_ID___d__used__d_tim_0086a048,iVar4,iVar7,
                             *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
          }
        }
        if (iVar4 == 2) {
          local_20 = &PTR_LAB_007e378c;
          puVar9 = local_1c;
          while (puVar9 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)puVar9[2];
            FUN_00796cd8(puVar9);
            puVar9 = puVar2;
          }
          ExceptionList = local_c;
          return 0;
        }
        piVar6 = (int *)FUN_00534391();
      } while (*piVar6 != 4);
      FUN_005343dc();
      if (DAT_00dc4b5e != '\0') {
        local_26 = 0;
        local_28 = 0x11;
        puVar9 = *(undefined4 **)(param_1 + 0x3e);
        while (puVar9 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar9[2];
          local_26 = *(undefined4 *)*puVar9;
          iVar4 = FUN_00428460(&local_28);
          puVar9 = puVar2;
          if ((iVar4 == 0) || (iVar4 == 8)) {
            FUN_00429a00(s_ERROR___Invalid_Tech_ID___d__fou_00869fe8,local_26,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
      goto LAB_006b80a2;
    }
    if (iVar4 == 0x3df) {
      (**(code **)(*(int *)(param_1 + 0x16) + 0x10))();
      FUN_00535600(param_1 + 0x16);
      if (DAT_00dc4b5e != '\0') {
        uStack_2e = 0;
        uStack_30 = 0x11;
        puVar9 = *(undefined4 **)(param_1 + 0x1a);
        while (puVar9 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar9[2];
          uStack_2e = *puVar9;
          iVar4 = FUN_00428460(&uStack_30);
          puVar9 = puVar2;
          if ((iVar4 == 0) || (iVar4 == 8)) {
            FUN_00429a00(s_ERROR___Invalid_Tech_ID___d__fou_0086a0a8,uStack_2e);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
    }
    else if (iVar4 == 0x149) {
      puVar9 = *(undefined4 **)(param_1 + 0x2c);
      while (puVar9 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar9[2];
        FUN_00796cd8(*puVar9);
        FUN_00796cd8(puVar9);
        puVar9 = puVar2;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      do {
        while (iVar4 = FUN_00535490(), iVar4 == 1) {
          iVar4 = FUN_004af6b0(param_2 + 2);
          if (iVar4 == 0) {
            if (DAT_00dc4b5e != '\0') {
              FUN_00429a00(s_ERROR___Invalid_country_TAG___s__0086a0f0,param_2 + 2,*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          else {
            pvVar5 = operator_new(8);
            local_4._0_1_ = 2;
            if (pvVar5 == (void *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)FUN_0076c770();
            }
            local_4._0_1_ = 0;
            *piVar6 = iVar4;
            iVar7 = FUN_007a7b3c(param_2 + 0x104);
            piVar6[1] = iVar7;
            cVar3 = (**(code **)(*(int *)(param_1 + 0x28) + 0x24))(piVar6);
            if (cVar3 == '\0') {
              iVar7 = *(int *)(param_1 + 0x30);
              pvVar5 = operator_new(0xe);
              local_4._0_1_ = 3;
              if (pvVar5 == (void *)0x0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_0049a850(piVar6,iVar7,0);
              }
              iVar1 = *(int *)(param_1 + 0x34);
              local_4._0_1_ = 0;
              *(undefined4 *)(param_1 + 0x30) = uVar8;
              *(int *)(param_1 + 0x34) = iVar1 + 1;
              if (iVar1 == 0) {
                *(undefined4 *)(param_1 + 0x2c) = uVar8;
              }
              else {
                *(undefined4 *)(iVar7 + 8) = uVar8;
              }
            }
            if (DAT_00dc4b5e != '\0') {
              iVar7 = 0;
              puVar9 = *(undefined4 **)(param_1 + 0x2c);
              if (puVar9 != (undefined4 *)0x0) {
                do {
                  piVar6 = puVar9 + 2;
                  if (*(int *)*puVar9 == iVar4) {
                    iVar7 = iVar7 + 1;
                  }
                  puVar9 = (undefined4 *)*piVar6;
                } while ((undefined4 *)*piVar6 != (undefined4 *)0x0);
                if (1 < iVar7) {
                  FUN_00429a00(s_ERROR___Country_TAG___s__is_used_0086a14c,param_2 + 2,iVar7,
                               *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
              }
            }
          }
        }
        if (iVar4 == 2) {
          local_4 = 0xffffffff;
          local_20 = &PTR_LAB_007e378c;
          FUN_004174b0();
          ExceptionList = local_c;
          return 0;
        }
        piVar6 = (int *)FUN_00534391();
      } while (*piVar6 != 4);
      FUN_005343dc();
    }
    else {
      if (iVar4 != 0x14a) goto LAB_006b860a;
      (**(code **)(*(int *)(param_1 + 4) + 0x10))();
      FUN_005358c0(param_1 + 4);
    }
  } while( true );
}


