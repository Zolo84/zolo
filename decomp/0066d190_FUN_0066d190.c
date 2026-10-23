// FUN_0066d190 @ 66d190 size=753

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0066d190(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  undefined4 uVar13;
  char local_19;
  int local_14;
  int local_8;
  
  iVar7 = FUN_004a5a30();
  piVar1 = *(int **)(iVar7 + 4);
joined_r0x0066d1a8:
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar7 = *piVar1;
  iVar8 = FUN_004e9370(*(undefined4 *)(iVar7 + 0xc));
  local_19 = '\0';
  if ((*(int *)(iVar8 + 0x1aa) == 0) ||
     (piVar11 = *(int **)(*(int *)(iVar8 + 0x1aa) + 4), piVar11 == (int *)0x0)) {
LAB_0066d217:
    puVar5 = *(undefined4 **)(*(int *)(iVar8 + 0x1c2) + 4);
    do {
      if (puVar5 == (undefined4 *)0x0) {
        local_8 = 0;
        if (0 < *(int *)(iVar8 + 0x290)) {
          local_14 = 0;
          goto LAB_0066d254;
        }
        break;
      }
      puVar2 = (undefined4 *)puVar5[2];
      cVar6 = (**(code **)(*(int *)*puVar5 + 0x28))();
      puVar5 = puVar2;
    } while (cVar6 == '\0');
    if (local_19 != '\0') goto LAB_0066d45b;
    goto LAB_0066d3f1;
  }
  do {
    if ((*(int *)(*piVar11 + 0x74) == 1) &&
       (fVar12 = (float10)FUN_004bebe0(), (float10)_DAT_007f0ef8 < fVar12)) {
      local_19 = '\x01';
    }
    piVar11 = (int *)piVar11[2];
  } while (piVar11 != (int *)0x0);
  if (local_19 == '\0') goto LAB_0066d217;
  goto LAB_0066d45b;
  while( true ) {
    local_8 = local_8 + 1;
    local_14 = local_14 + 0xc;
    if (*(int *)(iVar8 + 0x290) <= local_8) break;
LAB_0066d254:
    iVar9 = FUN_004e9370(*(undefined4 *)(local_14 + *(int *)(iVar8 + 0x298)));
    if ((*(int *)(iVar9 + 0x254) == 8) || (*(int *)(iVar9 + 0x254) == 9)) {
      if (0x1c5 < *(int *)(iVar9 + 0x288)) {
        piVar11 = *(int **)(*(int *)(iVar9 + 0x1c2) + 4);
joined_r0x0066d302:
        if (piVar11 != (int *)0x0) {
          piVar3 = (int *)piVar11[2];
          piVar4 = (int *)*piVar11;
          cVar6 = (**(code **)(*piVar4 + 0x2c))();
          piVar11 = piVar3;
          if ((cVar6 != '\0') &&
             (cVar6 = (**(code **)(*(int *)((int)piVar4 + 0x22e) + 8))(), cVar6 != '\0')) {
            iVar9 = (**(code **)(*piVar4 + 0x14))();
            iVar9 = (**(code **)(**(int **)(iVar9 + 0x2aa) + 4))();
            if ((iVar9 != 0) &&
               (cVar6 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 10) + 6)), cVar6 != '\0')) {
              iVar9 = (**(code **)(*piVar4 + 0x14))();
              piVar3 = *(int **)(*(int *)(iVar9 + 0x2aa) + 4);
              do {
                if (piVar3 == (int *)0x0) goto joined_r0x0066d302;
                piVar4 = (int *)piVar3[2];
                cVar6 = (**(code **)(*(int *)(*piVar3 + 0x22e) + 8))();
                piVar3 = piVar4;
              } while ((cVar6 != '\0') ||
                      (iVar9 = *(int *)(iVar8 + 0x12), iVar10 = FUN_00523f70(), iVar10 != iVar9));
              local_19 = '\x01';
            }
          }
          goto joined_r0x0066d302;
        }
      }
    }
    else {
      piVar11 = *(int **)(*(int *)(iVar9 + 0x1c2) + 4);
      while (piVar11 != (int *)0x0) {
        piVar3 = (int *)piVar11[2];
        piVar4 = (int *)*piVar11;
        cVar6 = (**(code **)(*piVar4 + 0x28))();
        piVar11 = piVar3;
        if ((((cVar6 != '\0') &&
             (cVar6 = (**(code **)(*(int *)((int)piVar4 + 0x22e) + 8))(), cVar6 == '\0')) &&
            (iVar9 = *(int *)(iVar8 + 0x12), iVar10 = FUN_00523f70(), iVar10 == iVar9)) &&
           (cVar6 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 10) + 6)), cVar6 != '\0'))
        goto LAB_0066d456;
      }
    }
    if (local_19 != '\0') goto LAB_0066d45b;
  }
LAB_0066d3f1:
  uVar13 = *(undefined4 *)(param_1 + 10);
  FUN_004e9370(*(undefined4 *)(iVar7 + 0xc),uVar13);
  iVar8 = FUN_004e9f80(uVar13);
  if (0 < iVar8) {
    iVar9 = FUN_004e9370(iVar8);
    iVar8 = *(int *)(iVar9 + 0x482);
    iVar10 = FUN_0044e1d0();
    if ((iVar8 == iVar10) ||
       ((_DAT_007e4090 <= *(float *)(iVar9 + 0x270) && (_DAT_007e4090 <= *(float *)(iVar9 + 0x280)))
       )) goto LAB_0066d45b;
  }
LAB_0066d456:
  local_19 = '\x01';
LAB_0066d45b:
  *(char *)(iVar7 + 0x45) = local_19;
  piVar1 = (int *)piVar1[2];
  goto joined_r0x0066d1a8;
}


