// FUN_004f3f50 @ 4f3f50 size=36

undefined4 __fastcall FUN_004f3f50(int param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_00dbd1a2)[*(int *)(param_1 + 0x5a)];
  if ((0xb < iVar1) && ((iVar1 < 0x15 || (iVar1 == 0x8c)))) {
    return 1;
  }
  return 0;
}


