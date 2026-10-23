// FUN_0070b810 @ 70b810 size=1754

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0070b810(int param_1,int *param_2,int *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  piVar1 = param_3 + 1;
  iVar2 = FUN_004af6b0(piVar1);
  if (iVar2 != 0) {
    return (float10)iVar2;
  }
  if (param_4 != '\0') {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0x2a:
    case 0x2b:
    case 0xd8:
    case 0xdb:
    case 0xdc:
    case 0xf0:
    case 0x11a:
    case 0x11c:
    case 0x11d:
    case 0x11f:
    case 0x124:
    case 0x126:
      goto switchD_0070b85a_caseD_2a;
    default:
      break;
    case 0x93:
      iVar2 = FUN_004f62a0(param_3);
      if (iVar2 == 2) {
        FUN_00429a00(s_ERROR___Invalid_convoy_type___s__00871cc0,piVar1,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      return (float10)iVar2;
    case 0xdd:
    case 0xde:
      if (*param_3 == 0x524) {
        fVar3 = (float10)FUN_00429d80(piVar1);
        return fVar3;
      }
      goto LAB_0070bb36;
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 < 0x138) {
    if (iVar2 == 0x137) {
switchD_0070bb62_caseD_139:
      if ((DAT_00dc4b5e != '\0') && (iVar2 = FUN_004c7b11(piVar1), iVar2 == 0)) {
        FUN_00429a00(s_ERROR___Invalid_region_name___s__00871b68,piVar1,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      iVar2 = FUN_004c7b11(piVar1);
      return (float10)iVar2;
    }
    if (iVar2 < 0xe9) {
      if (iVar2 == 0xe8) {
LAB_0070bac3:
        iVar2 = FUN_005144a0(param_3);
        if (iVar2 == 0) {
          FUN_00429a00(s_ERROR___Invalid_mission_type___s_00871bf0,piVar1,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        return (float10)iVar2;
      }
      if (iVar2 == 0x1c) {
        if (*param_3 == 0x524) {
          fVar3 = (float10)FUN_00429d80(piVar1);
          return fVar3;
        }
        if ((DAT_00dc4b5e != '\0') && (iVar2 = FUN_004c7aca(piVar1), iVar2 == 0)) {
          FUN_00429a00(s_ERROR___Invalid_area_name___s__f_00871c24,piVar1,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        iVar2 = FUN_004c7aca(piVar1);
        return (float10)iVar2;
      }
      if (iVar2 == 0x1d) {
        if (*param_3 == 0x524) {
          fVar3 = (float10)FUN_00429d80(piVar1);
          return fVar3;
        }
        if ((DAT_00dc4b5e != '\0') && (iVar2 = FUN_004c7b11(piVar1), iVar2 == 0)) {
          FUN_00429a00(s_ERROR___Invalid_region_name___s__00871c70,piVar1,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        iVar2 = FUN_004c7b11(piVar1);
        return (float10)iVar2;
      }
      if (iVar2 == 0xa0) {
        iVar2 = *param_3;
        if (iVar2 < 0x235) {
          if (iVar2 == 0x234) {
            return (float10)_DAT_007f8628;
          }
          if (iVar2 < 0x233) {
            if (iVar2 == 0x232) {
              return (float10)_DAT_007f8630;
            }
            if (iVar2 == 0xe2) {
              return (float10)_DAT_007e3834;
            }
            if (iVar2 == 0xf6) {
              return (float10)_DAT_007e682c;
            }
          }
          else if (iVar2 == 0x233) {
            return (float10)_DAT_007f862c;
          }
        }
        else {
          if (iVar2 == 0x235) {
            return (float10)_DAT_007e6f28;
          }
          if (iVar2 == 0x381) goto switchD_0070be26_caseD_381;
          if (iVar2 == 0x382) {
            return (float10)_DAT_007e6f24;
          }
        }
      }
    }
    else if (iVar2 == 0x130) {
      if (*param_3 == 0x524) {
        fVar3 = (float10)FUN_00429d80(piVar1);
        return fVar3;
      }
      if (param_2[1] == 0x14e) {
switchD_0070b85a_caseD_2a:
LAB_0070bb36:
        FUN_007a630a(param_1 + 0x28,&DAT_0083a374,piVar1);
        return (float10)_DAT_007e3380;
      }
    }
    else {
      if (iVar2 == 0x133) goto LAB_0070bac3;
      if (iVar2 == 0x136) goto switchD_0070bb62_caseD_138;
    }
  }
  else {
    switch(iVar2) {
    case 0x138:
    case 0x13a:
    case 0x13c:
switchD_0070bb62_caseD_138:
      if ((DAT_00dc4b5e != '\0') && (iVar2 = FUN_004c7aca(piVar1), iVar2 == 0)) {
        FUN_00429a00(s_ERROR___Invalid_area_name___s__u_00871bac,piVar1,*param_2 + 0x216,
                     *(int *)(*param_2 + 0x212) + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      iVar2 = FUN_004c7aca(piVar1);
      return (float10)iVar2;
    case 0x139:
    case 0x13b:
    case 0x13d:
      goto switchD_0070bb62_caseD_139;
    }
  }
  if (*param_3 == 0x524) {
    fVar3 = (float10)FUN_00429d80(piVar1);
    return fVar3;
  }
  iVar2 = FUN_00760780(*param_3);
  if (iVar2 != 7) {
    return (float10)iVar2;
  }
  iVar2 = FUN_004fdae0(param_3);
  if (iVar2 != 0x8c) {
    return (float10)iVar2;
  }
  iVar2 = FUN_004fe160(param_3);
  if (iVar2 != 0x8c) {
    *(undefined1 *)(param_1 + 0x13c) = 1;
    return (float10)iVar2;
  }
  iVar2 = FUN_004f55b0(param_3);
  if ((iVar2 != 0) && (iVar2 != 0xb)) {
    return (float10)iVar2;
  }
  iVar2 = FUN_005144a0(param_3);
  if ((iVar2 != 0) && (iVar2 != 0x22)) {
    return (float10)iVar2;
  }
  iVar2 = FUN_0075edd0(param_3);
  if (iVar2 != 7) {
    return (float10)iVar2;
  }
  iVar2 = FUN_004f62a0(param_3);
  if (iVar2 != 2) {
    return (float10)iVar2;
  }
  iVar2 = *param_3;
  if (iVar2 < 0x362) {
    if (iVar2 == 0x361) goto LAB_0070bd7f;
    if (iVar2 < 0x233) {
      if (iVar2 == 0x232) {
switchD_0070be26_caseD_379:
        return (float10)_DAT_007e384c;
      }
      if (iVar2 < 0x145) {
        if (iVar2 == 0x144) {
          *(undefined1 *)(param_1 + 0x13d) = 1;
          goto LAB_0070bd4b;
        }
        if (iVar2 == 0x2e) goto LAB_0070bd7f;
        if (iVar2 == 0xf6) goto switchD_0070be26_caseD_37a;
        if (iVar2 == 0x137) goto switchD_0070be26_caseD_379;
      }
      else {
        if (iVar2 == 0x145) {
          fVar3 = (float10)_DAT_007e3380;
          *(undefined1 *)(param_1 + 0x13d) = 1;
          return fVar3;
        }
        if (iVar2 == 0x146) {
          *(undefined1 *)(param_1 + 0x13d) = 1;
LAB_0070bd7f:
          return (float10)_DAT_007e3374;
        }
        if (iVar2 == 0x1b4) {
switchD_0070be26_caseD_37a:
          return (float10)_DAT_007e67d4;
        }
      }
    }
    else if (iVar2 < 0x244) {
      if (iVar2 == 0x243) {
        if (param_4 != '\0') {
          fVar3 = (float10)_DAT_007e8cbc;
          *(undefined1 *)(param_1 + 0x13d) = 1;
          return fVar3;
        }
LAB_0070bd4b:
        return (float10)_DAT_007e5e34;
      }
      if (iVar2 == 0x233) goto LAB_0070bd7f;
      if (iVar2 == 0x234) goto LAB_0070bd4b;
      if (iVar2 == 0x235) {
        return (float10)_DAT_007e3380;
      }
    }
    else {
      if (iVar2 == 0x2c0) {
        return (float10)_DAT_007e3838;
      }
      if (iVar2 == 0x360) {
        return (float10)_DAT_007e3380;
      }
    }
  }
  else if (iVar2 < 900) {
    if (iVar2 == 899) goto LAB_0070bec3;
    switch(iVar2) {
    case 0x379:
      goto switchD_0070be26_caseD_379;
    case 0x37a:
      goto switchD_0070be26_caseD_37a;
    case 0x380:
switchD_0070be26_caseD_380:
      return (float10)_DAT_007e4074;
    case 0x381:
switchD_0070be26_caseD_381:
      return (float10)_DAT_007e3844;
    case 0x382:
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 != 0x100) {
        if (iVar2 == 0x120) {
          return (float10)_DAT_007f8624;
        }
        if (iVar2 != 0x121) {
          return (float10)_DAT_007e6f24;
        }
      }
    case 0x37f:
switchD_0070be26_caseD_37f:
      return (float10)_DAT_007e3848;
    }
  }
  else if (iVar2 < 0x561) {
    if (iVar2 == 0x560) goto switchD_0070be26_caseD_381;
    if (iVar2 == 0x409) {
      return (float10)_DAT_007e3840;
    }
    if (iVar2 == 0x40a) {
      return (float10)_DAT_007e4090;
    }
    if (iVar2 == 0x40b) {
      return (float10)_DAT_007e383c;
    }
  }
  else {
    if (iVar2 == 0x568) goto switchD_0070be26_caseD_37f;
    if (iVar2 == 0x569) goto switchD_0070be26_caseD_380;
  }
  FUN_005349b0(s_Unrecognisable_which_or_value_00871b48);
LAB_0070bec3:
  return (float10)_DAT_007e3380;
}


