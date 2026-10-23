// FUN_0070d480 @ 70d480 size=39

void __fastcall FUN_0070d480(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1252) != 0) {
    iVar1 = _rand();
    FUN_0042dc20(iVar1 % *(int *)(param_1 + 0x1252));
  }
  return;
}


