// FUN_00688fd0 @ 688fd0 size=568

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00688fd0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char cVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  float10 fVar16;
  float local_28;
  int iStack_24;
  float fStack_20;
  int local_18;
  float local_10;
  
  piVar11 = *(int **)(param_1 + 0xa4);
  local_18 = 0;
  local_10 = 1e+06;
  if (piVar11 == (int *)0x0) {
    return 0;
  }
  do {
    iVar2 = *piVar11;
    piVar11 = (int *)piVar11[2];
    iVar14 = local_18;
    fVar1 = local_10;
    if (*(int *)(iVar2 + 0xc) == 0) {
LAB_00689068:
      if (*(char *)(iVar2 + 0x17b) == '\0') {
        piVar15 = *(int **)(param_1 + 4);
        do {
          if (piVar15 == (int *)0x0) goto LAB_00689094;
          iVar12 = *piVar15;
          piVar15 = (int *)piVar15[2];
        } while (*(int *)(iVar12 + 4) != *(int *)(iVar2 + 0xc));
        if (iVar12 == 0) {
LAB_00689094:
          local_28 = -1000.0;
LAB_0068909c:
          iVar14 = *(int *)(param_1 + 0x1c);
          iVar12 = FUN_00522770();
          if (iVar12 != iVar14) {
            local_28 = local_28 - _DAT_007e67e8;
          }
          cVar10 = FUN_0051cc00();
          if (cVar10 != '\0') {
            local_28 = local_28 + _DAT_007f3ac8;
          }
          fVar16 = (float10)FUN_00525ba0();
          fVar1 = (float)((float10)local_28 - fVar16 * (float10)_DAT_007e6858);
          cVar10 = FUN_005237d0();
          if (cVar10 != '\0') {
            fVar1 = fVar1 + _DAT_007e67e8;
          }
          iVar14 = iVar2;
          if ((local_18 != 0) && (local_10 <= fVar1)) {
            iVar14 = local_18;
            fVar1 = local_10;
          }
        }
        else {
          iVar13 = *(int *)(iVar12 + 4);
          iStack_24 = 0;
          piVar15 = *(int **)(param_1 + 0xa4);
          if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
            do {
              piVar3 = (int *)piVar15[2];
              iVar5 = *piVar15;
              cVar10 = (**(code **)(*(int *)(iVar5 + 0x22e) + 8))();
              if (((cVar10 != '\0') && (*(char *)(iVar5 + 0x17b) == '\0')) &&
                 (*(int *)(iVar5 + 0xc) == iVar13)) {
                iStack_24 = iStack_24 + 1;
              }
              piVar15 = piVar3;
            } while (piVar3 != (int *)0x0);
            if (1 < iStack_24) {
              if (iVar2 == 0) {
                iVar14 = 0;
              }
              else {
                iVar14 = iVar2 + 0x22;
              }
              fVar1 = *(float *)(iVar12 + 0x20);
              fVar6 = *(float *)(iVar12 + 0x18);
              uVar7 = *(undefined4 *)(iVar12 + 4);
              fStack_20 = 0.0;
              puVar9 = *(undefined4 **)(iVar14 + 4);
              while (puVar9 != (undefined4 *)0x0) {
                puVar8 = (undefined4 *)puVar9[2];
                fVar16 = (float10)(**(code **)(*(int *)*puVar9 + 0x2c))(0,0,uVar7,0);
                fStack_20 = (float)(fVar16 + (float10)fStack_20);
                puVar9 = puVar8;
              }
              local_28 = (fVar1 - fVar6) - fStack_20;
              goto LAB_0068909c;
            }
          }
        }
      }
    }
    else {
      iVar12 = FUN_004e9370(*(int *)(iVar2 + 0xc));
      piVar15 = *(int **)(*(int *)(iVar12 + 0x1c2) + 4);
      do {
        if (piVar15 == (int *)0x0) goto LAB_00689068;
        piVar3 = (int *)piVar15[2];
        piVar4 = (int *)*piVar15;
        cVar10 = (**(code **)(*piVar4 + 0x28))();
        piVar15 = piVar3;
      } while ((cVar10 == '\0') ||
              (iVar12 = *(int *)(piVar4[0x92] + 0x12da), iVar13 = FUN_006a9d50(),
              *(char *)(iVar12 + (iVar13 + 1) * 0x2c) == '\0'));
    }
    local_10 = fVar1;
    local_18 = iVar14;
    if (piVar11 == (int *)0x0) {
      return local_18;
    }
  } while( true );
}


