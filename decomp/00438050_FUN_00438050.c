// FUN_00438050 @ 438050 size=38

void __thiscall FUN_00438050(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x28) = *(int *)(*(int *)(param_1 + 0x14) + 0x10) + param_3;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x48) + param_2;
  return;
}


