// FUN_00661fd0 @ 661fd0 size=432

void __fastcall FUN_00661fd0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  
  for (piVar9 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508); piVar9 != (int *)0x0;
      piVar9 = (int *)piVar9[2]) {
    cVar4 = (**(code **)(*(int *)*piVar9 + 0x2c))();
    if (cVar4 != '\0') {
      (**(code **)(*(int *)(*piVar9 + 0x22) + 4))();
    }
  }
  iVar5 = *(int *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0x170);
  *(int *)((int)param_1 + 0xd2) = iVar5;
  if (iVar5 != 0) goto LAB_00662049;
  *(undefined4 *)((int)param_1 + 0xd2) = 1;
  iVar5 = FUN_006a9d50();
  if (iVar5 != 1) {
    if (iVar5 == 0xb) {
      *(undefined4 *)((int)param_1 + 0xd2) = 2;
      goto LAB_00662049;
    }
    if (iVar5 != 0x31) goto LAB_00662049;
  }
  *(undefined4 *)((int)param_1 + 0xd2) = 3;
LAB_00662049:
  iVar5 = (**(code **)(*(int *)((int)param_1 + 0xde) + 4))();
  *(int *)((int)param_1 + 0xda) = iVar5 + 1;
  iVar5 = (**(code **)(param_1[0x3c] + 4))();
  *(undefined4 *)((int)param_1 + 0xca) = 5;
  *(int *)((int)param_1 + 0xd6) = iVar5 / 2 + 1;
  iVar5 = 0;
  iVar6 = (**(code **)(*param_1 + 0x1c4))();
  piVar9 = *(int **)(iVar6 + 4);
  while (piVar9 != (int *)0x0) {
    piVar1 = (int *)piVar9[2];
    iVar6 = *(int *)(*piVar9 + 0x26);
    while (piVar9 = piVar1, iVar6 != 0) {
      iVar6 = *(int *)(iVar6 + 8);
      iVar7 = FUN_004fccd0();
      if (iVar7 == 0) {
        iVar5 = iVar5 + 1;
      }
    }
  }
  iVar5 = iVar5 / *(int *)((int)param_1 + 0xd2);
  if (*(int *)((int)param_1 + 0xca) < iVar5) {
    *(int *)((int)param_1 + 0xca) = iVar5 * 2;
  }
  cVar4 = FUN_0044beb0();
  if (cVar4 != '\0') {
    piVar9 = &DAT_0089cad8;
    do {
      iVar5 = *piVar9;
      if ((iVar5 != 0) &&
         (iVar6 = *(int *)(iVar5 + 0x12da), iVar7 = FUN_006a9d50(),
         *(char *)(iVar6 + (iVar7 + 1) * 0x2c) != '\0')) {
        piVar1 = *(int **)(iVar5 + 0x4508);
        while (piVar1 != (int *)0x0) {
          piVar2 = (int *)piVar1[2];
          piVar3 = (int *)*piVar1;
          cVar4 = (**(code **)(*piVar3 + 0x2c))();
          piVar1 = piVar2;
          if (cVar4 != '\0') {
            iVar5 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
            if (*(int *)((int)param_1 + 0xca) < iVar5) {
              uVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
              *(undefined4 *)((int)param_1 + 0xca) = uVar8;
            }
          }
        }
      }
      piVar9 = piVar9 + 1;
    } while ((int)piVar9 < 0x89d038);
  }
  if (0x1e < *(int *)((int)param_1 + 0xca)) {
    *(undefined4 *)((int)param_1 + 0xca) = 0x1e;
  }
  return;
}


