// FUN_006eda30 @ 6eda30 size=77

undefined4 __thiscall FUN_006eda30(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) <= param_3) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x12) + 0x18))();
    if (param_3 <= iVar1 + *(int *)(param_1 + 0x24)) {
      if (*(int *)(param_1 + 0x20) <= param_2) {
        iVar1 = (**(code **)(*(int *)(param_1 + 0x12) + 0x1c))();
        if (param_2 <= iVar1 + 0x14 + *(int *)(param_1 + 0x20)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


