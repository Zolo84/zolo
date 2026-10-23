// FUN_007989f2 @ 7989f2 size=86

void __thiscall FUN_007989f2(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(bool *)(param_1 + 0x48) = param_3 == 1;
  if (param_3 == 0) {
    FUN_0074c280();
    if (param_1 != -0x4c) {
      FUN_0079720d();
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  FUN_00798a48();
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x40) = DAT_00dc58e4;
  uVar1 = DAT_00dc58e4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return;
}


