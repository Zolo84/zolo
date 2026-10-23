// FUN_004cca88 @ 4cca88 size=136

void __thiscall FUN_004cca88(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_1c;
  int *local_8;
  
  (**(code **)(*param_2 + 0x14))();
  local_8 = *(int **)(param_1 + 4);
  while (local_8 != (int *)0x0) {
    piVar1 = (int *)local_8[2];
    iVar2 = *local_8;
    local_8 = piVar1;
    if (iVar2 != 0) {
      for (local_1c = *(undefined4 **)(iVar2 + 0x2c); local_1c != (undefined4 *)0x0;
          local_1c = (undefined4 *)local_1c[2]) {
        FUN_004ce950(*local_1c);
      }
    }
  }
  return;
}


