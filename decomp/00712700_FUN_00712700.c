// FUN_00712700 @ 712700 size=40

undefined4 __fastcall FUN_00712700(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x122c);
  if (iVar1 < 0) {
    return 0;
  }
  if (DAT_00877690 <= iVar1) {
    return 0;
  }
  iVar1 = FUN_004e9370(iVar1);
  return *(undefined4 *)(iVar1 + 0x3d4);
}


