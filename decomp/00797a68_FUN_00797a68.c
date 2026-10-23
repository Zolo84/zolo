// FUN_00797a68 @ 797a68 size=39

int __fastcall FUN_00797a68(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_007a6429(*(int *)(param_1 + 0x50));
    if (iVar1 == 0) {
      FUN_00797a8f(0,2);
      return param_1;
    }
  }
  return 0;
}


