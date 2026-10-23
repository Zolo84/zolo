// FUN_006b3b90 @ 6b3b90 size=3745

undefined4 __thiscall FUN_006b3b90(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  float10 fVar12;
  char *pcVar13;
  int *local_68;
  int *local_64;
  int local_60;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d6969;
  local_c = ExceptionList;
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_60 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_006b3c6f:
  while (iVar4 = FUN_00535490(), iVar4 != 1) {
    piVar9 = (int *)FUN_00534391();
    if (*piVar9 == 4) {
      if (DAT_00dc4b64 == '\0') {
        FUN_00429a00(s_ERROR___An_extra_____in_AI_file_f_00869760,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      FUN_005343dc();
joined_r0x006b49b1:
      while (local_68 != (int *)0x0) {
        piVar9 = (int *)local_68[2];
        FUN_00796cd8(local_68);
        local_68 = piVar9;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar9 = (int *)FUN_00534391();
    if (*piVar9 == 0x531) goto joined_r0x006b49b1;
    if (iVar4 == 2) {
      FUN_00429a00(s_ERROR___AI_file_parsing_error____00869730,*param_2 + 0x216,
                   *(int *)(*param_2 + 0x212) + 1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      while (local_68 != (int *)0x0) {
        piVar9 = (int *)local_68[2];
        FUN_00796cd8(local_68);
        local_68 = piVar9;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
  }
  piVar9 = local_68;
  piVar5 = local_64;
  if (DAT_00dc4b5e != '\0') {
    iVar4 = param_2[1];
    for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
      cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar9,iVar4);
      if (cVar3 != '\0') {
        if (piVar9 != (int *)0x0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    iVar4 = param_2[1];
    piVar5 = operator_new(0xe);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = iVar4;
      piVar5[1] = (int)local_64;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar4 = local_60 + 1;
    bVar11 = local_60 != 0;
    piVar9 = piVar5;
    local_60 = iVar4;
    if (bVar11) {
      local_64[2] = (int)piVar5;
      piVar9 = local_68;
    }
  }
  local_64 = piVar5;
  local_68 = piVar9;
  iVar4 = param_2[1];
  if (iVar4 < 0x24f) {
    if (iVar4 == 0x24e) {
      puVar10 = *(undefined4 **)(param_1 + 0xb2c);
      while (puVar10 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)puVar10[2];
        FUN_00796cd8(*puVar10);
        FUN_00796cd8(puVar10);
        puVar10 = puVar7;
      }
      *(undefined4 *)(param_1 + 0xb2c) = 0;
      *(undefined4 *)(param_1 + 0xb30) = 0;
      *(undefined4 *)(param_1 + 0xb34) = 0;
      do {
        cVar3 = FUN_006b3940(param_2,param_1 + 0xb28);
      } while (cVar3 != '\0');
      goto LAB_006b3c6f;
    }
    if (iVar4 < 0x116) {
      if (iVar4 == 0x115) {
        FUN_006c57c0(param_2);
        goto LAB_006b3c6f;
      }
      switch(iVar4) {
      case 0x23:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x7c) = (float)fVar12;
        goto LAB_006b3c6f;
      case 0x66:
        puVar10 = *(undefined4 **)(param_1 + 0xb62);
        while (puVar10 != (undefined4 *)0x0) {
          puVar7 = (undefined4 *)puVar10[2];
          FUN_00796cd8(*puVar10);
          FUN_00796cd8(puVar10);
          puVar10 = puVar7;
        }
        *(undefined4 *)(param_1 + 0xb62) = 0;
        *(undefined4 *)(param_1 + 0xb66) = 0;
        *(undefined4 *)(param_1 + 0xb6a) = 0;
        do {
          cVar3 = FUN_006b3940(param_2,param_1 + 0xb5e);
        } while (cVar3 != '\0');
        goto LAB_006b3c6f;
      case 0x67:
        puVar10 = *(undefined4 **)(param_1 + 0xb50);
        while (puVar10 != (undefined4 *)0x0) {
          puVar7 = (undefined4 *)puVar10[2];
          FUN_00796cd8(*puVar10);
          FUN_00796cd8(puVar10);
          puVar10 = puVar7;
        }
        *(undefined4 *)(param_1 + 0xb50) = 0;
        *(undefined4 *)(param_1 + 0xb54) = 0;
        *(undefined4 *)(param_1 + 0xb58) = 0;
        do {
          cVar3 = FUN_006b3940(param_2,param_1 + 0xb4c);
        } while (cVar3 != '\0');
        goto LAB_006b3c6f;
      case 0x68:
        (**(code **)(*(int *)(param_1 + 0xb70) + 0x10))();
        FUN_005358c0(param_1 + 0xb70);
        goto LAB_006b3c6f;
      case 0x69:
        uVar6 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xb82) = uVar6;
        goto LAB_006b3c6f;
      case 0x6a:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xdc) = (float)fVar12;
        goto LAB_006b3c6f;
      case 0x6b:
        FUN_006b8f10(param_2);
        goto LAB_006b3c6f;
      case 0x6d:
        puVar10 = *(undefined4 **)(param_1 + 0xb1a);
        while (puVar10 != (undefined4 *)0x0) {
          puVar7 = (undefined4 *)puVar10[2];
          FUN_00796cd8(*puVar10);
          FUN_00796cd8(puVar10);
          puVar10 = puVar7;
        }
        *(undefined4 *)(param_1 + 0xb1a) = 0;
        *(undefined4 *)(param_1 + 0xb1e) = 0;
        *(undefined4 *)(param_1 + 0xb22) = 0;
LAB_006b3eb2:
        do {
          iVar4 = FUN_00535490();
          if (iVar4 == 1) {
            piVar9 = param_2 + 2;
            piVar5 = (int *)FUN_007a7b3c(piVar9);
            if (((int)piVar5 < 1) || (DAT_00877690 <= (int)piVar5)) {
              if (DAT_00dc4b5e == '\0') goto LAB_006b3eb2;
              iVar4 = *param_2;
              iVar2 = *(int *)(iVar4 + 0x212);
              pcVar13 = s_ERROR___Invalid_Province_ID___s__0086998c;
            }
            else {
              pvVar8 = operator_new(8);
              local_4._0_1_ = 2;
              if (pvVar8 == (void *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_0076c790();
              }
              local_4 = (uint)local_4._1_3_ << 8;
              *puVar10 = piVar5;
              uVar6 = FUN_007a7b3c(param_2 + 0x104);
              puVar10[1] = uVar6;
              cVar3 = (**(code **)(*(int *)(param_1 + 0xb16) + 0x24))(puVar10);
              if (cVar3 == '\0') {
                if (DAT_00dc4b5e == '\0') {
                  iVar4 = *(int *)(param_1 + 0xb1e);
                  puVar7 = operator_new(0xe);
                  if (puVar7 == (undefined4 *)0x0) {
                    puVar7 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar7 = puVar10;
                    puVar7[1] = iVar4;
                    puVar7[2] = 0;
                    *(undefined1 *)(puVar7 + 3) = 0;
                  }
                  iVar2 = *(int *)(param_1 + 0xb22);
                  *(undefined4 **)(param_1 + 0xb1e) = puVar7;
                  *(int *)(param_1 + 0xb22) = iVar2 + 1;
                  if (iVar2 == 0) {
                    *(undefined4 **)(param_1 + 0xb1a) = puVar7;
                  }
                  else {
                    *(undefined4 **)(iVar4 + 8) = puVar7;
                  }
                }
                else {
                  bVar11 = true;
                  puVar7 = *(undefined4 **)(param_1 + 0xb1a);
                  do {
                    if (puVar7 == (undefined4 *)0x0) goto LAB_006b3f8e;
                    puVar1 = (undefined4 *)*puVar7;
                    puVar7 = (undefined4 *)puVar7[2];
                  } while ((int *)*puVar1 != piVar5);
                  FUN_00429a00(s_ERROR___Province_ID___d__used_mo_00869a9c,piVar5,*param_2 + 0x216,
                               *(int *)(*param_2 + 0x212) + 1);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  bVar11 = false;
LAB_006b3f8e:
                  if ((int)puVar10[1] < 1) {
                    FUN_00429a00(s_ERROR___Invalid_value___d___must_00869a34,puVar10[1],piVar5,
                                 *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                  else if (bVar11) {
                    iVar4 = *(int *)(param_1 + 0xb1e);
                    puVar7 = operator_new(0xe);
                    if (puVar7 == (undefined4 *)0x0) {
                      puVar7 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar7 = puVar10;
                      puVar7[1] = iVar4;
                      puVar7[2] = 0;
                      *(undefined1 *)(puVar7 + 3) = 0;
                    }
                    iVar2 = *(int *)(param_1 + 0xb22);
                    *(undefined4 **)(param_1 + 0xb1e) = puVar7;
                    *(int *)(param_1 + 0xb22) = iVar2 + 1;
                    if (iVar2 == 0) {
                      *(undefined4 **)(param_1 + 0xb1a) = puVar7;
                    }
                    else {
                      *(undefined4 **)(iVar4 + 8) = puVar7;
                    }
                  }
                }
              }
              if ((DAT_00dc4b5e == '\0') ||
                 ((iVar4 = *(int *)(DAT_00ab27b4 + 0x254 + (int)piVar5 * 0x4b2), iVar4 != 8 &&
                  (iVar4 != 9)))) goto LAB_006b3eb2;
              iVar4 = *param_2;
              iVar2 = *(int *)(iVar4 + 0x212);
              pcVar13 = s_ERROR___Invalid_Province_ID___d__008699d4;
              piVar9 = piVar5;
            }
            FUN_00429a00(pcVar13,piVar9,iVar4 + 0x216,iVar2 + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
            goto LAB_006b3eb2;
          }
          if (iVar4 == 2) {
            while (local_68 != (int *)0x0) {
              piVar9 = (int *)local_68[2];
              FUN_00796cd8(local_68);
              local_68 = piVar9;
            }
            ExceptionList = local_c;
            return 0;
          }
          piVar9 = (int *)FUN_00534391();
        } while (*piVar9 != 4);
        FUN_005343dc();
        goto LAB_006b3c6f;
      case 0x72:
        *(bool *)(param_1 + 0xca) = param_2[0x103] == 0x111;
        goto LAB_006b3c6f;
      case 0x81:
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00(s_ERROR___The__bomber__clause_is_o_0086991c,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        FUN_006bb780(param_2);
        goto LAB_006b3c6f;
      }
    }
    else {
      switch(iVar4) {
      case 0x137:
        uVar6 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xcc) = uVar6;
        goto LAB_006b3c6f;
      case 0x147:
        FUN_006b70f0(param_2);
        goto LAB_006b3c6f;
      case 0x14b:
        FUN_006b8060(param_2);
        goto LAB_006b3c6f;
      case 0x152:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x74) = (float)fVar12;
        goto LAB_006b3c6f;
      case 0x153:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x78) = (float)fVar12;
        goto LAB_006b3c6f;
      case 0x15b:
        FUN_006b5e30(param_2);
        goto LAB_006b3c6f;
      case 0x1e8:
        FUN_006c4e70(param_2);
        goto LAB_006b3c6f;
      case 0x1f2:
        FUN_006c3660(param_2);
        goto LAB_006b3c6f;
      case 499:
        FUN_006aef60(param_2);
        goto LAB_006b3c6f;
      case 0x207:
        (**(code **)(*(int *)(param_1 + 0x28) + 0x10))();
        FUN_005358c0(param_1 + 0x28);
        goto LAB_006b3c6f;
      }
    }
  }
  else if (iVar4 < 0x464) {
    if (iVar4 == 0x463) {
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xd4) = (float)fVar12;
      goto LAB_006b3c6f;
    }
    if (iVar4 < 0x441) {
      if (iVar4 == 0x440) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xe4) = (float)fVar12;
        goto LAB_006b3c6f;
      }
      if (iVar4 < 0x405) {
        if (iVar4 == 0x404) {
          puVar10 = *(undefined4 **)(param_1 + 0xb3e);
          while (puVar10 != (undefined4 *)0x0) {
            puVar7 = (undefined4 *)puVar10[2];
            FUN_00796cd8(*puVar10);
            FUN_00796cd8(puVar10);
            puVar10 = puVar7;
          }
          *(undefined4 *)(param_1 + 0xb3e) = 0;
          *(undefined4 *)(param_1 + 0xb42) = 0;
          *(undefined4 *)(param_1 + 0xb46) = 0;
          do {
            cVar3 = FUN_006b3940(param_2,param_1 + 0xb3a);
          } while (cVar3 != '\0');
          goto LAB_006b3c6f;
        }
        if (iVar4 == 0x2a1) {
          *(bool *)(param_1 + 0xb6) = param_2[0x103] == 0x111;
          goto LAB_006b3c6f;
        }
        if (iVar4 == 0x2bd) {
          FUN_006b58e0(param_2);
          goto LAB_006b3c6f;
        }
      }
      else {
        if (iVar4 == 0x43e) {
          fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0xe0) = (float)fVar12;
          goto LAB_006b3c6f;
        }
        if (iVar4 == 0x43f) {
          puVar10 = *(undefined4 **)(param_1 + 0xba0);
          while (puVar10 != (undefined4 *)0x0) {
            puVar7 = (undefined4 *)puVar10[2];
            FUN_00796cd8(*puVar10);
            FUN_00796cd8(puVar10);
            puVar10 = puVar7;
          }
          *(undefined4 *)(param_1 + 0xba0) = 0;
          *(undefined4 *)(param_1 + 0xba4) = 0;
          *(undefined4 *)(param_1 + 0xba8) = 0;
LAB_006b43b3:
          do {
            iVar4 = FUN_00535490();
            if (iVar4 == 1) {
              iVar4 = FUN_004af6b0(param_2 + 2);
              if (iVar4 == 0) {
                if (DAT_00dc4b5e == '\0') goto LAB_006b43b3;
                iVar4 = *param_2;
                iVar2 = *(int *)(iVar4 + 0x212);
                pcVar13 = s_ERROR___Invalid_country_TAG___s__00869868;
              }
              else {
                pvVar8 = operator_new(8);
                local_4._0_1_ = 1;
                if (pvVar8 == (void *)0x0) {
                  piVar9 = (int *)0x0;
                }
                else {
                  piVar9 = (int *)FUN_0076c780();
                }
                local_4 = (uint)local_4._1_3_ << 8;
                *piVar9 = iVar4;
                fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
                piVar9[1] = (int)(float)fVar12;
                cVar3 = (**(code **)(*(int *)(param_1 + 0xb9c) + 0x24))(piVar9);
                if (cVar3 != '\0') goto LAB_006b43b3;
                if (DAT_00dc4b5e == '\0') {
LAB_006b444b:
                  iVar4 = *(int *)(param_1 + 0xba4);
                  puVar10 = operator_new(0xe);
                  if (puVar10 == (undefined4 *)0x0) {
                    puVar10 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar10 = piVar9;
                    puVar10[1] = iVar4;
                    puVar10[2] = 0;
                    *(undefined1 *)(puVar10 + 3) = 0;
                  }
                  *(undefined4 **)(param_1 + 0xba4) = puVar10;
                  iVar2 = *(int *)(param_1 + 0xba8);
                  *(int *)(param_1 + 0xba8) = iVar2 + 1;
                  if (iVar2 == 0) {
                    *(undefined4 **)(param_1 + 0xba0) = puVar10;
                  }
                  else {
                    *(undefined4 **)(iVar4 + 8) = puVar10;
                  }
                  goto LAB_006b43b3;
                }
                puVar10 = *(undefined4 **)(param_1 + 0xba0);
                do {
                  if (puVar10 == (undefined4 *)0x0) goto LAB_006b444b;
                  piVar5 = (int *)*puVar10;
                  puVar10 = (undefined4 *)puVar10[2];
                } while (*piVar5 != iVar4);
                iVar4 = *param_2;
                iVar2 = *(int *)(iVar4 + 0x212);
                pcVar13 = s_ERROR___Country_TAG___s__is_used_008698bc;
              }
              FUN_00429a00(pcVar13,param_2 + 2,iVar4 + 0x216,iVar2 + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
              goto LAB_006b43b3;
            }
            if (iVar4 == 2) {
              local_4 = 0xffffffff;
              FUN_004174b0();
              ExceptionList = local_c;
              return 0;
            }
            piVar9 = (int *)FUN_00534391();
          } while (*piVar9 != 4);
          FUN_005343dc();
          goto LAB_006b3c6f;
        }
      }
    }
    else {
      switch(iVar4) {
      case 0x441:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xe8) = (float)fVar12;
        goto LAB_006b3c6f;
      case 0x442:
        *(bool *)(param_1 + 0xec) = param_2[0x103] == 0x111;
        goto LAB_006b3c6f;
      case 0x443:
        *(bool *)(param_1 + 0xed) = param_2[0x103] == 0x111;
        goto LAB_006b3c6f;
      case 0x462:
        uVar6 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xd0) = uVar6;
        goto LAB_006b3c6f;
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x464:
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xd8) = (float)fVar12;
      goto LAB_006b3c6f;
    case 0x46a:
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0xb86) = (float)fVar12;
      goto LAB_006b3c6f;
    case 0x46b:
      (**(code **)(*(int *)(param_1 + 0xb8) + 0x10))();
      FUN_005358c0(param_1 + 0xb8);
      goto LAB_006b3c6f;
    case 0x46c:
      puVar10 = *(undefined4 **)(param_1 + 0xb8e);
      while (puVar10 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)puVar10[2];
        FUN_00796cd8(*puVar10);
        FUN_00796cd8(puVar10);
        puVar10 = puVar7;
      }
      *(undefined4 *)(param_1 + 0xb8e) = 0;
      *(undefined4 *)(param_1 + 0xb92) = 0;
      *(undefined4 *)(param_1 + 0xb96) = 0;
LAB_006b472d:
      do {
        iVar4 = FUN_00535490();
        if (iVar4 == 1) {
          iVar4 = FUN_004af6b0(param_2 + 2);
          if (iVar4 == 0) {
            if (DAT_00dc4b5e == '\0') goto LAB_006b472d;
            iVar4 = *param_2;
            iVar2 = *(int *)(iVar4 + 0x212);
            pcVar13 = s_ERROR___Invalid_country_TAG___s__008697b4;
          }
          else {
            pvVar8 = operator_new(8);
            local_4._0_1_ = 3;
            if (pvVar8 == (void *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)FUN_0076c780();
            }
            local_4 = (uint)local_4._1_3_ << 8;
            *piVar9 = iVar4;
            fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
            piVar9[1] = (int)(float)fVar12;
            cVar3 = (**(code **)(*(int *)(param_1 + 0xb8a) + 0x24))(piVar9);
            if (cVar3 != '\0') goto LAB_006b472d;
            if (DAT_00dc4b5e == '\0') {
LAB_006b47c5:
              iVar4 = *(int *)(param_1 + 0xb92);
              puVar10 = operator_new(0xe);
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                *puVar10 = piVar9;
                puVar10[1] = iVar4;
                puVar10[2] = 0;
                *(undefined1 *)(puVar10 + 3) = 0;
              }
              *(undefined4 **)(param_1 + 0xb92) = puVar10;
              iVar2 = *(int *)(param_1 + 0xb96);
              *(int *)(param_1 + 0xb96) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(param_1 + 0xb8e) = puVar10;
              }
              else {
                *(undefined4 **)(iVar4 + 8) = puVar10;
              }
              goto LAB_006b472d;
            }
            puVar10 = *(undefined4 **)(param_1 + 0xb8e);
            do {
              if (puVar10 == (undefined4 *)0x0) goto LAB_006b47c5;
              piVar5 = (int *)*puVar10;
              puVar10 = (undefined4 *)puVar10[2];
            } while (*piVar5 != iVar4);
            iVar4 = *param_2;
            iVar2 = *(int *)(iVar4 + 0x212);
            pcVar13 = s_ERROR___Country_TAG___s__is_used_00869808;
          }
          FUN_00429a00(pcVar13,param_2 + 2,iVar4 + 0x216,iVar2 + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          goto LAB_006b472d;
        }
        if (iVar4 == 2) {
          while (local_68 != (int *)0x0) {
            piVar9 = (int *)local_68[2];
            FUN_00796cd8(local_68);
            local_68 = piVar9;
          }
          ExceptionList = local_c;
          return 0;
        }
        piVar9 = (int *)FUN_00534391();
      } while (*piVar9 != 4);
      FUN_005343dc();
      goto LAB_006b3c6f;
    case 0x487:
      FUN_006bd060(param_2);
      goto LAB_006b3c6f;
    case 0x48d:
      FUN_006c0640(param_2);
      goto LAB_006b3c6f;
    case 0x4b3:
      FUN_006c7e80(param_2);
      goto LAB_006b3c6f;
    case 0x4bc:
      FUN_006c77c0(param_2);
      goto LAB_006b3c6f;
    case 0x501:
      puVar10 = *(undefined4 **)(param_1 + 0xafc);
      while (puVar10 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)puVar10[2];
        FUN_00796cd8(*puVar10);
        FUN_00796cd8(puVar10);
        puVar10 = puVar7;
      }
      *(undefined4 *)(param_1 + 0xafc) = 0;
      *(undefined4 *)(param_1 + 0xb00) = 0;
      *(undefined4 *)(param_1 + 0xb04) = 0;
      FUN_006c88f0(param_2);
      goto LAB_006b3c6f;
    case 0x54b:
      (**(code **)(*(int *)(param_1 + 0x3a) + 0x10))();
      FUN_005358c0(param_1 + 0x3a);
      goto LAB_006b3c6f;
    }
  }
  FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
  while (local_68 != (int *)0x0) {
    piVar9 = (int *)local_68[2];
    FUN_00796cd8(local_68);
    local_68 = piVar9;
  }
  ExceptionList = local_c;
  return 0xfffffffe;
}


