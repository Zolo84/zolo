// FUN_00455130 @ 455130 size=22

uint __fastcall FUN_00455130(int param_1)

{
  uint uVar1;
  
  if (((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] != 1) &&
     (uVar1 = (&DAT_00dc0fd4)[*(int *)(param_1 + 6)] - 2, uVar1 != 0)) {
    return uVar1 & 0xffffff00;
  }
  return 1;
}


