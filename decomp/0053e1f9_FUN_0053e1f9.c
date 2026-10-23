// FUN_0053e1f9 @ 53e1f9 size=169

void __thiscall FUN_0053e1f9(int param_1,int param_2,int param_3)

{
  int local_8;
  
  if ((param_2 != param_3) && (*(int *)(param_1 + 0x277e + param_3 * 4) != 0)) {
    *(undefined4 *)(param_1 + 0x277e + param_2 * 4) =
         *(undefined4 *)(param_1 + 0x277e + param_3 * 4);
    *(undefined4 *)(param_1 + 0x277e + param_3 * 4) = 0;
    FUN_00538a92(param_2,1);
    for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
      if (*(int *)(param_1 + 4 + local_8 * 4) == param_3) {
        *(int *)(param_1 + 4 + local_8 * 4) = param_2;
      }
    }
  }
  return;
}


