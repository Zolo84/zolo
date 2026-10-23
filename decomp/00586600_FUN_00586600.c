// FUN_00586600 @ 586600 size=62

void __thiscall FUN_00586600(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3b2c) + 0x3350);
  if (iVar1 != 0) {
    *param_2 = *(undefined2 *)(iVar1 + 0xc);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(iVar1 + 0xe);
    return;
  }
  *param_2 = DAT_0088f28c;
  *(undefined4 *)(param_2 + 1) = DAT_0088f28e;
  return;
}


