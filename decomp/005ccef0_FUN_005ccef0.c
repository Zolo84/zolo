// FUN_005ccef0 @ 5ccef0 size=2634

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_005ccef0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd45b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00428ee0();
  if ((iVar4 != 0) && (iVar4 != 8)) {
    if (*(int **)((int)param_1 + 0xee) == (int *)0x0) {
LAB_005ccf7e:
      iStack_1c = (**(code **)(**(int **)((int)param_1 + 0xea) + 4))();
    }
    else {
      iStack_1c = (**(code **)(**(int **)((int)param_1 + 0xee) + 4))();
      if (iStack_1c == 1) {
        if (*(undefined4 **)((int)param_1 + 0xee) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)param_1 + 0xee))();
        }
        *(undefined4 *)((int)param_1 + 0xee) = 0;
        iStack_1c = 3;
      }
      else if (iStack_1c == 0) goto LAB_005ccf7e;
    }
    (**(code **)(*(int *)param_1[0x33] + 0x50))();
    (**(code **)(*(int *)param_1[0x2f] + 0x50))();
    if ((*(int *)(iVar4 + 100) != 0) &&
       ((iVar5 = (**(code **)(*(int *)(*(int *)(iVar4 + 100) + 0x11c) + 4))(), iVar5 != 0 ||
        (*(int *)(*(int *)(iVar4 + 100) + 0x176) != 0)))) {
      piVar7 = (int *)param_1[0x2f];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
      piVar7 = (int *)param_1[0x33];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    iVar5 = FUN_00522770();
    if (iVar5 != DAT_00d0ca90) {
      piVar7 = (int *)param_1[0x2f];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
      piVar7 = (int *)param_1[0x33];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    if (*(char *)(iVar4 + 0x158) != '\0') {
      iVar5 = (**(code **)(**(int **)(iVar4 + 100) + 0x18))();
      iVar5 = (**(code **)(**(int **)(iVar5 + 0x294) + 4))();
      if (iVar5 != 0) {
        piVar7 = (int *)param_1[0x2f];
        if (*(char *)((int)piVar7 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar7 + 0x60))();
        *(undefined1 *)((int)piVar7 + 0x86) = 1;
      }
      if (*(char *)(iVar4 + 0x153) == '\0') {
        (**(code **)(**(int **)((int)param_1 + 0xd6) + 0x50))();
        if ((*(int *)(DAT_00d0ca90 + 0x4652) == 0) && (*(char *)(iVar4 + 0x153) == '\0')) {
          piVar7 = *(int **)((int)param_1 + 0xd6);
          if (*(char *)((int)piVar7 + 0xa2) != '\0') {
            FUN_00433930();
          }
          (**(code **)(*piVar7 + 0x60))();
          *(undefined1 *)((int)piVar7 + 0x86) = 1;
        }
        cVar3 = FUN_004a3580();
        if (cVar3 == '\0') {
          piVar7 = *(int **)((int)param_1 + 0xd6);
          if (*(char *)((int)piVar7 + 0xa2) != '\0') {
            FUN_00433930();
          }
          (**(code **)(*piVar7 + 0x60))();
          *(undefined1 *)((int)piVar7 + 0x86) = 1;
        }
        iStack_1c = (**(code **)(**(int **)((int)param_1 + 0xd6) + 4))();
        if (*(char *)(*(int *)((int)param_1 + 0xd6) + 0x96) != '\0') {
          FUN_0045e3c0();
          ExceptionList = pvStack_c;
          return iStack_1c;
        }
      }
      else {
        (**(code **)(**(int **)((int)param_1 + 0xda) + 0x50))();
        cVar3 = FUN_004a3580();
        if (cVar3 == '\0') {
          piVar7 = *(int **)((int)param_1 + 0xda);
          if (*(char *)((int)piVar7 + 0xa2) != '\0') {
            FUN_00433930();
          }
          (**(code **)(*piVar7 + 0x60))();
          *(undefined1 *)((int)piVar7 + 0x86) = 1;
        }
        iStack_1c = (**(code **)(**(int **)((int)param_1 + 0xda) + 4))();
        if (*(char *)(*(int *)((int)param_1 + 0xda) + 0x96) != '\0') {
          FUN_0045e4a0();
          ExceptionList = pvStack_c;
          return iStack_1c;
        }
      }
    }
    if (iStack_1c == 0) {
      iStack_1c = (**(code **)(*(int *)param_1[0x2f] + 4))();
      if (*(char *)(param_1[0x2f] + 0x96) != '\0') {
        FUN_00657a60();
        ExceptionList = pvStack_c;
        return iStack_1c;
      }
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(*(int *)param_1[0x33] + 4))();
        if (*(char *)(param_1[0x33] + 0x96) != '\0') {
          FUN_00657a60();
          ExceptionList = pvStack_c;
          return iStack_1c;
        }
        if (iStack_1c == 0) {
          iStack_1c = (**(code **)(**(int **)((int)param_1 + 0xe6) + 4))();
        }
      }
    }
    (**(code **)(*(int *)param_1[0x30] + 0x50))();
    (**(code **)(*(int *)param_1[0x31] + 0x50))();
    iVar5 = (**(code **)(*(int *)(*(int *)(iVar4 + 100) + 0x11c) + 4))();
    if (((iVar5 != 0) || (*(int *)(*(int *)(iVar4 + 100) + 0x176) != 0)) ||
       (iVar5 = *(int *)(*(int *)(iVar4 + 100) + 0x248), iVar6 = FUN_00522770(), iVar6 != iVar5)) {
      piVar7 = (int *)param_1[0x30];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
      piVar7 = (int *)param_1[0x31];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    iVar5 = FUN_0051b230();
    if (((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) ||
       (*(int *)(*(int *)(iVar4 + 100) + 0xc) == 0)) {
      piVar7 = (int *)param_1[0x30];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
      piVar7 = (int *)param_1[0x31];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    cVar3 = FUN_00524000();
    if (cVar3 == '\0') {
      piVar7 = (int *)param_1[0x30];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
      piVar7 = (int *)param_1[0x31];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    iVar5 = FUN_00522770();
    if (DAT_00d0ca90 != iVar5) {
      piVar7 = (int *)param_1[0x30];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
      piVar7 = (int *)param_1[0x31];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    if (*(char *)(iVar4 + 0x14d) != '\0') {
      piVar7 = (int *)param_1[0x30];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    piVar7 = (int *)(iVar4 + 0x80);
    param_1[0x310] = -1;
    iVar5 = 0;
    piVar10 = (int *)((int)param_1 + 0xc26);
    do {
      if (*piVar7 != 0) {
        if ((&DAT_00dbcee6)[*piVar7] == '\0') {
          piVar1 = (int *)*piVar10;
          if (*(char *)((int)piVar1 + 0xa2) != '\0') {
            FUN_00433930();
          }
          (**(code **)(*piVar1 + 0x60))();
          *(undefined1 *)((int)piVar1 + 0x86) = 1;
        }
        else {
          (**(code **)(*(int *)*piVar10 + 0x50))();
          if (*(char *)((int)param_1 + iVar5 + 0xc3a) == '\0') {
            FUN_00433930();
          }
          else {
            FUN_00433950();
          }
          if (param_1[0x310] == -1) {
            param_1[0x310] = iVar5;
          }
          else {
            param_1[0x310] = -2;
          }
        }
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar5 < 5);
    if (param_1[0x310] == -1) {
      piVar7 = (int *)param_1[0x30];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    *(undefined1 *)((int)param_1 + 0xc3f) = 0;
    if (*(char *)(param_1[0x30] + 0x86) == '\0') {
      iVar5 = 0;
      puVar11 = (undefined4 *)((int)param_1 + 0xc26);
      piVar7 = (int *)(iVar4 + 0x80);
      do {
        if (*piVar7 != 0) {
          if (iStack_1c == 0) {
            iStack_1c = (**(code **)(*(int *)*puVar11 + 4))();
          }
          cVar3 = FUN_00433910();
          if (cVar3 == '\0') {
            *(undefined1 *)(iVar5 + 0xc3a + (int)param_1) = 0;
          }
          else {
            *(undefined1 *)(iVar5 + 0xc3a + (int)param_1) = 1;
            *(undefined1 *)((int)param_1 + 0xc3f) = 1;
          }
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar5 < 5);
    }
    if (((*(char *)((int)param_1 + 0xc3f) != '\0') && (_DAT_007e3380 < _DAT_00dc1968)) &&
       (*(float *)(iVar4 + 0xe4) / *(float *)(iVar4 + 0xe8) < _DAT_00dc1968)) {
      *(undefined1 *)((int)param_1 + 0xc3f) = 0;
    }
    if (*(char *)((int)param_1 + 0xc3f) == '\0') {
      piVar7 = (int *)param_1[0x30];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    else {
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(*(int *)param_1[0x30] + 4))();
      }
      if (*(char *)(param_1[0x30] + 0x96) != '\0') {
        iVar5 = 4;
        do {
          if (*(char *)((int)param_1 + iVar5 + 0xc3a) != '\0') {
            FUN_0045eb00();
          }
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        (**(code **)(*param_1 + 0x48))();
      }
    }
    bVar2 = false;
    piVar7 = *(int **)(DAT_00d0ca90 + 0x451c);
    if (*(int **)(DAT_00d0ca90 + 0x451c) == (int *)0x0) {
LAB_005cd6d0:
      piVar7 = (int *)param_1[0x31];
      if (*(char *)((int)piVar7 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar7 + 0x60))();
      *(undefined1 *)((int)piVar7 + 0x86) = 1;
    }
    else {
      do {
        piVar10 = (int *)piVar7[2];
        if (((*(char *)(*piVar7 + 0x154) == '\0') && (*(char *)(*piVar7 + 0x162) != '\0')) &&
           (cVar3 = FUN_004a4150(), cVar3 != '\0')) {
          bVar2 = true;
        }
        piVar7 = piVar10;
      } while (piVar10 != (int *)0x0);
      if (!bVar2) goto LAB_005cd6d0;
    }
    if (iStack_1c == 0) {
      iStack_1c = (**(code **)(*(int *)param_1[0x31] + 4))();
    }
    if (*(char *)(param_1[0x31] + 0x96) != '\0') {
      FUN_0064eba0();
      if (*(undefined4 **)((int)param_1 + 0xee) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)param_1 + 0xee))();
      }
      pvVar8 = operator_new(0xf4);
      uStack_4 = 0;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_005cc460();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)((int)param_1 + 0xee) = uVar9;
    }
    if (((iStack_1c == 0) &&
        (iStack_1c = (**(code **)(*(int *)param_1[0x30] + 4))(), iStack_1c == 0)) &&
       (DAT_00bd13ef == '\0')) {
      iStack_1c = (**(code **)(**(int **)((int)param_1 + 0xe2) + 4))();
    }
    if (*(char *)(iVar4 + 0x159) != '\0') {
      (**(code **)(*(int *)param_1[0x32] + 0x50))();
      iVar4 = FUN_00503220();
      if (iVar4 == 0) {
        piVar7 = (int *)param_1[0x32];
        if (*(char *)((int)piVar7 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar7 + 0x60))();
        *(undefined1 *)((int)piVar7 + 0x86) = 1;
      }
      if (iStack_1c == 0) {
        iStack_1c = (**(code **)(*(int *)param_1[0x32] + 4))();
      }
      if (*(char *)(param_1[0x32] + 0x96) != '\0') {
        FUN_0064eba0();
        FUN_0064c090();
      }
    }
    if (iStack_1c != 0) goto LAB_005cd8fe;
  }
  iStack_1c = (**(code **)(*(int *)param_1[0x45] + 4))();
  iVar4 = FUN_005045e0();
  if ((iVar4 == DAT_00d0ca90) && (iVar4 = FUN_00437bf0(), iVar4 != *(int *)((int)param_1 + 0x11e)))
  {
    *(int *)((int)param_1 + 0x11e) = iVar4;
    __ftol();
    uVar9 = FUN_00447250();
    FUN_00449290(uVar9);
    FUN_00462ca0();
    (**(code **)(*param_1 + 0x48))();
  }
  if (iStack_1c == 0) {
    iStack_1c = FUN_0061eab0();
  }
LAB_005cd8fe:
  iVar4 = FUN_00428ee0();
  if ((iVar4 == 0) || (iVar4 == 8)) {
    FUN_0064c090();
  }
  ExceptionList = pvStack_c;
  return iStack_1c;
}


