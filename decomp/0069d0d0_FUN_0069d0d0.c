// FUN_0069d0d0 @ 69d0d0 size=67

void __fastcall FUN_0069d0d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004721a0();
  uVar2 = 0;
  if (*(char *)(*(int *)(param_1 + 10) + 0x3bf2) != '\0') {
    FUN_006adfb0(2,0);
    return;
  }
  iVar1 = _rand();
  FUN_006adfb0(iVar1 % 5 + 3,uVar2);
  return;
}


