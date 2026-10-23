// FUN_005deb20 @ 5deb20 size=1217

undefined4 __thiscall FUN_005deb20(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_00428ee0(param_1 + 0x4e);
  if ((iVar2 != 0) && (iVar2 + -8 != 0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar3 = FUN_0042b6c9(s_OIL_USE_EXPLAIN_0085ba44);
      return uVar3;
    }
    iVar6 = 0;
    iVar5 = iVar2 + -8;
    if (0 < *(int *)(iVar2 + 0x134)) {
      puVar4 = (undefined4 *)(param_1 + 0x32);
      do {
        cVar1 = (**(code **)(*(int *)*puVar4 + 0x20))(param_2,param_3);
        if (cVar1 != '\0') {
          uVar3 = FUN_004ff3e0(*(undefined4 *)(unaff_EBP + 0x88 + iVar6 * 4));
          return uVar3;
        }
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 1;
        iVar5 = unaff_EBP;
      } while (iVar6 < *(int *)(unaff_EBP + 0x13c));
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x2e) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      if (*(char *)(iVar5 + 0x162) == '\0') {
        uVar3 = FUN_004ff360(*(undefined4 *)(iVar5 + 0x130));
        return uVar3;
      }
      uVar3 = FUN_004ff3e0(*(undefined4 *)(iVar5 + 0x88));
      return uVar3;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar3 = FUN_0042b6c9(s_UIW_STRENGTH_DESC_0085b264);
      return uVar3;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar3 = FUN_0042b6c9(s_UIW_ORG_DESC_0085b254);
      return uVar3;
    }
    if ((*(int *)(param_1 + 0x12) + 0x1f <= param_3) && (param_3 < *(int *)(param_1 + 0x12) + 0x2d))
    {
      if (*(char *)(iVar5 + 0x15f) == '\0') {
        if (*(char *)(iVar5 + 0x161) == '\0') {
          if ((*(char *)(iVar5 + 0x160) != '\0') &&
             (iVar2 = *(int *)(param_1 + 0xe), iVar2 + 0x50 <= param_2)) {
            if (param_2 < iVar2 + 100) {
              uVar3 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
              return uVar3;
            }
            if (param_2 < iVar2 + 0x78) {
              uVar3 = FUN_0042b6c9(s_UIW_NAVALATTACK_DESC_0085b2d8);
              return uVar3;
            }
            if (param_2 < iVar2 + 0x8c) {
              uVar3 = FUN_0042b6c9(s_UIW_SOFTATTACK_DESC_0085b404);
              return uVar3;
            }
            if (param_2 < iVar2 + 0xa0) {
              uVar3 = FUN_0042b6c9(s_UIW_HARDATTACK_DESC_0085b418);
              return uVar3;
            }
            if (param_2 < iVar2 + 0xb4) {
              uVar3 = FUN_0042b6c9(s_UIW_STRATATTACK_DESC_0085b2c0);
              return uVar3;
            }
            if (param_2 < iVar2 + 200) goto LAB_005ded78;
            if (param_2 < iVar2 + 0xdc) {
              if (DAT_00dc1749 == '\0') {
                uVar3 = FUN_0042b6c9(s_UIW_SURFACEDEFENCE_DESC_0085b278);
                return uVar3;
              }
              uVar3 = FUN_0042b6c9(s_UIW_2_SURFACEDEFENCE_DESC_0085b290);
              return uVar3;
            }
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0xe);
          if (iVar2 + 0x50 <= param_2) {
            if (param_2 < iVar2 + 100) {
              uVar3 = FUN_0042b6c9(s_UIW_SEAATTACK_DESC_0085b35c);
              return uVar3;
            }
            if (param_2 < iVar2 + 0x78) {
              uVar3 = FUN_0042b6c9(s_UIW_CONVOYATTACK_DESC_0085b344);
              return uVar3;
            }
            if (param_2 < iVar2 + 0x8c) {
              uVar3 = FUN_0042b6c9(s_UIW_SUBATTACK_DESC_0085b330);
              return uVar3;
            }
            if (param_2 < iVar2 + 0xa0) {
              uVar3 = FUN_0042b6c9(s_UIW_SHOREBOMB_DESC_0085b31c);
              return uVar3;
            }
            if (param_2 < iVar2 + 0xb4) {
              uVar3 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
              return uVar3;
            }
            if (param_2 < iVar2 + 200) {
              if (DAT_00dc1749 == '\0') {
                uVar3 = FUN_0042b6c9(s_UIW_SEADEFENCE_DESC_0085b2f0);
                return uVar3;
              }
              uVar3 = FUN_0042b6c9(s_UIW_2_SEADEFENCE_DESC_0085b304);
              return uVar3;
            }
            if (param_2 < iVar2 + 0xdc) {
LAB_005ded78:
              if (DAT_00dc1749 == '\0') {
                uVar3 = FUN_0042b6c9(s_UIW_AIRDEFENCE_DESC_0085b2ac);
                return uVar3;
              }
              uVar3 = FUN_0042b6c9(s_UIW_2_AIRDEFENCE_DESC_0085b384);
              return uVar3;
            }
          }
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xe);
        if (iVar2 + 0x50 <= param_2) {
          if (param_2 < iVar2 + 100) {
            uVar3 = FUN_0042b6c9(s_UIW_HARDATTACK_DESC_0085b418);
            return uVar3;
          }
          if (param_2 < iVar2 + 0x78) {
            uVar3 = FUN_0042b6c9(s_UIW_SOFTATTACK_DESC_0085b404);
            return uVar3;
          }
          if (param_2 < iVar2 + 0x8c) {
            uVar3 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
            return uVar3;
          }
          if (param_2 < iVar2 + 0xa0) {
            if (DAT_00dc1749 == '\0') {
              uVar3 = FUN_0042b6c9(s_UIW_DEFENCE_DESC_0085b3c8);
              return uVar3;
            }
            uVar3 = FUN_0042b6c9(s_UIW_2_DEFENCE_DESC_0085b3dc);
            return uVar3;
          }
          if (param_2 < iVar2 + 0xb4) {
            if (DAT_00dc1749 == '\0') {
              uVar3 = FUN_0042b6c9(s_UIW_TOUGHNESS_DESC_0085b39c);
              return uVar3;
            }
            uVar3 = FUN_0042b6c9(s_UIW_2_TOUGHNESS_DESC_0085b3b0);
            return uVar3;
          }
          if (param_2 < iVar2 + 200) goto LAB_005ded78;
          if (param_2 < iVar2 + 0xdc) {
            uVar3 = FUN_0042b6c9(s_UIW_MAXSPEED_DESC_0085b370);
            return uVar3;
          }
        }
      }
    }
  }
  return 0;
}


