// FUN_0070c2b0 @ 70c2b0 size=2575

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0070c2b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  float10 fVar15;
  undefined4 *local_12c;
  undefined4 *local_128;
  int local_124;
  char local_11c [16];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007db9f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0;
  local_12c = (undefined4 *)0x0;
  local_128 = (undefined4 *)0x0;
  local_124 = 0;
  local_4 = 0;
LAB_0070c33c:
  do {
    iVar3 = FUN_00535490();
    if (iVar3 == 1) {
      puVar1 = local_12c;
      puVar5 = local_128;
      if (DAT_00dc4b5e != '\0') {
        iVar3 = param_2[1];
        for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
          cVar2 = (*(code *)PTR_FUN_007e3798)(*puVar1,iVar3);
          if (cVar2 != '\0') {
            if (puVar1 != (undefined4 *)0x0) {
              FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216
                           ,*(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            break;
          }
        }
        iVar3 = param_2[1];
        pvVar4 = operator_new(0xe);
        local_4._0_1_ = 1;
        if (pvVar4 == (void *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)FUN_0049a7a0(iVar3,local_128,0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar3 = local_124 + 1;
        bVar14 = local_124 != 0;
        puVar1 = puVar5;
        local_124 = iVar3;
        if (bVar14) {
          local_128[2] = puVar5;
          puVar1 = local_12c;
        }
      }
      local_128 = puVar5;
      local_12c = puVar1;
      iVar3 = param_2[1];
      if (iVar3 < 0x235) {
        if (iVar3 == 0x234) {
          fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x156) = (float)fVar15;
          goto LAB_0070c33c;
        }
        if (iVar3 < 0x142) {
          if (iVar3 == 0x141) {
            uVar6 = FUN_0070a5c0(param_2,param_2 + 0x103);
            *(undefined4 *)(param_1 + 4) = uVar6;
            *(int *)(param_1 + 0x128) = param_2[0x103];
            goto LAB_0070c33c;
          }
          if (iVar3 == 0xc0) {
            fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x16e) = (float)fVar15;
            goto LAB_0070c33c;
          }
          if (iVar3 == 0xe9) {
            FUN_007a630a(param_1 + 0x172,&DAT_0083a374,param_2 + 0x104);
            goto LAB_0070c33c;
          }
          if (iVar3 == 0xf6) {
            fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x166) = (float)fVar15;
            goto LAB_0070c33c;
          }
        }
        else {
          if (iVar3 == 0x14e) {
            fVar15 = (float10)FUN_0070b810(param_2,param_2 + 0x103,0);
            *(float *)(param_1 + 8) = (float)fVar15;
            *(float *)(param_1 + 0x1c) = (float)fVar15;
            goto LAB_0070c33c;
          }
          if (iVar3 == 0x232) {
            fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x15a) = (float)fVar15;
            goto LAB_0070c33c;
          }
          if (iVar3 == 0x233) {
            fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
            *(float *)(param_1 + 0x152) = (float)fVar15;
            goto LAB_0070c33c;
          }
        }
      }
      else if (iVar3 < 899) {
        if (iVar3 == 0x382) {
          fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x162) = (float)fVar15;
          goto LAB_0070c33c;
        }
        if (iVar3 == 0x235) {
          fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x15e) = (float)fVar15;
          goto LAB_0070c33c;
        }
        if (iVar3 == 0x345) {
          FUN_0070b810(param_2,param_2 + 0x103,0);
          uVar6 = __ftol();
          *(undefined4 *)(param_1 + 0x10) = uVar6;
          *(undefined4 *)(param_1 + 0x18) = uVar6;
          *(int *)(param_1 + 0x134) = param_2[0x103];
          goto LAB_0070c33c;
        }
        if (iVar3 == 0x346) {
          FUN_0070b810(param_2,param_2 + 0x103,0);
          uVar6 = __ftol();
          *(undefined4 *)(param_1 + 0x14) = uVar6;
          *(undefined4 *)(param_1 + 0x24) = uVar6;
          *(int *)(param_1 + 0x138) = param_2[0x103];
          goto LAB_0070c33c;
        }
      }
      else {
        if (iVar3 == 0x3dc) {
          (**(code **)(*(int *)(param_1 + 0x13e) + 0x40))(param_2);
          *(undefined1 *)(param_1 + 0x150) = 1;
          goto LAB_0070c33c;
        }
        if (iVar3 == 0x3e4) {
          FUN_0070b810(param_2,param_2 + 0x103,1);
          uVar6 = __ftol();
          *(undefined4 *)(param_1 + 0xc) = uVar6;
          *(undefined4 *)(param_1 + 0x20) = uVar6;
          *(int *)(param_1 + 300) = param_2[0x103];
          goto LAB_0070c33c;
        }
        if (iVar3 == 0x570) {
          fVar15 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x16a) = (float)fVar15;
          goto LAB_0070c33c;
        }
      }
      FUN_005349b0(s_unknown_lhs_in_command_008722d0);
      local_4 = 0xffffffff;
      FUN_004174b0();
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    if (iVar3 == 2) {
      local_4 = 0xffffffff;
      FUN_004174b0();
      ExceptionList = local_c;
      return 0;
    }
    piVar7 = (int *)FUN_00534391();
  } while (*piVar7 != 4);
  FUN_005343dc();
  if (*(int *)(param_1 + 4) == 0x130) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 0:
      break;
    case 1:
      iVar3 = FUN_004c7aca(param_1 + 0x28);
      *(float *)(param_1 + 8) = (float)iVar3;
      *(float *)(param_1 + 0x1c) = (float)iVar3;
      break;
    case 2:
      iVar3 = FUN_004c7b11(param_1 + 0x28);
      *(float *)(param_1 + 8) = (float)iVar3;
      *(float *)(param_1 + 0x1c) = (float)iVar3;
      break;
    case 3:
      iVar3 = FUN_004c7b58(param_1 + 0x28);
      *(float *)(param_1 + 8) = (float)iVar3;
      *(float *)(param_1 + 0x1c) = (float)iVar3;
      break;
    default:
      if (DAT_00dc4b5e == '\0') goto joined_r0x0070cc8e;
      FUN_00429a00(s_ERROR___Invalid_command_paramete_00872270,*(undefined4 *)(param_1 + 0x18),
                   *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    if (DAT_00dc4b5e == '\0') goto joined_r0x0070cc8e;
    if ((0 < *(int *)(param_1 + 0x18)) && (*(float *)(param_1 + 0x1c) <= _DAT_007e3380)) {
      FUN_00429a00(s_ERROR___Invalid_command_paramete_00872210,param_1 + 0x28,*param_2 + 0x216,
                   *(int *)(*param_2 + 0x212) + 1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
  }
  if (DAT_00dc4b5e == '\0') goto joined_r0x0070cc8e;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0x77) {
      pcVar12 = s_build_cost_008721f8;
    }
    else if (iVar3 == 0x78) {
      pcVar12 = s_build_time_00872204;
    }
    else {
      if (iVar3 != 0x79) goto LAB_0070c86e;
      pcVar12 = s_manpower_0086c22c;
    }
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar12;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar12 + 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8;
    pcVar12 = pcVar13 + -uVar8;
    pcVar13 = local_11c;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; puVar1 = local_12c, uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
      cVar2 = (*(code *)PTR_FUN_007e3798)(*puVar1,0x345);
      if (cVar2 != '\0') {
        if (puVar1 != (undefined4 *)0x0) {
          iVar10 = *param_2;
          iVar3 = *(int *)(iVar10 + 0x212);
          pcVar12 = s_ERROR___Invalid_command_paramete_008720a8;
          goto LAB_0070c85b;
        }
        break;
      }
    }
    iVar10 = *param_2;
    iVar3 = *(int *)(iVar10 + 0x212);
    pcVar12 = s_ERROR___Missing_command_paramete_00872198;
