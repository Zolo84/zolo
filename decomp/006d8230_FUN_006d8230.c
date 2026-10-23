// FUN_006d8230 @ 6d8230 size=34

void __fastcall FUN_006d8230(int *param_1)

{
  if (*(char *)((int)param_1 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*param_1 + 0x60))();
  *(undefined1 *)((int)param_1 + 0x86) = 1;
  return;
}


