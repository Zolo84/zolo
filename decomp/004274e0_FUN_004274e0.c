// FUN_004274e0 @ 4274e0 size=98

int __fastcall FUN_004274e0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x13c) == '\0') {
    iVar1 = FUN_007a846a(*(undefined4 *)(param_1 + 0x6c));
    if (iVar1 == -1) {
      FUN_007a630a(param_1 + 0x70,s_Could_not_return_current_file_po_0083a38c,param_1 + 8);
      FUN_00405ad0(param_1 + 0x70);
      *(undefined1 *)(param_1 + 0x13c) = 1;
      DAT_0088f21a = 1;
      return -1;
    }
  }
  else {
    FUN_00405ad0(s_No_valid_file__0083a378);
    iVar1 = -1;
  }
  return iVar1;
}


