// FUN_00410600 @ 410600 size=49

void __fastcall FUN_00410600(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  if (iVar1 != *(int *)(param_1 + 0x120)) {
    do {
      FUN_0043f2a0();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x120));
  }
  return;
}


