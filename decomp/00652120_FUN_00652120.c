// FUN_00652120 @ 652120 size=117

void __thiscall FUN_00652120(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x21dce) != 0) {
    FUN_007a77fa(*(int *)(param_1 + 0x21dce));
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x21dce) = 0;
  }
  else {
    uVar1 = FUN_007a8d6d(param_2);
    *(undefined4 *)(param_1 + 0x21dce) = uVar1;
  }
  if (*(int *)(param_1 + 0x21dd2) != 0) {
    FUN_007a77fa(*(int *)(param_1 + 0x21dd2));
  }
  if (param_3 != 0) {
    uVar1 = FUN_007a8d6d(param_3);
    *(undefined4 *)(param_1 + 0x21dd2) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x21dd2) = 0;
  return;
}


