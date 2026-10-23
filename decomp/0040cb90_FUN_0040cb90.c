// FUN_0040cb90 @ 40cb90 size=55

void __fastcall FUN_0040cb90(int param_1)

{
  if (*(char *)(param_1 + 0x94) == '\0') {
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    FUN_0040fe10(param_1,0);
    FUN_0040fe10(param_1,1);
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  return;
}


