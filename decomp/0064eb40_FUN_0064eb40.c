// FUN_0064eb40 @ 64eb40 size=86

void __thiscall FUN_0064eb40(int param_1,int param_2)

{
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x21e9c) = *(undefined4 *)(param_2 + 0xc);
    *(undefined2 *)(param_1 + 0x21ea0) = *(undefined2 *)(param_2 + 0x10);
    return;
  }
  uStack_6 = (undefined2)DAT_0088f28e;
  uStack_4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
  *(uint *)(param_1 + 0x21e9c) = CONCAT22(uStack_6,DAT_0088f28c);
  *(undefined2 *)(param_1 + 0x21ea0) = uStack_4;
  return;
}


