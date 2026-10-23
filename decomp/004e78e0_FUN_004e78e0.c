// FUN_004e78e0 @ 4e78e0 size=95

void __thiscall FUN_004e78e0(int param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x3d8) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x3d8) + 0xe8a0) + 0x18))
              (*(undefined4 *)(param_1 + 0x1be));
  }
  *(int *)(param_1 + 0x3d8) = param_2;
  if (param_2 != 0) {
    cVar1 = (**(code **)(*(int *)(param_2 + 0xe8a0) + 0x24))(*(undefined4 *)(param_1 + 0x1be));
    if (cVar1 == '\0') {
      FUN_0049a100(*(undefined4 *)(param_1 + 0x1be));
    }
  }
  return;
}


