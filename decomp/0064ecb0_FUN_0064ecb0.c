// FUN_0064ecb0 @ 64ecb0 size=89

void __thiscall FUN_0064ecb0(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (param_2 != 0) {
    uVar1 = *(undefined2 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 0xe);
    if (param_3 == 1) {
      cVar3 = (**(code **)(*(int *)(param_1 + 0x21eb0) + 0x24))(uVar1);
    }
    else {
      if (param_3 == 2) {
        (**(code **)(*(int *)(param_1 + 0x21eb0) + 0x18))(uVar1);
        return;
      }
      if (param_3 != 3) {
        return;
      }
      cVar3 = (**(code **)(*(int *)(param_1 + 0x21eb0) + 0x18))(uVar1);
    }
    if (cVar3 == '\0') {
      FUN_0049a190(uVar1,(short)((uint)uVar2 >> 0x10));
    }
  }
  return;
}


