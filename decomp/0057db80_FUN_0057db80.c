// FUN_0057db80 @ 57db80 size=147

void __fastcall FUN_0057db80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_007883a0();
  FUN_00405ad0(&DAT_008572b0,*(undefined4 *)(param_1 + 0xb70));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb70)) {
    piVar1 = (int *)(param_1 + 0x3cc);
    do {
      if (iVar2 == *(int *)(param_1 + 900)) {
        (&DAT_00dc0fd4)[*piVar1] = 1;
        FUN_00405ad0(&DAT_008572b0,*piVar1);
      }
      else {
        if ((&DAT_00dc0fd4)[*piVar1] != 1) {
          (&DAT_00dc0fd4)[*piVar1] = 2;
        }
        FUN_00405ad0(s__d__d_008572a8,iVar2,*piVar1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = (int *)((int)piVar1 + 0x3e);
    } while (iVar2 < *(int *)(param_1 + 0xb70));
  }
  return;
}


