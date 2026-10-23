// FUN_00677460 @ 677460 size=136

void __fastcall FUN_00677460(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 10) + 0x120);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (0 < DAT_0087769c) {
    piVar2 = (int *)(param_1 + 0x4a8);
    do {
      piVar2[-0x8c] = 0;
      if (*(char *)(iVar1 + 0x36a) == '\0') {
        piVar2[-0x118] = *piVar2;
        iVar3 = *piVar2;
      }
      else {
        *piVar2 = 0;
        iVar3 = *(int *)(param_1 + 10) + (-0x4a8 - param_1);
        iVar3 = *(int *)((int)piVar2 + iVar3 + 0x3c22) + *(int *)((int)piVar2 + iVar3 + 0x3e52);
        piVar2[-0x118] = iVar3;
      }
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar3;
    } while (iVar4 < DAT_0087769c);
  }
  return;
}


