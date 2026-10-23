// FUN_004cc623 @ 4cc623 size=262

void FUN_004cc623(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bf2e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 0x158; local_14 = local_14 + 1) {
    if ((&DAT_0089cad8)[local_14] != 0) {
      local_1c = *(int **)((&DAT_0089cad8)[local_14] + 0xe86e);
      while (local_1c != (int *)0x0) {
        piVar1 = (int *)local_1c[2];
        iVar2 = *local_1c;
        local_1c = piVar1;
        if (*(int *)(iVar2 + 0x6c) == 0) {
          pvVar3 = operator_new(0x12);
          local_8 = 0;
          if (pvVar3 != (void *)0x0) {
            FUN_004cc812();
          }
          local_8 = 0xffffffff;
          FUN_004cc8fb(iVar2);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


