// FUN_004513d0 @ 4513d0 size=11620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004513d0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int local_10;
  
  puVar11 = (undefined4 *)(param_1 + 0x119cc);
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0x3f800000;
    puVar11 = puVar11 + 1;
  }
  puVar11 = (undefined4 *)(param_1 + 0x11a14);
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0x3f800000;
    puVar11 = puVar11 + 1;
  }
  puVar11 = (undefined4 *)(param_1 + 0x11a2c);
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0x3f800000;
    puVar11 = puVar11 + 1;
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x11a84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11a88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11a8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11a90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11a94) = 0x3f800000;
  if (0 < DAT_0087769c) {
    iVar7 = 0x46a6;
    do {
      iVar3 = 0;
      do {
        if (iVar3 < 2) {
          *(undefined4 *)(param_1 + (iVar7 + iVar3) * 4) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_1 + (iVar7 + iVar3) * 4) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 6;
    } while (iVar6 < DAT_0087769c);
  }
  iVar6 = 0;
  if (0 < DAT_008776b0) {
    iVar7 = 0x49ee;
    do {
      iVar3 = 0;
      do {
        if (iVar3 < 2) {
          *(undefined4 *)(param_1 + (iVar7 + iVar3) * 4) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_1 + (iVar7 + iVar3) * 4) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 6);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 6;
    } while (iVar6 < DAT_008776b0);
  }
  local_10 = 0;
  puVar11 = (undefined4 *)(param_1 + 0x134d8);
  for (iVar6 = 0x1a4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  pfVar10 = (float *)(param_1 + 0x13b68);
  pfVar5 = pfVar10;
  for (iVar6 = 0x30; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x13c28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c30) = 0;
  *(undefined4 *)(param_1 + 0x13c34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c40) = 0;
  *(undefined4 *)(param_1 + 0x13c44) = 0;
  *(undefined4 *)(param_1 + 0x13c58) = 0;
  *(undefined4 *)(param_1 + 0x13c5c) = 0;
  *(undefined4 *)(param_1 + 0x13c64) = 0;
  *(undefined4 *)(param_1 + 81000) = 0;
  *(undefined4 *)(param_1 + 0x13c6c) = 0;
  *(undefined4 *)(param_1 + 0x13c70) = 0;
  *(undefined4 *)(param_1 + 0x13c38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c48) = 0xbe800000;
  *(undefined4 *)(param_1 + 0x13c4c) = 0xbe800000;
  *(undefined4 *)(param_1 + 0x13c50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c60) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c80) = 0x3f800000;
  do {
    iVar6 = FUN_00428ee0(param_1 + 0x24e + local_10 * 6);
    if (((iVar6 != 0) && (iVar6 != 8)) && (*(int *)(iVar6 + 0xb2) != 0)) {
      piVar8 = *(int **)(*(int *)(iVar6 + 0xb2) + 0x20);
      iVar6 = DAT_0087769c;
      iVar7 = DAT_008776b0;
      while (DAT_0087769c = iVar6, DAT_008776b0 = iVar7, piVar8 != (int *)0x0) {
        piVar1 = (int *)piVar8[2];
        iVar3 = *piVar8;
        fVar2 = *(float *)(iVar3 + 0x10);
        switch(*(undefined4 *)(iVar3 + 4)) {
        case 0:
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0:
            if (*(int *)(iVar3 + 0xc) == 9) {
              iVar6 = 9;
              pfVar5 = (float *)(param_1 + 0x119cc);
              do {
                iVar6 = iVar6 + -1;
                *pfVar5 = fVar2 + *pfVar5;
                pfVar5 = pfVar5 + 2;
              } while (iVar6 != 0);
            }
            else {
              iVar6 = 9;
              pfVar5 = (float *)(param_1 + 0x119d0);
              do {
                iVar6 = iVar6 + -1;
                *pfVar5 = fVar2 + *pfVar5;
                pfVar5 = pfVar5 + 2;
              } while (iVar6 != 0);
            }
          default:
            goto switchD_004515c8_default;
          case 8:
            iVar6 = 2;
            break;
          case 9:
            iVar6 = 3;
            break;
          case 10:
            iVar6 = 4;
            break;
          case 0xb:
            iVar6 = 5;
            break;
          case 0xc:
            iVar6 = 6;
            break;
          case 0xd:
            iVar6 = 7;
            break;
          case 0xe:
            iVar6 = 8;
            break;
          case 0x23:
            iVar6 = 0;
            break;
          case 0x28:
            iVar6 = 1;
          }
          if (*(int *)(iVar3 + 0xc) == 9) {
            *(float *)(param_1 + 0x119cc + iVar6 * 8) =
                 fVar2 + *(float *)(param_1 + 0x119cc + iVar6 * 8);
          }
          else {
            *(float *)(param_1 + 0x119d0 + iVar6 * 8) =
                 fVar2 + *(float *)(param_1 + 0x119d0 + iVar6 * 8);
          }
          break;
        case 1:
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0:
            iVar6 = 5;
            pfVar5 = (float *)(param_1 + 0x11a14);
            do {
              iVar6 = iVar6 + -1;
              *pfVar5 = fVar2 + *pfVar5;
              pfVar5 = pfVar5 + 1;
            } while (iVar6 != 0);
            break;
          case 0xf:
            *(float *)(param_1 + 0x11a14) = fVar2 + *(float *)(param_1 + 0x11a14);
            break;
          case 0x10:
            *(float *)(param_1 + 0x11a18) = fVar2 + *(float *)(param_1 + 0x11a18);
            break;
          case 0x11:
            *(float *)(param_1 + 0x11a1c) = fVar2 + *(float *)(param_1 + 0x11a1c);
            break;
          case 0x12:
            *(float *)(param_1 + 0x11a20) = fVar2 + *(float *)(param_1 + 0x11a20);
            break;
          case 0x13:
            *(float *)(param_1 + 0x11a24) = fVar2 + *(float *)(param_1 + 0x11a24);
          }
          break;
        case 2:
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0x14:
            *(float *)(param_1 + 0x11a84) = fVar2 + *(float *)(param_1 + 0x11a84);
            break;
          case 0x15:
            if (*(int *)(iVar3 + 0xc) == 7) {
              *(float *)(param_1 + 0x11a88) = fVar2 + *(float *)(param_1 + 0x11a88);
            }
            else {
              *(float *)(param_1 + 0x13c30) = fVar2 + *(float *)(param_1 + 0x13c30);
            }
            break;
          case 0x16:
            *(float *)(param_1 + 0x11a8c) = fVar2 + *(float *)(param_1 + 0x11a8c);
            break;
          case 0x17:
            *(float *)(param_1 + 0x11a90) = fVar2 + *(float *)(param_1 + 0x11a90);
            break;
          case 0x18:
            *(float *)(param_1 + 0x11a94) = fVar2 + *(float *)(param_1 + 0x11a94);
          }
          break;
        case 3:
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0:
            iVar6 = *(int *)(iVar3 + 0xc);
            if (iVar6 == 8) {
              iVar6 = 0xb;
              pfVar5 = (float *)(param_1 + 0x11a30);
              do {
                iVar6 = iVar6 + -1;
                pfVar5[-1] = fVar2 + pfVar5[-1];
                *pfVar5 = fVar2 + *pfVar5;
                pfVar5 = pfVar5 + 2;
              } while (iVar6 != 0);
            }
            else if (iVar6 == 9) {
              iVar6 = 0xb;
              pfVar5 = (float *)(param_1 + 0x11a2c);
              do {
                iVar6 = iVar6 + -1;
                *pfVar5 = fVar2 + *pfVar5;
                pfVar5 = pfVar5 + 2;
              } while (iVar6 != 0);
            }
            else if (iVar6 == 10) {
              iVar6 = 0xb;
              pfVar5 = (float *)(param_1 + 0x11a30);
              do {
                iVar6 = iVar6 + -1;
                *pfVar5 = fVar2 + *pfVar5;
                pfVar5 = pfVar5 + 2;
              } while (iVar6 != 0);
            }
          default:
            goto switchD_004515c8_default;
          case 0x19:
            iVar6 = 1;
            break;
          case 0x1a:
            iVar6 = 2;
            break;
          case 0x1b:
            iVar6 = 3;
            break;
          case 0x1c:
            iVar6 = 4;
            break;
          case 0x1d:
            iVar6 = 5;
            break;
          case 0x1e:
            iVar6 = 6;
            break;
          case 0x1f:
            iVar6 = 7;
            break;
          case 0x20:
            iVar6 = 8;
            break;
          case 0x21:
            iVar6 = 9;
            break;
          case 0x22:
            iVar6 = 10;
          }
          iVar7 = *(int *)(iVar3 + 0xc);
          if (iVar7 == 8) {
            *(float *)(param_1 + 0x11a2c + iVar6 * 8) =
                 fVar2 + *(float *)(param_1 + 0x11a2c + iVar6 * 8);
LAB_004518b9:
            *(float *)(param_1 + 0x11a30 + iVar6 * 8) =
                 fVar2 + *(float *)(param_1 + 0x11a30 + iVar6 * 8);
          }
          else if (iVar7 == 9) {
            *(float *)(param_1 + 0x11a2c + iVar6 * 8) =
                 fVar2 + *(float *)(param_1 + 0x11a2c + iVar6 * 8);
          }
          else if (iVar7 == 10) goto LAB_004518b9;
          break;
        case 4:
          switch(*(undefined4 *)(iVar3 + 0xc)) {
          case 8:
            switch(*(undefined4 *)(iVar3 + 8)) {
            case 0:
              iVar7 = 0;
              if (0 < iVar6) {
                pfVar5 = (float *)(param_1 + 0x11a9c);
                do {
                  iVar7 = iVar7 + 1;
                  pfVar5[-1] = fVar2 + pfVar5[-1];
                  *pfVar5 = fVar2 + *pfVar5;
                  pfVar5 = pfVar5 + 6;
                } while (iVar7 < DAT_0087769c);
              }
              goto switchD_004515c8_default;
            case 1:
              iVar7 = 0;
              if (0 < iVar6) {
                pfVar5 = (float *)(param_1 + 0x11a9c);
                piVar8 = &DAT_00dbd1a2;
                do {
                  if (*piVar8 < 0xc) {
                    pfVar5[-1] = fVar2 + pfVar5[-1];
                    *pfVar5 = fVar2 + *pfVar5;
                    iVar6 = DAT_0087769c;
                  }
                  iVar7 = iVar7 + 1;
                  piVar8 = piVar8 + 1;
                  pfVar5 = pfVar5 + 6;
                } while (iVar7 < iVar6);
              }
              goto switchD_004515c8_default;
            case 2:
              iVar7 = 0;
              if (0 < iVar6) {
                pfVar5 = (float *)(param_1 + 0x11a9c);
                piVar8 = &DAT_00dbd1a2;
                do {
                  if ((0x14 < *piVar8) && (*piVar8 != 0x8c)) {
                    pfVar5[-1] = fVar2 + pfVar5[-1];
                    *pfVar5 = fVar2 + *pfVar5;
                  }
                  iVar7 = iVar7 + 1;
                  piVar8 = piVar8 + 1;
                  pfVar5 = pfVar5 + 6;
                } while (iVar7 < DAT_0087769c);
              }
              goto switchD_004515c8_default;
            case 3:
              iVar7 = 0;
              if (0 < iVar6) {
                pfVar5 = (float *)(param_1 + 0x11a9c);
                piVar8 = &DAT_00dbd1a2;
                do {
                  iVar6 = *piVar8;
                  if ((0xb < iVar6) && ((iVar6 < 0x15 || (iVar6 == 0x8c)))) {
                    pfVar5[-1] = fVar2 + pfVar5[-1];
                    *pfVar5 = fVar2 + *pfVar5;
                  }
                  iVar7 = iVar7 + 1;
                  piVar8 = piVar8 + 1;
                  pfVar5 = pfVar5 + 6;
                } while (iVar7 < DAT_0087769c);
              }
            default:
              goto switchD_004515c8_default;
            case 0x23:
              iVar6 = 0;
              break;
            case 0x24:
              iVar6 = 1;
              break;
            case 0x25:
              iVar6 = 2;
              break;
            case 0x26:
              iVar6 = 3;
              break;
            case 0x27:
              iVar6 = 4;
              break;
            case 0x28:
              iVar6 = 5;
              break;
            case 0x29:
              iVar6 = 6;
              break;
            case 0x2a:
              iVar6 = 7;
              break;
            case 0x2b:
              iVar6 = 8;
              break;
            case 0x2c:
              iVar6 = 9;
              break;
            case 0x2d:
              iVar6 = 10;
              break;
            case 0x2e:
              iVar6 = 0xb;
              break;
            case 0x2f:
              iVar6 = 0xc;
              break;
            case 0x30:
              iVar6 = 0xd;
              break;
            case 0x31:
              iVar6 = 0xe;
              break;
            case 0x32:
              iVar6 = 0xf;
              break;
            case 0x33:
              iVar6 = 0x10;
              break;
            case 0x34:
              iVar6 = 0x11;
              break;
            case 0x35:
              iVar6 = 0x12;
              break;
            case 0x36:
              iVar6 = 0x13;
              break;
            case 0x37:
              iVar6 = 0x14;
              break;
            case 0x38:
              iVar6 = 0x15;
              break;
            case 0x39:
              iVar6 = 0x16;
              break;
            case 0x3a:
              iVar6 = 0x17;
              break;
            case 0x3b:
              iVar6 = 0x18;
              break;
            case 0x3c:
              iVar6 = 0x19;
              break;
            case 0x3d:
              iVar6 = 0x1a;
              break;
            case 0x3e:
              iVar6 = 0x1b;
              break;
            case 0x3f:
              iVar6 = 0x1c;
              break;
            case 0x40:
              iVar6 = 0x1d;
              break;
            case 0x41:
              iVar6 = 0x1e;
              break;
            case 0x42:
              iVar6 = 0x1f;
              break;
            case 0x43:
              iVar6 = 0x20;
              break;
            case 0x44:
              iVar6 = 0x21;
              break;
            case 0x45:
              iVar6 = 0x22;
              break;
            case 0x46:
              iVar6 = 0x23;
              break;
            case 0x47:
              iVar6 = 0x24;
              break;
            case 0x48:
              iVar6 = 0x25;
              break;
            case 0x49:
              iVar6 = 0x26;
              break;
            case 0x4a:
              iVar6 = 0x27;
              break;
            case 0x4b:
              iVar6 = 0x28;
              break;
            case 0x4c:
              iVar6 = 0x29;
              break;
            case 0x4d:
              iVar6 = 0x2a;
              break;
            case 0x4e:
              iVar6 = 0x2b;
              break;
            case 0x4f:
              iVar6 = 0x2c;
              break;
            case 0x50:
              iVar6 = 0x2d;
              break;
            case 0x51:
              iVar6 = 0x2e;
              break;
            case 0x52:
              iVar6 = 0x2f;
              break;
            case 0x53:
              iVar6 = 0x30;
              break;
            case 0x54:
              iVar6 = 0x31;
              break;
            case 0x55:
              iVar6 = 0x32;
              break;
            case 0x56:
              iVar6 = 0x33;
              break;
            case 0x57:
              iVar6 = 0x34;
              break;
            case 0x58:
              iVar6 = 0x35;
              break;
            case 0x59:
              iVar6 = 0x36;
              break;
            case 0x5a:
              iVar6 = 0x37;
              break;
            case 0x5b:
              iVar6 = 0x38;
              break;
            case 0x5c:
              iVar6 = 0x39;
              break;
            case 0x5d:
              iVar6 = 0x3a;
              break;
            case 0x5e:
              iVar6 = 0x3b;
              break;
            case 0x5f:
              iVar6 = 0x3c;
              break;
            case 0x60:
              iVar6 = 0x3d;
              break;
            case 0x61:
              iVar6 = 0x3e;
              break;
            case 0x62:
              iVar6 = 0x3f;
              break;
            case 99:
              iVar6 = 0x40;
              break;
            case 100:
              iVar6 = 0x41;
              break;
            case 0x65:
              iVar6 = 0x42;
              break;
            case 0x66:
              iVar6 = 0x43;
              break;
            case 0x67:
              iVar6 = 0x44;
              break;
            case 0x68:
              iVar6 = 0x45;
              break;
            case 0x69:
              iVar6 = 0x46;
              break;
            case 0x6a:
              iVar6 = 0x47;
              break;
            case 0x6b:
              iVar6 = 0x48;
              break;
            case 0x6c:
              iVar6 = 0x49;
              break;
            case 0x6d:
              iVar6 = 0x4a;
              break;
            case 0x6e:
              iVar6 = 0x4b;
              break;
            case 0x6f:
              iVar6 = 0x4c;
              break;
            case 0x70:
              iVar6 = 0x4d;
              break;
            case 0x71:
              iVar6 = 0x4e;
              break;
            case 0x72:
              iVar6 = 0x4f;
              break;
            case 0x73:
              iVar6 = 0x50;
              break;
            case 0x74:
              iVar6 = 0x51;
              break;
            case 0x75:
              iVar6 = 0x52;
              break;
            case 0x76:
              iVar6 = 0x53;
              break;
            case 0x77:
              iVar6 = 0x54;
              break;
            case 0x78:
              iVar6 = 0x55;
              break;
            case 0x79:
              iVar6 = 0x56;
              break;
            case 0x7a:
              iVar6 = 0x57;
              break;
            case 0x7b:
              iVar6 = 0x58;
              break;
            case 0x7c:
              iVar6 = 0x59;
              break;
            case 0x7d:
              iVar6 = 0x5a;
              break;
            case 0x7e:
              iVar6 = 0x5b;
              break;
            case 0x7f:
              iVar6 = 0x5c;
              break;
            case 0x80:
              iVar6 = 0x5d;
              break;
            case 0x81:
              iVar6 = 0x5e;
              break;
            case 0x82:
              iVar6 = 0x5f;
              break;
            case 0x83:
              iVar6 = 0x60;
              break;
            case 0x84:
              iVar6 = 0x61;
              break;
            case 0x85:
              iVar6 = 0x62;
              break;
            case 0x86:
              iVar6 = 99;
              break;
            case 0x87:
              iVar6 = 100;
              break;
            case 0x88:
              iVar6 = 0x65;
              break;
            case 0x89:
              iVar6 = 0x66;
              break;
            case 0x8a:
              iVar6 = 0x67;
              break;
            case 0x8b:
              iVar6 = 0x68;
              break;
            case 0x8c:
              iVar6 = 0x69;
              break;
            case 0x8d:
              iVar6 = 0x6a;
              break;
            case 0x8e:
              iVar6 = 0x6b;
              break;
            case 0x8f:
              iVar6 = 0x6c;
              break;
            case 0x90:
              iVar6 = 0x6d;
              break;
            case 0x91:
              iVar6 = 0x6e;
              break;
            case 0x92:
              iVar6 = 0x6f;
              break;
            case 0x93:
              iVar6 = 0x70;
              break;
            case 0x94:
              iVar6 = 0x71;
              break;
            case 0x95:
              iVar6 = 0x72;
              break;
            case 0x96:
              iVar6 = 0x73;
              break;
            case 0x97:
              iVar6 = 0x74;
              break;
            case 0x98:
              iVar6 = 0x75;
              break;
            case 0x99:
              iVar6 = 0x76;
              break;
            case 0x9a:
              iVar6 = 0x77;
              break;
            case 0x9b:
              iVar6 = 0x78;
              break;
            case 0x9c:
              iVar6 = 0x79;
              break;
            case 0x9d:
              iVar6 = 0x7a;
              break;
            case 0x9e:
              iVar6 = 0x7b;
              break;
            case 0x9f:
              iVar6 = 0x7c;
              break;
            case 0xa0:
              iVar6 = 0x7d;
              break;
            case 0xa1:
              iVar6 = 0x7e;
              break;
            case 0xa2:
              iVar6 = 0x7f;
              break;
            case 0xa3:
              iVar6 = 0x80;
              break;
            case 0xa4:
              iVar6 = 0x81;
              break;
            case 0xa5:
              iVar6 = 0x82;
              break;
            case 0xa6:
              iVar6 = 0x83;
              break;
            case 0xa7:
              iVar6 = 0x84;
              break;
            case 0xa8:
              iVar6 = 0x85;
              break;
            case 0xa9:
              iVar6 = 0x86;
              break;
            case 0xaa:
              iVar6 = 0x87;
              break;
            case 0xab:
              iVar6 = 0x88;
              break;
            case 0xac:
              iVar6 = 0x89;
              break;
            case 0xad:
              iVar6 = 0x8a;
              break;
            case 0xae:
              iVar6 = 0x8b;
            }
            iVar7 = param_1 + iVar6 * 0x18;
            *(float *)(iVar7 + 0x11a98) = fVar2 + *(float *)(param_1 + 0x11a98 + iVar6 * 0x18);
            *(float *)(iVar7 + 0x11a9c) = fVar2 + *(float *)(iVar7 + 0x11a9c);
            goto switchD_004515c8_default;
          case 9:
            iVar7 = 0;
            break;
          case 10:
            iVar7 = 1;
            break;
          case 0xb:
            iVar7 = 2;
            break;
          case 0xc:
            iVar7 = 3;
            break;
          case 0xd:
            iVar7 = 4;
            break;
          case 0xe:
            iVar7 = 5;
            break;
          case 0xf:
            *(float *)(param_1 + 0x13c2c) = fVar2 + *(float *)(param_1 + 0x13c2c);
          default:
            goto switchD_004515c8_default;
          }
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0:
            iVar3 = 0;
            if (0 < iVar6) {
              pfVar5 = (float *)(param_1 + 0x11a98 + iVar7 * 4);
              do {
                iVar3 = iVar3 + 1;
                *pfVar5 = fVar2 + *pfVar5;
                pfVar5 = pfVar5 + 6;
              } while (iVar3 < DAT_0087769c);
            }
            goto switchD_004515c8_default;
          case 1:
            iVar3 = 0;
            if (0 < iVar6) {
              piVar8 = &DAT_00dbd1a2;
              pfVar5 = (float *)(param_1 + 0x11a98 + iVar7 * 4);
              do {
                if (*piVar8 < 0xc) {
                  *pfVar5 = fVar2 + *pfVar5;
                }
                iVar3 = iVar3 + 1;
                piVar8 = piVar8 + 1;
                pfVar5 = pfVar5 + 6;
              } while (iVar3 < DAT_0087769c);
            }
            goto switchD_004515c8_default;
          case 2:
            iVar3 = 0;
            if (0 < iVar6) {
              piVar8 = &DAT_00dbd1a2;
              pfVar5 = (float *)(param_1 + 0x11a98 + iVar7 * 4);
              do {
                if ((0x14 < *piVar8) && (*piVar8 != 0x8c)) {
                  *pfVar5 = fVar2 + *pfVar5;
                }
                iVar3 = iVar3 + 1;
                piVar8 = piVar8 + 1;
                pfVar5 = pfVar5 + 6;
              } while (iVar3 < DAT_0087769c);
            }
            goto switchD_004515c8_default;
          case 3:
            iVar3 = 0;
            if (0 < iVar6) {
              piVar8 = &DAT_00dbd1a2;
              pfVar5 = (float *)(param_1 + 0x11a98 + iVar7 * 4);
              do {
                iVar6 = *piVar8;
                if ((0xb < iVar6) && ((iVar6 < 0x15 || (iVar6 == 0x8c)))) {
                  *pfVar5 = fVar2 + *pfVar5;
                }
                iVar3 = iVar3 + 1;
                piVar8 = piVar8 + 1;
                pfVar5 = pfVar5 + 6;
              } while (iVar3 < DAT_0087769c);
            }
          default:
            goto switchD_004515c8_default;
          case 0x23:
            iVar6 = 0;
            break;
          case 0x24:
            iVar6 = 1;
            break;
          case 0x25:
            iVar6 = 2;
            break;
          case 0x26:
            iVar6 = 3;
            break;
          case 0x27:
            iVar6 = 4;
            break;
          case 0x28:
            iVar6 = 5;
            break;
          case 0x29:
            iVar6 = 6;
            break;
          case 0x2a:
            iVar6 = 7;
            break;
          case 0x2b:
            iVar6 = 8;
            break;
          case 0x2c:
            iVar6 = 9;
            break;
          case 0x2d:
            iVar6 = 10;
            break;
          case 0x2e:
            iVar6 = 0xb;
            break;
          case 0x2f:
            iVar6 = 0xc;
            break;
          case 0x30:
            iVar6 = 0xd;
            break;
          case 0x31:
            iVar6 = 0xe;
            break;
          case 0x32:
            iVar6 = 0xf;
            break;
          case 0x33:
            iVar6 = 0x10;
            break;
          case 0x34:
            iVar6 = 0x11;
            break;
          case 0x35:
            iVar6 = 0x12;
            break;
          case 0x36:
            iVar6 = 0x13;
            break;
          case 0x37:
            iVar6 = 0x14;
            break;
          case 0x38:
            iVar6 = 0x15;
            break;
          case 0x39:
            iVar6 = 0x16;
            break;
          case 0x3a:
            iVar6 = 0x17;
            break;
          case 0x3b:
            iVar6 = 0x18;
            break;
          case 0x3c:
            iVar6 = 0x19;
            break;
          case 0x3d:
            iVar6 = 0x1a;
            break;
          case 0x3e:
            iVar6 = 0x1b;
            break;
          case 0x3f:
            iVar6 = 0x1c;
            break;
          case 0x40:
            iVar6 = 0x1d;
            break;
          case 0x41:
            iVar6 = 0x1e;
            break;
          case 0x42:
            iVar6 = 0x1f;
            break;
          case 0x43:
            iVar6 = 0x20;
            break;
          case 0x44:
            iVar6 = 0x21;
            break;
          case 0x45:
            iVar6 = 0x22;
            break;
          case 0x46:
            iVar6 = 0x23;
            break;
          case 0x47:
            iVar6 = 0x24;
            break;
          case 0x48:
            iVar6 = 0x25;
            break;
          case 0x49:
            iVar6 = 0x26;
            break;
          case 0x4a:
            iVar6 = 0x27;
            break;
          case 0x4b:
            iVar6 = 0x28;
            break;
          case 0x4c:
            iVar6 = 0x29;
            break;
          case 0x4d:
            iVar6 = 0x2a;
            break;
          case 0x4e:
            iVar6 = 0x2b;
            break;
          case 0x4f:
            iVar6 = 0x2c;
            break;
          case 0x50:
            iVar6 = 0x2d;
            break;
          case 0x51:
            iVar6 = 0x2e;
            break;
          case 0x52:
            iVar6 = 0x2f;
            break;
          case 0x53:
            iVar6 = 0x30;
            break;
          case 0x54:
            iVar6 = 0x31;
            break;
          case 0x55:
            iVar6 = 0x32;
            break;
          case 0x56:
            iVar6 = 0x33;
            break;
          case 0x57:
            iVar6 = 0x34;
            break;
          case 0x58:
            iVar6 = 0x35;
            break;
          case 0x59:
            iVar6 = 0x36;
            break;
          case 0x5a:
            iVar6 = 0x37;
            break;
          case 0x5b:
            iVar6 = 0x38;
            break;
          case 0x5c:
            iVar6 = 0x39;
            break;
          case 0x5d:
            iVar6 = 0x3a;
            break;
          case 0x5e:
            iVar6 = 0x3b;
            break;
          case 0x5f:
            iVar6 = 0x3c;
            break;
          case 0x60:
            iVar6 = 0x3d;
            break;
          case 0x61:
            iVar6 = 0x3e;
            break;
          case 0x62:
            iVar6 = 0x3f;
            break;
          case 99:
            iVar6 = 0x40;
            break;
          case 100:
            iVar6 = 0x41;
            break;
          case 0x65:
            iVar6 = 0x42;
            break;
          case 0x66:
            iVar6 = 0x43;
            break;
          case 0x67:
            iVar6 = 0x44;
            break;
          case 0x68:
            iVar6 = 0x45;
            break;
          case 0x69:
            iVar6 = 0x46;
            break;
          case 0x6a:
            iVar6 = 0x47;
            break;
          case 0x6b:
            iVar6 = 0x48;
            break;
          case 0x6c:
            iVar6 = 0x49;
            break;
          case 0x6d:
            iVar6 = 0x4a;
            break;
          case 0x6e:
            iVar6 = 0x4b;
            break;
          case 0x6f:
            iVar6 = 0x4c;
            break;
          case 0x70:
            iVar6 = 0x4d;
            break;
          case 0x71:
            iVar6 = 0x4e;
            break;
          case 0x72:
            iVar6 = 0x4f;
            break;
          case 0x73:
            iVar6 = 0x50;
            break;
          case 0x74:
            iVar6 = 0x51;
            break;
          case 0x75:
            iVar6 = 0x52;
            break;
          case 0x76:
            iVar6 = 0x53;
            break;
          case 0x77:
            iVar6 = 0x54;
            break;
          case 0x78:
            iVar6 = 0x55;
            break;
          case 0x79:
            iVar6 = 0x56;
            break;
          case 0x7a:
            iVar6 = 0x57;
            break;
          case 0x7b:
            iVar6 = 0x58;
            break;
          case 0x7c:
            iVar6 = 0x59;
            break;
          case 0x7d:
            iVar6 = 0x5a;
            break;
          case 0x7e:
            iVar6 = 0x5b;
            break;
          case 0x7f:
            iVar6 = 0x5c;
            break;
          case 0x80:
            iVar6 = 0x5d;
            break;
          case 0x81:
            iVar6 = 0x5e;
            break;
          case 0x82:
            iVar6 = 0x5f;
            break;
          case 0x83:
            iVar6 = 0x60;
            break;
          case 0x84:
            iVar6 = 0x61;
            break;
          case 0x85:
            iVar6 = 0x62;
            break;
          case 0x86:
            iVar6 = 99;
            break;
          case 0x87:
            iVar6 = 100;
            break;
          case 0x88:
            iVar6 = 0x65;
            break;
          case 0x89:
            iVar6 = 0x66;
            break;
          case 0x8a:
            iVar6 = 0x67;
            break;
          case 0x8b:
            iVar6 = 0x68;
            break;
          case 0x8c:
            iVar6 = 0x69;
            break;
          case 0x8d:
            iVar6 = 0x6a;
            break;
          case 0x8e:
            iVar6 = 0x6b;
            break;
          case 0x8f:
            iVar6 = 0x6c;
            break;
          case 0x90:
            iVar6 = 0x6d;
            break;
          case 0x91:
            iVar6 = 0x6e;
            break;
          case 0x92:
            iVar6 = 0x6f;
            break;
          case 0x93:
            iVar6 = 0x70;
            break;
          case 0x94:
            iVar6 = 0x71;
            break;
          case 0x95:
            iVar6 = 0x72;
            break;
          case 0x96:
            iVar6 = 0x73;
            break;
          case 0x97:
            iVar6 = 0x74;
            break;
          case 0x98:
            iVar6 = 0x75;
            break;
          case 0x99:
            iVar6 = 0x76;
            break;
          case 0x9a:
            iVar6 = 0x77;
            break;
          case 0x9b:
            iVar6 = 0x78;
            break;
          case 0x9c:
            iVar6 = 0x79;
            break;
          case 0x9d:
            iVar6 = 0x7a;
            break;
          case 0x9e:
            iVar6 = 0x7b;
            break;
          case 0x9f:
            iVar6 = 0x7c;
            break;
          case 0xa0:
            iVar6 = 0x7d;
            break;
          case 0xa1:
            iVar6 = 0x7e;
            break;
          case 0xa2:
            iVar6 = 0x7f;
            break;
          case 0xa3:
            iVar6 = 0x80;
            break;
          case 0xa4:
            iVar6 = 0x81;
            break;
          case 0xa5:
            iVar6 = 0x82;
            break;
          case 0xa6:
            iVar6 = 0x83;
            break;
          case 0xa7:
            iVar6 = 0x84;
            break;
          case 0xa8:
            iVar6 = 0x85;
            break;
          case 0xa9:
            iVar6 = 0x86;
            break;
          case 0xaa:
            iVar6 = 0x87;
            break;
          case 0xab:
            iVar6 = 0x88;
            break;
          case 0xac:
            iVar6 = 0x89;
            break;
          case 0xad:
            iVar6 = 0x8a;
            break;
          case 0xae:
            iVar6 = 0x8b;
          }
          iVar7 = iVar7 + iVar6 * 6;
          *(float *)(param_1 + 0x11a98 + iVar7 * 4) =
               fVar2 + *(float *)(param_1 + 0x11a98 + iVar7 * 4);
          break;
        case 5:
          switch(*(undefined4 *)(iVar3 + 0xc)) {
          case 8:
            if (0x139 < *(uint *)(iVar3 + 8)) goto switchD_004515c8_default;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((&DAT_00454a68)[*(uint *)(iVar3 + 8)]) {
            case 0:
              iVar6 = 1;
              if (1 < iVar7) {
                pfVar5 = (float *)(param_1 + 0x127d4);
                do {
                  iVar6 = iVar6 + 1;
                  pfVar5[-1] = fVar2 + pfVar5[-1];
                  *pfVar5 = fVar2 + *pfVar5;
                  pfVar5 = pfVar5 + 6;
                } while (iVar6 < DAT_008776b0);
              }
              goto switchD_004515c8_default;
            case 1:
              iVar6 = 1;
              if (1 < iVar7) {
                pfVar5 = (float *)(param_1 + 0x127d4);
                piVar8 = &DAT_00dbf99e;
                do {
                  if (*(int *)(*piVar8 + 0x18) == 0) {
                    pfVar5[-1] = fVar2 + pfVar5[-1];
                    *pfVar5 = fVar2 + *pfVar5;
                    iVar7 = DAT_008776b0;
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 1;
                  pfVar5 = pfVar5 + 6;
                } while (iVar6 < iVar7);
              }
              goto switchD_004515c8_default;
            case 2:
              iVar6 = 1;
              if (1 < iVar7) {
                pfVar5 = (float *)(param_1 + 0x127d4);
                piVar8 = &DAT_00dbf99e;
                do {
                  if (*(int *)(*piVar8 + 0x18) == 2) {
                    pfVar5[-1] = fVar2 + pfVar5[-1];
                    *pfVar5 = fVar2 + *pfVar5;
                    iVar7 = DAT_008776b0;
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 1;
                  pfVar5 = pfVar5 + 6;
                } while (iVar6 < iVar7);
              }
              goto switchD_004515c8_default;
            case 3:
              iVar6 = 1;
              if (1 < iVar7) {
                pfVar5 = (float *)(param_1 + 0x127d4);
                piVar8 = &DAT_00dbf99e;
                do {
                  if (*(int *)(*piVar8 + 0x18) == 1) {
                    pfVar5[-1] = fVar2 + pfVar5[-1];
                    *pfVar5 = fVar2 + *pfVar5;
                    iVar7 = DAT_008776b0;
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 1;
                  pfVar5 = pfVar5 + 6;
                } while (iVar6 < iVar7);
              }
              goto switchD_004515c8_default;
            case 4:
              iVar6 = 1;
              break;
            case 5:
              iVar6 = 2;
              break;
            case 6:
              iVar6 = 3;
              break;
            case 7:
              iVar6 = 4;
              break;
            case 8:
              iVar6 = 5;
              break;
            case 9:
              iVar6 = 6;
              break;
            case 10:
              iVar6 = 7;
              break;
            case 0xb:
              iVar6 = 8;
              break;
            case 0xc:
              iVar6 = 9;
              break;
            case 0xd:
              iVar6 = 10;
              break;
            case 0xe:
              iVar6 = 0xb;
              break;
            case 0xf:
              iVar6 = 0xc;
              break;
            case 0x10:
              iVar6 = 0xd;
              break;
            case 0x11:
              iVar6 = 0xe;
              break;
            case 0x12:
              iVar6 = 0xf;
              break;
            case 0x13:
              iVar6 = 0x10;
              break;
            case 0x14:
              iVar6 = 0x11;
              break;
            case 0x15:
              iVar6 = 0x12;
              break;
            case 0x16:
              iVar6 = 0x13;
              break;
            case 0x17:
              iVar6 = 0x14;
              break;
            case 0x18:
              iVar6 = 0x15;
              break;
            case 0x19:
              iVar6 = 0x16;
              break;
            case 0x1a:
              iVar6 = 0x17;
              break;
            case 0x1b:
              iVar6 = 0x18;
              break;
            case 0x1c:
              iVar6 = 0x19;
              break;
            case 0x1d:
              iVar6 = 0x1a;
              break;
            case 0x1e:
              iVar6 = 0x1b;
              break;
            case 0x1f:
              iVar6 = 0x1c;
              break;
            case 0x20:
              iVar6 = 0x1d;
              break;
            case 0x21:
              iVar6 = 0x1e;
              break;
            case 0x22:
              iVar6 = 0x1f;
              break;
            case 0x23:
              iVar6 = 0x20;
              break;
            case 0x24:
              iVar6 = 0x21;
              break;
            case 0x25:
              iVar6 = 0x22;
              break;
            case 0x26:
              iVar6 = 0x23;
              break;
            case 0x27:
              iVar6 = 0x24;
              break;
            case 0x28:
              iVar6 = 0x25;
              break;
            case 0x29:
              iVar6 = 0x26;
              break;
            case 0x2a:
              iVar6 = 0x27;
              break;
            case 0x2b:
              iVar6 = 0x28;
              break;
            case 0x2c:
              iVar6 = 0x29;
              break;
            case 0x2d:
              iVar6 = 0x2a;
              break;
            case 0x2e:
              iVar6 = 0x2b;
              break;
            case 0x2f:
              iVar6 = 0x2c;
              break;
            case 0x30:
              iVar6 = 0x2d;
              break;
            case 0x31:
              iVar6 = 0x2e;
              break;
            case 0x32:
              iVar6 = 0x2f;
              break;
            case 0x33:
              iVar6 = 0x30;
              break;
            case 0x34:
              iVar6 = 0x31;
              break;
            case 0x35:
              iVar6 = 0x32;
              break;
            case 0x36:
              iVar6 = 0x33;
              break;
            case 0x37:
              iVar6 = 0x34;
              break;
            case 0x38:
              iVar6 = 0x35;
              break;
            case 0x39:
              iVar6 = 0x36;
              break;
            case 0x3a:
              iVar6 = 0x37;
              break;
            case 0x3b:
              iVar6 = 0x38;
              break;
            case 0x3c:
              iVar6 = 0x39;
              break;
            case 0x3d:
              iVar6 = 0x3a;
              break;
            case 0x3e:
              iVar6 = 0x3b;
              break;
            case 0x3f:
              iVar6 = 0x3c;
              break;
            case 0x40:
              iVar6 = 0x3d;
              break;
            case 0x41:
              iVar6 = 0x3e;
              break;
            case 0x42:
              iVar6 = 0x3f;
              break;
            case 0x43:
              iVar6 = 0x40;
              break;
            case 0x44:
              iVar6 = 0x41;
              break;
            case 0x45:
              iVar6 = 0x42;
              break;
            case 0x46:
              iVar6 = 0x43;
              break;
            case 0x47:
              iVar6 = 0x44;
              break;
            case 0x48:
              iVar6 = 0x45;
              break;
            case 0x49:
              iVar6 = 0x46;
              break;
            case 0x4a:
              iVar6 = 0x47;
              break;
            case 0x4b:
              iVar6 = 0x48;
              break;
            case 0x4c:
              iVar6 = 0x49;
              break;
            case 0x4d:
              iVar6 = 0x4a;
              break;
            case 0x4e:
              iVar6 = 0x4b;
              break;
            case 0x4f:
              iVar6 = 0x4c;
              break;
            case 0x50:
              iVar6 = 0x4d;
              break;
            case 0x51:
              iVar6 = 0x4e;
              break;
            case 0x52:
              iVar6 = 0x4f;
              break;
            case 0x53:
              iVar6 = 0x50;
              break;
            case 0x54:
              iVar6 = 0x51;
              break;
            case 0x55:
              iVar6 = 0x52;
              break;
            case 0x56:
              iVar6 = 0x53;
              break;
            case 0x57:
              iVar6 = 0x54;
              break;
            case 0x58:
              iVar6 = 0x55;
              break;
            case 0x59:
              iVar6 = 0x56;
              break;
            case 0x5a:
              iVar6 = 0x57;
              break;
            case 0x5b:
              iVar6 = 0x58;
              break;
            case 0x5c:
              iVar6 = 0x59;
              break;
            case 0x5d:
              iVar6 = 0x5a;
              break;
            case 0x5e:
              iVar6 = 0x5b;
              break;
            case 0x5f:
              iVar6 = 0x5c;
              break;
            case 0x60:
              iVar6 = 0x5d;
              break;
            case 0x61:
              iVar6 = 0x5e;
              break;
            case 0x62:
              iVar6 = 0x5f;
              break;
            case 99:
              iVar6 = 0x60;
              break;
            case 100:
              iVar6 = 0x61;
              break;
            case 0x65:
              iVar6 = 0x62;
              break;
            case 0x66:
              iVar6 = 99;
              break;
            case 0x67:
              iVar6 = 100;
              break;
            case 0x68:
              iVar6 = 0x65;
              break;
            case 0x69:
              iVar6 = 0x66;
              break;
            case 0x6a:
              iVar6 = 0x67;
              break;
            case 0x6b:
              iVar6 = 0x68;
              break;
            case 0x6c:
              iVar6 = 0x69;
              break;
            case 0x6d:
              iVar6 = 0x6a;
              break;
            case 0x6e:
              iVar6 = 0x6b;
              break;
            case 0x6f:
              iVar6 = 0x6c;
              break;
            case 0x70:
              iVar6 = 0x6d;
              break;
            case 0x71:
              iVar6 = 0x6e;
              break;
            case 0x72:
              iVar6 = 0x6f;
              break;
            case 0x73:
              iVar6 = 0x70;
              break;
            case 0x74:
              iVar6 = 0x71;
              break;
            case 0x75:
              iVar6 = 0x72;
              break;
            case 0x76:
              iVar6 = 0x73;
              break;
            case 0x77:
              iVar6 = 0x74;
              break;
            case 0x78:
              iVar6 = 0x75;
              break;
            case 0x79:
              iVar6 = 0x76;
              break;
            case 0x7a:
              iVar6 = 0x77;
              break;
            case 0x7b:
              iVar6 = 0x78;
              break;
            case 0x7c:
              iVar6 = 0x79;
              break;
            case 0x7d:
              iVar6 = 0x7a;
              break;
            case 0x7e:
              iVar6 = 0x7b;
              break;
            case 0x7f:
              iVar6 = 0x7c;
              break;
            case 0x80:
              iVar6 = 0x7d;
              break;
            case 0x81:
              iVar6 = 0x7e;
              break;
            case 0x82:
              iVar6 = 0x7f;
              break;
            case 0x83:
              iVar6 = 0x80;
              break;
            case 0x84:
              iVar6 = 0x81;
              break;
            case 0x85:
              iVar6 = 0x82;
              break;
            case 0x86:
              iVar6 = 0x83;
              break;
            case 0x87:
              iVar6 = 0x84;
              break;
            case 0x88:
              iVar6 = 0x85;
              break;
            case 0x89:
              iVar6 = 0x86;
              break;
            case 0x8a:
              iVar6 = 0x87;
              break;
            case 0x8b:
              iVar6 = 0x88;
              break;
            case 0x8c:
              iVar6 = 0x89;
              break;
            case 0x8d:
              iVar6 = 0x8a;
              break;
            case 0x8e:
              iVar6 = 0x8b;
              break;
            case 0x8f:
              goto switchD_004515c8_default;
            }
            iVar7 = param_1 + iVar6 * 0x18;
            *(float *)(iVar7 + 0x127b8) = fVar2 + *(float *)(param_1 + 0x127b8 + iVar6 * 0x18);
            *(float *)(iVar7 + 0x127bc) = fVar2 + *(float *)(iVar7 + 0x127bc);
            goto switchD_004515c8_default;
          case 9:
            iVar6 = 0;
            break;
          case 10:
            iVar6 = 1;
            break;
          case 0xb:
            iVar6 = 2;
            break;
          case 0xc:
            iVar6 = 3;
            break;
          case 0xd:
            iVar6 = 4;
            break;
          case 0xe:
            iVar6 = 5;
            break;
          default:
            goto switchD_004515c8_default;
          }
          if (0x139 < *(uint *)(iVar3 + 8)) break;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((&DAT_00454de4)[*(uint *)(iVar3 + 8)]) {
          case 0:
            iVar3 = 1;
            if (1 < iVar7) {
              pfVar5 = (float *)(param_1 + 0x127d0 + iVar6 * 4);
              do {
                iVar3 = iVar3 + 1;
                *pfVar5 = fVar2 + *pfVar5;
                pfVar5 = pfVar5 + 6;
              } while (iVar3 < DAT_008776b0);
            }
            goto switchD_004515c8_default;
          case 1:
            iVar3 = 1;
            if (1 < iVar7) {
              piVar8 = &DAT_00dbf99e;
              pfVar5 = (float *)(param_1 + 0x127d0 + iVar6 * 4);
              do {
                if (*(int *)(*piVar8 + 0x18) == 0) {
                  *pfVar5 = fVar2 + *pfVar5;
                  iVar7 = DAT_008776b0;
                }
                iVar3 = iVar3 + 1;
                piVar8 = piVar8 + 1;
                pfVar5 = pfVar5 + 6;
              } while (iVar3 < iVar7);
            }
            goto switchD_004515c8_default;
          case 2:
            iVar3 = 1;
            if (1 < iVar7) {
              piVar8 = &DAT_00dbf99e;
              pfVar5 = (float *)(param_1 + 0x127d0 + iVar6 * 4);
              do {
                if (*(int *)(*piVar8 + 0x18) == 2) {
                  *pfVar5 = fVar2 + *pfVar5;
                  iVar7 = DAT_008776b0;
                }
                iVar3 = iVar3 + 1;
                piVar8 = piVar8 + 1;
                pfVar5 = pfVar5 + 6;
              } while (iVar3 < iVar7);
            }
            goto switchD_004515c8_default;
          case 3:
            iVar3 = 1;
            if (1 < iVar7) {
              piVar8 = &DAT_00dbf99e;
              do {
                if (*(int *)(*piVar8 + 0x18) == 1) {
                  *(float *)(param_1 + 0x12920 + iVar6 * 4) =
                       fVar2 + *(float *)(param_1 + 0x12920 + iVar6 * 4);
                  iVar7 = DAT_008776b0;
                }
                iVar3 = iVar3 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar3 < iVar7);
            }
            goto switchD_004515c8_default;
          case 4:
            iVar7 = 1;
            break;
          case 5:
            iVar7 = 2;
            break;
          case 6:
            iVar7 = 3;
            break;
          case 7:
            iVar7 = 4;
            break;
          case 8:
            iVar7 = 5;
            break;
          case 9:
            iVar7 = 6;
            break;
          case 10:
            iVar7 = 7;
            break;
          case 0xb:
            iVar7 = 8;
            break;
          case 0xc:
            iVar7 = 9;
            break;
          case 0xd:
            iVar7 = 10;
            break;
          case 0xe:
            iVar7 = 0xb;
            break;
          case 0xf:
            iVar7 = 0xc;
            break;
          case 0x10:
            iVar7 = 0xd;
            break;
          case 0x11:
            iVar7 = 0xe;
            break;
          case 0x12:
            iVar7 = 0xf;
            break;
          case 0x13:
            iVar7 = 0x10;
            break;
          case 0x14:
            iVar7 = 0x11;
            break;
          case 0x15:
            iVar7 = 0x12;
            break;
          case 0x16:
            iVar7 = 0x13;
            break;
          case 0x17:
            iVar7 = 0x14;
            break;
          case 0x18:
            iVar7 = 0x15;
            break;
          case 0x19:
            iVar7 = 0x16;
            break;
          case 0x1a:
            iVar7 = 0x17;
            break;
          case 0x1b:
            iVar7 = 0x18;
            break;
          case 0x1c:
            iVar7 = 0x19;
            break;
          case 0x1d:
            iVar7 = 0x1a;
            break;
          case 0x1e:
            iVar7 = 0x1b;
            break;
          case 0x1f:
            iVar7 = 0x1c;
            break;
          case 0x20:
            iVar7 = 0x1d;
            break;
          case 0x21:
            iVar7 = 0x1e;
            break;
          case 0x22:
            iVar7 = 0x1f;
            break;
          case 0x23:
            iVar7 = 0x20;
            break;
          case 0x24:
            iVar7 = 0x21;
            break;
          case 0x25:
            iVar7 = 0x22;
            break;
          case 0x26:
            iVar7 = 0x23;
            break;
          case 0x27:
            iVar7 = 0x24;
            break;
          case 0x28:
            iVar7 = 0x25;
            break;
          case 0x29:
            iVar7 = 0x26;
            break;
          case 0x2a:
            iVar7 = 0x27;
            break;
          case 0x2b:
            iVar7 = 0x28;
            break;
          case 0x2c:
            iVar7 = 0x29;
            break;
          case 0x2d:
            iVar7 = 0x2a;
            break;
          case 0x2e:
            iVar7 = 0x2b;
            break;
          case 0x2f:
            iVar7 = 0x2c;
            break;
          case 0x30:
            iVar7 = 0x2d;
            break;
          case 0x31:
            iVar7 = 0x2e;
            break;
          case 0x32:
            iVar7 = 0x2f;
            break;
          case 0x33:
            iVar7 = 0x30;
            break;
          case 0x34:
            iVar7 = 0x31;
            break;
          case 0x35:
            iVar7 = 0x32;
            break;
          case 0x36:
            iVar7 = 0x33;
            break;
          case 0x37:
            iVar7 = 0x34;
            break;
          case 0x38:
            iVar7 = 0x35;
            break;
          case 0x39:
            iVar7 = 0x36;
            break;
          case 0x3a:
            iVar7 = 0x37;
            break;
          case 0x3b:
            iVar7 = 0x38;
            break;
          case 0x3c:
            iVar7 = 0x39;
            break;
          case 0x3d:
            iVar7 = 0x3a;
            break;
          case 0x3e:
            iVar7 = 0x3b;
            break;
          case 0x3f:
            iVar7 = 0x3c;
            break;
          case 0x40:
            iVar7 = 0x3d;
            break;
          case 0x41:
            iVar7 = 0x3e;
            break;
          case 0x42:
            iVar7 = 0x3f;
            break;
          case 0x43:
            iVar7 = 0x40;
            break;
          case 0x44:
            iVar7 = 0x41;
            break;
          case 0x45:
            iVar7 = 0x42;
            break;
          case 0x46:
            iVar7 = 0x43;
            break;
          case 0x47:
            iVar7 = 0x44;
            break;
          case 0x48:
            iVar7 = 0x45;
            break;
          case 0x49:
            iVar7 = 0x46;
            break;
          case 0x4a:
            iVar7 = 0x47;
            break;
          case 0x4b:
            iVar7 = 0x48;
            break;
          case 0x4c:
            iVar7 = 0x49;
            break;
          case 0x4d:
            iVar7 = 0x4a;
            break;
          case 0x4e:
            iVar7 = 0x4b;
            break;
          case 0x4f:
            iVar7 = 0x4c;
            break;
          case 0x50:
            iVar7 = 0x4d;
            break;
          case 0x51:
            iVar7 = 0x4e;
            break;
          case 0x52:
            iVar7 = 0x4f;
            break;
          case 0x53:
            iVar7 = 0x50;
            break;
          case 0x54:
            iVar7 = 0x51;
            break;
          case 0x55:
            iVar7 = 0x52;
            break;
          case 0x56:
            iVar7 = 0x53;
            break;
          case 0x57:
            iVar7 = 0x54;
            break;
          case 0x58:
            iVar7 = 0x55;
            break;
          case 0x59:
            iVar7 = 0x56;
            break;
          case 0x5a:
            iVar7 = 0x57;
            break;
          case 0x5b:
            iVar7 = 0x58;
            break;
          case 0x5c:
            iVar7 = 0x59;
            break;
          case 0x5d:
            iVar7 = 0x5a;
            break;
          case 0x5e:
            iVar7 = 0x5b;
            break;
          case 0x5f:
            iVar7 = 0x5c;
            break;
          case 0x60:
            iVar7 = 0x5d;
            break;
          case 0x61:
            iVar7 = 0x5e;
            break;
          case 0x62:
            iVar7 = 0x5f;
            break;
          case 99:
            iVar7 = 0x60;
            break;
          case 100:
            iVar7 = 0x61;
            break;
          case 0x65:
            iVar7 = 0x62;
            break;
          case 0x66:
            iVar7 = 99;
            break;
          case 0x67:
            iVar7 = 100;
            break;
          case 0x68:
            iVar7 = 0x65;
            break;
          case 0x69:
            iVar7 = 0x66;
            break;
          case 0x6a:
            iVar7 = 0x67;
            break;
          case 0x6b:
            iVar7 = 0x68;
            break;
          case 0x6c:
            iVar7 = 0x69;
            break;
          case 0x6d:
            iVar7 = 0x6a;
            break;
          case 0x6e:
            iVar7 = 0x6b;
            break;
          case 0x6f:
            iVar7 = 0x6c;
            break;
          case 0x70:
            iVar7 = 0x6d;
            break;
          case 0x71:
            iVar7 = 0x6e;
            break;
          case 0x72:
            iVar7 = 0x6f;
            break;
          case 0x73:
            iVar7 = 0x70;
            break;
          case 0x74:
            iVar7 = 0x71;
            break;
          case 0x75:
            iVar7 = 0x72;
            break;
          case 0x76:
            iVar7 = 0x73;
            break;
          case 0x77:
            iVar7 = 0x74;
            break;
          case 0x78:
            iVar7 = 0x75;
            break;
          case 0x79:
            iVar7 = 0x76;
            break;
          case 0x7a:
            iVar7 = 0x77;
            break;
          case 0x7b:
            iVar7 = 0x78;
            break;
          case 0x7c:
            iVar7 = 0x79;
            break;
          case 0x7d:
            iVar7 = 0x7a;
            break;
          case 0x7e:
            iVar7 = 0x7b;
            break;
          case 0x7f:
            iVar7 = 0x7c;
            break;
          case 0x80:
            iVar7 = 0x7d;
            break;
          case 0x81:
            iVar7 = 0x7e;
            break;
          case 0x82:
            iVar7 = 0x7f;
            break;
          case 0x83:
            iVar7 = 0x80;
            break;
          case 0x84:
            iVar7 = 0x81;
            break;
          case 0x85:
            iVar7 = 0x82;
            break;
          case 0x86:
            iVar7 = 0x83;
            break;
          case 0x87:
            iVar7 = 0x84;
            break;
          case 0x88:
            iVar7 = 0x85;
            break;
          case 0x89:
            iVar7 = 0x86;
            break;
          case 0x8a:
            iVar7 = 0x87;
            break;
          case 0x8b:
            iVar7 = 0x88;
            break;
          case 0x8c:
            iVar7 = 0x89;
            break;
          case 0x8d:
            iVar7 = 0x8a;
            break;
          case 0x8e:
            iVar7 = 0x8b;
            break;
          case 0x8f:
            goto switchD_004515c8_default;
          }
          iVar6 = iVar6 + iVar7 * 6;
          *(float *)(param_1 + 0x127b8 + iVar6 * 4) =
               fVar2 + *(float *)(param_1 + 0x127b8 + iVar6 * 4);
          break;
        case 6:
          switch(*(undefined4 *)(iVar3 + 0xc)) {
          case 0:
            iVar6 = 9;
            break;
          case 1:
            iVar6 = 10;
            break;
          case 2:
            iVar6 = 0xb;
            break;
          case 3:
            iVar6 = 0xe;
            break;
          case 4:
            iVar6 = 0xd;
            break;
          case 5:
            iVar6 = 0xc;
            break;
          default:
            goto switchD_004515c8_default;
          case 8:
            iVar6 = 8;
          }
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0x13a:
            iVar7 = 1;
            break;
          default:
            goto switchD_004515c8_default;
          case 0x141:
            iVar7 = 6;
            break;
          case 0x142:
            iVar7 = 8;
            break;
          case 0x145:
            iVar7 = 0xb;
            break;
          case 0x14a:
            iVar7 = 0x11;
            break;
          case 0x14b:
            iVar7 = 0x12;
            break;
          case 0x14c:
            iVar7 = 0x13;
            break;
          case 0x151:
            iVar7 = 0x18;
          }
          iVar6 = iVar6 + iVar7 * 0xf;
          *(float *)(param_1 + 0x134d8 + iVar6 * 4) =
               fVar2 + *(float *)(param_1 + 0x134d8 + iVar6 * 4);
          break;
        case 7:
          switch(*(undefined4 *)(iVar3 + 0xc)) {
          case 0:
            iVar6 = 1;
            break;
          case 1:
            iVar6 = 2;
            break;
          case 2:
            iVar6 = 3;
            break;
          case 3:
            iVar6 = 6;
            break;
          case 4:
            iVar6 = 5;
            break;
          case 5:
            iVar6 = 4;
            break;
          default:
            goto switchD_004515c8_default;
          case 7:
            iVar6 = 7;
            break;
          case 8:
            iVar6 = 0;
          }
          if (*(int *)(iVar3 + 8) == 0) {
            iVar7 = 0x1c;
            pfVar5 = (float *)(param_1 + 0x134d8 + iVar6 * 4);
            do {
              iVar7 = iVar7 + -1;
              *pfVar5 = fVar2 + *pfVar5;
              pfVar5 = pfVar5 + 0xf;
            } while (iVar7 != 0);
          }
          else {
            switch(*(int *)(iVar3 + 8)) {
            case 0x13b:
              iVar7 = 0;
              break;
            case 0x13c:
              iVar7 = 1;
              break;
            case 0x13d:
              iVar7 = 2;
              break;
            case 0x13e:
              iVar7 = 3;
              break;
            case 0x13f:
              iVar7 = 4;
              break;
            case 0x140:
              iVar7 = 5;
              break;
            case 0x141:
              iVar7 = 6;
              break;
            case 0x142:
              iVar7 = 8;
              break;
            case 0x143:
              iVar7 = 9;
              break;
            case 0x144:
              iVar7 = 10;
              break;
            case 0x145:
              iVar7 = 0xb;
              break;
            case 0x146:
              iVar7 = 0xc;
              break;
            case 0x147:
              iVar7 = 0xd;
              break;
            case 0x148:
              iVar7 = 0xe;
              break;
            case 0x149:
              iVar7 = 0xf;
              break;
            case 0x14a:
              iVar7 = 0x11;
              break;
            case 0x14b:
              iVar7 = 0x12;
              break;
            case 0x14c:
              iVar7 = 0x13;
              break;
            case 0x14d:
              iVar7 = 0x14;
              break;
            case 0x14e:
              iVar7 = 0x15;
              break;
            case 0x14f:
              iVar7 = 0x16;
              break;
            case 0x150:
              iVar7 = 0x17;
              break;
            case 0x151:
              iVar7 = 0x18;
              break;
            case 0x152:
              iVar7 = 0x19;
              break;
            case 0x153:
              iVar7 = 0x1a;
              break;
            case 0x154:
              iVar7 = 0x1b;
              break;
            default:
              goto switchD_004515c8_default;
            }
            iVar6 = iVar6 + iVar7 * 0xf;
            *(float *)(param_1 + 0x134d8 + iVar6 * 4) =
                 fVar2 + *(float *)(param_1 + 0x134d8 + iVar6 * 4);
          }
          break;
        case 8:
          uVar4 = 2;
          if (*(int *)(iVar3 + 0xc) == 7) {
            uVar4 = 3;
          }
          iVar6 = *(int *)(iVar3 + 8);
          if (iVar6 < 0x15a) {
            if (iVar6 == 0x159) {
LAB_0045368b:
              *(float *)(param_1 + 0x13ba8 + uVar4 * 4) =
                   fVar2 + *(float *)(param_1 + 0x13ba8 + uVar4 * 4);
            }
            else if (iVar6 < 0x157) {
              if (iVar6 == 0x156) {
LAB_00453637:
                *(float *)(param_1 + 0x13b78 + uVar4 * 4) =
                     fVar2 + *(float *)(param_1 + 0x13b78 + uVar4 * 4);
              }
              else if (iVar6 == 0) {
                iVar6 = 9;
                pfVar5 = (float *)(param_1 + 0x13b68 + uVar4 * 4);
                do {
                  iVar6 = iVar6 + -1;
                  *pfVar5 = fVar2 + *pfVar5;
                  pfVar5 = pfVar5 + 4;
                } while (iVar6 != 0);
              }
              else {
LAB_004535f4:
                if (iVar6 == 0x155) {
                  *(float *)(param_1 + 0x13b68 + uVar4 * 4) =
                       fVar2 + *(float *)(param_1 + 0x13b68 + uVar4 * 4);
                }
              }
            }
            else {
LAB_0045364e:
              if (iVar6 == 0x157) {
                *(float *)(param_1 + 0x13b88 + uVar4 * 4) =
                     fVar2 + *(float *)(param_1 + 0x13b88 + uVar4 * 4);
              }
              else if (iVar6 == 0x158) {
                *(float *)(param_1 + 0x13b98 + uVar4 * 4) =
                     fVar2 + *(float *)(param_1 + 0x13b98 + uVar4 * 4);
              }
            }
          }
          else {
            switch(iVar6) {
            case 0x15a:
switchD_004536b1_caseD_15a:
              *(float *)(param_1 + 0x13bb8 + uVar4 * 4) =
                   fVar2 + *(float *)(param_1 + 0x13bb8 + uVar4 * 4);
              break;
            case 0x15b:
switchD_004536b1_caseD_15b:
              *(float *)(param_1 + 0x13bc8 + uVar4 * 4) =
                   fVar2 + *(float *)(param_1 + 0x13bc8 + uVar4 * 4);
              break;
            case 0x15c:
switchD_004536b1_caseD_15c:
              *(float *)(param_1 + 0x13bd8 + uVar4 * 4) =
                   fVar2 + *(float *)(param_1 + 0x13bd8 + uVar4 * 4);
              break;
            case 0x15d:
switchD_004536b1_caseD_15d:
              *(float *)(param_1 + 0x13be8 + uVar4 * 4) =
                   fVar2 + *(float *)(param_1 + 0x13be8 + uVar4 * 4);
            }
          }
          break;
        case 9:
          uVar4 = (uint)(*(int *)(iVar3 + 0xc) == 7);
          iVar6 = *(int *)(iVar3 + 8);
          if (iVar6 < 0x15a) {
            if (iVar6 == 0x159) goto LAB_0045368b;
            if (0x156 < iVar6) goto LAB_0045364e;
            if (iVar6 == 0x156) goto LAB_00453637;
            if (iVar6 != 0) goto LAB_004535f4;
            iVar6 = 9;
            pfVar5 = (float *)(param_1 + 0x13b68 + uVar4 * 4);
            do {
              iVar6 = iVar6 + -1;
              *pfVar5 = fVar2 + *pfVar5;
              pfVar5 = pfVar5 + 4;
            } while (iVar6 != 0);
          }
          else {
            switch(iVar6) {
            case 0x15a:
              goto switchD_004536b1_caseD_15a;
            case 0x15b:
              goto switchD_004536b1_caseD_15b;
            case 0x15c:
              goto switchD_004536b1_caseD_15c;
            case 0x15d:
              goto switchD_004536b1_caseD_15d;
            }
          }
          break;
        case 10:
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0:
            *(float *)(param_1 + 81000) = fVar2 + *(float *)(param_1 + 81000);
            *(float *)(param_1 + 0x13c6c) = fVar2 + *(float *)(param_1 + 0x13c6c);
          case 0x15:
            *(float *)(param_1 + 0x13c70) = fVar2 + *(float *)(param_1 + 0x13c70);
            break;
          case 1:
            *(float *)(param_1 + 81000) = fVar2 + *(float *)(param_1 + 81000);
            break;
          case 2:
            *(float *)(param_1 + 0x13c6c) = fVar2 + *(float *)(param_1 + 0x13c6c);
          }
          break;
        case 0xb:
          iVar6 = *(int *)(iVar3 + 8);
          if (iVar6 == 0x161) {
            iVar6 = *(int *)(iVar3 + 0xc);
            if (iVar6 == 6) {
LAB_00453842:
              *(float *)(param_1 + 0x13c44) = fVar2 + *(float *)(param_1 + 0x13c44);
            }
            else if (iVar6 == 7) {
              *(float *)(param_1 + 0x13c40) = fVar2 + *(float *)(param_1 + 0x13c40);
            }
            else if (iVar6 == 8) {
              *(float *)(param_1 + 0x13c40) = fVar2 + *(float *)(param_1 + 0x13c40);
              goto LAB_00453842;
            }
          }
          else if (iVar6 < 0x160) {
            if (iVar6 == 0x15f) {
              *(float *)(param_1 + 0x13c08) = fVar2 + *(float *)(param_1 + 0x13c08);
            }
            else {
              if (iVar6 == 0) {
                *(float *)(param_1 + 0x13bf8) = fVar2 + *(float *)(param_1 + 0x13bf8);
                *(float *)(param_1 + 0x13c08) = fVar2 + *(float *)(param_1 + 0x13c08);
                goto LAB_0045380b;
              }
              if (iVar6 == 0x15e) {
                *(float *)(param_1 + 0x13bf8) = fVar2 + *(float *)(param_1 + 0x13bf8);
              }
            }
          }
          else if (iVar6 == 0x160) {
LAB_0045380b:
            *(float *)(param_1 + 0x13c18) = fVar2 + *(float *)(param_1 + 0x13c18);
          }
          break;
        case 0xc:
          *(float *)(param_1 + 0x13c28) = fVar2 + *(float *)(param_1 + 0x13c28);
          break;
        case 0xd:
          *(float *)(param_1 + 0x13c34) = fVar2 + *(float *)(param_1 + 0x13c34);
          break;
        case 0xe:
          *(float *)(param_1 + 0x13c38) = fVar2 + *(float *)(param_1 + 0x13c38);
          break;
        case 0xf:
          iVar6 = *(int *)(iVar3 + 8);
          if (iVar6 == 1) {
            *(float *)(param_1 + 0x13c5c) = fVar2 + *(float *)(param_1 + 0x13c5c);
          }
          else if (iVar6 == 2) {
            *(float *)(param_1 + 0x13c60) = fVar2 + *(float *)(param_1 + 0x13c60);
          }
          else if (iVar6 == 4) {
            *(float *)(param_1 + 0x13c64) = fVar2 + *(float *)(param_1 + 0x13c64);
          }
          break;
        case 0x10:
          iVar6 = *(int *)(iVar3 + 8);
          if (iVar6 == 6) {
            *(float *)(param_1 + 0x13c48) = fVar2 + *(float *)(param_1 + 0x13c48);
          }
          else if (iVar6 == 7) {
            *(float *)(param_1 + 0x13c4c) = fVar2 + *(float *)(param_1 + 0x13c4c);
          }
          else if (iVar6 == 0x13b) {
            *(float *)(param_1 + 0x13c50) = fVar2 + *(float *)(param_1 + 0x13c50);
          }
          break;
        case 0x11:
          if (*(int *)(iVar3 + 0xc) == 7) {
            *(float *)(param_1 + 0x13c54) = (fVar2 + _DAT_007e3374) * *(float *)(param_1 + 0x13c54);
          }
          else {
            *(float *)(param_1 + 0x13c58) = fVar2 + *(float *)(param_1 + 0x13c58);
          }
          break;
        case 0x12:
          *(float *)(param_1 + 0x13c3c) = fVar2 + *(float *)(param_1 + 0x13c3c);
          break;
        case 0x13:
          if (*(int *)(iVar3 + 8) == 10) {
            if (*(int *)(iVar3 + 0xc) == 0x10) goto LAB_004539c3;
            if (*(int *)(iVar3 + 0xc) != 0x11) {
LAB_00453a6d:
              *(float *)(param_1 + 0x13c74) = fVar2 + *(float *)(param_1 + 0x13c74);
            }
LAB_00453a7d:
            *(float *)(param_1 + 0x13c78) = fVar2 + *(float *)(param_1 + 0x13c78);
          }
          else {
            iVar6 = *(int *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 8) == 0x16) {
              if (iVar6 == 0x10) {
                *(float *)(param_1 + 0x13c7c) = fVar2 + *(float *)(param_1 + 0x13c7c);
              }
              else if (iVar6 == 0x11) {
                *(float *)(param_1 + 0x13c80) = fVar2 + *(float *)(param_1 + 0x13c80);
              }
              else {
                *(float *)(param_1 + 0x13c7c) = fVar2 + *(float *)(param_1 + 0x13c7c);
                *(float *)(param_1 + 0x13c80) = fVar2 + *(float *)(param_1 + 0x13c80);
              }
            }
            else {
              if (iVar6 != 0x10) {
                if (iVar6 != 0x11) {
                  *(float *)(param_1 + 0x13c7c) = fVar2 + *(float *)(param_1 + 0x13c7c);
                  *(float *)(param_1 + 0x13c80) = fVar2 + *(float *)(param_1 + 0x13c80);
                  goto LAB_00453a6d;
                }
                *(float *)(param_1 + 0x13c80) = fVar2 + *(float *)(param_1 + 0x13c80);
                goto LAB_00453a7d;
              }
              *(float *)(param_1 + 0x13c7c) = fVar2 + *(float *)(param_1 + 0x13c7c);
LAB_004539c3:
              *(float *)(param_1 + 0x13c74) = fVar2 + *(float *)(param_1 + 0x13c74);
            }
          }
        }
