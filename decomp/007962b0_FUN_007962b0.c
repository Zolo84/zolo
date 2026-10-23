// FUN_007962b0 @ 7962b0 size=659

void __fastcall FUN_007962b0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  
  *(undefined1 *)(param_1 + 8) = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x12) + 4))();
  pvVar4 = operator_new(iVar3 << 2);
  *(void **)(param_1 + 0xe) = pvVar4;
  local_1c = 0;
  local_10 = *(undefined4 **)(param_1 + 0x16);
  while (local_10 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_10[2];
    *(undefined4 *)(*(int *)(param_1 + 0xe) + local_1c * 4) = *local_10;
    local_1c = local_1c + 1;
    local_10 = puVar1;
  }
  FUN_007a78e3(*(undefined4 *)(param_1 + 0xe),iVar3,4,FUN_0078f769);
  local_18 = iVar3 + 1;
  local_c = iVar3;
  while( true ) {
    local_18 = local_18 / 2;
    local_c = local_c / 2;
    if (local_18 < 1) break;
    for (local_24 = local_c; local_24 < iVar3; local_24 = local_24 + local_18) {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xe) + local_24 * 4) + 8) == '\0') {
        FUN_00796870(param_1 + 4,
                     *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xe) + local_24 * 4) + 4),
                     **(undefined4 **)(*(int *)(param_1 + 0xe) + local_24 * 4));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xe) + local_24 * 4) + 8) = 1;
      }
    }
    if (2 < local_18) {
      local_18 = local_18 + 1;
    }
  }
  for (local_14 = 0; local_14 < iVar3; local_14 = local_14 + 1) {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0xe) + local_14 * 4) + 8) == '\0') {
      FUN_00796870(param_1 + 4,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xe) + local_14 * 4) + 4)
                   ,**(undefined4 **)(*(int *)(param_1 + 0xe) + local_14 * 4));
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xe) + local_14 * 4) + 8) = 1;
    }
  }
  local_20 = *(int **)(param_1 + 0x16);
  while (local_20 != (int *)0x0) {
    piVar2 = (int *)local_20[2];
    iVar3 = *local_20;
    local_20 = piVar2;
    if (iVar3 != 0) {
      FUN_007a77fa(*(undefined4 *)(iVar3 + 4));
      FUN_00796cd8(iVar3);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x12) + 0x14))();
  FUN_00796cd8(*(undefined4 *)(param_1 + 0xe));
  return;
}


