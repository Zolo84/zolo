// FUN_004b40b0 @ 4b40b0 size=27

undefined4 __fastcall FUN_004b40b0(int param_1)

{
  if (*(char *)(param_1 + 0x4e) != '\0') {
    return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x84);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x80);
}


