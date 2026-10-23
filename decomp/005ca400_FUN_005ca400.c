// FUN_005ca400 @ 5ca400 size=4218

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __thiscall FUN_005ca400(int *param_1,float param_2,float param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined ***pppuVar14;
  char *pcVar15;
  char *pcVar16;
  float10 fVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined4 uVar23;
  undefined8 uVar22;
  float fVar24;
  int *piStack_154;
  float fStack_14c;
  undefined **appuStack_12c [2];
  int *piStack_124;
  int *piStack_120;
  int iStack_11c;
  undefined1 uStack_118;
  void *pvStack_44;
  void *pvStack_40;
  void *pvStack_3c;
  void *pvStack_34;
  void *pvStack_2c;
  void *pvStack_24;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007cd21b;
  local_14 = ExceptionList;
  fStack_14c = 8.507764e-39;
  ExceptionList = &local_14;
  iVar2 = FUN_00428ee0();
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return (undefined1 *)0x0;
  }
  piVar6 = (int *)(iVar2 + -0x14);
  if (piVar6 == (int *)0x0) {
    ExceptionList = local_14;
    return (undefined1 *)0x0;
  }
  if (*(int **)((int)param_1 + 0x32) != (int *)0x0) {
    fStack_14c = param_2;
    puVar3 = (undefined1 *)(**(code **)(**(int **)((int)param_1 + 0x32) + 0x48))();
    ExceptionList = pvStack_1c;
    return puVar3;
  }
  fStack_14c = 8.507863e-39;
  iVar4 = FUN_00428ee0();
  if ((iVar4 != 0) && (iVar4 != 0x14)) {
    fStack_14c = param_2;
    cVar1 = (**(code **)(**(int **)((int)param_1 + 0x2e) + 0x20))();
    if (cVar1 != '\0') {
      fStack_14c = 8.50793e-39;
      FUN_00428ee0();
      fStack_14c = 8.507958e-39;
      iVar2 = FUN_00428ee0();
      if (iVar2 == 0) {
        fStack_14c = 8.508041e-39;
        puVar3 = (undefined1 *)FUN_00515720();
        ExceptionList = local_14;
        return puVar3;
      }
      fStack_14c = 8.507989e-39;
      puVar3 = (undefined1 *)FUN_00515720();
      ExceptionList = local_14;
      return puVar3;
    }
  }
  fStack_14c = param_2;
  cVar1 = (**(code **)(*(int *)param_1[0x16] + 0x20))();
  if (cVar1 != '\0') {
    puVar3 = (undefined1 *)FUN_0042b6c9();
    ExceptionList = pvStack_1c;
    return puVar3;
  }
  cVar1 = (**(code **)(*(int *)param_1[0x12] + 0x20))();
  if (cVar1 != '\0') {
    FUN_0051c480();
    puVar3 = (undefined1 *)FUN_0050a610();
    ExceptionList = pvStack_24;
    return puVar3;
  }
  FUN_0051a470();
  FUN_0051a210();
  fVar20 = param_3;
  cVar1 = (**(code **)(*(int *)param_1[0x15] + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    dVar21 = (double)fStack_14c;
    uVar5 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00cba874,uVar5,dVar21);
    if (DAT_00dc191a != '\0') {
      uVar11 = 0xffffffff;
      pcVar18 = &DAT_00cba874;
      do {
        pcVar16 = pcVar18;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar16 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar16;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar18 = pcVar16 + -uVar11;
      pppuVar14 = appuStack_12c;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pppuVar14 = *(undefined ***)pcVar18;
        pcVar18 = pcVar18 + 4;
        pppuVar14 = pppuVar14 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(char *)pppuVar14 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pppuVar14 = (undefined ***)((int)pppuVar14 + 1);
      }
      FUN_00428ee0();
      uVar5 = FUN_00525f80();
      FUN_007a630a(&DAT_00cba874,s__s_____________________________s_0085ab84,appuStack_12c,uVar5);
      ExceptionList = pvStack_2c;
      return &DAT_00cba874;
    }
    goto LAB_005cb42e;
  }
  cVar1 = (**(code **)(*(int *)param_1[0x13] + 0x20))(param_2,param_3);
  if (cVar1 != '\0') {
    dVar21 = (double)fVar20;
    goto LAB_005cb23a;
  }
  cVar1 = (**(code **)(*(int *)param_1[0x19] + 0x20))(param_2,param_3);
  if (cVar1 == '\0') {
    fVar19 = param_2;
    cVar1 = (**(code **)(*(int *)param_1[0x17] + 0x20))(param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_00525720();
      if ((cVar1 != '\0') &&
         (cVar1 = (**(code **)(*(int *)param_1[0x18] + 0x20))(param_2,param_3), cVar1 != '\0')) {
        puVar3 = (undefined1 *)FUN_0042b6c9();
        ExceptionList = pvStack_34;
        return puVar3;
      }
      fVar24 = param_3;
      cVar1 = (**(code **)(*(int *)param_1[0x20] + 0x20))(param_2,param_3);
      if (cVar1 != '\0') {
        switch(param_1[0x21]) {
        case 1:
        case 2:
          goto switchD_005ca78e_caseD_1;
        case 3:
        case 4:
          (**(code **)(*piVar6 + 0x14))();
          fVar17 = (float10)FUN_005172f0();
          iVar4 = *piVar6;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar4 + 0x78))(uVar5);
          uVar5 = (**(code **)(*(int *)(iVar2 + 0xe) + 4))((double)fVar17);
          uVar8 = FUN_0042b6c9(s_UNIT_ICONS_TP_DETAILS_0085ab30);
          FUN_007a630a(&DAT_00cba874,uVar8,uVar5);
          (**(code **)(*piVar6 + 0x14))();
          uVar5 = FUN_00516cc0();
          (**(code **)(*piVar6 + 0x14))(uVar5);
          uVar5 = FUN_00516f50();
          uVar8 = FUN_0042b6c9();
          FUN_007a630a(&stack0xfffffec0,uVar8,uVar5);
          uVar11 = 0xffffffff;
          pcVar18 = &stack0xfffffec0;
          do {
            pcVar16 = pcVar18;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar16 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar16;
          } while (cVar1 != '\0');
          uVar11 = ~uVar11;
          iVar2 = -1;
          pcVar18 = &DAT_00cba874;
          do {
            pcVar15 = pcVar18;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar15 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar15;
          } while (cVar1 != '\0');
          pcVar18 = pcVar16 + -uVar11;
          pcVar16 = pcVar15 + -1;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar16 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar16 = pcVar16 + 1;
          }
          ExceptionList = pvStack_40;
          return &DAT_00cba874;
        case 5:
        case 6:
          iVar2 = (**(code **)(*piVar6 + 0x18))();
          if (*(int *)(iVar2 + 0x294) != 0) {
            iVar2 = (**(code **)(*piVar6 + 0x18))();
            (**(code **)(**(int **)(iVar2 + 0x294) + 4))();
          }
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piStack_154 = (int *)0x0;
          }
          else {
            piStack_154 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar10 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piStack_154;
          dVar21 = (double)(fVar17 * (float10)_DAT_007e4088);
          uVar5 = FUN_0051b230(dVar21);
          uVar23 = (undefined4)((ulonglong)dVar21 >> 0x20);
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          uVar8 = FUN_0042b6c9(s_SDESC_TRANSPORT_PLANE_0085ab04);
          uVar9 = FUN_0042b6c9(s_UNIT_ICONS_AIR_WING_INFO_0085aae8);
          FUN_007a630a(&DAT_00cba874,uVar9,uVar8,uVar5);
          (**(code **)(*piVar6 + 0x18))();
          iVar2 = FUN_004ef960();
          uVar22 = CONCAT44(uVar23,iVar2 + (int)fVar19);
          uVar5 = FUN_0042b6c9();
          FUN_007a630a(&stack0xfffffec0,uVar5,fVar19,uVar22);
          uVar11 = 0xffffffff;
          pcVar18 = &stack0xfffffec0;
          do {
            pcVar16 = pcVar18;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar16 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar16;
          } while (cVar1 != '\0');
          uVar11 = ~uVar11;
          iVar2 = -1;
          pcVar18 = &DAT_00cba874;
          do {
            pcVar15 = pcVar18;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar15 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar15;
          } while (cVar1 != '\0');
          pcVar18 = pcVar16 + -uVar11;
          pcVar16 = pcVar15 + -1;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar16 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar16 = pcVar16 + 1;
          }
          ExceptionList = pvStack_40;
          return &DAT_00cba874;
        default:
          cVar1 = (**(code **)(*piVar6 + 0x2c))();
          if (cVar1 != '\0') {
            iVar13 = 0;
            iVar4 = 0;
            piVar10 = *(int **)(iVar2 + 0x12);
            while (piVar10 != (int *)0x0) {
              piVar7 = (int *)piVar10[2];
              iVar2 = *piVar10;
              piVar10 = piVar7;
              if (*(int *)(iVar2 + 0x134) != 0x1e) {
                iVar2 = FUN_004fccd0();
                if (iVar2 == 0) {
                  iVar13 = iVar13 + 1;
                }
                else if (iVar2 == 1) {
                  iVar4 = iVar4 + 1;
                }
              }
            }
            (**(code **)(*piVar6 + 0x14))();
            fVar17 = (float10)FUN_005172f0();
            iVar2 = *piVar6;
            uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
            fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
            dVar21 = (double)fVar17;
            uVar5 = FUN_0042b6c9(s_UNIT_ICONS_FLEET_COMPOSITION_0085aa14);
            FUN_007a630a(&DAT_00cba874,uVar5,iVar13,iVar4,fVar19,fVar20,dVar21);
            ExceptionList = pvStack_40;
            return &DAT_00cba874;
          }
          iVar4 = FUN_00428ee0();
          if (iVar4 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar4 + -0x14);
          }
          cVar1 = (**(code **)(*piVar10 + 0x28))();
          if (cVar1 != '\0') {
            iVar4 = FUN_00428ee0();
            if (iVar4 == 0) {
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = (int *)(iVar4 + -0x14);
            }
            piVar10 = (int *)(**(code **)(*piVar10 + 0x10))();
            iVar4 = (**(code **)(*piVar10 + 0x1c))(0x8c,0);
            if (iVar4 != 0) {
              puVar3 = (undefined1 *)FUN_0042b6c9();
              ExceptionList = pvStack_3c;
              return puVar3;
            }
          }
          goto LAB_005cb120;
        case 0x12:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_MULTI_ROLE_0085aac0;
          break;
        case 0x13:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_INTERCEPTOR_0085aaac;
          break;
        case 0x14:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_STRATEGIC_BOMBER_0085aa94;
          break;
        case 0x15:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_TACTICAL_BOMBER_0085aa7c;
          break;
        case 0x16:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_NAVAL_BOMBER_0085aa68;
          break;
        case 0x17:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_CAS_0085aa5c;
          break;
        case 0x18:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_FLYING_BOMB_0085aa48;
          break;
        case 0x19:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          FUN_00428ee0();
          piVar7 = (int *)FUN_004e9370();
          (**(code **)(*piVar6 + 0x18))();
          fVar17 = (float10)FUN_004f0290();
          iVar2 = *piVar10;
          uVar5 = FUN_0051b230((double)(fVar17 * (float10)_DAT_007e4088));
          fVar17 = (float10)(**(code **)(iVar2 + 0x78))(uVar5);
          uVar5 = (**(code **)(*piVar7 + 0xc))((double)fVar17);
          pcVar18 = s_SDESC_FLYING_ROCKET_0085aa34;
        }
        uVar8 = FUN_0042b6c9(pcVar18);
        uVar9 = FUN_0042b6c9(s_UNIT_ICONS_AIR_WING_INFO_0085aae8);
        FUN_007a630a(&DAT_00cba874,uVar9,uVar8,uVar5);
        ExceptionList = pvStack_40;
        return &DAT_00cba874;
      }
