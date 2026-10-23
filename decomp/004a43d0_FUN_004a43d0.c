// FUN_004a43d0 @ 4a43d0 size=228

void __fastcall FUN_004a43d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (0 < DAT_0087769c) {
    puVar6 = (undefined4 *)(param_1 + 0x42d4);
    do {
      *puVar6 = 0;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < DAT_0087769c);
  }
  piVar2 = *(int **)(param_1 + 0x4508);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar3 = *(int **)(*piVar2 + 0x26);
    while (piVar2 = piVar1, piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      *(int *)(param_1 + 0x42d4 + *(int *)(*piVar3 + 0x130) * 4) =
           *(int *)(param_1 + 0x42d4 + *(int *)(*piVar3 + 0x130) * 4) + 1;
      piVar3 = piVar2;
    }
  }
  piVar2 = *(int **)(param_1 + 0x451c);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar5 = *piVar2;
    piVar2 = piVar1;
    if (*(char *)(iVar5 + 0x162) == '\0') {
      iVar5 = *(int *)(iVar5 + 0x130);
      *(int *)(param_1 + 0x42d4 + iVar5 * 4) = *(int *)(param_1 + 0x42d4 + iVar5 * 4) + 1;
    }
  }
  piVar2 = *(int **)(param_1 + 0x3b7e);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar3 = (int *)*piVar2;
    cVar4 = (**(code **)(*piVar3 + 0x14))();
    piVar2 = piVar1;
    if (cVar4 != '\0') {
      iVar5 = piVar3[0xc] - piVar3[0xd];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      *(int *)(param_1 + 0x42d4 + *(int *)((int)piVar3 + 0x5a) * 4) =
           *(int *)(param_1 + 0x42d4 + *(int *)((int)piVar3 + 0x5a) * 4) + iVar5;
    }
  }
  return;
}


