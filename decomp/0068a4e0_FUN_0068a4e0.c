// FUN_0068a4e0 @ 68a4e0 size=619

void __fastcall FUN_0068a4e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_2c;
  int local_28;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d4ee8;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  piVar9 = *(int **)(param_1 + 4);
  do {
    if (piVar9 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    local_1c = (undefined4 *)0x0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    piVar2 = (int *)piVar9[2];
    local_4 = 0;
    iVar1 = DAT_00ab27b4 + *(int *)(*piVar9 + 4) * 0x4b2;
    piVar9 = *(int **)(*(int *)(iVar1 + 0x1c2) + 4);
    while (piVar9 != (int *)0x0) {
      piVar3 = (int *)piVar9[2];
      piVar4 = (int *)*piVar9;
      cVar7 = (**(code **)(*piVar4 + 0x28))();
      piVar9 = piVar3;
      if ((cVar7 != '\0') &&
         (*(char *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x12da) +
                   *(int *)(piVar4[0x92] + 6) * 0x2c + 0x2c) != '\0')) {
        iVar8 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + iVar8;
      }
    }
    local_2c = 0;
    if (0 < *(int *)(iVar1 + 0x290)) {
      local_28 = 0;
      do {
        piVar9 = (int *)(local_28 + *(int *)(iVar1 + 0x298));
        if (piVar9[1] != 4) {
          iVar11 = *piVar9;
          iVar8 = DAT_00ab27b4 + iVar11 * 0x4b2;
          iVar11 = *(int *)(DAT_00ab27b4 + 0x3d8 + iVar11 * 0x4b2);
          if ((iVar11 != 0) && (cVar7 = FUN_0044b280(*(undefined4 *)(iVar11 + 6)), cVar7 != '\0')) {
            uVar5 = *(undefined4 *)(iVar8 + 0x12);
            for (puVar10 = local_1c; puVar10 != (undefined4 *)0x0;
                puVar10 = (undefined4 *)puVar10[2]) {
              cVar7 = (*(code *)PTR_FUN_007e3798)(*puVar10,uVar5);
              if (cVar7 != '\0') {
                if (puVar10 != (undefined4 *)0x0) goto LAB_0068a6d4;
                break;
              }
            }
            uVar5 = *(undefined4 *)(iVar8 + 0x12);
            puVar10 = operator_new(0xe);
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              *puVar10 = uVar5;
              puVar10[1] = local_18;
              puVar10[2] = 0;
              *(undefined1 *)(puVar10 + 3) = 0;
            }
            iVar11 = local_14 + 1;
            puVar6 = puVar10;
            if (local_14 != 0) {
              local_18[2] = puVar10;
              puVar6 = local_1c;
            }
            local_1c = puVar6;
            piVar9 = *(int **)(*(int *)(iVar8 + 0x1c2) + 4);
            while (local_18 = puVar10, local_14 = iVar11, piVar9 != (int *)0x0) {
              piVar3 = (int *)piVar9[2];
              piVar4 = (int *)*piVar9;
              cVar7 = (**(code **)(*piVar4 + 0x28))();
              piVar9 = piVar3;
              if (cVar7 != '\0') {
                iVar8 = FUN_00522770();
                cVar7 = FUN_0044b280(*(undefined4 *)(iVar8 + 6));
                if (cVar7 != '\0') {
                  iVar8 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
                  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + iVar8;
                }
              }
            }
          }
        }
LAB_0068a6d4:
        local_2c = local_2c + 1;
        local_28 = local_28 + 0xc;
      } while (local_2c < *(int *)(iVar1 + 0x290));
    }
    local_4 = 0xffffffff;
    while (piVar9 = piVar2, local_1c != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)local_1c[2];
      FUN_00796cd8(local_1c);
      local_1c = puVar10;
    }
  } while( true );
}


