// FUN_00561cd0 @ 561cd0 size=2779

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00561cd0(int *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  char *pcVar13;
  int *local_13c;
  int *local_138;
  int local_134;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c675e;
  local_c = ExceptionList;
  local_13c = (int *)0x0;
  local_138 = (int *)0x0;
  local_134 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_00561d19:
  while (iVar4 = FUN_00535490(), iVar4 != 1) {
    if (iVar4 == 2) {
      while (local_13c != (int *)0x0) {
        piVar8 = (int *)local_13c[2];
        FUN_00796cd8(local_13c);
        local_13c = piVar8;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    piVar8 = (int *)FUN_00534391();
    if (*piVar8 == 4) {
      FUN_005343dc();
      if (*(float *)((int)param_1 + 0x21a) < *(float *)((int)param_1 + 0x20a)) {
        *(undefined4 *)((int)param_1 + 0x21a) = *(undefined4 *)((int)param_1 + 0x20a);
      }
      if (*(float *)((int)param_1 + 0x216) < *(float *)((int)param_1 + 0x206)) {
        *(undefined4 *)((int)param_1 + 0x216) = *(undefined4 *)((int)param_1 + 0x206);
      }
      if (*(float *)((int)param_1 + 0x20e) < *(float *)((int)param_1 + 0x1fe)) {
        *(undefined4 *)((int)param_1 + 0x20e) = *(undefined4 *)((int)param_1 + 0x1fe);
      }
      if (*(float *)((int)param_1 + 0x212) < *(float *)((int)param_1 + 0x202)) {
        *(undefined4 *)((int)param_1 + 0x212) = *(undefined4 *)((int)param_1 + 0x202);
      }
      while (local_13c != (int *)0x0) {
        piVar8 = (int *)local_13c[2];
        FUN_00796cd8(local_13c);
        local_13c = piVar8;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar8 = local_13c;
  piVar5 = local_138;
  if (DAT_00dc4b5e != '\0') {
    iVar4 = param_2[1];
    for (; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
      cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar8,iVar4);
      if (cVar3 != '\0') {
        if (piVar8 != (int *)0x0) {
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
      piVar5[1] = (int)local_138;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar4 = local_134 + 1;
    bVar10 = local_134 != 0;
    piVar8 = piVar5;
    local_134 = iVar4;
    if (bVar10) {
      local_138[2] = (int)piVar5;
      piVar8 = local_13c;
    }
  }
  local_138 = piVar5;
  local_13c = piVar8;
  iVar4 = FUN_004d15e0(param_2 + 1);
  if (iVar4 != 0) {
    if (DAT_00dc4b5e == '\0') goto LAB_00561ede;
    if ((param_1[0x95] == 8) || (param_1[0x95] == 9)) {
      uVar6 = (**(code **)(*param_1 + 0xc))
                        (*(undefined4 *)((int)param_1 + 0x12),*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
      pcVar13 = s_ERROR___Invalid___s__setting__no_00853758;
LAB_00561ecb:
      FUN_00429a00(pcVar13,param_2 + 2,uVar6);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    else {
      if ((char)param_1[0x60] != '\0') {
        uVar6 = (**(code **)(*param_1 + 0xc))
                          (*(undefined4 *)((int)param_1 + 0x12),*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
        pcVar13 = s_ERROR___Invalid___s__setting__ig_00853700;
        goto LAB_00561ecb;
      }
      if (iVar4 == 7) {
        if (*(int *)((int)param_1 + 0x186) < 1) {
          uVar6 = (**(code **)(*param_1 + 0xc))
                            (*(undefined4 *)((int)param_1 + 0x12),*param_2 + 0x216,
                             *(int *)(*param_2 + 0x212) + 1);
          pcVar13 = s_ERROR___Invalid___s__setting__no_008536a8;
          goto LAB_00561ecb;
        }
      }
      else if ((iVar4 == 2) && (*(int *)((int)param_1 + 0x182) < 1)) {
        uVar6 = (**(code **)(*param_1 + 0xc))
                          (*(undefined4 *)((int)param_1 + 0x12),*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
        pcVar13 = s_ERROR___Invalid___s__setting__no_00853658;
        goto LAB_00561ecb;
      }
    }
LAB_00561ede:
    if (param_1[0xa2] == 0) {
      FUN_004d0520();
      local_4._0_1_ = 1;
      FUN_004d0da0(param_2);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00425b80();
    }
    else {
      piVar8 = *(int **)((int)param_1 + iVar4 * 4 + 0x1c6);
      if (piVar8[6] == 0) {
        if (iVar4 == 6) {
          pvVar7 = operator_new(0x9c86);
          local_4 = CONCAT31(local_4._1_3_,2);
          if (pvVar7 == (void *)0x0) goto LAB_00561fa1;
          piVar8 = (int *)FUN_004d1040();
        }
        else if (iVar4 == 7) {
          pvVar7 = operator_new(0x2e);
          local_4 = CONCAT31(local_4._1_3_,3);
          if (pvVar7 == (void *)0x0) {
LAB_00561fa1:
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)FUN_004d1390();
          }
        }
        else {
          pvVar7 = operator_new(0x1c);
          local_4 = CONCAT31(local_4._1_3_,4);
          if (pvVar7 == (void *)0x0) goto LAB_00561fa1;
          piVar8 = (int *)FUN_004d0520();
        }
        local_4 = local_4 & 0xffffff00;
        FUN_004d1010(iVar4);
        FUN_004ece60(iVar4,piVar8);
        piVar8[3] = *(int *)((int)param_1 + 0x12);
      }
      if (param_2[0x103] == 0x524) {
        fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
        fVar2 = (float)piVar8[5] + (float)fVar11;
        fVar12 = (float10)FUN_004d0d40(piVar8[6]);
        if ((float10)fVar2 <= fVar12) {
          fVar12 = (float10)fVar2;
        }
        else {
          fVar12 = (float10)FUN_004d0d40(piVar8[6]);
        }
        piVar8[5] = (int)(float)fVar12;
        if (fVar12 < (float10)_DAT_007e3380) {
          piVar8[5] = 0;
        }
        fVar2 = (float)piVar8[4] + (float)fVar11;
        fVar11 = (float10)FUN_004d0d40(piVar8[6]);
        if ((float10)fVar2 <= fVar11) {
          fVar11 = (float10)fVar2;
        }
        else {
          fVar11 = (float10)FUN_004d0d40(piVar8[6]);
        }
        piVar8[4] = (int)(float)fVar11;
        if (fVar11 < (float10)_DAT_007e3380) {
          piVar8[4] = 0;
        }
        if ((float)piVar8[5] == _DAT_007e3380) {
          piVar8[5] = 0x3a83126f;
        }
      }
      else {
        fVar11 = (float10)FUN_004d0d40(piVar8[6]);
        if ((float10)_DAT_007e3380 <= fVar11) {
          fVar11 = (float10)_DAT_007e3380;
        }
        else {
          fVar11 = (float10)FUN_004d0d40(piVar8[6]);
        }
        piVar8[5] = (int)(float)fVar11;
        if (fVar11 < (float10)_DAT_007e3380) {
          piVar8[5] = 0;
        }
        fVar11 = (float10)FUN_004d0d40(piVar8[6]);
        if ((float10)_DAT_007e3380 <= fVar11) {
          fVar11 = (float10)_DAT_007e3380;
        }
        else {
          fVar11 = (float10)FUN_004d0d40(piVar8[6]);
        }
        piVar8[4] = (int)(float)fVar11;
        if (fVar11 < (float10)_DAT_007e3380) {
          piVar8[4] = 0;
        }
        (**(code **)(*piVar8 + 8))(param_2);
      }
    }
    goto LAB_00561d19;
  }
  iVar4 = param_2[1];
  if (iVar4 < 0xf6) {
    if (iVar4 == 0xf5) {
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x21e) = (float)fVar11;
      goto LAB_00561d19;
    }
    switch(iVar4) {
    case 0xc:
      FUN_0054f130(param_2);
      goto LAB_00561d19;
    case 0x11:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      param_1[0xa0] = (int)(float)fVar11;
      goto LAB_00561d19;
    case 0x12:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      param_1[0x9d] = (int)(float)fVar11;
      goto LAB_00561d19;
    case 0x14:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      param_1[0x9e] = (int)(float)fVar11;
      goto LAB_00561d19;
    case 0x15:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      param_1[0x9f] = (int)(float)fVar11;
      goto LAB_00561d19;
    case 0x16:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      param_1[0x9c] = (int)(float)fVar11;
      goto LAB_00561d19;
    case 0x1e:
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)((int)param_1 + 0x1f6) = uVar6;
      goto LAB_00561d19;
    case 0x1f:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x20e) = (float)fVar11;
      goto LAB_00561d19;
    case 0x20:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x21a) = (float)fVar11;
      goto LAB_00561d19;
    case 0x21:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x216) = (float)fVar11;
      goto LAB_00561d19;
    case 0x22:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x212) = (float)fVar11;
      goto LAB_00561d19;
    case 0xe9:
      FUN_00796cd8(param_1[0xe9]);
      piVar8 = param_2 + 0x104;
      iVar4 = FUN_007a8d6d(piVar8);
      param_1[0xe9] = iVar4;
      FUN_00429d50(piVar8,local_10c);
      pcVar13 = s_UNKNOWN_STRING_WANTED_0083c758;
      uVar6 = FUN_0042b6c9(local_10c);
      iVar4 = FUN_007a8730(uVar6,pcVar13);
      if (iVar4 == 0) {
        uVar6 = FUN_007a8d6d(piVar8);
        FUN_00425ba0(uVar6);
      }
      else {
        uVar6 = FUN_0042b6c9(local_10c);
        FUN_00425ba0(uVar6);
      }
      goto LAB_00561d19;
    }
  }
  else if (iVar4 < 0x22a) {
    if (iVar4 == 0x229) {
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)((int)param_1 + 0x19e) = uVar6;
      goto LAB_00561d19;
    }
    switch(iVar4) {
    case 0x10b:
      FUN_0054f130(param_2);
      goto LAB_00561d19;
    case 0x189:
      if (param_2[0x103] == 0x527) {
        piVar8 = param_2 + 0x104;
        iVar4 = FUN_007a8730(piVar8,s_clear_008479f0);
        if (iVar4 != 0) {
          iVar4 = FUN_007a8730(piVar8,s_forest_008479e8);
          if (iVar4 == 0) {
            param_1[0x95] = 1;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,s_mountain_008479dc);
          if (iVar4 == 0) {
            param_1[0x95] = 2;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,s_hills_00848a8c);
          if (iVar4 == 0) {
            param_1[0x95] = 5;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,&DAT_008479cc);
          if (iVar4 == 0) {
            param_1[0x95] = 9;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,s_marsh_008479c4);
          if (iVar4 == 0) {
            param_1[0x95] = 4;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,s_desert_008479bc);
          if (iVar4 == 0) {
            param_1[0x95] = 3;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,&DAT_008479b8);
          if (iVar4 == 0) {
            param_1[0x95] = 8;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,s_ocean_008479b0);
          if (iVar4 == 0) {
            param_1[0x95] = 8;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,s_river_008479a8);
          if (iVar4 == 0) {
            param_1[0x95] = 9;
            goto LAB_00561d19;
          }
          iVar4 = FUN_007a8730(piVar8,s_jungle_00848a7c);
          if (iVar4 == 0) {
            param_1[0x95] = 6;
            goto LAB_00561d19;
          }
        }
        param_1[0x95] = 0;
      }
      goto LAB_00561d19;
    case 0x18a:
      iVar4 = FUN_0075edd0(param_2 + 0x103);
      if (iVar4 == 7) {
        FUN_00429a00(s_ERROR___Invalid_weather_type___s_00853624,param_2 + 0x104,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      param_1[0xeb] = iVar4;
      goto LAB_00561d19;
    case 0x1b3:
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)((int)param_1 + 0x1f2) = uVar6;
      goto LAB_00561d19;
    case 0x1f2:
      pvVar7 = operator_new(0xd4);
      local_4._0_1_ = 5;
      if (pvVar7 == (void *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_004d1c50();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      (**(code **)(*piVar8 + 8))(param_2);
      iVar4 = param_1[0xe];
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = piVar8;
        puVar9[1] = iVar4;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar1 = param_1[0xf];
      param_1[0xe] = (int)puVar9;
      param_1[0xf] = iVar1 + 1;
      if (iVar1 == 0) {
        param_1[0xd] = (int)puVar9;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar9;
      }
      goto LAB_00561d19;
    }
  }
  else {
    switch(iVar4) {
    case 0x232:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x202) = (float)fVar11;
      goto LAB_00561d19;
    case 0x233:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x206) = (float)fVar11;
      goto LAB_00561d19;
    case 0x234:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x20a) = (float)fVar11;
      goto LAB_00561d19;
    case 0x235:
      fVar11 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)((int)param_1 + 0x1fe) = (float)fVar11;
      goto LAB_00561d19;
    case 0x2b1:
      FUN_0054f130(param_2);
      goto LAB_00561d19;
    }
  }
  FUN_005349b0(s_Province___Unexpected_field_00853608);
  while (local_13c != (int *)0x0) {
    piVar8 = (int *)local_13c[2];
    FUN_00796cd8(local_13c);
    local_13c = piVar8;
  }
  ExceptionList = local_c;
  return 0xfffffffe;
}


