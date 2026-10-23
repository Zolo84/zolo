// FUN_0066d6c0 @ 66d6c0 size=678

void __fastcall FUN_0066d6c0(int *param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)((int)param_1 + 0x2715a);
  for (iVar8 = DAT_00877690; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar7 = (int *)(**(code **)(*param_1 + 0xe0))();
  iVar8 = (**(code **)(*piVar7 + 0x1e8))();
  for (piVar7 = *(int **)(iVar8 + 4); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    for (piVar4 = *(int **)(*piVar7 + 0xde); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      *(undefined4 *)((int)param_1 + *piVar4 * 4 + 0x2715a) = 1;
    }
  }
  iVar8 = (**(code **)(*param_1 + 0xe0))();
  for (piVar7 = *(int **)(*(int *)(iVar8 + 0x7e) + 0xf0); piVar7 != (int *)0x0;
      piVar7 = (int *)piVar7[2]) {
    *(undefined4 *)((int)param_1 + *piVar7 * 4 + 0x2715a) = 1;
  }
  iVar8 = 0;
  if (0 < DAT_00877690) {
    piVar7 = param_1 + 0x4e30;
    do {
      piVar7[-20000] = 0x3f800000;
      piVar7[-19999] = 0;
      *piVar7 = 0x3f800000;
      piVar7[1] = 0;
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar8 < DAT_00877690);
  }
  sVar3 = *(short *)(DAT_00893530 + 0x18);
  cVar1 = *(char *)(DAT_00893530 + 0x16);
  cVar2 = *(char *)(DAT_00893530 + 0x15);
  *(undefined1 *)(param_1 + 0xc36f) = 1;
  iVar8 = (int)cVar2 + ((int)cVar1 + sVar3 * 0xc) * 0x1e;
  for (piVar7 = (int *)param_1[0xc36c]; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    piVar4 = (int *)*piVar7;
    if ((int)*(char *)((int)piVar4 + 0xb) +
        ((int)(char)piVar4[3] + *(short *)((int)piVar4 + 0xe) * 0xc) * 0x1e < iVar8) {
      (**(code **)(param_1[0xc36b] + 0x1c))(piVar7);
      FUN_00796cd8(piVar4);
    }
    else if ((int)*(char *)((int)piVar4 + 5) +
             ((int)*(char *)((int)piVar4 + 6) + (short)piVar4[2] * 0xc) * 0x1e <= iVar8) {
      param_1[*piVar4 * 2 + 0x10] = (int)((float)piVar4[4] * (float)param_1[*piVar4 * 2 + 0x10]);
      param_1[*piVar4 * 2 + 0x11] = (int)((float)piVar4[5] + (float)param_1[*piVar4 * 2 + 0x11]);
    }
  }
  *(undefined1 *)(param_1 + 0xc36f) = 0;
  iVar6 = param_1[0xc36c];
  while (iVar6 != 0) {
    if (*(char *)(iVar6 + 0xc) == '\0') {
      iVar6 = *(int *)(iVar6 + 8);
    }
    else {
      iVar5 = *(int *)(iVar6 + 8);
      (**(code **)(param_1[0xc36b] + 0x1c))(iVar6);
      iVar6 = iVar5;
    }
  }
  *(undefined1 *)((int)param_1 + 0x30dce) = 1;
  for (piVar7 = *(int **)((int)param_1 + 0x30dc2); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2])
  {
    piVar4 = (int *)*piVar7;
    if ((int)*(char *)((int)piVar4 + 0xb) +
        ((int)(char)piVar4[3] + *(short *)((int)piVar4 + 0xe) * 0xc) * 0x1e < iVar8) {
      (**(code **)(*(int *)((int)param_1 + 0x30dbe) + 0x1c))(piVar7);
      FUN_00796cd8(piVar4);
    }
    else if ((int)*(char *)((int)piVar4 + 5) +
             ((int)*(char *)((int)piVar4 + 6) + (short)piVar4[2] * 0xc) * 0x1e <= iVar8) {
      param_1[*piVar4 * 2 + 0x4e30] = (int)((float)piVar4[4] * (float)param_1[*piVar4 * 2 + 0x4e30])
      ;
      param_1[*piVar4 * 2 + 0x4e31] = (int)((float)piVar4[5] + (float)param_1[*piVar4 * 2 + 0x4e31])
      ;
    }
  }
  *(undefined1 *)((int)param_1 + 0x30dce) = 0;
  iVar8 = *(int *)((int)param_1 + 0x30dc2);
  while (iVar8 != 0) {
    if (*(char *)(iVar8 + 0xc) == '\0') {
      iVar8 = *(int *)(iVar8 + 8);
    }
    else {
      iVar6 = *(int *)(iVar8 + 8);
      (**(code **)(*(int *)((int)param_1 + 0x30dbe) + 0x1c))(iVar8);
      iVar8 = iVar6;
    }
  }
  return;
}


