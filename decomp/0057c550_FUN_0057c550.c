// FUN_0057c550 @ 57c550 size=87

void __fastcall FUN_0057c550(int param_1)

{
  if (((*(char *)(param_1 + 0x37b) != '\0') && (*(char *)(param_1 + 0x37a) != '\0')) &&
     (*(char *)(param_1 + 0x37a) == '\x01')) {
    (**(code **)(**(int **)(param_1 + 0xbc4) + 0x58))(*(int **)(param_1 + 0xbc4),param_1 + 0xb74,0);
    *(undefined4 *)(param_1 + 0xb78) = 0x61;
    (**(code **)(**(int **)(param_1 + 0xbc4) + 0x7c))(*(int **)(param_1 + 0xbc4),param_1 + 0xb74,0);
    *(undefined4 *)(param_1 + 0xb78) = 0x20;
  }
  return;
}


