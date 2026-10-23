// FUN_0068ebd0 @ 68ebd0 size=427

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0068ebd0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_10;
  int local_8;
  
  cVar7 = FUN_006a8720();
  if (cVar7 == '\0') {
    iVar10 = 0;
    puVar11 = *(undefined4 **)(*(int *)((int)param_1 + 10) + 0xe8a4);
    uVar9 = (&DAT_0089cad8)[param_2];
    local_10 = 0;
    if (puVar11 != (undefined4 *)0x0) {
      do {
        puVar1 = (undefined4 *)puVar11[2];
        iVar8 = FUN_004e9370(*puVar11);
        cVar7 = FUN_004ea690(uVar9);
        if (cVar7 != '\0') {
          iVar10 = iVar10 + 1;
          if ((*(int **)(iVar8 + 0x1c2) != (int *)0x0) &&
             (iVar8 = (**(code **)(**(int **)(iVar8 + 0x1c2) + 4))(), 0 < iVar8)) {
            local_10 = local_10 + 1;
          }
        }
        puVar11 = puVar1;
      } while (puVar1 != (undefined4 *)0x0);
      if (iVar10 != 0) {
        if (_DAT_007e4094 <= (float)local_10 / (float)iVar10) {
          piVar2 = *(int **)(*(int *)((int)param_1 + 10) + 0xe86e);
          do {
            if (piVar2 == (int *)0x0) {
              return 1;
            }
            iVar10 = *piVar2;
            piVar2 = (int *)piVar2[2];
            local_10 = 0;
            local_8 = 0;
            piVar4 = *(int **)(iVar10 + 0x2c);
            while (piVar4 != (int *)0x0) {
              piVar3 = (int *)piVar4[2];
              piVar6 = *(int **)(*(int *)(*piVar4 + 0x1c2) + 4);
              while (piVar4 = piVar3, piVar6 != (int *)0x0) {
                piVar4 = (int *)piVar6[2];
                piVar5 = (int *)*piVar6;
                cVar7 = (**(code **)(*piVar5 + 0x28))();
                piVar6 = piVar4;
                if ((cVar7 != '\0') && (piVar5[0x92] == *(int *)((int)param_1 + 10))) {
                  iVar8 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
                  local_8 = local_8 + iVar8;
                }
              }
            }
            puVar11 = *(undefined4 **)(iVar10 + 0x3e);
            while (puVar11 != (undefined4 *)0x0) {
              puVar1 = (undefined4 *)puVar11[2];
              piVar4 = (int *)*puVar11;
              puVar11 = puVar1;
              if (((*(int *)(*piVar4 + 0x4c) == 0) && (iVar10 = FUN_004c9f81(), iVar10 != 0)) &&
                 (iVar10 = FUN_004c9f81(), *(int *)(iVar10 + 6) == param_2)) {
                uVar9 = (*(code *)**(undefined4 **)*piVar4)();
                (**(code **)(*param_1 + 0xe0))(uVar9);
                iVar10 = FUN_00692110(uVar9);
                local_10 = local_10 + iVar10;
              }
            }
          } while (local_10 <= local_8);
        }
        return 0;
      }
    }
  }
  return 1;
}


