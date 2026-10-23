// FUN_005f0290 @ 5f0290 size=133

undefined4 __thiscall FUN_005f0290(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x32) + 4))(param_2);
  if ((*(int *)(DAT_00d0ca90 + 0x21e62) != 0xf) &&
     (*(char *)(*(int *)(param_1 + 0x32) + 0x96) != '\0')) {
    FUN_004d8670(*(undefined4 *)(param_1 + 0x2e));
    FUN_004d8cf0(*(undefined4 *)(DAT_00ab27b4 + 0x3f2 + *(int *)(param_1 + 0x2e) * 0x4b2),
                 *(undefined4 *)(DAT_00ab27b4 + 0x3f6 + *(int *)(param_1 + 0x2e) * 0x4b2));
    FUN_004d87c0();
    if (*(int *)(DAT_00d0ca90 + 0x21e62) != 3) {
      FUN_0064c090(4);
    }
  }
  return uVar1;
}


