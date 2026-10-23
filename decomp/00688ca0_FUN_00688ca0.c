// FUN_00688ca0 @ 688ca0 size=319

void __thiscall FUN_00688ca0(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  if (param_3 != '\0') {
    (**(code **)(*(int *)(param_1 + 0xda) + 0x10))();
  }
  cVar8 = (**(code **)(*param_2 + 8))();
  if (cVar8 != '\0') {
    piVar7 = *(int **)(param_1 + 0xa4);
    while (piVar7 != (int *)0x0) {
      piVar10 = (int *)piVar7[2];
      iVar1 = *piVar7;
      iVar9 = (**(code **)(*(int *)(iVar1 + 0x11c) + 4))();
      piVar7 = piVar10;
      if (iVar9 != 0) {
        piVar10 = *(int **)(iVar1 + 0x120);
        while (piVar10 != (int *)0x0) {
          piVar2 = (int *)piVar10[2];
          iVar9 = *piVar10;
          piVar10 = (int *)(**(code **)(**(int **)(iVar9 + 0x84) + 0xc))();
          cVar8 = (**(code **)(*piVar10 + 0x24))(iVar1);
          if (cVar8 == '\0') {
            iVar9 = (**(code **)(**(int **)(iVar9 + 0x84) + 0x10))();
          }
          else {
            iVar9 = (**(code **)(**(int **)(iVar9 + 0x80) + 0x10))();
          }
          piVar6 = *(int **)(iVar9 + 4);
          while (piVar10 = piVar2, piVar6 != (int *)0x0) {
            piVar10 = (int *)piVar6[2];
            iVar9 = *piVar6;
            iVar3 = *(int *)(iVar9 + 0xc);
            piVar6 = piVar10;
            if ((0 < iVar3) &&
               (cVar8 = (**(code **)(*(int *)(param_1 + 0xda) + 0x24))(iVar3), cVar8 == '\0')) {
              FUN_0049a100(*(undefined4 *)(iVar9 + 0xc));
            }
          }
        }
      }
    }
  }
  if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)param_2[1];
    do {
      puVar4 = (undefined4 *)puVar11[2];
      uVar5 = *puVar11;
      cVar8 = (**(code **)(*(int *)(param_1 + 0xda) + 0x24))(uVar5);
      if (cVar8 == '\0') {
        FUN_0049a100(uVar5);
      }
      puVar11 = puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  return;
}


