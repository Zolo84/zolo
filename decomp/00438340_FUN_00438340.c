// FUN_00438340 @ 438340 size=951

void __thiscall FUN_00438340(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint local_8;
  uint local_4;
  
  iVar6 = *(int *)(param_2 + 4);
  iVar7 = *(int *)(iVar6 + 0xe);
  if (iVar7 < 0xf) {
    if (iVar7 == 0xe) {
      return;
    }
    switch(iVar7) {
    case 3:
      if (0 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      }
      if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x40)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x2c);
        return;
      }
      break;
    case 4:
      uVar5 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x40) = 0;
      pcVar9 = *(char **)(param_1 + 0x18);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (*(int *)(param_1 + 0x2c) < (int)(~uVar5 - 1)) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c);
      do {
        iVar10 = *(int *)(param_1 + 0x40);
        iVar7 = 0;
        iVar8 = iVar10;
        if (iVar10 < *(int *)(param_1 + 0x2c)) {
          do {
            bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + iVar8);
            if (bVar2 == 0) break;
            local_8 = (uint)bVar2;
            iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + local_8 * 4);
            if (iVar4 == 0) {
              iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 4);
            }
            else {
              iVar4 = (int)*(short *)(iVar4 + 6);
            }
            iVar7 = iVar7 + 1 + iVar4;
            if (iVar6 < iVar7) {
              *(int *)(param_1 + 0x40) = iVar10 + 1;
              break;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_1 + 0x2c));
        }
        if (iVar7 <= iVar6) {
          return;
        }
      } while( true );
    case 7:
      iVar6 = *(int *)(param_1 + 0x2c);
      if (iVar6 < *(int *)(param_1 + 0x30) + -2) {
        do {
          puVar3 = (undefined1 *)(*(int *)(param_1 + 0x18) + iVar6);
          iVar6 = iVar6 + 1;
          *puVar3 = puVar3[1];
        } while (iVar6 < *(int *)(param_1 + 0x30) + -2);
        return;
      }
      break;
    case 8:
      iVar6 = *(int *)(param_1 + 0x2c);
      if (iVar6 != 0) {
        if (0 < iVar6) {
          *(int *)(param_1 + 0x2c) = iVar6 + -1;
        }
        iVar6 = *(int *)(param_1 + 0x2c);
        if (iVar6 < *(int *)(param_1 + 0x30) + -2) {
          do {
            puVar3 = (undefined1 *)(*(int *)(param_1 + 0x18) + iVar6);
            iVar6 = iVar6 + 1;
            *puVar3 = puVar3[1];
          } while (iVar6 < *(int *)(param_1 + 0x30) + -2);
        }
        if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x40)) {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x2c);
          return;
        }
      }
      break;
    case 10:
    case 0xd:
      if (*(int *)(param_1 + 0x2c) != 0) {
        *(undefined1 *)(param_1 + 0x3b) = 1;
        return;
      }
      break;
    case -0x59:
    case 1:
    case 2:
    case 5:
    case 9:
      break;
    default:
      goto switchD_00438376_caseD_ffffffa8;
    }
  }
  else {
    switch(iVar7) {
    case 0x10:
      iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      do {
        iVar10 = *(int *)(param_1 + 0x40);
        iVar7 = 0;
        if (iVar10 < 0) {
          do {
            bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + iVar10);
            if (bVar2 == 0) break;
            local_8 = (uint)bVar2;
            iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + local_8 * 4);
            if (iVar8 == 0) {
              iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 4);
            }
            else {
              iVar8 = (int)*(short *)(iVar8 + 6);
            }
            iVar7 = iVar7 + 1 + iVar8;
            if (iVar6 < iVar7) {
              *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
              break;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0);
        }
        if (iVar7 <= iVar6) {
          return;
        }
      } while( true );
    case 0x11:
      uVar5 = 0xffffffff;
      pcVar9 = *(char **)(param_1 + 0x18);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      *(undefined4 *)(param_1 + 0x40) = 0;
      iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x2c) = ~uVar5 - 1;
      do {
        iVar10 = *(int *)(param_1 + 0x40);
        iVar7 = 0;
        while( true ) {
          if (((int)(~uVar5 - 1) <= iVar10) ||
             (bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + iVar10), bVar2 == 0)) goto LAB_004385d3;
          local_8 = (uint)bVar2;
          iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + local_8 * 4);
          if (iVar8 == 0) {
            iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 4);
          }
          else {
            iVar8 = (int)*(short *)(iVar8 + 6);
          }
          iVar7 = iVar7 + 1 + iVar8;
          if (iVar6 < iVar7) break;
          iVar10 = iVar10 + 1;
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
LAB_004385d3:
        if (iVar7 <= iVar6) {
          return;
        }
      } while( true );
    case 0x12:
    case 0x1b:
    case 0x22:
    case 0x25:
    case 0x5c:
    case 0x7c:
    case 0xa7:
    case 0x10b:
      goto switchD_00438376_caseD_ffffffa7;
    }
switchD_00438376_caseD_ffffffa8:
    if (*(char *)(param_1 + 0x53) != '\0') {
      switch(*(undefined1 *)(iVar6 + 0xe)) {
      case 0x2c:
      case 0x2e:
      case 0x2f:
      case 0x3a:
      case 0x3b:
      case 0x5c:
        goto switchD_00438376_caseD_ffffffa7;
      }
    }
    if ((*(char *)(param_1 + 0x51) == '\0') ||
       ((0x2f < *(byte *)(iVar6 + 0xe) && (*(byte *)(iVar6 + 0xe) < 0x3a)))) {
      uVar5 = 0xffffffff;
      iVar6 = *(int *)(param_1 + 0x30) + -2;
      pcVar9 = *(char **)(param_1 + 0x18);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if ((~uVar5 - 1 != iVar6) && (*(int *)(param_1 + 0x2c) < iVar6)) {
        if (*(int *)(param_1 + 0x2c) + -1 < iVar6) {
          do {
            puVar3 = (undefined1 *)(*(int *)(param_1 + 0x18) + iVar6);
            iVar6 = iVar6 + -1;
            puVar3[1] = *puVar3;
          } while (*(int *)(param_1 + 0x2c) + -1 < iVar6);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x18)) =
             *(undefined1 *)(*(int *)(param_2 + 4) + 0xe);
        iVar7 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        do {
          iVar8 = *(int *)(param_1 + 0x40);
          iVar10 = 0;
          if (iVar8 < *(int *)(param_1 + 0x2c)) {
            do {
              bVar2 = *(byte *)(iVar8 + *(int *)(param_1 + 0x18));
              if (bVar2 == 0) break;
              local_4 = (uint)bVar2;
              iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + local_4 * 4);
              if (iVar4 == 0) {
                iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 4);
              }
              else {
                iVar4 = (int)*(short *)(iVar4 + 6);
              }
              iVar10 = iVar10 + 1 + iVar4;
              if (iVar7 < iVar10) {
                *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
                break;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(param_1 + 0x2c));
          }
        } while (iVar7 < iVar6);
      }
    }
  }
switchD_00438376_caseD_ffffffa7:
  return;
}


