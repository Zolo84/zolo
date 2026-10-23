// FUN_006d0be0 @ 6d0be0 size=92

void __fastcall FUN_006d0be0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x6ca) < 200) {
    *(int *)(param_1 + 0x6ca) = *(int *)(param_1 + 0x6ca) + 1;
  }
  else {
    FUN_00796cd8(*(undefined4 *)(param_1 + 0x6be));
    if (*(int *)(param_1 + 0x6ba) == 0) {
      *(int *)(param_1 + 0x6ce) = *(int *)(param_1 + 0x6ce) + -1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x6ca);
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1 + 0x82 + iVar2 * 8);
    do {
      *puVar1 = puVar1[-2];
      puVar1[1] = puVar1[-1];
      puVar1 = puVar1 + -2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


