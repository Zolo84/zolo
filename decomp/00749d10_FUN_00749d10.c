// FUN_00749d10 @ 749d10 size=86

void __thiscall FUN_00749d10(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *param_1;
  puVar2 = *(undefined4 **)(iVar1 + 8);
  if (puVar2 == DAT_00d4be04) {
    iVar4 = *(int *)(iVar1 + 4);
    if (*param_1 == *(int *)(iVar4 + 8)) {
      do {
        *param_1 = iVar4;
        iVar4 = *(int *)(iVar4 + 4);
      } while (*param_1 == *(int *)(iVar4 + 8));
    }
    if (*(int *)(*param_1 + 8) != iVar4) {
      *param_1 = iVar4;
    }
    *param_2 = iVar1;
    return;
  }
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != DAT_00d4be04; puVar3 = (undefined4 *)*puVar3) {
    puVar2 = puVar3;
  }
  *param_1 = (int)puVar2;
  *param_2 = iVar1;
  return;
}


