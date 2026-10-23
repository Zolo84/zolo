// FUN_00580820 @ 580820 size=60

void __thiscall FUN_00580820(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = _rand();
  uVar1 = uVar1 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  if (uVar1 == 0) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  else if (uVar1 == 1) {
    (**(code **)(*param_1 + 0x20))(param_3);
    return;
  }
  return;
}


