// FUN_00626b70 @ 626b70 size=2014

undefined4 __thiscall FUN_00626b70(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar3 = FUN_00428ee0(param_1 + 0x2e);
  if (iVar3 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar3 + -8);
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))(param_2,param_3);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*piVar5 + 0x14))();
    if (cVar2 != '\0') {
      uVar4 = FUN_004ff360(*(undefined4 *)((int)piVar5 + 0x5a));
      return uVar4;
    }
    cVar2 = (**(code **)(*piVar5 + 0x18))();
    if (cVar2 != '\0') {
      uVar4 = FUN_004ff3e0(*(undefined4 *)((int)piVar5 + 0x5a));
      return uVar4;
    }
  }
  if (DAT_00dc1884 != '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x20))(param_2,param_3);
    if (cVar2 != '\0') {
      uVar4 = FUN_0042b6c9(s_DEV_UPGR_LINE_DRO_0086041c);
      return uVar4;
    }
    cVar2 = (**(code **)(**(int **)(param_1 + 0x78) + 0x20))(param_2,param_3);
    if (cVar2 != '\0') {
      uVar4 = FUN_0042b6c9(s_DEV_INC_LINE_DRO_00860408);
      return uVar4;
    }
    cVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x20))(param_2,param_3);
    if (cVar2 != '\0') {
      uVar4 = FUN_0042b6c9(s_DEV_DEC_LINE_DRO_008603f4);
      return uVar4;
    }
  }
  iVar3 = *(int *)(param_1 + 0x12);
  if ((param_3 < iVar3 + 0x1f) || (iVar3 + 0x2d <= param_3)) {
    if (param_3 < iVar3 + 2) {
      return 0;
    }
    if (iVar3 + 0x12 <= param_3) {
      return 0;
    }
    cVar2 = (**(code **)(*piVar5 + 0x14))();
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0xe);
    if (((0 < *(int *)((int)piVar5 + 0x5e)) && (param_2 < iVar3 + 0x1c5)) &&
       (iVar3 + 0x1b5 < param_2)) {
      uVar4 = FUN_004ff3e0(*(int *)((int)piVar5 + 0x5e));
      return uVar4;
    }
    if (((0 < *(int *)((int)piVar5 + 0x7a)) && (param_2 < iVar3 + 0x1b5)) &&
       (iVar3 + 0x1a5 < param_2)) {
      uVar4 = FUN_004ff3e0(*(int *)((int)piVar5 + 0x7a));
      return uVar4;
    }
    if (((0 < *(int *)((int)piVar5 + 0x7e)) && (param_2 < iVar3 + 0x1a5)) &&
       (iVar3 + 0x195 < param_2)) {
      uVar4 = FUN_004ff3e0(*(int *)((int)piVar5 + 0x7e));
      return uVar4;
    }
    if (((0 < *(int *)((int)piVar5 + 0x82)) && (param_2 < iVar3 + 0x195)) &&
       (iVar3 + 0x185 < param_2)) {
      uVar4 = FUN_004ff3e0(*(int *)((int)piVar5 + 0x82));
      return uVar4;
    }
    if (*(int *)((int)piVar5 + 0x86) < 1) {
      return 0;
    }
    if (iVar3 + 0x185 <= param_2) {
      return 0;
    }
    if (param_2 <= iVar3 + 0x175) {
      return 0;
    }
    uVar4 = FUN_004ff3e0(*(int *)((int)piVar5 + 0x86));
    return uVar4;
  }
  cVar2 = (**(code **)(*piVar5 + 0x14))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*piVar5 + 0x18))();
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_004f4a70();
    if (cVar2 == '\0') {
      cVar2 = FUN_004f4a90();
      if (cVar2 == '\0') {
        cVar2 = FUN_004f4a50();
        if (cVar2 == '\0') {
          return 0;
        }
        iVar1 = *(int *)(param_1 + 0xe);
        iVar3 = iVar1 + 0x138;
        if (param_2 < iVar3) {
          return 0;
        }
        if (param_2 < iVar1 + 0x14c) {
          uVar4 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x160) {
          uVar4 = FUN_0042b6c9(s_UIW_NAVALATTACK_DESC_0085b2d8);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x174) {
          uVar4 = FUN_0042b6c9(s_UIW_SOFTATTACK_DESC_0085b404);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x188) {
          uVar4 = FUN_0042b6c9(s_UIW_HARDATTACK_DESC_0085b418);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x19c) {
          uVar4 = FUN_0042b6c9(s_UIW_STRATATTACK_DESC_0085b2c0);
          return uVar4;
        }
        goto joined_r0x006271e1;
      }
      iVar1 = *(int *)(param_1 + 0xe);
      iVar3 = iVar1 + 0x138;
      if (param_2 < iVar3) {
        return 0;
      }
      if (param_2 < iVar1 + 0x14c) {
        uVar4 = FUN_0042b6c9(s_UIW_SEAATTACK_DESC_0085b35c);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x160) {
        uVar4 = FUN_0042b6c9(s_UIW_CONVOYATTACK_DESC_0085b344);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x174) {
        uVar4 = FUN_0042b6c9(s_UIW_SUBATTACK_DESC_0085b330);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x188) {
        uVar4 = FUN_0042b6c9(s_UIW_SHOREBOMB_DESC_0085b31c);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x19c) {
        uVar4 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
        return uVar4;
      }
      goto joined_r0x006270f0;
    }
    iVar1 = *(int *)(param_1 + 0xe);
    iVar3 = iVar1 + 0x138;
    if (param_2 < iVar3) {
      return 0;
    }
    if (param_2 < iVar1 + 0x14c) {
      uVar4 = FUN_0042b6c9(s_UIW_HARDATTACK_DESC_0085b418);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x160) {
      uVar4 = FUN_0042b6c9(s_UIW_SOFTATTACK_DESC_0085b404);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x174) {
      uVar4 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x188) {
      if (DAT_00dc1749 == '\0') {
        uVar4 = FUN_0042b6c9(s_UIW_DEFENCE_DESC_0085b3c8);
        return uVar4;
      }
      uVar4 = FUN_0042b6c9(s_UIW_2_DEFENCE_DESC_0085b3dc);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x19c) {
      if (DAT_00dc1749 == '\0') {
        uVar4 = FUN_0042b6c9(s_UIW_TOUGHNESS_DESC_0085b39c);
        return uVar4;
      }
      uVar4 = FUN_0042b6c9(s_UIW_2_TOUGHNESS_DESC_0085b3b0);
      return uVar4;
    }
  }
  else {
    cVar2 = FUN_004f3f80();
    if (cVar2 == '\0') {
      cVar2 = FUN_004f3fa0();
      if (cVar2 == '\0') {
        cVar2 = FUN_004f3f50();
        if (cVar2 == '\0') {
          return 0;
        }
        iVar1 = *(int *)(param_1 + 0xe);
        iVar3 = iVar1 + 0x138;
        if (param_2 < iVar3) {
          return 0;
        }
        if (param_2 < iVar1 + 0x14c) {
          uVar4 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x160) {
          uVar4 = FUN_0042b6c9(s_UIW_NAVALATTACK_DESC_0085b2d8);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x174) {
          uVar4 = FUN_0042b6c9(s_UIW_SOFTATTACK_DESC_0085b404);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x188) {
          uVar4 = FUN_0042b6c9(s_UIW_HARDATTACK_DESC_0085b418);
          return uVar4;
        }
        if (param_2 < iVar1 + 0x19c) {
          uVar4 = FUN_0042b6c9(s_UIW_STRATATTACK_DESC_0085b2c0);
          return uVar4;
        }
joined_r0x006271e1:
        if (iVar1 + 0x1b0 <= param_2) {
          if (iVar3 + 0x8c <= param_2) {
            return 0;
          }
          if (DAT_00dc1749 == '\0') {
            uVar4 = FUN_0042b6c9(s_UIW_SURFACEDEFENCE_DESC_0085b278);
            return uVar4;
          }
          uVar4 = FUN_0042b6c9(s_UIW_2_SURFACEDEFENCE_DESC_0085b290);
          return uVar4;
        }
        goto LAB_006271e3;
      }
      iVar1 = *(int *)(param_1 + 0xe);
      iVar3 = iVar1 + 0x138;
      if (param_2 < iVar3) {
        return 0;
      }
      if (param_2 < iVar1 + 0x14c) {
        uVar4 = FUN_0042b6c9(s_UIW_SEAATTACK_DESC_0085b35c);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x160) {
        uVar4 = FUN_0042b6c9(s_UIW_CONVOYATTACK_DESC_0085b344);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x174) {
        uVar4 = FUN_0042b6c9(s_UIW_SUBATTACK_DESC_0085b330);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x188) {
        uVar4 = FUN_0042b6c9(s_UIW_SHOREBOMB_DESC_0085b31c);
        return uVar4;
      }
      if (param_2 < iVar1 + 0x19c) {
        uVar4 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
        return uVar4;
      }
joined_r0x006270f0:
      if (param_2 < iVar1 + 0x1b0) {
        if (DAT_00dc1749 == '\0') {
          uVar4 = FUN_0042b6c9(s_UIW_SEADEFENCE_DESC_0085b2f0);
          return uVar4;
        }
        uVar4 = FUN_0042b6c9(s_UIW_2_SEADEFENCE_DESC_0085b304);
        return uVar4;
      }
      if (iVar3 + 0x8c <= param_2) {
        return 0;
      }
      goto LAB_006271e3;
    }
    iVar1 = *(int *)(param_1 + 0xe);
    iVar3 = iVar1 + 0x138;
    if (param_2 < iVar3) {
      return 0;
    }
    if (param_2 < iVar1 + 0x14c) {
      uVar4 = FUN_0042b6c9(s_UIW_HARDATTACK_DESC_0085b418);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x160) {
      uVar4 = FUN_0042b6c9(s_UIW_SOFTATTACK_DESC_0085b404);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x174) {
      uVar4 = FUN_0042b6c9(s_UIW_AIRATTACK_DESC_0085b3f0);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x188) {
      if (DAT_00dc1749 == '\0') {
        uVar4 = FUN_0042b6c9(s_UIW_DEFENCE_DESC_0085b3c8);
        return uVar4;
      }
      uVar4 = FUN_0042b6c9(s_UIW_2_DEFENCE_DESC_0085b3dc);
      return uVar4;
    }
    if (param_2 < iVar1 + 0x19c) {
      if (DAT_00dc1749 == '\0') {
        uVar4 = FUN_0042b6c9(s_UIW_TOUGHNESS_DESC_0085b39c);
        return uVar4;
      }
      uVar4 = FUN_0042b6c9(s_UIW_2_TOUGHNESS_DESC_0085b3b0);
      return uVar4;
    }
  }
  if (iVar1 + 0x1b0 <= param_2) {
    if (iVar3 + 0x8c <= param_2) {
      return 0;
    }
    uVar4 = FUN_0042b6c9(s_UIW_MAXSPEED_DESC_0085b370);
    return uVar4;
  }
LAB_006271e3:
  if (DAT_00dc1749 == '\0') {
    uVar4 = FUN_0042b6c9(s_UIW_AIRDEFENCE_DESC_0085b2ac);
    return uVar4;
  }
  uVar4 = FUN_0042b6c9(s_UIW_2_AIRDEFENCE_DESC_0085b384);
  return uVar4;
}


