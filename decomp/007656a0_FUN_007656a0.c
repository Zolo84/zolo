// FUN_007656a0 @ 7656a0 size=1045

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_007656a0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  undefined2 uVar6;
  uint uVar3;
  uint uVar4;
  bool bVar7;
  
  fVar1 = *(float *)(param_1 + 0x10);
  uVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)(fVar1 < _DAT_007e3380) << 8 |
                   (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10 |
                   (ushort)(fVar1 == _DAT_007e3380) << 0xe);
  if ((fVar1 == _DAT_007e3380) != 0) goto switchD_007656c0_default;
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = (undefined3)(uVar4 >> 8);
  uVar3 = uVar4;
  switch(uVar4) {
  case 0:
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((uVar4 == 9) || (uVar4 == 10)) {
      uVar4 = 0;
      uVar3 = uVar4;
      switch(*(undefined4 *)(param_1 + 8)) {
      case 0:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x23:
      case 0x28:
        goto switchD_007659d7_caseD_0;
      }
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0xc) == 0x12) {
      switch(*(undefined4 *)(param_1 + 8)) {
      case 0:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        goto switchD_007659d7_caseD_0;
      }
    }
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 != 0x12) && (*(int *)(param_1 + 8) != 0x15)) break;
    uVar4 = *(int *)(param_1 + 8) - 0x14;
    uVar3 = uVar4;
    switch(uVar4) {
    case 0:
    case 2:
    case 3:
    case 4:
      goto switchD_007659d7_caseD_0;
    case 1:
      if (iVar2 == 7) goto switchD_007659d7_caseD_0;
      if (iVar2 == 6) {
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
    }
    break;
  case 3:
    uVar4 = *(uint *)(param_1 + 0xc);
    if (((uVar4 == 9) || (uVar4 == 10)) || (uVar4 == 8)) {
      uVar4 = 0;
      uVar3 = uVar4;
      switch(*(undefined4 *)(param_1 + 8)) {
      case 0:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
        goto switchD_007659d7_caseD_0;
      }
    }
    break;
  case 4:
    uVar4 = *(int *)(param_1 + 0xc) - 8;
    switch(uVar4) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      uVar3 = uVar4;
      switch(*(undefined4 *)(param_1 + 8)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
        goto switchD_007659d7_caseD_0;
      }
      break;
    case 7:
switchD_00765795_caseD_7:
      return CONCAT31((int3)(uVar4 >> 8),*(int *)(param_1 + 8) == 0x161);
    }
    break;
  case 5:
    uVar4 = *(int *)(param_1 + 0xc) - 8;
    switch(uVar4) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      if (*(uint *)(param_1 + 8) < 0x13a) {
        uVar3 = uVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((&DAT_00765e98)[*(uint *)(param_1 + 8)]) {
        case 0:
          goto switchD_007659d7_caseD_0;
        }
      }
    }
    break;
  case 6:
    uVar4 = *(uint *)(param_1 + 0xc);
    switch(uVar4) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
      uVar4 = *(int *)(param_1 + 8) - 0x13a;
      uVar3 = uVar4;
      switch(*(int *)(param_1 + 8)) {
      case 0x13a:
      case 0x141:
      case 0x142:
      case 0x145:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x151:
        goto switchD_007659d7_caseD_0;
      }
    }
    break;
  case 7:
    uVar4 = *(uint *)(param_1 + 0xc);
    switch(uVar4) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
      iVar2 = *(int *)(param_1 + 8);
      if (0x147 < iVar2) {
        uVar4 = iVar2 - 0x148;
        uVar3 = uVar4;
        switch(uVar4) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          goto switchD_007659d7_caseD_0;
        }
        goto switchD_007656c0_default;
      }
      uVar3 = uVar4;
      if (iVar2 == 0x147) goto switchD_007659d7_caseD_0;
      if (0x140 < iVar2) {
        uVar4 = iVar2 - 0x141;
        uVar3 = uVar4;
        switch(uVar4) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
          goto switchD_007659d7_caseD_0;
        default:
          goto switchD_007656c0_default;
        }
      }
      if (iVar2 == 0x140) goto switchD_007659d7_caseD_0;
      if (iVar2 < 0x13e) {
        if (((iVar2 == 0x13d) || (iVar2 == 0)) || (iVar2 == 0x13b)) goto switchD_007659d7_caseD_0;
        bVar7 = iVar2 == 0x13c;
      }
      else {
        if (iVar2 == 0x13e) goto switchD_007659d7_caseD_0;
        bVar7 = iVar2 == 0x13f;
      }
      break;
    default:
      goto switchD_007656c0_default;
    }
    goto LAB_00765a2b;
  case 8:
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((uVar4 != 7) && (uVar4 != 6)) break;
    iVar2 = *(int *)(param_1 + 8);
    if (0x159 < iVar2) {
      uVar4 = iVar2 - 0x15a;
      uVar3 = uVar4;
      switch(uVar4) {
      case 0:
      case 1:
      case 2:
      case 3:
        goto switchD_007659d7_caseD_0;
      }
      break;
    }
    uVar3 = uVar4;
    if (iVar2 == 0x159) goto switchD_007659d7_caseD_0;
    if (iVar2 < 0x157) {
      if ((iVar2 == 0x156) || (iVar2 == 0)) goto switchD_007659d7_caseD_0;
      bVar7 = iVar2 == 0x155;
    }
    else {
      if (iVar2 == 0x157) goto switchD_007659d7_caseD_0;
      bVar7 = iVar2 == 0x158;
    }
    goto LAB_00765a2b;
  case 9:
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((uVar4 == 7) || (uVar4 == 6)) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 < 0x15a) {
        uVar3 = uVar4;
        if (iVar2 == 0x159) goto switchD_007659d7_caseD_0;
        uVar5 = (undefined3)(uVar4 >> 8);
        if (iVar2 < 0x157) {
          if ((iVar2 == 0x156) || (iVar2 == 0)) goto switchD_007659d7_caseD_0;
          if (iVar2 == 0x155) {
            return CONCAT31(uVar5,1);
          }
        }
        else {
          if (iVar2 == 0x157) goto switchD_007659d7_caseD_0;
          if (iVar2 == 0x158) {
            return CONCAT31(uVar5,1);
          }
        }
      }
      else {
        uVar4 = iVar2 - 0x15a;
        uVar3 = uVar4;
        switch(uVar4) {
        case 0:
        case 1:
        case 2:
        case 3:
          goto switchD_007659d7_caseD_0;
        }
      }
    }
    break;
  case 10:
    fVar1 = *(float *)(param_1 + 0x10);
    uVar6 = (undefined2)(uVar4 >> 0x10);
    uVar4 = CONCAT22(uVar6,(ushort)(fVar1 < _DAT_007e4090) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_007e4090)) << 10 |
                           (ushort)(fVar1 == _DAT_007e4090) << 0xe);
    if (fVar1 < _DAT_007e4090 || (fVar1 == _DAT_007e4090) != 0) {
      fVar1 = *(float *)(param_1 + 0x10);
      uVar4 = CONCAT22(uVar6,(ushort)(fVar1 < _DAT_007f3d04) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_007f3d04)) << 10 |
                             (ushort)(fVar1 == _DAT_007f3d04) << 0xe);
      if ((fVar1 >= _DAT_007f3d04) && (*(int *)(param_1 + 0xc) == 0x12)) {
        uVar3 = uVar4;
        switch(*(undefined4 *)(param_1 + 8)) {
        case 0:
        case 1:
        case 2:
        case 0x15:
          goto switchD_007659d7_caseD_0;
        }
      }
    }
    break;
  case 0xb:
    uVar4 = *(uint *)(param_1 + 0xc);
    if (uVar4 == 0x12) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 < 0x160) {
        uVar3 = 0;
        if ((iVar2 == 0x15f) || (iVar2 == 0)) goto switchD_007659d7_caseD_0;
        if (iVar2 == 0x15e) {
          return 1;
        }
      }
      else if (iVar2 == 0x160) {
        return 1;
      }
      break;
    }
    if (*(int *)(param_1 + 8) != 0x161) break;
    uVar3 = 0;
    if ((uVar4 == 6) || (uVar3 = 0, uVar4 == 7)) goto switchD_007659d7_caseD_0;
    uVar4 = uVar4 - 8;
    bVar7 = uVar4 == 0;
