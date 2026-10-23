// FUN_005808b0 @ 5808b0 size=96

void __thiscall
FUN_005808b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = _rand();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar1) {
  case 0:
    (**(code **)(*param_1 + 0x20))(param_2);
    return;
  case 1:
    (**(code **)(*param_1 + 0x20))(param_3);
    return;
  case 2:
    (**(code **)(*param_1 + 0x20))(param_4);
    return;
  case 3:
    (**(code **)(*param_1 + 0x20))(param_5);
  }
  return;
}


