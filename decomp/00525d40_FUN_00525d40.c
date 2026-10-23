// FUN_00525d40 @ 525d40 size=82

void __thiscall
FUN_00525d40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(int *)(*DAT_00d12b40 + 0x386) != 0) {
    (**(code **)(**(int **)(param_1 + 0x15e) + 0x48))(param_2,param_3,param_4,param_5);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2,param_3,param_4,param_5);
  return;
}


