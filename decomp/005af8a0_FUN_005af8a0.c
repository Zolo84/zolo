// FUN_005af8a0 @ 5af8a0 size=1261

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005af8a0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  float afStack_8 [2];
  
  if (param_2[0x99] == 2) {
    return;
  }
  piVar12 = (int *)0x0;
  if (*(int *)((int)param_2 + 0x176) != 0) {
    return;
  }
  cVar6 = '\0';
  cVar4 = (**(code **)(*param_2 + 0x30))();
  if ((cVar4 != '\0') && (cVar4 = FUN_005129b0(), cVar4 != '\0')) {
    cVar6 = '\x01';
  }
  cVar4 = '\0';
  puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x1c2) + 4);
  cVar5 = (**(code **)(*param_2 + 0x30))();
  if (((cVar5 != '\0') && (param_2[0x99] == 0x11)) && (*(int *)(param_1 + 0x46a) != 0)) {
    puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x46a) + 0x34);
  }
  cVar5 = (**(code **)(*param_2 + 0x2c))();
  if (((cVar5 != '\0') && (param_2[0x99] == 0x1e)) && (*(int *)(param_1 + 0x46a) != 0)) {
    puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x46a) + 0x34);
  }
  cVar5 = (**(code **)(*param_2 + 0x2c))();
  if (((cVar5 == '\0') || (param_2[0x99] != 0x1f)) && (puVar9 != (undefined4 *)0x0)) {
    do {
      puVar1 = (undefined4 *)puVar9[2];
      piVar10 = (int *)*puVar9;
      if (*(int *)((int)piVar10 + 0x176) == 0) {
        cVar5 = (**(code **)(*param_2 + 0x30))();
        if (((cVar5 == '\0') || (cVar5 = (**(code **)(*piVar10 + 0x30))(), cVar5 != '\0')) &&
           ((cVar5 = (**(code **)(*param_2 + 0x30))(), cVar5 != '\0' ||
            (cVar5 = (**(code **)(*piVar10 + 0x30))(), cVar5 == '\0')))) {
          cVar5 = (**(code **)(*param_2 + 0x2c))();
          if (((cVar5 != '\0') && (param_2[0x99] == 0x1e)) &&
             ((cVar5 = (**(code **)(*piVar10 + 0x2c))(), cVar5 != '\0' &&
              (cVar5 = FUN_005215b0(piVar10), cVar5 != '\0')))) {
            cVar4 = '\a';
            piVar12 = piVar10;
          }
        }
        else {
          cVar5 = FUN_005215b0(piVar10);
          if (cVar5 != '\0') {
            if (((*(int *)(param_1 + 0x254) == 8) || (*(int *)(param_1 + 0x254) == 9)) ||
               (cVar4 = (**(code **)(*piVar10 + 0x2c))(), cVar4 != '\0')) {
              cVar4 = '\x05';
              piVar12 = piVar10;
            }
            else {
              cVar4 = (-cVar6 & 2U) + 4;
              piVar12 = piVar10;
            }
          }
        }
      }
      puVar9 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    piVar10 = param_2;
    if (cVar4 == '\x05') {
      cVar6 = (**(code **)(*piVar12 + 0x30))();
      if (cVar6 != '\0') {
        piVar10 = piVar12;
        piVar12 = param_2;
      }
      if (((piVar10[0x99] != 0x10) || (cVar6 = (**(code **)(*piVar12 + 0x2c))(), cVar6 == '\0')) ||
         (cVar6 = (**(code **)(*piVar10 + 0x30))(), cVar6 == '\0')) goto LAB_005afc4b;
      iVar7 = (**(code **)(piVar12[0x47] + 4))();
      if ((((iVar7 != 0) || (iVar7 = piVar12[0x99], iVar7 == 0x1a)) || (iVar7 == 0x1b)) ||
         (iVar7 == 0x1e)) {
        cVar4 = '\x05';
        goto LAB_005afc4b;
      }
      cVar6 = (**(code **)(*(int *)((int)piVar12 + 0x22e) + 8))();
      if (cVar6 != '\0') {
        iVar7 = (**(code **)(*piVar12 + 0x14))();
        iVar7 = (**(code **)(**(int **)(iVar7 + 0x2aa) + 4))();
        if ((0 < iVar7) && (cVar6 = FUN_0044b280(*(undefined4 *)(piVar10[0x92] + 6)), cVar6 != '\0')
           ) {
          iVar7 = (**(code **)(*piVar12 + 0x14))();
          piVar11 = *(int **)(*(int *)(iVar7 + 0x2aa) + 4);
          do {
            do {
              do {
                if (piVar11 == (int *)0x0) goto LAB_005afc4b;
                piVar2 = (int *)piVar11[2];
                iVar7 = *piVar11;
                piVar11 = piVar2;
              } while ((*(char *)(iVar7 + 0x17b) != '\0') || (cVar6 = FUN_0051d5c0(), cVar6 == '\0')
                      );
              iVar7 = (**(code **)(*(int *)(iVar7 + 0x11c) + 4))();
              if (iVar7 != 0) goto LAB_005afb95;
              uVar8 = FUN_00523f70();
              iVar7 = FUN_004e9370(uVar8);
            } while (*(int *)(iVar7 + 0x3d8) == 0);
            uVar8 = FUN_00523f70();
            iVar7 = FUN_004e9370(uVar8);
            cVar6 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar7 + 0x3d8) + 6));
          } while (cVar6 == '\0');
LAB_005afb95:
          cVar4 = '\x05';
          goto LAB_005afc4b;
        }
      }
      cVar6 = (**(code **)(*piVar12 + 0x2c))();
      if ((cVar6 == '\0') || (cVar6 = (**(code **)(*piVar10 + 0x30))(), cVar6 == '\0'))
      goto LAB_005afc4b;
      cVar4 = '\0';
      fVar3 = _DAT_007e3380;
      for (piVar11 = *(int **)((int)piVar10 + 0x26); piVar11 != (int *)0x0;
          piVar11 = (int *)piVar11[2]) {
        fVar3 = fVar3 + *(float *)(*piVar11 + 0x2d0);
      }
      piVar11 = *(int **)((int)piVar12 + 0x26);
      if (piVar11 == (int *)0x0) goto LAB_005afc9f;
      do {
        afStack_8[0] = *(float *)(*piVar11 + 0x2dc) + fVar3;
        iVar7 = _rand();
        if ((float)(iVar7 % 1000) < afStack_8[0]) {
          cVar4 = '\x05';
        }
        piVar11 = (int *)piVar11[2];
      } while (piVar11 != (int *)0x0);
    }
    if (cVar4 != '\0') {
LAB_005afc4b:
      cVar6 = (**(code **)(*piVar12 + 0x30))();
      piVar11 = piVar10;
      if (cVar6 != '\0') {
        piVar11 = piVar12;
        piVar12 = piVar10;
      }
      if (cVar4 == '\x06') {
        piVar12 = (int *)0x0;
      }
      FUN_00428eb0(afStack_8);
      FUN_005b0540(param_1,cVar4,afStack_8,piVar11,piVar12);
      return;
    }
  }
LAB_005afc9f:
  cVar6 = (**(code **)(*param_2 + 0x30))();
  if ((cVar6 == '\0') || ((cVar6 = FUN_005129b0(), cVar6 == '\0' && (param_2[0x99] != 0x11)))) {
    cVar6 = (**(code **)(*param_2 + 0x2c))();
    if ((cVar6 == '\0') || (param_2[0x99] != 0x1f)) {
      cVar6 = (**(code **)(*param_2 + 0x2c))();
      if (((cVar6 != '\0') && (param_2[0x99] == 0x1e)) && (*(int *)(param_1 + 0x3d8) != 0)) {
        FUN_00428eb0(afStack_8);
        FUN_005b0540(param_1,7,afStack_8,param_2,0);
      }
    }
    else if (*(int *)(param_1 + 0x3d8) != 0) {
      FUN_00428eb0(afStack_8);
      FUN_005b0540(param_1,8,afStack_8,param_2,0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x3d8) != 0) {
    FUN_00428eb0(afStack_8);
    FUN_005b0540(param_1,6,afStack_8,param_2,0);
    return;
  }
  return;
}


