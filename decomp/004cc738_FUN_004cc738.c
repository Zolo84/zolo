// FUN_004cc738 @ 4cc738 size=218

void FUN_004cc738(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_10;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x158; local_8 = local_8 + 1) {
    iVar1 = (&DAT_0089cad8)[local_8];
    if (iVar1 != 0) {
      local_10 = *(int **)(iVar1 + 0xe86e);
      while (local_10 != (int *)0x0) {
        piVar2 = (int *)local_10[2];
        iVar3 = *local_10;
        local_10 = piVar2;
        if ((*(int *)(iVar3 + 0x6c) != 0) &&
           (puVar4 = *(undefined4 **)(iVar3 + 0x6c), puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
      }
      (**(code **)(*(int *)(iVar1 + 0xe87c) + 0x10))();
    }
  }
  return;
}


