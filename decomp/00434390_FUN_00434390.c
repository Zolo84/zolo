// FUN_00434390 @ 434390 size=161

undefined4 __fastcall FUN_00434390(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x1a) != '\0') {
    uVar1 = *(undefined2 *)(param_1 + 0x24a);
  }
  if (*(char *)(param_1 + 0x248) == '\0') {
    uVar1 = FUN_00584270(0x7f,0x7f,0x7f);
  }
  if (*(char *)(param_1 + 0x2e) == '\0') {
    FUN_004133fd(param_1 + 0x34,*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12),
                 *(undefined4 *)(param_1 + 0x16),uVar1,0);
    return 0;
  }
  if (*(char *)(param_1 + 0x23c) != '\0') {
    FUN_00413509(param_1 + 0x34,*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12),
                 *(undefined4 *)(param_1 + 0x16),uVar1,0);
    return 0;
  }
  FUN_00413483(param_1 + 0x34,*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12),
               *(undefined4 *)(param_1 + 0x16),uVar1,0);
  return 0;
}