LAB_005cb120:
      cVar1 = (**(code **)(*(int *)param_1[0x22] + 0x20))(param_2,param_3);
      if (cVar1 != '\0') {
        puVar3 = (undefined1 *)FUN_0042b6c9(s_SDESC_ENGINEER_0085aa04);
        ExceptionList = pvStack_44;
        return puVar3;
      }
      cVar1 = (**(code **)(*(int *)param_1[0x1e] + 0x20))();
      if (cVar1 != '\0') {
        switch(param_1[0x1f]) {
        case 1:
        case 2:
switchD_005ca78e_caseD_1:
          puVar3 = (undefined1 *)FUN_0042b6c9();
          ExceptionList = pvStack_3c;
          return puVar3;
        case 3:
        case 4:
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar2 + -0x14);
          }
          iVar2 = FUN_00428ee0();
          if (iVar2 == 0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(iVar2 + -0x14);
          }
          (**(code **)(*piVar6 + 0x14))();
          FUN_00516cc0();
          (**(code **)(*piVar10 + 0x14))();
          uVar5 = FUN_00516f50();
          dVar21 = (double)CONCAT44(fVar24,uVar5);
          break;
        case 5:
        case 6:
          iVar4 = 0;
          iVar2 = (**(code **)(*piVar6 + 0x18))();
          if (*(int *)(iVar2 + 0x294) != 0) {
            iVar2 = (**(code **)(*piVar6 + 0x18))();
            iVar4 = (**(code **)(**(int **)(iVar2 + 0x294) + 4))();
          }
          (**(code **)(*piVar6 + 0x18))();
          iVar2 = FUN_004ef960();
          dVar21 = (double)CONCAT44(iVar2 + iVar4,iVar4);
          break;
        case 7:
          puVar3 = (undefined1 *)FUN_0042b6c9();
          ExceptionList = pvStack_3c;
          return puVar3;
        case 8:
          puVar3 = (undefined1 *)FUN_0042b6c9();
          ExceptionList = pvStack_3c;
          return puVar3;
        case 9:
          puVar3 = (undefined1 *)FUN_0042b6c9();
          ExceptionList = pvStack_3c;
          return puVar3;
        default:
          goto switchD_005cb182_default;
        }
