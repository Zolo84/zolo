// FUN_00585820 @ 585820 size=383

void __thiscall FUN_00585820(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = (**(code **)(**(int **)(param_1 + 0x22) + 4))();
  if ((((iVar7 != 0) && (**(int **)(*(int *)(param_1 + 0x22) + 4) != 0)) &&
      (cVar6 = FUN_00584dd0(), iVar7 = param_2, cVar6 != '\0')) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x22) + 4), iVar1 != 0)) {
    while (puVar8 = (undefined4 *)FUN_00516240(&param_2,0), *(int *)*puVar8 != iVar7) {
      if (iVar1 == 0) {
        return;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x22) + 0x18))(iVar7);
    FUN_005859a0(iVar7);
    piVar5 = DAT_00d615e4;
joined_r0x005858b2:
    if (piVar5 != (int *)0x0) {
      piVar2 = (int *)piVar5[2];
      iVar3 = *piVar5;
      iVar4 = *(int *)(iVar3 + 0x22);
      iVar9 = (**(code **)(**(int **)(iVar4 + 0x22) + 4))();
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = **(int **)(*(int *)(iVar4 + 0x22) + 4);
      }
      if (iVar10 == iVar1) {
        iVar4 = *(int *)(iVar3 + 0x22);
        cVar6 = FUN_00584dd0();
        if (cVar6 != '\0') {
          iVar4 = *(int *)(*(int *)(iVar4 + 0x22) + 4);
          do {
            if (iVar4 == 0) goto LAB_00585931;
            puVar8 = (undefined4 *)FUN_00516240(&stack0xfffffff4,0);
          } while (*(int *)*puVar8 != iVar7);
          (**(code **)(**(int **)(*(int *)(iVar3 + 0x22) + 0x22) + 0x18))(iVar7);
          FUN_005859a0(iVar7);
        }
      }
LAB_00585931:
      iVar4 = *(int *)(iVar3 + 0x26);
      iVar9 = (**(code **)(**(int **)(iVar4 + 0x22) + 4))();
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = **(int **)(*(int *)(iVar4 + 0x22) + 4);
      }
      piVar5 = piVar2;
      if (iVar10 == iVar1) {
        iVar4 = *(int *)(iVar3 + 0x26);
        cVar6 = FUN_00584dd0();
        if (cVar6 != '\0') {
          piVar2 = *(int **)(*(int *)(iVar4 + 0x22) + 4);
          do {
            if (piVar2 == (int *)0x0) goto joined_r0x005858b2;
            iVar4 = *piVar2;
            piVar2 = (int *)piVar2[2];
          } while (iVar4 != iVar7);
          (**(code **)(**(int **)(*(int *)(iVar3 + 0x26) + 0x22) + 0x18))(iVar7);
          FUN_005859a0(iVar7);
        }
      }
      goto joined_r0x005858b2;
    }
  }
  return;
}


