// FUN_00657c70 @ 657c70 size=86

void __thiscall FUN_00657c70(int param_1,int param_2)

{
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x13d2a) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(param_1 + 0x13d2e) = *(undefined2 *)(param_2 + 0x1c);
    return;
  }
  uStack_6 = (undefined2)DAT_0088f28e;
  uStack_4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
  *(uint *)(param_1 + 0x13d2a) = CONCAT22(uStack_6,DAT_0088f28c);
  *(undefined2 *)(param_1 + 0x13d2e) = uStack_4;
  return;
}


