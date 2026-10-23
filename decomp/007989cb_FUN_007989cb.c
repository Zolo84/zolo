// FUN_007989cb @ 7989cb size=39

int __fastcall FUN_007989cb(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_007a6429(*(int *)(param_1 + 0x50));
    if (iVar1 == 0) {
      FUN_007989f2(0,2);
      return param_1;
    }
  }
  return 0;
}