LAB_00765a2b:
    uVar3 = uVar4;
    if (bVar7) {
switchD_007659d7_caseD_0:
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x12:
    if (*(int *)(param_1 + 0xc) == 0x12) goto switchD_00765795_caseD_7;
    break;
  case 0xf:
    if (*(int *)(param_1 + 0xc) == 0x12) {
      iVar2 = *(int *)(param_1 + 8);
      if ((iVar2 == 1) || (iVar2 == 2)) goto switchD_007659d7_caseD_0;
      if (iVar2 == 4) {
        return CONCAT31(uVar5,1);
      }
    }
    break;
  case 0x10:
    if (*(int *)(param_1 + 0xc) == 0x12) {
      iVar2 = *(int *)(param_1 + 8);
      if ((iVar2 == 6) || (iVar2 == 7)) goto switchD_007659d7_caseD_0;
      if (iVar2 == 0x13b) {
        return CONCAT31(uVar5,1);
      }
    }
    break;
  case 0x11:
    if (*(int *)(param_1 + 8) == 0x161) {
      if (*(int *)(param_1 + 0xc) == 6) goto switchD_007659d7_caseD_0;
      if (*(int *)(param_1 + 0xc) == 7) {
        return CONCAT31(uVar5,1);
      }
    }
    break;
  case 0x13:
    iVar2 = *(int *)(param_1 + 0xc);
    if (((iVar2 == 8) || (iVar2 == 0x10)) || (uVar4 = iVar2 - 0x11, uVar4 == 0)) {
      iVar2 = *(int *)(param_1 + 8);
      uVar3 = 0;
      if ((iVar2 != 0) && (iVar2 != 10)) {
        return (uint)(iVar2 == 0x16);
      }
      goto switchD_007659d7_caseD_0;
    }
  }
switchD_007656c0_default:
  return uVar4 & 0xffffff00;
}


