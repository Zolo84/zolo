// FUN_004e2e20 @ 4e2e20 size=73

undefined4 __thiscall FUN_004e2e20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 4) {
    FUN_00418140(4);
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    iVar1 = FUN_00415f40();
    if (iVar1 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6a) = 2;
    }
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    FUN_00419150(param_2);
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return 0;
}


