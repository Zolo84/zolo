// FUN_0064eba0 @ 64eba0 size=86

void __thiscall FUN_0064eba0(int param_1,int param_2)

{
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x21ea6) = *(undefined4 *)(param_2 + 0xc);
    *(undefined2 *)(param_1 + 0x21eaa) = *(undefined2 *)(param_2 + 0x10);
    return;
  }
  uStack_6 = (undefined2)DAT_0088f28e;
  uStack_4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
  *(uint *)(param_1 + 0x21ea6) = CONCAT22(uStack_6,DAT_0088f28c);
  *(undefined2 *)(param_1 + 0x21eaa) = uStack_4;
  return;
}


