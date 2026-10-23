// FUN_00428a40 @ 428a40 size=52

void __fastcall FUN_00428a40(undefined4 *param_1)

{
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  *param_1 = &PTR_LAB_007e3c3c;
  uStack_6 = (undefined2)DAT_0088f28e;
  uStack_4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
  param_1[1] = CONCAT22(uStack_6,DAT_0088f28c);
  *(undefined2 *)(param_1 + 2) = uStack_4;
  return;
}


