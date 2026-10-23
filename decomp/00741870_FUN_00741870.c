// FUN_00741870 @ 741870 size=46

int __fastcall FUN_00741870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Ordinal_1(*(undefined4 *)(param_1 + 0x22),0,0);
  if (iVar1 < 0) {
    uVar2 = Ordinal_111();
    *(undefined4 *)(param_1 + 0x36) = uVar2;
    FUN_007a68db(s_accept__00874400);
    iVar1 = -1;
  }
  return iVar1;
}


