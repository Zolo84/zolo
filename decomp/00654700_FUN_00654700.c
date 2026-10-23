// FUN_00654700 @ 654700 size=896

void __fastcall FUN_00654700(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_c;
  int *local_8;
  
  if (DAT_00d610dc == '\x01') {
    iVar10 = 0;
    if (0 < DAT_00877690) {
      do {
        FUN_004e8a10(1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < DAT_00877690);
      return;
    }
  }
  else {
    switch(DAT_00a98440) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      iVar10 = *(int *)(param_1 + 6);
      iVar9 = 0;
      if (0 < DAT_00877690) {
        do {
          FUN_004e8a10(0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < DAT_00877690);
      }
      local_c = 1;
      if (1 < DAT_00877690) {
        local_8 = (int *)0x4b2;
        do {
          iVar9 = (int)local_8 + DAT_00ab27b4;
          if ((*(int *)(iVar9 + 0x3d8) != 0) &&
             ((cVar7 = FUN_0044a690(*(undefined4 *)(param_1 + 6)), cVar7 != '\0' ||
              (*(char *)(*(int *)(iVar9 + 0x3d8) + 0x34ac + *(int *)(param_1 + 6)) != '\0')))) {
            FUN_004e8a10(1);
            bVar5 = false;
            iVar8 = FUN_004ece80();
            if ((iVar8 != 0) ||
               ((iVar8 = FUN_004ece90(), iVar8 != 0 ||
                (*(int *)(*(int *)(iVar9 + 0x1e6) + 0x18) != 0)))) {
              bVar5 = true;
            }
            iVar8 = 0;
            if (0 < *(int *)(iVar9 + 0x294)) {
              iVar11 = 0;
              do {
                if (bVar5) {
LAB_0065486c:
                  FUN_004e8a10(1);
                }
                else {
                  iVar1 = *(int *)(*(int *)(iVar9 + 0x298) + iVar11);
                  iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar1 * 0x4b2);
                  if (((iVar2 != 8) && (iVar2 != 9)) ||
                     (*(int *)(DAT_00ab27b4 + iVar1 * 0x4b2 + 0x288) == 0x1c5)) goto LAB_0065486c;
                }
                iVar8 = iVar8 + 1;
                iVar11 = iVar11 + 0xc;
              } while (iVar8 < *(int *)(iVar9 + 0x294));
            }
          }
          piVar6 = *(int **)(iVar9 + 0x34);
          while (piVar6 != (int *)0x0) {
            piVar3 = (int *)piVar6[2];
            iVar9 = *piVar6;
            piVar6 = piVar3;
            if (*(int *)(iVar9 + 0xcc) == iVar10) {
              FUN_004e8a10(1);
            }
          }
          local_c = local_c + 1;
          local_8 = (int *)((int)local_8 + 0x4b2);
        } while (local_c < DAT_00877690);
      }
      local_8 = &DAT_0089cad8;
      do {
        iVar10 = *local_8;
        if ((iVar10 != 0) &&
           ((cVar7 = FUN_0044a690(*(undefined4 *)(param_1 + 6)), cVar7 != '\0' ||
            (*(char *)(*(int *)(param_1 + 6) + 0x34ac + iVar10) != '\0')))) {
          piVar6 = *(int **)(iVar10 + 0x4508);
          while (piVar6 != (int *)0x0) {
            piVar3 = (int *)piVar6[2];
            piVar4 = (int *)*piVar6;
            iVar9 = piVar4[3];
            iVar10 = DAT_00ab27b4 + iVar9 * 0x4b2;
            piVar6 = piVar3;
            if (*(int *)(DAT_00ab27b4 + 0x12 + iVar9 * 0x4b2) != 0) {
              FUN_004e8a10(1);
              cVar7 = (**(code **)(*piVar4 + 0x70))();
              if (((cVar7 == '\0') && (cVar7 = FUN_005239c0(), cVar7 == '\0')) &&
                 (iVar9 = 0, 0 < *(int *)(iVar10 + 0x294))) {
                iVar8 = 0;
                do {
                  iVar11 = *(int *)(iVar8 + *(int *)(iVar10 + 0x298));
                  iVar1 = *(int *)(DAT_00ab27b4 + 0x254 + iVar11 * 0x4b2);
                  if (((iVar1 != 8) && (iVar1 != 9)) ||
                     (*(int *)(DAT_00ab27b4 + iVar11 * 0x4b2 + 0x288) == 0x1c5)) {
                    FUN_004e8a10(1);
                  }
                  iVar9 = iVar9 + 1;
                  iVar8 = iVar8 + 0xc;
                } while (iVar9 < *(int *)(iVar10 + 0x294));
              }
            }
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < 0x89d038);
      break;
    default:
      iVar10 = 0;
      if (0 < DAT_00877690) {
        do {
          FUN_004e8a10(1);
          iVar10 = iVar10 + 1;
        } while (iVar10 < DAT_00877690);
      }
    }
    iVar10 = 0;
    if (0 < DAT_00877690) {
      iVar9 = 0;
      do {
        if (*(char *)(iVar9 + 0x180 + DAT_00ab27b4) != '\0') {
          FUN_004e89a0(0);
          FUN_004e8a40(0x19);
          FUN_004e8a10(0);
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0x4b2;
      } while (iVar10 < DAT_00877690);
    }
  }
  return;
}


