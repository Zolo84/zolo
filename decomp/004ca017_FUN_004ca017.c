// FUN_004ca017 @ 4ca017 size=403

void __thiscall FUN_004ca017(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *local_3c;
  int *local_38;
  int *local_8;
  
  if (param_1 != param_2) {
    FUN_004c7fad(&local_8);
    if (local_8 == (int *)0x0) {
      if (0 < param_3) {
        local_38 = operator_new(8);
        if (local_38 == (int *)0x0) {
          local_38 = (int *)0x0;
        }
        else {
          *local_38 = param_2;
          local_38[1] = param_3;
        }
        iVar1 = *(int *)(param_1 + 0x42);
        local_3c = operator_new(0xe);
        if (local_3c == (undefined4 *)0x0) {
          local_3c = (undefined4 *)0x0;
        }
        else {
          *local_3c = local_38;
          local_3c[1] = iVar1;
          local_3c[2] = 0;
          *(undefined1 *)(local_3c + 3) = 0;
        }
        *(undefined4 **)(param_1 + 0x42) = local_3c;
        iVar2 = *(int *)(param_1 + 0x46);
        *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_1 + 0x42);
        }
        else {
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x42);
        }
        FUN_006ada60(param_1);
      }
    }
    else {
      iVar1 = *local_8;
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + param_3;
      if (*(int *)(iVar1 + 4) < 1) {
        (**(code **)(*(int *)(param_1 + 0x3a) + 0x1c))();
        FUN_00796cd8(iVar1);
        FUN_006adac0(param_1,param_2);
      }
    }
  }
  return;
}


