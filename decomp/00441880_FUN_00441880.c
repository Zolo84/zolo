// FUN_00441880 @ 441880 size=62

void __fastcall FUN_00441880(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      FUN_00405ad0(s___d___d__0083c274,*(undefined4 *)(param_1[1] + iVar1 * 8),
                   *(undefined4 *)(param_1[1] + 4 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  FUN_00405ad0(&DAT_00839650);
  return;
}


