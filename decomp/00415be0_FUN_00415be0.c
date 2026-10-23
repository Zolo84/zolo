// FUN_00415be0 @ 415be0 size=19

int __fastcall FUN_00415be0(int param_1)

{
  if (*(int *)(param_1 + 0x62) != 0) {
    return *(int *)(*(int *)(param_1 + 0x62) + 8) >> ((byte)*(undefined4 *)(param_1 + 0xe) & 0x1f);
  }
  return 0;
}


