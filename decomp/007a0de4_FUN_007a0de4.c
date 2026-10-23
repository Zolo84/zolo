// FUN_007a0de4 @ 7a0de4 size=48

void __fastcall FUN_007a0de4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) && (*(char *)(iVar1 + -1) != '\0')) && (*(char *)(iVar1 + -1) != -1)) {
    FUN_007a0afc(1);
    uVar2 = FUN_007abb46(iVar1);
    FUN_007a0867(iVar1,uVar2);
  }
  return;
}


