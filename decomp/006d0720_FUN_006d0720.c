// FUN_006d0720 @ 6d0720 size=65

void __fastcall FUN_006d0720(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_007f74a0;
  if (0 < *(int *)((int)param_1 + 0x6ca)) {
    puVar1 = (undefined4 *)((int)param_1 + 0x86);
    do {
      FUN_00796cd8(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar2 < *(int *)((int)param_1 + 0x6ca));
  }
  FUN_00425b80();
  return;
}