LAB_0070c85b:
    FUN_00429a00(pcVar12,local_11c,iVar10 + 0x216,iVar3 + 1);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
LAB_0070c86e:
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 < 0x138) {
    if (iVar3 == 0x137) {
switchD_0070cbbf_caseD_139:
      bVar14 = false;
      piVar7 = *(int **)((int)&DAT_008e977c + *(int *)(param_1 + 0xc) * 0x12);
      if (piVar7 == (int *)0x0) goto joined_r0x0070cc8e;
      do {
        if ((*(int *)(*piVar7 + 0x254) == 8) || (*(int *)(*piVar7 + 0x254) == 9)) {
          bVar14 = true;
        }
        piVar7 = (int *)piVar7[2];
      } while (piVar7 != (int *)0x0);
      if (!bVar14) goto joined_r0x0070cc8e;
      iVar11 = *param_2 + 0x216;
      iVar10 = *(int *)(*param_2 + 0x212) + 1;
      iVar3 = FUN_004c7c14(*(int *)(param_1 + 0xc),iVar11,iVar10);
      pcVar12 = s_ERROR___Invalid_region___s___con_00871ddc;
      goto LAB_0070cc72;
    }
    if (iVar3 < 0xd9) {
      if (iVar3 == 0xd8) {
        iVar3 = param_1 + 0x28;
        if (*(char *)(param_1 + 0x28) != '\0') {
          if (DAT_00dc2ba0 == '\0') {
            FUN_007a630a(local_10c,s_ai__s_008517d8,iVar3);
          }
          else {
            FUN_007a630a(local_10c,s__sai__s_008517e0,&DAT_00dc2ba0);
            iVar10 = FUN_007a6615(local_10c,&DAT_0082eeb4);
            if (iVar10 != 0) {
              FUN_007a6429(iVar10);
              goto joined_r0x0070cc8e;
            }
            if (DAT_00dc195b != '\0') goto LAB_0070caaa;
            FUN_007a630a(local_10c,s_ai__s_008517d8,iVar3);
          }
          iVar10 = FUN_007a6615(local_10c,&DAT_0082eeb4);
          if (iVar10 != 0) {
            FUN_007a6429(iVar10);
            goto joined_r0x0070cc8e;
          }
        }
LAB_0070caaa:
        iVar10 = *(int *)(*param_2 + 0x212) + 1;
        iVar11 = *param_2 + 0x216;
        pcVar12 = s_ERROR___Invalid_or_missing_AI_sw_00871f74;
        goto LAB_0070cc72;
      }
      if (iVar3 != 0x1b) {
        if (iVar3 == 0x1c) {
          bVar14 = false;
          iVar3 = __ftol();
          piVar7 = *(int **)((int)&DAT_008ea36c + iVar3 * 0x12);
          if (piVar7 == (int *)0x0) goto joined_r0x0070cc8e;
          do {
            if ((*(int *)(*piVar7 + 0x254) == 8) || (*(int *)(*piVar7 + 0x254) == 9)) {
              bVar14 = true;
            }
            piVar7 = (int *)piVar7[2];
          } while (piVar7 != (int *)0x0);
          if (!bVar14) goto joined_r0x0070cc8e;
          iVar11 = *param_2 + 0x216;
          iVar10 = *(int *)(*param_2 + 0x212) + 1;
          iVar3 = FUN_004c7bfa(iVar3,iVar11,iVar10);
          pcVar12 = s_ERROR___Invalid_area___s___conta_00872034;
        }
        else {
          if (iVar3 != 0x1d) goto joined_r0x0070cc8e;
          bVar14 = false;
          iVar3 = __ftol();
          piVar7 = *(int **)((int)&DAT_008e977c + iVar3 * 0x12);
          if (piVar7 == (int *)0x0) goto joined_r0x0070cc8e;
          do {
            if ((*(int *)(*piVar7 + 0x254) == 8) || (*(int *)(*piVar7 + 0x254) == 9)) {
              bVar14 = true;
            }
            piVar7 = (int *)piVar7[2];
          } while (piVar7 != (int *)0x0);
          if (!bVar14) goto joined_r0x0070cc8e;
          iVar11 = *param_2 + 0x216;
          iVar10 = *(int *)(*param_2 + 0x212) + 1;
          iVar3 = FUN_004c7c14(iVar3,iVar11,iVar10);
          pcVar12 = s_ERROR___Invalid_region___s___con_00872120;
        }
        goto LAB_0070cc72;
      }
      iVar10 = __ftol();
      piVar7 = (int *)(DAT_00ab27b4 + iVar10 * 0x4b2);
      iVar3 = piVar7[0x95];
      if ((iVar3 != 8) && (iVar3 != 9)) goto joined_r0x0070cc8e;
      uVar6 = (**(code **)(*piVar7 + 0xc))(iVar10,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
      FUN_00429a00(s_ERROR___Invalid_province___s___d_00871fcc,uVar6);
    }
    else if (iVar3 == 0xdb) {
      iVar10 = __ftol();
      iVar3 = *(int *)(param_1 + 0x10);
      iVar11 = (**(code **)(*(int *)((int)&DAT_00d7676a + iVar10 * 0x12) + 4))();
      if (iVar3 < iVar11) goto joined_r0x0070cc8e;
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      iVar3 = (**(code **)(*(int *)((int)&DAT_00d7676a + iVar10 * 0x12) + 4))
                        (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
      uVar6 = FUN_004ff300(iVar10,uVar6,iVar3 + -1);
      FUN_00429a00(s_ERROR___Invalid__s_model__when___00871eb0,uVar6);
    }
    else {
      if (iVar3 != 0x131) {
        if (iVar3 != 0x136) goto joined_r0x0070cc8e;
        goto switchD_0070cbbf_caseD_138;
      }
      iVar10 = __ftol();
      iVar3 = *(int *)(param_1 + 0x10);
      iVar11 = (**(code **)(*(int *)(&DAT_00d77142 + iVar10 * 0x12) + 4))();
      if (iVar3 < iVar11) goto joined_r0x0070cc8e;
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      iVar3 = (**(code **)(*(int *)(&DAT_00d77142 + iVar10 * 0x12) + 4))
                        (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
      uVar6 = FUN_004ff380(iVar10,uVar6,iVar3 + -1);
      FUN_00429a00(s_ERROR___Invalid__s_model__when___00871f14,uVar6);
    }
  }
  else {
    switch(iVar3) {
    case 0x138:
    case 0x13a:
    case 0x13c:
switchD_0070cbbf_caseD_138:
      bVar14 = false;
      piVar7 = *(int **)((int)&DAT_008ea36c + *(int *)(param_1 + 0xc) * 0x12);
      if (piVar7 == (int *)0x0) goto joined_r0x0070cc8e;
      do {
        if ((*(int *)(*piVar7 + 0x254) == 8) || (*(int *)(*piVar7 + 0x254) == 9)) {
          bVar14 = true;
        }
        piVar7 = (int *)piVar7[2];
      } while (piVar7 != (int *)0x0);
      if (!bVar14) goto joined_r0x0070cc8e;
      iVar11 = *param_2 + 0x216;
      iVar10 = *(int *)(*param_2 + 0x212) + 1;
      iVar3 = FUN_004c7bfa(*(int *)(param_1 + 0xc),iVar11,iVar10);
      pcVar12 = s_ERROR___Invalid_area___s___conta_00871e48;
      break;
    case 0x139:
    case 0x13b:
    case 0x13d:
      goto switchD_0070cbbf_caseD_139;
    default:
      goto joined_r0x0070cc8e;
    }
LAB_0070cc72:
    FUN_00429a00(pcVar12,iVar3,iVar11,iVar10);
  }
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
joined_r0x0070cc8e:
  while (local_12c != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_12c[2];
    FUN_00796cd8(local_12c);
    local_12c = puVar1;
  }
  ExceptionList = local_c;
  return 0;
}


