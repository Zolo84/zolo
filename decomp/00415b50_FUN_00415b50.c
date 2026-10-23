// FUN_00415b50 @ 415b50 size=62

void __thiscall FUN_00415b50(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x62) != 0) {
    iVar1 = param_2 * *(int *)(param_1 + 0x56);
    *(int *)(param_1 + 0x2e) = iVar1;
    *(undefined4 *)(param_1 + 0x32) = 0;
    *(int *)(param_1 + 0x36) = iVar1 + *(int *)(param_1 + 0x56);
    *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(*(int *)(param_1 + 0x62) + 8);
    *(int *)(param_1 + 0x52) = param_2;
    return;
  }
  *(int *)(param_1 + 0x52) = param_2;
  return;
}


