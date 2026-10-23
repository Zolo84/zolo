// FUN_004b99a0 @ 4b99a0 size=669

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b99a0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_4 [4];
  
  if ((*(char *)(param_1[0x20] + 0x3e) != '\0') || (*(char *)(param_1[0x21] + 0x3e) != '\0'))
  goto LAB_004b9c13;
  if ((*(char *)((int)param_1 + 0x9a) != '\0') && (iVar4 = FUN_004b9650(), iVar4 != 0)) {
    *(undefined1 *)(iVar4 + 0x4f) = 1;
  }
  if (param_1[0x1d] == 1) {
    FUN_004bed30();
    FUN_004bed30();
  }
  if ((param_1[0x1d] == 3) && (_DAT_00dc1674 < (float)param_1[0x19])) {
    (**(code **)(*param_1 + 0x58))();
    return;
  }
  iVar4 = (**(code **)(*(int *)param_1[0x20] + 0xc))();
  iVar4 = *(int *)(iVar4 + 4);
  while (iVar4 != 0) {
    FUN_00498700(auStack_4,0);
    uVar5 = FUN_0051c480();
    FUN_004bd9b0(uVar5);
  }
  iVar4 = (**(code **)(*(int *)param_1[0x21] + 0xc))();
  iVar4 = *(int *)(iVar4 + 4);
  while (iVar4 != 0) {
    FUN_00498700(auStack_4,0);
    uVar5 = FUN_0051c480();
    FUN_004bd9b0(uVar5);
  }
  (**(code **)(*param_1 + 0x68))();
  iVar4 = param_1[0x19];
  param_1[0x19] = iVar4 + 1;
  if (0 < iVar4 + 1) {
    (**(code **)(*param_1 + 0x7c))();
    (**(code **)(*param_1 + 0x70))();
    *(undefined1 *)((int)param_1 + 0x9a) = 0;
  }
  if (8 < param_1[0x19]) {
    *(undefined1 *)(param_1[0x20] + 0x4f) = 0;
    *(undefined1 *)(param_1[0x21] + 0x4f) = 0;
  }
  (**(code **)(*(int *)param_1[0x20] + 0x1c))(param_1[0x21]);
  (**(code **)(*(int *)param_1[0x21] + 0x1c))(param_1[0x20]);
  FUN_004bc8f0(0);
  FUN_004bc8f0(0);
  cVar3 = FUN_0042e980();
  if ((((cVar3 == '\0') || (*(char *)(param_1[0x20] + 0x3f) != '\0')) ||
      (*(char *)(param_1[0x21] + 0x3f) != '\0')) ||
     (iVar4 = (**(code **)(*param_1 + 0x24))(), param_1[0x19] < iVar4)) goto LAB_004b9c13;
  bVar2 = false;
  iVar4 = (**(code **)(*(int *)param_1[0x20] + 0xc))();
  piVar6 = *(int **)(iVar4 + 4);
  if (piVar6 == (int *)0x0) {
LAB_004b9bc6:
    iVar4 = (**(code **)(*(int *)param_1[0x21] + 0xc))();
    piVar6 = *(int **)(iVar4 + 4);
    if (*(int **)(iVar4 + 4) == (int *)0x0) goto LAB_004b9c13;
    do {
      piVar1 = (int *)piVar6[2];
      if ((*(int **)(*piVar6 + 500) != (int *)0x0) &&
         (cVar3 = (**(code **)(**(int **)(*piVar6 + 500) + 0x118))(), cVar3 != '\0')) {
        bVar2 = true;
      }
      piVar6 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (!bVar2) goto LAB_004b9c13;
    piVar6 = (int *)param_1[0x21];
  }
  else {
    do {
      piVar1 = (int *)piVar6[2];
      iVar4 = *piVar6;
      if ((*(int *)(iVar4 + 0xc) == 0) &&
         (cVar3 = (**(code **)(*(int *)(iVar4 + 0x22e) + 8))(), cVar3 != '\0')) {
        bVar2 = true;
      }
      if ((*(int **)(iVar4 + 500) != (int *)0x0) &&
         (cVar3 = (**(code **)(**(int **)(iVar4 + 500) + 0x118))(), cVar3 == '\x01')) {
        bVar2 = true;
      }
      piVar6 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (!bVar2) goto LAB_004b9bc6;
    piVar6 = (int *)param_1[0x20];
  }
  (**(code **)(*piVar6 + 0x48))(0,*(undefined4 *)(param_1[0x1e] + 0x12));
LAB_004b9c13:
  cVar3 = (**(code **)(*param_1 + 0x80))();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x58))();
    return;
  }
  (**(code **)(*param_1 + 0x5c))();
  return;
}


