// FUN_00652570 @ 652570 size=1594

undefined4 __thiscall FUN_00652570(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((byte)DAT_00a98444 & 1) != 0) {
    cVar4 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 8))();
    if (cVar4 == '\0') {
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x21e5a) + 0x4c))(param_2,param_3);
      if (((piVar5 != (int *)0x0) &&
          ((cVar4 = (**(code **)(*piVar5 + 0x28))(), cVar4 == '\0' ||
           (iVar6 = (**(code **)(*piVar5 + 0x10))(), *(int *)(iVar6 + 0x2b2) == 0)))) &&
         ((DAT_00d610dd != '\0' ||
          ((cVar4 = FUN_0052b370(piVar5), cVar4 == '\x01' || (piVar5[0x92] == param_1)))))) {
        *(int **)(param_1 + 0x21e6a) = piVar5;
        return 0xd;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x21e5a) + 0x48))(param_2,param_3);
      if (((piVar5 != (int *)0x0) &&
          ((cVar4 = (**(code **)(*piVar5 + 0x28))(), cVar4 == '\0' ||
           (iVar6 = (**(code **)(*piVar5 + 0x10))(), *(int *)(iVar6 + 0x2b2) == 0)))) &&
         ((DAT_00d610dd != '\0' ||
          ((cVar4 = FUN_0052b370(piVar5), cVar4 == '\x01' || (piVar5[0x92] == param_1)))))) {
        *(int **)(param_1 + 0x21e6a) = piVar5;
        return 1;
      }
    }
    piVar5 = &DAT_0089cad8;
    do {
      if (*piVar5 != 0) {
        for (piVar1 = *(int **)(*piVar5 + 0x4508); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2])
        {
          piVar2 = (int *)*piVar1;
          cVar4 = (**(code **)(**(int **)((int)piVar2 + 0x15a) + 0x20))(param_2,param_3);
          if (cVar4 == '\x01') {
            *(int **)(param_1 + 0x21e6a) = piVar2;
            cVar4 = (**(code **)(*piVar2 + 0x28))();
            if ((cVar4 == '\0') ||
               (iVar6 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar6 + 0x2b2) == 0)) {
              if (DAT_00d610dd != '\0') {
                return 3;
              }
              cVar4 = FUN_0052b370(piVar2);
              if (cVar4 == '\x01') {
                return 3;
              }
              if (piVar2[0x92] == param_1) {
                return 3;
              }
            }
            if (*(char *)(DAT_00ab27b4 + 0x46e + piVar2[3] * 0x4b2) != '\0') {
              return 4;
            }
          }
        }
      }
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < 0x89d038);
    iVar6 = 1;
    if (1 < DAT_00877690) {
      iVar9 = 0x4b2;
      iVar7 = DAT_00ab27b4;
      do {
        iVar3 = *(int *)(iVar9 + 0x46a + iVar7);
        if ((iVar3 != 0) && (*(char *)(iVar9 + 0x46e + iVar7) != '\0')) {
          piVar5 = *(int **)(iVar3 + 0x34);
          while (piVar5 != (int *)0x0) {
            piVar1 = (int *)piVar5[2];
            piVar2 = (int *)*piVar5;
            cVar4 = (**(code **)(**(int **)((int)piVar2 + 0x15a) + 0x20))(param_2,param_3);
            piVar5 = piVar1;
            iVar7 = DAT_00ab27b4;
            if (cVar4 == '\x01') {
              *(int **)(param_1 + 0x21e6a) = piVar2;
              cVar4 = (**(code **)(*piVar2 + 0x28))();
              if (((cVar4 == '\0') ||
                  (iVar7 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar7 + 0x2b2) == 0)) &&
                 ((DAT_00d610dd != '\0' ||
                  ((cVar4 = FUN_0052b370(piVar2), cVar4 == '\x01' || (piVar2[0x92] == param_1))))))
              {
                return 3;
              }
              iVar7 = DAT_00ab27b4;
              if (*(char *)(DAT_00ab27b4 + 0x46e + piVar2[3] * 0x4b2) != '\0') {
                return 4;
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0x4b2;
      } while (iVar6 < DAT_00877690);
    }
    for (piVar5 = *(int **)(param_1 + 0x4508); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
      piVar1 = (int *)*piVar5;
      cVar4 = (**(code **)(*piVar1 + 0x28))();
      if (((cVar4 == '\0') ||
          (iVar6 = (**(code **)(*piVar1 + 0x10))(), *(int *)(iVar6 + 0x2b2) == 0)) &&
         ((DAT_00d610dd != '\0' ||
          ((cVar4 = FUN_0052b370(piVar1), cVar4 == '\x01' || (piVar1[0x92] == param_1)))))) {
        cVar4 = (**(code **)(*piVar1 + 0x30))();
        if (cVar4 != '\0') {
          (**(code **)(*piVar1 + 0x18))();
          cVar4 = FUN_004f0aa0();
          if (cVar4 != '\0') goto LAB_006529b3;
        }
        cVar4 = (**(code **)(*piVar1 + 0x2c))();
        if (((cVar4 == '\0') ||
            (iVar6 = *(int *)(DAT_00ab27b4 + 0x254 + piVar1[3] * 0x4b2), iVar6 == 8)) ||
           (iVar6 == 9)) {
          if (((*(int *)(*DAT_00d12b40 + 0x386) != 0) &&
              (cVar4 = (**(code **)(**(int **)((int)piVar1 + 0x15e) + 0x20))(param_2,param_3),
              cVar4 == '\x01')) ||
             ((*(int *)(*DAT_00d12b40 + 0x386) == 0 &&
              (cVar4 = FUN_00419170(param_2,param_3), cVar4 == '\x01')))) {
            *(int **)(param_1 + 0x21e6a) = piVar1;
            if (piVar1 != (int *)0x0) {
              *(int **)(param_1 + 0x21e6a) = piVar1;
            }
            return 1;
          }
        }
        else if (((*(int *)(*DAT_00d12b40 + 0x386) != 0) &&
                 (cVar4 = (**(code **)(**(int **)((int)piVar1 + 0x15e) + 0x20))(param_2,param_3),
                 cVar4 == '\x01')) ||
                ((*(int *)(*DAT_00d12b40 + 0x386) == 0 &&
                 ((*(int *)(DAT_00ab27b4 + 0x46a + piVar1[3] * 0x4b2) != 0 &&
                  (cVar4 = FUN_00419170(param_2,param_3), cVar4 != '\0')))))) {
          *(int **)(param_1 + 0x21e6a) = piVar1;
          return 1;
        }
      }
LAB_006529b3:
    }
    piVar5 = &DAT_0089cad8;
    do {
      iVar6 = *piVar5;
      if ((iVar6 != 0) && (iVar6 != param_1)) {
        for (piVar1 = *(int **)(iVar6 + 0x4508); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
          iVar6 = *piVar1;
          if (((*(int *)(*DAT_00d12b40 + 0x386) != 0) &&
              (cVar4 = (**(code **)(**(int **)(iVar6 + 0x15e) + 0x20))(param_2,param_3),
              cVar4 == '\x01')) ||
             ((*(int *)(*DAT_00d12b40 + 0x386) == 0 &&
              (cVar4 = FUN_00419170(param_2,param_3), cVar4 == '\x01')))) {
            *(int *)(param_1 + 0x21e6a) = iVar6;
            cVar4 = FUN_0052b370(iVar6);
            if (cVar4 == '\x01') {
              if (iVar6 != 0) {
                *(int *)(param_1 + 0x21e6a) = iVar6;
              }
              return 1;
            }
          }
        }
      }
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < 0x89d038);
    piVar5 = &DAT_0089cad8;
    do {
      iVar6 = *piVar5;
      if ((iVar6 != 0) && (iVar6 != param_1)) {
        for (piVar1 = *(int **)(iVar6 + 0x4508); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
          iVar6 = *piVar1;
          if (((*(int *)(*DAT_00d12b40 + 0x386) != 0) &&
              (cVar4 = (**(code **)(**(int **)(iVar6 + 0x15e) + 0x20))(param_2,param_3),
              cVar4 == '\x01')) ||
             ((*(int *)(*DAT_00d12b40 + 0x386) == 0 &&
              (cVar4 = FUN_00419170(param_2,param_3), cVar4 == '\x01')))) {
            *(int *)(param_1 + 0x21e6a) = iVar6;
            cVar4 = FUN_0052b370(iVar6);
            if ((cVar4 == '\0') &&
               (*(char *)(DAT_00ab27b4 + 0x46e + *(int *)(iVar6 + 0xc) * 0x4b2) != '\0')) {
              return 2;
            }
          }
        }
      }
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < 0x89d038);
  }
  uVar8 = FUN_00652bb0(param_2,param_3);
  return uVar8;
}


