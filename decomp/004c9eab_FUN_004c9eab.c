// FUN_004c9eab @ 4c9eab size=214

void __fastcall FUN_004c9eab(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 0x2c);
  while (local_8 != (int *)0x0) {
    piVar1 = (int *)local_8[2];
    *(undefined4 *)(*local_8 + 0x482) = 0;
    local_8 = piVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x28) + 0x10))();
  local_1c = *(undefined4 **)(param_1 + 0x3e);
  while (local_1c != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)local_1c[2];
    FUN_00796cd8(*local_1c);
    FUN_00796cd8(local_1c);
    local_1c = puVar2;
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  return;
}