LAB_005cb23a:
        uVar5 = FUN_0042b6c9();
        FUN_007a630a(&DAT_00cba874,uVar5,dVar21);
        ExceptionList = pvStack_34;
        return &DAT_00cba874;
      }
switchD_005cb182_default:
      cVar1 = (**(code **)(*(int *)param_1[0x24] + 0x20))(param_2,param_3);
      if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(int *)param_1[0x25] + 0x20))(), cVar1 == '\0'))
      {
LAB_005cb31f:
        cVar1 = (**(code **)(*param_1 + 0x2c))();
        if (cVar1 == '\0') {
          ExceptionList = local_14;
          return (undefined1 *)0x0;
        }
        uStack_118 = 0;
        piStack_124 = (int *)0x0;
        piStack_120 = (int *)0x0;
        iStack_11c = 0;
        appuStack_12c[1] = &PTR_FUN_007e4c84;
        uStack_c = 0;
        fStack_14c = 8.513208e-39;
        piStack_120 = operator_new(0xe);
        if (piStack_120 == (int *)0x0) {
          piStack_120 = (int *)0x0;
        }
        else {
          *piStack_120 = (int)piVar6;
          piStack_120[1] = 0;
          piStack_120[2] = 0;
          *(undefined1 *)(piStack_120 + 3) = 0;
        }
        piVar6 = piStack_120;
        if (iStack_11c != 0) {
          _DAT_00000008 = piStack_120;
          piVar6 = piStack_124;
        }
        piStack_124 = piVar6;
        fStack_14c = 8.513303e-39;
        iStack_11c = iStack_11c + 1;
        puVar3 = (undefined1 *)FUN_00528600();
        (*(code *)appuStack_12c[1][4])();
        uStack_c = 0xffffffff;
        FUN_00527230();
        ExceptionList = local_14;
        return puVar3;
      }
      if (param_1[0x23] == 1) {
        (**(code **)(*(int *)(*(int *)(iVar2 + 0x234) + 0xe) + 0xc))();
      }
      else {
        if (param_1[0x23] != 2) goto LAB_005cb31f;
        iVar4 = FUN_00522770();
        if (iVar4 == DAT_00d0ca90) {
          (**(code **)(*(int *)(*(int *)(iVar2 + 0x234) + 0xe) + 0xc))();
        }
        else {
          iVar2 = FUN_00522770();
          (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
        }
      }
    }
    else {
      FUN_00525da0();
      cVar1 = (**(code **)(*piVar6 + 0x2c))();
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*piVar6 + 0x14))();
        fStack_14c = *(float *)(iVar2 + 0x2b4);
        FUN_0042db80();
      }
      FUN_0079168d(appuStack_12c,&fStack_14c);
    }
  }
  else {
    FUN_00525a80();
  }
  FUN_0042b6c9();
  FUN_007a630a();
LAB_005cb42e:
  ExceptionList = pvStack_2c;
  return &DAT_00cba874;
}


