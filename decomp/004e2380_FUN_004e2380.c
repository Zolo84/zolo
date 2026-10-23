// FUN_004e2380 @ 4e2380 size=85

undefined4 __fastcall FUN_004e2380(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0x36) != '\0') {
      FUN_004e23e0();
    }
    FUN_00406300(8,0x294,0,0,*(undefined4 *)(*(int *)(param_1 + 0x2e) + 4),
                 *(undefined4 *)(*(int *)(param_1 + 0x2e) + 8),0,DAT_00bd1bac,0);
  }
  return 0;
}


