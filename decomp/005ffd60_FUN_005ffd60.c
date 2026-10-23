// FUN_005ffd60 @ 5ffd60 size=1154

void __fastcall FUN_005ffd60(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  undefined1 local_2c [8];
  undefined1 local_24;
  undefined4 local_22;
  undefined1 local_1c [8];
  bool local_14;
  undefined4 local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cf786;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x9cf8) == '\0') {
    local_22 = *(undefined4 *)(param_1 + 0x8e);
    ExceptionList = &local_c;
    cVar6 = FUN_00433910();
    if (cVar6 == '\0') {
      iVar7 = *(int *)(param_1 + 0x8e);
    }
    else {
      iVar7 = 0;
    }
    local_24 = iVar7 != 0;
    local_12 = *(undefined4 *)(DAT_00d0ca90 + 6);
    cVar6 = FUN_00433910();
    if (cVar6 == '\0') {
      iVar7 = *(int *)(DAT_00d0ca90 + 6);
    }
    else {
      iVar7 = 0;
    }
    local_14 = iVar7 != 0;
  }
  else {
    local_22 = *(undefined4 *)(DAT_00d0ca90 + 6);
    ExceptionList = &local_c;
    cVar6 = FUN_00433910();
    if (cVar6 == '\0') {
      iVar7 = *(int *)(DAT_00d0ca90 + 6);
    }
    else {
      iVar7 = 0;
    }
    local_24 = iVar7 != 0;
    local_12 = *(undefined4 *)(param_1 + 0x8e);
    cVar6 = FUN_00433910();
    if (cVar6 == '\0') {
      local_14 = *(int *)(param_1 + 0x8e) != 0;
    }
    else {
      local_14 = false;
    }
  }
  iVar7 = FUN_00428ee0(param_1 + 0x96);
  if ((iVar7 != 0) && (iVar7 = iVar7 + -8, iVar7 != 0)) {
    FUN_00587120(iVar7);
    FUN_00587120(iVar7);
    *(undefined1 *)(*(int *)(param_1 + 0xa4) + 0x138c3) = *(undefined1 *)(param_1 + 0x9cf8);
    puVar8 = (undefined4 *)FUN_00588190(local_2c,local_1c,*(char *)(param_1 + 0x9cf8) == '\0');
    piVar5 = (int *)puVar8[1];
    while (piVar5 != (int *)0x0) {
      piVar2 = (int *)piVar5[2];
      piVar1 = (int *)(DAT_00ab27b4 + *piVar5 * 0x4b2);
      iVar7 = FUN_005883a0(local_2c,piVar1);
      *(int *)(param_1 + 0xa8 + *(int *)((int)piVar1 + 0x12) * 4) = iVar7;
      if (*(char *)(param_1 + 0x9cf8) == '\0') {
        iVar9 = (&DAT_0089cad8)[iVar7];
      }
      else {
        iVar9 = piVar1[0xf5];
      }
      FUN_004e4600(iVar9);
      iVar9 = DAT_00d0ca90;
      if (*(char *)(param_1 + 0x9cf8) == '\0') {
        iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 0x8e)];
      }
      piVar5 = piVar2;
      if (iVar9 != 0) {
        if ((*(int *)(param_1 + 0xa8 + *(int *)((int)piVar1 + 0x12) * 4) == *(int *)(iVar9 + 6)) &&
           ((cVar6 = (**(code **)(*(int *)(iVar9 + 0xe8b2) + 0x24))(*(int *)((int)piVar1 + 0x12)),
            cVar6 != '\0' ||
            (cVar6 = (**(code **)(*(int *)(iVar9 + 0xe8c4) + 0x24))
                               (*(undefined4 *)((int)piVar1 + 0x12)), cVar6 != '\0')))) {
          puVar10 = operator_new(0x23e);
          uStack_4 = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            uVar13 = *(undefined4 *)((int)piVar1 + 0x12);
            uVar3 = *(undefined4 *)(param_1 + 0x9cec);
            uVar4 = *(undefined4 *)(param_1 + 0x9cf0);
            pcVar11 = (char *)FUN_004af740(iVar7);
            pcVar12 = (char *)(**(code **)(*piVar1 + 0xc))();
            FUN_00433f00();
            uVar14 = 0xffffffff;
            *puVar10 = &PTR_FUN_007ee444;
            puVar10[2] = &PTR_LAB_007ee440;
            do {
              pcVar16 = pcVar12;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar16 = pcVar12 + 1;
              cVar6 = *pcVar12;
              pcVar12 = pcVar16;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar12 = pcVar16 + -uVar14;
            pcVar16 = (char *)((int)puVar10 + 0x13a);
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar16 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar14 = 0xffffffff;
            do {
              pcVar12 = pcVar11;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar12 = pcVar11 + 1;
              cVar6 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar11 = pcVar12 + -uVar14;
            pcVar12 = (char *)((int)puVar10 + 0x3a);
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar12 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            }
            *(undefined4 *)((int)puVar10 + 0x23a) = uVar13;
            uVar13 = __ftol();
            *(undefined4 *)((int)puVar10 + 0x2e) = uVar13;
            *(undefined4 *)((int)puVar10 + 0x36) = uVar3;
            *(undefined4 *)((int)puVar10 + 0x32) = uVar4;
          }
          uStack_4 = 0xffffffff;
          FUN_00600580(puVar10,*(undefined4 *)(param_1 + 0x9cf0));
          *(undefined4 *)
           (*(int *)(param_1 + 0xa4) + 0x9c74 + *(int *)(*(int *)(param_1 + 0xa4) + 0x2c) * 4) =
               *(undefined4 *)(param_1 + 0xa8 + *(int *)((int)piVar1 + 0x12) * 4);
          *(undefined4 *)
           (*(int *)(param_1 + 0xa4) + 0x34 + *(int *)(*(int *)(param_1 + 0xa4) + 0x2c) * 4) =
               *(undefined4 *)((int)piVar1 + 0x12);
          piVar1 = (int *)(*(int *)(param_1 + 0xa4) + 0x2c);
          *piVar1 = *piVar1 + 1;
        }
        else {
          puVar10 = operator_new(0x23e);
          uStack_4 = 1;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            uVar13 = *(undefined4 *)((int)piVar1 + 0x12);
            uVar3 = *(undefined4 *)(param_1 + 0x9cf0);
            uVar4 = *(undefined4 *)(param_1 + 0x9cec);
            pcVar11 = (char *)FUN_004af740(iVar7);
            pcVar12 = (char *)(**(code **)(*piVar1 + 0xc))();
            FUN_00433f00();
            uVar14 = 0xffffffff;
            *puVar10 = &PTR_FUN_007ee444;
            puVar10[2] = &PTR_LAB_007ee440;
            do {
              pcVar16 = pcVar12;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar16 = pcVar12 + 1;
              cVar6 = *pcVar12;
              pcVar12 = pcVar16;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar12 = pcVar16 + -uVar14;
            pcVar16 = (char *)((int)puVar10 + 0x13a);
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar16 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar14 = 0xffffffff;
            do {
              pcVar12 = pcVar11;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar12 = pcVar11 + 1;
              cVar6 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar6 != '\0');
            uVar14 = ~uVar14;
            pcVar11 = pcVar12 + -uVar14;
            pcVar12 = (char *)((int)puVar10 + 0x3a);
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar12 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            }
            *(undefined4 *)((int)puVar10 + 0x23a) = uVar13;
            uVar13 = __ftol();
            *(undefined4 *)((int)puVar10 + 0x2e) = uVar13;
            *(undefined4 *)((int)puVar10 + 0x36) = uVar3;
            *(undefined4 *)((int)puVar10 + 0x32) = uVar4;
          }
          uStack_4 = 0xffffffff;
          FUN_00600580(puVar10,*(undefined4 *)(param_1 + 0x9cec));
        }
      }
    }
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  ExceptionList = local_c;
  return;
}


