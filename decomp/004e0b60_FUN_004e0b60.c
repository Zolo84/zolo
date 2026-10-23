// FUN_004e0b60 @ 4e0b60 size=547

undefined4 FUN_004e0b60(undefined4 param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *local_154;
  int local_150;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfc8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(DAT_00877690 * 4 + 4);
  FUN_00426f50(param_1);
  local_4 = 0;
  FUN_00427220(pvVar1,4,DAT_00877690 + 1);
  local_154 = operator_new(*(int *)((int)pvVar1 + DAT_00877690 * 4) * 0xc);
  if (local_154 == (void *)0x0) {
    local_154 = (void *)0x0;
  }
  FUN_00427220(local_154,0xc,*(undefined4 *)((int)pvVar1 + DAT_00877690 * 4));
  iVar6 = 1;
  *(undefined4 *)(DAT_00ab27b4 + 0x290) = 0;
  *(undefined4 *)(DAT_00ab27b4 + 0x294) = 0;
  if (1 < DAT_00877690) {
    do {
      iVar3 = 0;
      local_150 = *(int *)((int)pvVar1 + iVar6 * 4);
      if (local_150 < *(int *)((int)pvVar1 + iVar6 * 4 + 4)) {
        piVar4 = (int *)((int)local_154 + local_150 * 0xc);
        do {
          if (*(int *)(DAT_00ab27b4 + 0x254 + *piVar4 * 0x4b2) == 9) break;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 3;
          local_150 = local_150 + 1;
        } while (local_150 < *(int *)((int)pvVar1 + iVar6 * 4 + 4));
      }
      iVar5 = iVar6 * 0x4b2;
      *(int *)(iVar5 + 0x290 + DAT_00ab27b4) = iVar3;
      *(int *)(iVar5 + 0x294 + DAT_00ab27b4) =
           *(int *)((int)pvVar1 + iVar6 * 4 + 4) - *(int *)((int)pvVar1 + iVar6 * 4);
      FUN_00796cd8(*(undefined4 *)(iVar5 + 0x298 + DAT_00ab27b4));
      pvVar2 = operator_new(*(int *)(iVar5 + 0x294 + DAT_00ab27b4) * 0xc);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      iVar3 = 0;
      *(void **)(iVar5 + 0x298 + DAT_00ab27b4) = pvVar2;
      if (0 < *(int *)(iVar5 + 0x294 + DAT_00ab27b4)) {
        do {
          FUN_004eb940(iVar3,(void *)((int)local_154 +
                                     (*(int *)((int)pvVar1 + iVar6 * 4) + iVar3) * 0xc));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar5 + 0x294 + DAT_00ab27b4));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_00877690);
  }
  FUN_00796cd8(pvVar1);
  FUN_00796cd8(local_154);
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return 1;
}


