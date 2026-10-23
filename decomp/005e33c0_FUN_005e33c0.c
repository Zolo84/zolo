// FUN_005e33c0 @ 5e33c0 size=1564

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_005e33c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  iVar4 = FUN_00428ee0(param_1 + 0xfc);
  if ((iVar4 == 0) || (piVar10 = (int *)(iVar4 + -0x14), piVar10 == (int *)0x0)) {
    return (undefined *)0x0;
  }
  if (*(int **)(param_1 + 0x11a) != (int *)0x0) {
    puVar5 = (undefined *)(**(code **)(**(int **)(param_1 + 0x11a) + 0x4c))(param_2,param_3);
    return puVar5;
  }
  if (*(int **)(param_1 + 0x122) != (int *)0x0) {
    puVar5 = (undefined *)(**(code **)(**(int **)(param_1 + 0x122) + 0x4c))(param_2,param_3);
    return puVar5;
  }
  if (*(int **)(param_1 + 0x11e) != (int *)0x0) {
    puVar5 = (undefined *)(**(code **)(**(int **)(param_1 + 0x11e) + 0x4c))(param_2,param_3);
    return puVar5;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x136) + 0x20))(param_2,param_3);
  if (cVar3 != '\0') {
    puVar5 = (undefined *)FUN_0042b6c9(s_UIW_LEADERBUTTON_0085bee4);
    return puVar5;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x10a) + 0x2c))(param_2,param_3);
  if (cVar3 != '\0') {
    puVar5 = (undefined *)(**(code **)(**(int **)(param_1 + 0x10a) + 0x48))(param_2,param_3);
    return puVar5;
  }
  if ((((*(int *)(param_1 + 0xdc) < param_2) && (param_2 < *(int *)(param_1 + 0xe4))) &&
      (*(int *)(param_1 + 0xe0) < param_3)) && (param_3 < *(int *)(param_1 + 0xe8))) {
    puVar5 = (undefined *)FUN_0042b6c9(s_FLEET_COMPOSITION_DRO_0085becc);
    return puVar5;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x12e) + 0x20))(param_2,param_3);
  if (cVar3 != '\0') {
    return (undefined *)0x0;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x16e) + 0x20))(param_2,param_3);
  if ((cVar3 != '\0') && (iVar6 = (**(code **)(*(int *)(iVar4 + 0xe) + 4))(), iVar6 != 0)) {
    uVar8 = **(undefined4 **)(iVar4 + 0x12);
    FUN_0051b230(uVar8);
    puVar5 = (undefined *)FUN_004e98d0(uVar8);
    return puVar5;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x12a) + 0x20))(param_2,param_3);
  if (cVar3 != '\0') {
    puVar5 = (undefined *)FUN_0042b6c9(s_UIW_REORG_DESC_0085bebc);
    return puVar5;
  }
  DAT_00cd5250 = 0;
  cVar3 = (**(code **)(**(int **)(param_1 + 0x166) + 0x20))(param_2,param_3);
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*piVar10 + 0x2c))(), cVar3 == '\0')) {
    cVar3 = (**(code **)(**(int **)(param_1 + 0x162) + 0x20))(param_2,param_3);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(**(int **)(param_1 + 0x13e) + 0x20))(param_2,param_3);
      if (cVar3 != '\0') goto LAB_005e35bd;
      cVar3 = (**(code **)(**(int **)(param_1 + 0x126) + 0x20))(param_2,param_3);
      if (cVar3 == '\0') {
        cVar3 = FUN_00524000();
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(int **)(param_1 + 0x15a) + 0x20))(param_2,param_3),
           cVar3 != '\0')) {
          puVar5 = (undefined *)FUN_0042b6c9(s_UIW_SUPPLY_DESC_0085beac);
          return puVar5;
        }
        cVar3 = FUN_0051cc00();
        if ((cVar3 != '\0') &&
           (cVar3 = (**(code **)(**(int **)(param_1 + 0x156) + 0x20))(param_2,param_3),
           cVar3 != '\0')) {
          cVar3 = FUN_0051cc30();
          if (cVar3 == '\0') {
            puVar5 = (undefined *)FUN_0042b6c9(s_UIW_HQ_INACTIVE_0085abf8);
            return puVar5;
          }
          puVar5 = (undefined *)FUN_0042b6c9(s_UIW_HQ_DESC_0085abec);
          return puVar5;
        }
        if (((*(int *)(param_1 + 0x16) + 0x2a <= param_3) &&
            (param_3 <= *(int *)(param_1 + 0x16) + 0x3c)) &&
           (*(int *)(param_1 + 0x12) + 0xa0 < param_2)) {
          puVar5 = (undefined *)FUN_0042b6c9(s_UIW_TSTRENGTH_DESC_0085be98);
          return puVar5;
        }
        cVar3 = (**(code **)(**(int **)(param_1 + 0x10e) + 0x20))(param_2,param_3);
        if (cVar3 != '\0') {
          uVar8 = *(undefined4 *)(iVar4 + 0x250);
          uVar7 = (**(code **)(*piVar10 + 0x2c))();
          puVar5 = (undefined *)FUN_00515f60(uVar8,uVar7);
          return puVar5;
        }
        cVar3 = (**(code **)(**(int **)(param_1 + 0x112) + 0x20))(param_2,param_3);
        if (cVar3 != '\0') {
          puVar5 = (undefined *)FUN_0042b6c9(s_UIW_PRIORITIZED_DELAYED_0085be80);
          return puVar5;
        }
        cVar3 = (**(code **)(**(int **)(param_1 + 0x116) + 0x20))(param_2,param_3);
        if (cVar3 == '\0') {
          cVar3 = FUN_004355a0(param_2,param_3);
          if (cVar3 != '\0') {
            for (puVar9 = *(undefined4 **)(*(int *)(param_1 + 0xf8) + 4);
                puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)puVar9[2]) {
              cVar3 = (**(code **)(*(int *)*puVar9 + 0x2c))(param_2,param_3);
              if (cVar3 != '\0') {
                puVar5 = (undefined *)(**(code **)(*(int *)*puVar9 + 0x48))(param_2,param_3);
                return puVar5;
              }
            }
          }
          cVar3 = FUN_004355a0(param_2,param_3);
          if (cVar3 == '\0') {
            return (undefined *)0x0;
          }
          puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x18e) + 4);
          if (puVar9 == (undefined4 *)0x0) {
            return (undefined *)0x0;
          }
          do {
            cVar3 = (**(code **)(*(int *)*puVar9 + 0x2c))(param_2,param_3);
            if (cVar3 != '\0') {
              puVar5 = (undefined *)(**(code **)(*(int *)*puVar9 + 0x48))(param_2,param_3);
              return puVar5;
            }
            puVar9 = (undefined4 *)puVar9[2];
          } while (puVar9 != (undefined4 *)0x0);
          return (undefined *)0x0;
        }
        fVar11 = (float10)FUN_004a4610();
        fVar16 = (float)fVar11;
        fVar11 = (float10)FUN_004a4690();
        fVar15 = (float)fVar11;
        cVar3 = FUN_004a4720();
        if (cVar3 != '\0') {
          dVar14 = (double)fVar15;
          dVar13 = (double)fVar16;
          dVar12 = (double)(DAT_008772b0 * _DAT_007e4088);
          uVar8 = DAT_008772b4;
          uVar7 = FUN_0042b6c9(s_UIW_OFFENSIVE_DELAYED_NEW_0085b8cc);
          FUN_007a630a(&DAT_00cd5250,uVar7,dVar12,uVar8,dVar13,dVar14);
          return &DAT_00cd5250;
        }
        bVar2 = false;
        piVar10 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
        if (piVar10 != (int *)0x0) {
          do {
            piVar1 = (int *)piVar10[2];
            piVar10 = (int *)*piVar10;
            cVar3 = (**(code **)(*piVar10 + 0x28))();
            if (((cVar3 == '\0') || (cVar3 = FUN_00524000(), cVar3 == '\0')) ||
               (*(char *)((int)piVar10 + 0x17b) != '\0')) {
              uVar8 = FUN_0042b6c9();
              FUN_007a630a(&DAT_00cd5250,uVar8);
              return &DAT_00cd5250;
            }
            iVar4 = *(int *)((int)piVar10 + 0x26);
            do {
              if (iVar4 == 0) goto LAB_005e3865;
              iVar4 = *(int *)(iVar4 + 8);
              cVar3 = FUN_004fd350();
            } while (cVar3 == '\0');
            uVar8 = FUN_0042b6c9();
            FUN_007a630a(&DAT_00cd5250,uVar8);
            bVar2 = true;
LAB_005e3865:
            piVar10 = piVar1;
          } while (piVar1 != (int *)0x0);
          if (bVar2) goto LAB_005e3901;
        }
        if (*(float *)(DAT_00d0ca90 + 0x39c4) < fVar16) {
          dVar14 = (double)(fVar16 - *(float *)(DAT_00d0ca90 + 0x39c4));
          uVar8 = FUN_0042b6c9();
          FUN_007a630a(&DAT_00cd5250,uVar8,dVar14);
        }
        if (*(float *)(DAT_00d0ca90 + 0x39b4) < fVar15) {
          dVar14 = (double)(fVar15 - *(float *)(DAT_00d0ca90 + 0x39b4));
          uVar8 = FUN_0042b6c9();
          FUN_007a630a(&DAT_00cd5250,uVar8,dVar14);
        }
LAB_005e3901:
        return &DAT_00cd5250;
      }
      iVar4 = (**(code **)(*piVar10 + 0x14))();
      uVar8 = *(undefined4 *)(iVar4 + 0x2aa);
    }
    else {
      cVar3 = (**(code **)(*piVar10 + 0x2c))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*piVar10 + 0x30))();
        if (cVar3 == '\0') goto LAB_005e3613;
LAB_005e35bd:
        iVar4 = (**(code **)(*piVar10 + 0x18))();
        uVar8 = *(undefined4 *)(iVar4 + 0x294);
      }
      else {
        iVar4 = (**(code **)(*piVar10 + 0x14))();
        uVar8 = *(undefined4 *)(iVar4 + 0x2aa);
      }
    }
  }
  else {
    iVar4 = (**(code **)(*piVar10 + 0x14))();
    uVar8 = *(undefined4 *)(iVar4 + 0x2ae);
  }
  FUN_00657fd0(uVar8,&DAT_00cd5250);
LAB_005e3613:
  return &DAT_00cd5250;
}