switchD_004515c8_default:
        piVar8 = piVar1;
        iVar6 = DAT_0087769c;
        iVar7 = DAT_008776b0;
      }
    }
    local_10 = local_10 + 1;
    if (9 < local_10) {
      pfVar5 = (float *)(param_1 + 0x119cc);
      iVar6 = 9;
      do {
        iVar7 = 2;
        do {
          if (_DAT_007e46cc <= *pfVar5) {
            if (_DAT_007e4090 < *pfVar5) {
              *pfVar5 = 10.0;
            }
          }
          else {
            *pfVar5 = 0.01;
          }
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pfVar5 = (float *)(param_1 + 0x11a14);
      iVar6 = 6;
      do {
        if (_DAT_007e46cc <= *pfVar5) {
          if (_DAT_007e4090 < *pfVar5) {
            *pfVar5 = 10.0;
          }
        }
        else {
          *pfVar5 = 0.01;
        }
        pfVar5 = pfVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pfVar5 = (float *)(param_1 + 0x11a2c);
      iVar6 = 0xb;
      do {
        iVar7 = 2;
        do {
          if (_DAT_007e46cc <= *pfVar5) {
            if (_DAT_007e4090 < *pfVar5) {
              *pfVar5 = 10.0;
            }
          }
          else {
            *pfVar5 = 0.01;
          }
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pfVar5 = (float *)(param_1 + 0x11a84);
      iVar6 = 5;
      do {
        if (_DAT_007e46cc <= *pfVar5) {
          if (_DAT_007e4090 < *pfVar5) {
            *pfVar5 = 10.0;
          }
        }
        else {
          *pfVar5 = 0.01;
        }
        pfVar5 = pfVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar6 = 0;
      if (0 < DAT_0087769c) {
        pfVar5 = (float *)(param_1 + 0x11a98);
        do {
          iVar7 = 2;
          pfVar9 = pfVar5;
          do {
            if (_DAT_007e46cc <= *pfVar9) {
              if (_DAT_007e4090 < *pfVar9) {
                *pfVar9 = 10.0;
              }
            }
            else {
              *pfVar9 = 0.01;
            }
            pfVar9 = pfVar9 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar6 = iVar6 + 1;
          pfVar5 = pfVar5 + 6;
        } while (iVar6 < DAT_0087769c);
      }
      iVar6 = 0;
      if (0 < DAT_008776b0) {
        pfVar5 = (float *)(param_1 + 0x127b8);
        do {
          iVar7 = 2;
          pfVar9 = pfVar5;
          do {
            if (_DAT_007e46cc <= *pfVar9) {
              if (_DAT_007e4090 < *pfVar9) {
                *pfVar9 = 10.0;
              }
            }
            else {
              *pfVar9 = 0.01;
            }
            pfVar9 = pfVar9 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar6 = iVar6 + 1;
          pfVar5 = pfVar5 + 6;
        } while (iVar6 < DAT_008776b0);
      }
      iVar6 = 0xc;
      do {
        iVar7 = 4;
        do {
          if (_DAT_007e5e7c <= *pfVar10) {
            if (_DAT_007e4088 < *pfVar10) {
              *pfVar10 = 100.0;
            }
          }
          else {
            *pfVar10 = -100.0;
          }
          pfVar10 = pfVar10 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c28)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c28)) {
          *(undefined4 *)(param_1 + 0x13c28) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c28) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c2c)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c2c)) {
          *(undefined4 *)(param_1 + 0x13c2c) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c2c) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c34)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c34)) {
          *(undefined4 *)(param_1 + 0x13c34) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c34) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c38)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c38)) {
          *(undefined4 *)(param_1 + 0x13c38) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c38) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c3c)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c3c)) {
          *(undefined4 *)(param_1 + 0x13c3c) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c3c) = 0x3c23d70a;
      }
      if (_DAT_007e3380 <= *(float *)(param_1 + 0x13c40)) {
        if (_DAT_007e3848 < *(float *)(param_1 + 0x13c40)) {
          *(undefined4 *)(param_1 + 0x13c40) = 0x40a00000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c40) = 0;
      }
      if (_DAT_007e3380 <= *(float *)(param_1 + 0x13c44)) {
        if (_DAT_007e3848 < *(float *)(param_1 + 0x13c44)) {
          *(undefined4 *)(param_1 + 0x13c44) = 0x40a00000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c44) = 0;
      }
      if (_DAT_007e5e7c <= *(float *)(param_1 + 0x13c48)) {
        if (_DAT_007e4088 < *(float *)(param_1 + 0x13c48)) {
          *(undefined4 *)(param_1 + 0x13c48) = 0x42c80000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c48) = 0xc2c80000;
      }
      if (_DAT_007e5e7c <= *(float *)(param_1 + 0x13c4c)) {
        if (_DAT_007e4088 < *(float *)(param_1 + 0x13c4c)) {
          *(undefined4 *)(param_1 + 0x13c4c) = 0x42c80000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c4c) = 0xc2c80000;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c50)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c50)) {
          *(undefined4 *)(param_1 + 0x13c50) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c50) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c54)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c54)) {
          *(undefined4 *)(param_1 + 0x13c54) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c54) = 0x3c23d70a;
      }
      if (_DAT_007e3380 <= *(float *)(param_1 + 0x13c58)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c58)) {
          *(undefined4 *)(param_1 + 0x13c58) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c58) = 0;
      }
      if (_DAT_007e5e7c <= *(float *)(param_1 + 0x13c5c)) {
        if (_DAT_007e4088 < *(float *)(param_1 + 0x13c5c)) {
          *(undefined4 *)(param_1 + 0x13c5c) = 0x42c80000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c5c) = 0xc2c80000;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c60)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c60)) {
          *(undefined4 *)(param_1 + 0x13c60) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c60) = 0x3c23d70a;
      }
      if (_DAT_007e5e7c <= *(float *)(param_1 + 0x13c64)) {
        if (_DAT_007e4088 < *(float *)(param_1 + 0x13c64)) {
          *(undefined4 *)(param_1 + 0x13c64) = 0x42c80000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c64) = 0xc2c80000;
      }
      if (_DAT_007e5e7c <= *(float *)(param_1 + 81000)) {
        if (_DAT_007e4088 < *(float *)(param_1 + 81000)) {
          *(undefined4 *)(param_1 + 81000) = 0x42c80000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 81000) = 0xc2c80000;
      }
      if (_DAT_007e5e7c <= *(float *)(param_1 + 0x13c6c)) {
        if (_DAT_007e4088 < *(float *)(param_1 + 0x13c6c)) {
          *(undefined4 *)(param_1 + 0x13c6c) = 0x42c80000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c6c) = 0xc2c80000;
      }
      if (_DAT_007e5e7c <= *(float *)(param_1 + 0x13c70)) {
        if (_DAT_007e4088 < *(float *)(param_1 + 0x13c70)) {
          *(undefined4 *)(param_1 + 0x13c70) = 0x42c80000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c70) = 0xc2c80000;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c74)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c74)) {
          *(undefined4 *)(param_1 + 0x13c74) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c74) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c78)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c78)) {
          *(undefined4 *)(param_1 + 0x13c78) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c78) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c7c)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c7c)) {
          *(undefined4 *)(param_1 + 0x13c7c) = 0x41200000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x13c7c) = 0x3c23d70a;
      }
      if (_DAT_007e46cc <= *(float *)(param_1 + 0x13c80)) {
        if (_DAT_007e4090 < *(float *)(param_1 + 0x13c80)) {
          *(undefined4 *)(param_1 + 0x13c80) = 0x41200000;
        }
        return;
      }
      *(undefined4 *)(param_1 + 0x13c80) = 0x3c23d70a;
      return;
    }
  } while( true );
}


