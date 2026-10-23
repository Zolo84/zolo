// FUN_00769150 @ 769150 size=1278

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00769150(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  float local_8;
  
  piVar6 = *(int **)(param_1 + 0x20);
  fVar2 = _DAT_007e3380;
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = piVar6 + 2;
    iVar4 = *piVar6;
    local_8 = *(float *)(iVar4 + 0x10);
    switch(*(undefined4 *)(iVar4 + 4)) {
    case 0:
      local_8 = local_8 * _DAT_007e4088;
      if (*(int *)(iVar4 + 0xc) == 9) {
        local_8 = local_8 + local_8;
      }
      if (*(int *)(iVar4 + 8) != 0) {
switchD_007692f2_caseD_8:
        fVar2 = fVar2 - local_8;
        goto switchD_00769186_default;
      }
      fVar2 = fVar2 - local_8 * _DAT_007e3840;
      break;
    case 1:
      local_8 = local_8 * _DAT_007e4088 + local_8 * _DAT_007e4088;
      if (*(int *)(iVar4 + 8) != 0) goto switchD_0076932b_caseD_13a;
switchD_0076928e_caseD_f:
      fVar2 = local_8 * _DAT_007e3848 + fVar2;
      break;
    case 2:
      if ((*(int *)(iVar4 + 8) == 0x15) && (*(int *)(iVar4 + 0xc) == 6)) {
LAB_007691e9:
        fVar2 = local_8 * _DAT_007e4088 + local_8 * _DAT_007e4088 + fVar2;
      }
      else {
        fVar3 = local_8 * _DAT_007e4088 * _DAT_007e67d4;
        switch(*(int *)(iVar4 + 8)) {
        case 0x14:
        case 0x17:
        case 0x18:
          fVar2 = fVar2 - fVar3;
          break;
        case 0x15:
          fVar2 = fVar3 + fVar3;
          break;
        case 0x16:
          fVar2 = fVar3;
        }
      }
      break;
    case 3:
      local_8 = local_8 * _DAT_007e4088;
      if (*(int *)(iVar4 + 8) == 0) {
        local_8 = local_8 * _DAT_007e4090;
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar4 == 8) goto switchD_007692f2_caseD_8;
      if ((iVar4 == 9) || (iVar4 == 10)) goto switchD_007692f2_caseD_9;
    default:
switchD_00769186_default:
      break;
    case 4:
      local_8 = local_8 * _DAT_007e4088;
      switch(*(undefined4 *)(iVar4 + 8)) {
      case 0:
        local_8 = local_8 * _DAT_007e7f50;
        break;
      case 1:
        local_8 = local_8 * _DAT_007e8cbc;
        break;
      case 2:
        local_8 = local_8 * _DAT_007e4090;
        break;
      case 3:
        local_8 = local_8 * _DAT_007e3840;
      }
      switch(*(undefined4 *)(iVar4 + 0xc)) {
      case 8:
        goto switchD_007692f2_caseD_8;
      case 9:
      case 10:
switchD_007692f2_caseD_9:
        fVar2 = fVar2 - local_8 * _DAT_007e34c0;
        break;
      case 0xc:
switchD_007692f2_caseD_c:
        local_8 = local_8 * _DAT_007e34c0;
      case 0xb:
      case 0xd:
      case 0xe:
switchD_0076932b_caseD_13a:
        fVar2 = local_8 + fVar2;
        break;
      case 0xf:
        goto switchD_0076928e_caseD_f;
      default:
        goto switchD_00769186_default;
      }
      break;
    case 5:
      local_8 = local_8 * _DAT_007e4088 * _DAT_007e6808;
      switch(*(undefined4 *)(iVar4 + 8)) {
      case 0:
        local_8 = local_8 * _DAT_007fa584;
        break;
      case 1:
        local_8 = local_8 * _DAT_007e3838;
        break;
      case 2:
        local_8 = local_8 * _DAT_007e8cbc;
      }
      switch(*(undefined4 *)(iVar4 + 0xc)) {
      case 8:
        goto switchD_007692f2_caseD_8;
      case 9:
      case 10:
        goto switchD_007692f2_caseD_9;
      case 0xb:
      case 0xd:
      case 0xe:
        goto switchD_0076932b_caseD_13a;
      case 0xc:
        goto switchD_007692f2_caseD_c;
      }
      goto switchD_00769186_default;
    case 6:
      if (*(int *)(iVar4 + 0xc) != 8) {
        local_8 = local_8 * _DAT_007e67d8;
      }
      if (*(int *)(iVar4 + 8) == 0x145) {
        local_8 = local_8 * _DAT_007e4088;
      }
      switch(*(int *)(iVar4 + 8)) {
      case 0x13a:
      case 0x141:
      case 0x142:
      case 0x145:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x151:
        goto switchD_0076932b_caseD_13a;
      }
      goto switchD_00769186_default;
    case 7:
      local_8 = local_8 * _DAT_007e5e7c * _DAT_007e6808;
      if (*(int *)(iVar4 + 0xc) == 7) {
        local_8 = -local_8;
      }
      else if (*(int *)(iVar4 + 0xc) != 8) {
        local_8 = local_8 * _DAT_007e67d8;
      }
      iVar4 = *(int *)(iVar4 + 8);
      if (iVar4 < 0x148) {
        if (iVar4 == 0x147) goto switchD_007694da_caseD_15a;
        if (iVar4 < 0x141) {
          if (iVar4 == 0x140) goto switchD_007694da_caseD_15a;
          if (iVar4 < 0x13e) {
            if (iVar4 != 0x13d) {
              if (iVar4 == 0) {
                fVar2 = local_8 * _DAT_007e4090 + fVar2;
              }
              else if ((iVar4 == 0x13b) || (iVar4 == 0x13c)) goto LAB_00769399;
              break;
            }
          }
          else if (iVar4 != 0x13e) {
            bVar7 = iVar4 == 0x13f;
            goto LAB_007694a8;
          }
LAB_00769399:
          fVar2 = local_8 + local_8 + fVar2;
        }
        else {
          switch(iVar4) {
          case 0x141:
            fVar2 = local_8 * _DAT_007e67d4 + fVar2;
            break;
          case 0x142:
          case 0x143:
          case 0x144:
          case 0x145:
          case 0x146:
            goto switchD_007694da_caseD_15a;
          }
        }
      }
      else {
        switch(iVar4) {
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
          goto switchD_007694da_caseD_15a;
        case 0x14b:
          fVar2 = local_8 * _DAT_007e384c + fVar2;
        }
      }
      break;
    case 8:
      local_8 = local_8 * _DAT_007e3848;
      if (*(int *)(iVar4 + 0xc) == 7) {
        local_8 = -(local_8 + local_8);
      }
      iVar4 = *(int *)(iVar4 + 8);
      if (0x159 < iVar4) {
        switch(iVar4) {
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
          goto switchD_007694da_caseD_15a;
        default:
          goto switchD_007694da_default;
        }
      }
      if (iVar4 != 0x159) {
        if (iVar4 < 0x157) {
          if (iVar4 != 0x156) {
            if (iVar4 == 0) goto LAB_0076943d;
LAB_007694a3:
            bVar7 = iVar4 == 0x155;
LAB_007694a8:
            if (!bVar7) break;
          }
        }
        else if (iVar4 != 0x157) {
          bVar7 = iVar4 == 0x158;
          goto LAB_007694a8;
        }
      }
switchD_007694da_caseD_15a:
      fVar2 = fVar2 + local_8;
      break;
    case 9:
      local_8 = local_8 * _DAT_007e5e7c * _DAT_007e34c0;
      if (*(int *)(iVar4 + 0xc) == 7) {
        local_8 = -(local_8 + local_8);
      }
      iVar4 = *(int *)(iVar4 + 8);
      if (iVar4 < 0x15a) {
        if (iVar4 == 0x159) goto switchD_007694da_caseD_15a;
        if (iVar4 < 0x157) {
          if (iVar4 == 0x156) goto switchD_007694da_caseD_15a;
          if (iVar4 != 0) goto LAB_007694a3;
LAB_0076943d:
          fVar2 = local_8 * _DAT_007e3840 + fVar2;
        }
        else {
          if (iVar4 == 0x157) goto switchD_007694da_caseD_15a;
          if (iVar4 == 0x158) {
            fVar2 = fVar2 + local_8;
          }
        }
      }
      else {
        switch(iVar4) {
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
          goto switchD_007694da_caseD_15a;
        }
      }
      break;
    case 10:
      local_8 = local_8 * _DAT_007e3848;
      iVar5 = *(int *)(iVar4 + 8);
LAB_007694ff:
      if (iVar5 != 0) goto switchD_0076932b_caseD_13a;
      fVar2 = local_8 * _DAT_007e384c + fVar2;
      break;
    case 0xb:
      iVar5 = *(int *)(iVar4 + 8);
      if (iVar5 != 0x161) {
        local_8 = (local_8 + local_8) * _DAT_007e5e7c;
        goto LAB_007694ff;
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      local_8 = (local_8 + local_8) * _DAT_007e384c;
      if ((iVar4 == 6) || (iVar4 == 7)) goto switchD_0076932b_caseD_13a;
      if (iVar4 != 8) goto switchD_00769186_default;
      fVar2 = local_8 + local_8 + fVar2;
      break;
    case 0xc:
    case 0xe:
      fVar2 = local_8 * _DAT_007e4088 * _DAT_007e3848 + fVar2;
      break;
    case 0xd:
      fVar2 = local_8 * _DAT_007e5e7c + local_8 * _DAT_007e5e7c + fVar2;
      break;
    case 0xf:
      iVar4 = *(int *)(iVar4 + 8);
      local_8 = local_8 * _DAT_007e6f24;
      if (iVar4 == 1) goto switchD_0076932b_caseD_13a;
      if (iVar4 == 2) {
        fVar2 = local_8 * _DAT_007e4088 + fVar2;
      }
      else {
        if (iVar4 != 4) goto switchD_00769186_default;
        fVar2 = local_8 + fVar2;
      }
      break;
    case 0x10:
      iVar4 = *(int *)(iVar4 + 8);
      if (((iVar4 != 6) && (iVar4 != 7)) && (iVar4 != 0x13b)) goto switchD_00769186_default;
      fVar2 = fVar2 - local_8 * _DAT_007e4088;
      break;
    case 0x11:
      if (*(int *)(iVar4 + 0xc) != 7) goto LAB_007691e9;
      fVar2 = local_8 * _DAT_007e4088 * _DAT_007e67d4 + fVar2;
      break;
    case 0x12:
      fVar2 = local_8 * _DAT_007e5e7c * _DAT_007e67d4 + fVar2;
      break;
    case 0x13:
      local_8 = (local_8 - _DAT_007e3374) * _DAT_007e4088;
      if (*(int *)(iVar4 + 0xc) == 0x10) {
        local_8 = local_8 * _DAT_007e6800;
      }
      else if (*(int *)(iVar4 + 0xc) == 0x11) {
        local_8 = local_8 * _DAT_007e6800;
      }
      else {
        local_8 = local_8 * _DAT_007e34c0;
      }
      if (*(int *)(iVar4 + 8) == 10) {
        fVar2 = local_8 * _DAT_007e6800 + fVar2;
      }
      else {
        if (*(int *)(iVar4 + 8) != 0x16) goto switchD_007692f2_caseD_c;
        fVar2 = local_8 * _DAT_007e6800 + fVar2;
      }
    }
switchD_007694da_default:
    piVar6 = (int *)*piVar1;
    if ((int *)*piVar1 == (int *)0x0) {
      return (int)ROUND(fVar2);
    }
  } while( true );
}


