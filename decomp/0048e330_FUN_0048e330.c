// FUN_0048e330 @ 48e330 size=450

undefined4 __thiscall FUN_0048e330(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  int local_584;
  int local_56c [344];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bd98b;
  pvStack_c = ExceptionList;
  iVar2 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x12)];
  iVar3 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0xe)];
  local_584 = 0;
  local_4 = 0;
  piVar11 = local_56c;
  for (iVar10 = 0x158; piVar6 = (int *)0x0, piVar9 = (int *)0x0, piVar4 = DAT_00d615f6,
      ExceptionList = &pvStack_c, iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  while (piVar7 = piVar9, piVar11 = piVar6, piVar6 = piVar11, piVar4 != (int *)0x0) {
    iVar10 = *piVar4;
    piVar4 = (int *)piVar4[2];
    piVar9 = piVar7;
    if ((*(char *)(iVar10 + 0x4b) != '\0') && (*(char *)(iVar10 + 0x4a) != '\0')) {
      iVar8 = *(int *)(iVar10 + 0x16);
      if (((*(int *)(iVar10 + 0x1e) == 0) &&
          (((&DAT_0089cad8)[*(int *)(iVar10 + 0x1a)] == iVar2 || ((&DAT_0089cad8)[iVar8] == iVar2)))
          ) && (((&DAT_0089cad8)[iVar8] == iVar3 ||
                (((&DAT_0089cad8)[*(int *)(iVar10 + 0x1a)] == iVar3 || (iVar3 == 0)))))) {
        if (iVar8 == *(int *)(param_1 + 6)) {
          iVar8 = *(int *)(iVar10 + 0x1a);
        }
        if (local_56c[iVar8] == 0) {
          local_56c[iVar8] = iVar10;
        }
        else {
          FUN_0058ac40();
          piVar9 = operator_new(0xe);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            *piVar9 = iVar10;
            piVar9[1] = (int)piVar7;
            piVar9[2] = 0;
            *(undefined1 *)(piVar9 + 3) = 0;
          }
          iVar10 = local_584 + 1;
          bVar12 = local_584 != 0;
          piVar6 = piVar9;
          local_584 = iVar10;
          if (bVar12) {
            piVar7[2] = (int)piVar9;
            piVar6 = piVar11;
          }
        }
      }
    }
  }
  while (piVar6 != (int *)0x0) {
    piVar4 = (int *)piVar6[2];
    puVar5 = (undefined4 *)*piVar6;
    puVar1 = (undefined4 *)(DAT_00d615f2 + 0x1c);
    (**(code **)(DAT_00d615f2 + 0x28))(&stack0xfffffa5c,puVar5);
    (*(code *)*puVar1)();
    piVar6 = piVar4;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  while (piVar11 != (int *)0x0) {
    piVar11 = (int *)piVar11[2];
    FUN_00796cd8();
  }
  ExceptionList = pvStack_c;
  return 3;
}


