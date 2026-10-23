// FUN_006e0450 @ 6e0450 size=1175

undefined4 __fastcall FUN_006e0450(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  void *pvStack_24;
  int *piStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d9cde;
  pvStack_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x20);
  iVar14 = *(int *)(param_1 + 0x24);
  iVar9 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar2 = **(int **)(param_1 + 0x66);
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00415be0();
  iVar4 = FUN_00415bd0(((iVar14 + iVar9) - iVar4) + -0x10);
  (**(code **)(iVar2 + 0x18))((iVar1 / 2 - iVar4 / 2) + iVar6);
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar2 = **(int **)(param_1 + 0x6a);
  iVar4 = FUN_00415be0();
  iVar5 = FUN_00415be0();
  iVar6 = FUN_00415bd0((((iVar6 + iVar14) - iVar4) - iVar5) + -0x20);
  (**(code **)(iVar2 + 0x18))((iVar1 / 2 - iVar6 / 2) + iVar9);
  iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar2 = **(int **)(param_1 + 0x6e);
  iVar4 = FUN_00415be0();
  iVar5 = FUN_00415be0();
  iVar7 = FUN_00415be0();
  iVar6 = FUN_00415bd0(((((iVar14 + iVar6) - iVar4) - iVar5) - iVar7) + -0x30);
  (**(code **)(iVar2 + 0x18))((iVar1 / 2 - iVar6 / 2) + iVar9);
  iVar6 = (**(code **)(*piStack_14 + 8))();
  if ((iVar6 == 0x1c) &&
     (iVar6 = *(int *)(param_1 + 0x74) + *(int *)(piStack_14[1] + 0xe),
     *(int *)(param_1 + 0x74) = iVar6, 0x3dd < iVar6)) {
    cVar3 = FUN_00582130();
    if (cVar3 == '\0') {
      piVar12 = *(int **)(param_1 + 0x6a);
      if (*(char *)((int)piVar12 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar12 + 0x60))();
      *(undefined1 *)((int)piVar12 + 0x86) = 1;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x6a) + 0x50))();
    }
  }
  iVar6 = DAT_00bd1500;
  piVar12 = (int *)(DAT_00bd1500 + 0x3b0);
  if ((((*(char *)(param_1 + 0x5c) == '\0') || (DAT_00bd1500 == 0)) ||
      (*(char *)(DAT_00bd1500 + 0x37b) == '\0')) ||
     (*(int *)(param_1 + 0x62) != *(int *)(DAT_00bd1500 + 0xb70))) {
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x840)) {
      piVar13 = (int *)(param_1 + 0x7c);
      do {
        iVar9 = 0;
        if (0 < *(int *)(param_1 + 0x62)) {
          piVar11 = piVar12;
          do {
            if (*piVar11 == *piVar13) {
              *(undefined4 *)(iVar6 + 0x3d8 + iVar9 * 0x3e) = 0;
              break;
            }
            iVar9 = iVar9 + 1;
            piVar11 = (int *)((int)piVar11 + 0x3e);
          } while (iVar9 < *(int *)(param_1 + 0x62));
        }
        iVar14 = iVar14 + 1;
        piVar13 = (int *)((int)piVar13 + 0x3e);
      } while (iVar14 < *(int *)(param_1 + 0x840));
    }
  }
  else if (*(char *)(param_1 + 0x72) == '\0') {
    if ((*(int **)(param_1 + 0x66) != (int *)0x0) &&
       (iVar6 = (**(code **)(**(int **)(param_1 + 0x66) + 4))(piStack_14), iVar6 != 0)) {
      if (*(char *)(*(int *)(param_1 + 0x66) + 0x96) != '\0') {
        FUN_007a630a(&stack0xffffff5c,s_scenarios_save_games_playerdrop__0086d4fc,
                     (int)*(short *)(DAT_00893530 + 0x18));
        FUN_004300c0(&stack0xffffff5c);
        *(undefined1 *)(DAT_00893750 + 0x11f) = 1;
        *(undefined1 *)(param_1 + 0x72) = 1;
      }
      ExceptionList = pvStack_24;
      return 3;
    }
    if ((*(int **)(param_1 + 0x6a) == (int *)0x0) ||
       (iVar6 = (**(code **)(**(int **)(param_1 + 0x6a) + 4))(piStack_14), iVar6 == 0)) {
      if ((*(int **)(param_1 + 0x6e) == (int *)0x0) ||
         (iVar14 = (**(code **)(**(int **)(param_1 + 0x6e) + 4))(piStack_14), iVar6 = DAT_00bd1500,
         iVar14 == 0)) {
        uVar10 = FUN_00442310(piStack_14);
        ExceptionList = pvStack_24;
        return uVar10;
      }
      if (*(char *)(*(int *)(param_1 + 0x6e) + 0x96) == '\0') {
        ExceptionList = pvStack_24;
        return 3;
      }
      piVar12 = (int *)(DAT_00bd1500 + 0x3b0);
      iVar14 = 0;
      if (0 < *(int *)(param_1 + 0x840)) {
        piVar13 = (int *)(param_1 + 0x7c);
        do {
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 0x62)) {
            piVar11 = piVar12;
            do {
              if (*piVar11 == *piVar13) {
                *(undefined4 *)(iVar6 + 0x3d8 + iVar9 * 0x3e) = 0;
                break;
              }
              iVar9 = iVar9 + 1;
              piVar11 = (int *)((int)piVar11 + 0x3e);
            } while (iVar9 < *(int *)(param_1 + 0x62));
          }
          iVar14 = iVar14 + 1;
          piVar13 = (int *)((int)piVar13 + 0x3e);
        } while (iVar14 < *(int *)(param_1 + 0x840));
      }
    }
    else {
      if (*(char *)(*(int *)(param_1 + 0x6a) + 0x96) == '\0') {
        ExceptionList = pvStack_24;
        return 3;
      }
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x840)) {
        iVar14 = 0;
        piVar12 = (int *)(param_1 + 0x7c);
        do {
          if (*piVar12 != *(int *)(DAT_00bd1500 + 900)) {
            FUN_00582280(*piVar12);
            *(undefined1 *)(iVar14 + 0x3d1 + DAT_00bd1500) = 0;
            *(undefined1 *)(iVar14 + 0x3d0 + DAT_00bd1500) = 1;
          }
          iVar6 = iVar6 + 1;
          iVar14 = iVar14 + 0x3e;
          piVar12 = (int *)((int)piVar12 + 0x3e);
        } while (iVar6 < *(int *)(param_1 + 0x840));
      }
      iVar6 = DAT_00bd1500;
      piVar12 = (int *)(DAT_00bd1500 + 0x3b0);
      iVar14 = 0;
      if (0 < *(int *)(param_1 + 0x840)) {
        piVar13 = (int *)(param_1 + 0x7c);
        do {
          iVar9 = 0;
          if (0 < *(int *)(param_1 + 0x62)) {
            piVar11 = piVar12;
            do {
              if (*piVar11 == *piVar13) {
                *(undefined4 *)(iVar6 + 0x3d8 + iVar9 * 0x3e) = 0;
                break;
              }
              iVar9 = iVar9 + 1;
              piVar11 = (int *)((int)piVar11 + 0x3e);
            } while (iVar9 < *(int *)(param_1 + 0x62));
          }
          iVar14 = iVar14 + 1;
          piVar13 = (int *)((int)piVar13 + 0x3e);
        } while (iVar14 < *(int *)(param_1 + 0x840));
      }
    }
  }
  else {
    puVar8 = operator_new(0xc);
    if (puVar8 == (undefined4 *)0x0) {
      FUN_00565ca0(0);
    }
    else {
      FUN_005aef80(0x4f,&DAT_0088f29c);
      *puVar8 = &PTR_FUN_007e5330;
      *(undefined4 *)(puVar8[1] + 0xe) = 0xffffffff;
      FUN_00565ca0(puVar8);
    }
  }
  ExceptionList = pvStack_24;
  return 1;
}


