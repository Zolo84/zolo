// FUN_00579cc0 @ 579cc0 size=40

void __fastcall FUN_00579cc0(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 4) == '\0') && (0 < *(short *)(param_1 + 6))) {
    iVar1 = _rand();
    FUN_00579b30(iVar1 % (int)*(short *)(param_1 + 6) + 1);
  }
  return;
}


