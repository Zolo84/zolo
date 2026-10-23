// FUN_005886c0 @ 5886c0 size=789

void FUN_005886c0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *local_8;
  
  piVar8 = &DAT_0089cad8;
  do {
    iVar7 = *piVar8;
    if (iVar7 != 0) {
      iVar6 = 0;
      do {
        iVar9 = *(int *)(iVar7 + 0x12da);
        *(undefined1 *)(iVar6 + 0x31 + iVar9) = 0;
        *(undefined1 *)(iVar6 + 0x32 + iVar9) = 0;
        *(undefined1 *)(iVar6 + 0x33 + iVar9) = 0;
        iVar9 = iVar6 + iVar9;
        iVar6 = iVar6 + 0x2c;
        *(undefined1 *)(iVar9 + 0x2c) = 0;
      } while (iVar6 < 0x3b20);
    }
    piVar8 = piVar8 + 1;
  } while ((int)piVar8 < 0x89d038);
  iVar7 = 0;
  local_8 = &DAT_0089cad8;
  do {
    iVar6 = *local_8;
    if (iVar6 != 0) {
      iVar9 = 0;
      piVar8 = &DAT_0089cad8;
      do {
        iVar1 = *piVar8;
        if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x3350) != 0)) &&
            (*(int *)(iVar1 + 0x3350) == *(int *)(iVar6 + 0x3350))) &&
           (*(char *)(*(int *)(iVar6 + 0x3350) + 0x1d) == '\0')) {
          *(undefined1 *)(*(int *)(iVar1 + 0x12da) + 0x31 + iVar7) = 1;
          *(undefined1 *)(*(int *)(iVar6 + 0x12da) + 0x31 + iVar9) = 1;
        }
        piVar8 = piVar8 + 1;
        iVar9 = iVar9 + 0x2c;
      } while ((int)piVar8 < 0x89d038);
    }
    local_8 = local_8 + 1;
    iVar7 = iVar7 + 0x2c;
    piVar8 = DAT_00d615e4;
  } while ((int)local_8 < 0x89d038);
  while (piVar4 = DAT_00d61608, piVar8 != (int *)0x0) {
    iVar7 = *piVar8;
    piVar8 = (int *)piVar8[2];
    piVar4 = *(int **)(*(int *)(*(int *)(iVar7 + 0x22) + 0x22) + 4);
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      iVar6 = *piVar4;
      piVar4 = *(int **)(*(int *)(*(int *)(iVar7 + 0x22) + 0x22) + 4);
      while (piVar4 != (int *)0x0) {
        piVar3 = (int *)piVar4[2];
        iVar9 = *piVar4;
        piVar4 = piVar3;
        if (iVar6 != iVar9) {
          iVar1 = (&DAT_0089cad8)[iVar9];
          if (((&DAT_0089cad8)[iVar6] != 0) && (iVar1 != 0)) {
            *(undefined1 *)(*(int *)((&DAT_0089cad8)[iVar6] + 0x12da) + 0x32 + iVar9 * 0x2c) = 1;
            *(undefined1 *)(*(int *)(iVar1 + 0x12da) + 0x32 + iVar6 * 0x2c) = 1;
          }
        }
      }
      piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x26) + 0x22) + 4);
      while (piVar4 = piVar2, piVar3 != (int *)0x0) {
        piVar4 = (int *)piVar3[2];
        iVar9 = *piVar3;
        iVar1 = (&DAT_0089cad8)[iVar9];
        piVar3 = piVar4;
        if (((&DAT_0089cad8)[iVar6] != 0) && (iVar1 != 0)) {
          *(undefined1 *)(*(int *)((&DAT_0089cad8)[iVar6] + 0x12da) + iVar9 * 0x2c + 0x2c) = 1;
          *(undefined1 *)(*(int *)(iVar1 + 0x12da) + iVar6 * 0x2c + 0x2c) = 1;
        }
      }
    }
    piVar4 = *(int **)(*(int *)(*(int *)(iVar7 + 0x26) + 0x22) + 4);
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      iVar6 = *piVar4;
      iVar9 = (&DAT_0089cad8)[iVar6];
      piVar4 = piVar2;
      if (iVar9 != 0) {
        piVar2 = *(int **)(*(int *)(*(int *)(iVar7 + 0x26) + 0x22) + 4);
        while (piVar2 != (int *)0x0) {
          piVar3 = (int *)piVar2[2];
          iVar1 = *piVar2;
          piVar2 = piVar3;
          if ((iVar6 != iVar1) && (iVar5 = (&DAT_0089cad8)[iVar1], iVar5 != 0)) {
            *(undefined1 *)(*(int *)(iVar9 + 0x12da) + 0x32 + iVar1 * 0x2c) = 1;
            *(undefined1 *)(*(int *)(iVar5 + 0x12da) + 0x32 + iVar6 * 0x2c) = 1;
          }
        }
      }
    }
    if (0 < *(short *)(iVar7 + 0x1a)) {
      piVar4 = *(int **)(*(int *)(*(int *)(iVar7 + 0x22) + 0x22) + 4);
      while (piVar4 != (int *)0x0) {
        piVar2 = (int *)piVar4[2];
        iVar6 = *piVar4;
        piVar4 = piVar2;
        if ((&DAT_0089cad8)[iVar6] == 0) {
          (**(code **)(**(int **)(*(int *)(iVar7 + 0x22) + 0x22) + 0x18))(iVar6);
        }
      }
      piVar4 = *(int **)(*(int *)(*(int *)(iVar7 + 0x26) + 0x22) + 4);
      while (piVar4 != (int *)0x0) {
        piVar2 = (int *)piVar4[2];
        iVar6 = *piVar4;
        piVar4 = piVar2;
        if ((&DAT_0089cad8)[iVar6] == 0) {
          (**(code **)(**(int **)(*(int *)(iVar7 + 0x26) + 0x22) + 0x18))(iVar6);
        }
      }
      iVar6 = (**(code **)(**(int **)(*(int *)(iVar7 + 0x22) + 0x22) + 4))();
      if ((iVar6 < 1) ||
         (iVar6 = (**(code **)(**(int **)(*(int *)(iVar7 + 0x26) + 0x22) + 4))(), iVar6 < 1)) {
        FUN_00425cb0(iVar7);
      }
    }
  }
  while (piVar4 != (int *)0x0) {
    piVar8 = (int *)piVar4[2];
    iVar7 = *piVar4;
    iVar6 = (&DAT_0089cad8)[*(int *)(iVar7 + 0x24)];
    piVar4 = piVar8;
    if (((&DAT_0089cad8)[*(int *)(iVar7 + 0x20)] != 0) && (iVar6 != 0)) {
      *(undefined1 *)
       (*(int *)((&DAT_0089cad8)[*(int *)(iVar7 + 0x20)] + 0x12da) + 0x33 +
       *(int *)(iVar7 + 0x24) * 0x2c) = 1;
      *(undefined1 *)(*(int *)(iVar6 + 0x12da) + 0x33 + *(int *)(iVar7 + 0x20) * 0x2c) = 1;
    }
  }
  return;
}


