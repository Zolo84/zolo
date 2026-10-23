// FUN_00756de0 @ 756de0 size=67

void __fastcall FUN_00756de0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(*param_1 + 8);
  if (puVar1 == DAT_00d4c334) {
    iVar3 = *(int *)(*param_1 + 4);
    if (*param_1 == *(int *)(iVar3 + 8)) {
      do {
        *param_1 = iVar3;
        iVar3 = *(int *)(iVar3 + 4);
      } while (*param_1 == *(int *)(iVar3 + 8));
    }
    if (*(int *)(*param_1 + 8) != iVar3) {
      *param_1 = iVar3;
    }
    return;
  }
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != DAT_00d4c334; puVar2 = (undefined4 *)*puVar2) {
    puVar1 = puVar2;
  }
  *param_1 = (int)puVar1;
  return;
}


