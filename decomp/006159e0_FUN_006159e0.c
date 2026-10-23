// FUN_006159e0 @ 6159e0 size=1108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006159e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d082b;
  local_c = ExceptionList;
  piVar11 = (int *)(param_1 + 0x126);
  piVar13 = piVar11;
  ExceptionList = &local_c;
  for (iVar9 = 0x1f; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
  if ((iVar9 != 0) && (piVar13 = *(int **)(iVar9 + 0x3654), *(int *)(param_1 + 0x120) != 0)) {
    FUN_00436030();
    iVar14 = *(int *)(param_1 + 0x120);
    if (iVar14 != 0) {
      piVar2 = *(int **)(iVar14 + 4);
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)piVar2[2];
        if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar2)(1);
        }
        FUN_00796cd8(piVar2);
        piVar2 = piVar1;
      }
      *(undefined4 *)(iVar14 + 4) = 0;
      *(undefined4 *)(iVar14 + 8) = 0;
      *(undefined4 *)(iVar14 + 0xc) = 0;
    }
    local_20 = 5;
    bVar3 = false;
    cVar4 = FUN_0044a690(*(undefined4 *)(DAT_00d0ca90 + 6));
    if (((cVar4 != '\0') || (*(char *)(*(int *)(DAT_00d0ca90 + 6) + 0x34ac + iVar9) != '\0')) ||
       (cVar4 = FUN_005861a0(*(undefined4 *)(iVar9 + 6)), cVar4 != '\0')) {
      bVar3 = true;
    }
    while (piVar13 != (int *)0x0) {
      piVar2 = (int *)piVar13[2];
      iVar14 = *piVar13;
      if (*(int *)(iVar14 + 0x1c) != 0) {
        iVar10 = (int)*(char *)(DAT_00893530 + 0x16) + *(int *)(iVar9 + 6);
        piVar13 = *(int **)(iVar9 + 0x3654);
        while (piVar13 != (int *)0x0) {
          piVar1 = piVar13 + 2;
          iVar8 = *piVar13;
          piVar13 = (int *)*piVar1;
          if (*(int *)(iVar8 + 0x1c) != 0) {
            iVar10 = iVar10 + *(int *)(*(int *)(iVar8 + 0x1c) + 0xe);
          }
        }
        uVar12 = (*(int *)((local_20 % 0x1a) * 4 + 0x85ead0) * iVar10 + DAT_0085eb38) % 100 &
                 0x80000003;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
        }
        iVar10 = FUN_004a60a0(*(int *)(iVar9 + 6),0,0);
        iVar10 = uVar12 + iVar10;
        if (bVar3) {
          iVar10 = 100;
        }
        else {
          iVar8 = FUN_004a5c40(0xc,*(undefined4 *)(param_1 + 200));
          if ((iVar8 == 0) && (DAT_00d610dc == '\0')) {
            iVar10 = -100;
          }
        }
        if ((DAT_00d0ca90 != 0) && (*(int *)(param_1 + 200) == *(int *)(DAT_00d0ca90 + 6))) {
          iVar10 = 100;
        }
        pvVar5 = operator_new(0x58);
        uStack_4 = 0;
        if (pvVar5 == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0060b6e0(iVar14,iVar10);
        }
        iVar14 = *(int *)(param_1 + 0x120);
        uStack_4 = 0xffffffff;
        iVar10 = *(int *)(iVar14 + 8);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = uVar6;
          puVar7[1] = iVar10;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar8 = *(int *)(iVar14 + 0xc);
        *(undefined4 **)(iVar14 + 8) = puVar7;
        *(int *)(iVar14 + 0xc) = iVar8 + 1;
        if (iVar8 == 0) {
          *(undefined4 **)(iVar14 + 4) = puVar7;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar7;
        }
        FUN_004353e0();
      }
      local_20 = local_20 + 1;
      piVar13 = piVar2;
    }
    for (iVar14 = *(int *)(iVar9 + 0x4508); iVar14 != 0; iVar14 = *(int *)(iVar14 + 8)) {
      iVar10 = 0;
      piVar13 = piVar11;
      do {
        iVar8 = FUN_00525800(iVar10,1);
        iVar10 = iVar10 + 1;
        *piVar13 = *piVar13 + iVar8;
        piVar13 = piVar13 + 1;
      } while (iVar10 < 0x1f);
    }
    piVar13 = *(int **)(iVar9 + 0x451c);
    while (piVar13 != (int *)0x0) {
      piVar2 = (int *)piVar13[2];
      iVar14 = *piVar13;
      piVar13 = piVar2;
      if ((*(char *)(iVar14 + 0x162) == '\0') && (*(char *)(iVar14 + 0x154) == '\0')) {
        *(int *)(param_1 + 0x126 + *(int *)(iVar14 + 0x134) * 4) =
             *(int *)(param_1 + 0x126 + *(int *)(iVar14 + 0x134) * 4) + 1;
      }
    }
    iVar14 = 0;
    puVar7 = (undefined4 *)(param_1 + 0x1a2);
    do {
      if (bVar3) {
        *puVar7 = 100;
      }
      else {
        uVar6 = FUN_004a60a0(*(undefined4 *)(iVar9 + 6),0x14 >= iVar14,0x14 < iVar14);
        *puVar7 = uVar6;
      }
      iVar14 = iVar14 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar14 < 0x1f);
    iVar9 = 0;
    do {
      if (piVar11[0x1f] < 10) {
        iVar14 = (int)*(char *)(DAT_00893530 + 0x16) +
                 *(int *)((&DAT_0089cad8)[*(int *)(DAT_00d0ca90 + 6)] + 6);
        piVar13 = *(int **)((&DAT_0089cad8)[*(int *)(DAT_00d0ca90 + 6)] + 0x3654);
        while (piVar13 != (int *)0x0) {
          piVar2 = piVar13 + 2;
          iVar10 = *piVar13;
          piVar13 = (int *)*piVar2;
          if (*(int *)(iVar10 + 0x1c) != 0) {
            iVar14 = iVar14 + *(int *)(*(int *)(iVar10 + 0x1c) + 0xe);
          }
        }
        if (_DAT_007e681c <=
            (float)((*(int *)(((iVar9 + 10) % 0x1a) * 4 + 0x85ead0) * iVar14 + DAT_0085eb38) % 100))
        {
          __ftol();
        }
        else {
          __ftol();
        }
        iVar14 = __ftol();
        *piVar11 = iVar14;
      }
      iVar9 = iVar9 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar9 < 0x1f);
  }
  ExceptionList = local_c;
  return;
}


