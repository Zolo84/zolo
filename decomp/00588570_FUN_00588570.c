// FUN_00588570 @ 588570 size=50

undefined4 __fastcall FUN_00588570(int param_1)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = FUN_0042e060(local_8,param_1 + 0xe);
  return CONCAT31(*(char *)(iVar1 + 2) >> 7,
                  (int)*(char *)(iVar1 + 2) + *(short *)(iVar1 + 4) * 0xc < 0x3c);
}


