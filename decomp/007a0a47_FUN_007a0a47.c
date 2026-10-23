// FUN_007a0a47 @ 7a0a47 size=44

void __fastcall FUN_007a0a47(int param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 4) != 0) &&
      (cVar1 = *(char *)(*(int *)(param_1 + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)) {
    FUN_007a0a73(*(undefined4 *)(param_1 + 8),0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0xff;
  }
  return;
}


