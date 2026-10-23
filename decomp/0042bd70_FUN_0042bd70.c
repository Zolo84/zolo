// FUN_0042bd70 @ 42bd70 size=607

void __fastcall FUN_0042bd70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 8) = 0;
  local_8 = (**(code **)(*(int *)(param_1 + 0x12) + 4))();
  local_28 = operator_new(local_8 << 2);
  *(void **)(param_1 + 0xe) = local_28;
  FUN_0042c2a0(local_10);
  local_1c = 0;
  while (cVar1 = FUN_0042c390(), cVar1 != '\0') {
    FUN_0042c330(local_2c,0);
    uVar2 = FUN_0042c370();
    *(undefined4 *)(*(int *)(param_1 + 0xe) + local_1c * 4) = uVar2;
    local_1c = local_1c + 1;
  }
  FUN_007a78e3(*(undefined4 *)(param_1 + 0xe),local_8,4,FUN_0078f769);
  local_18 = local_8 + 1;
  local_c = local_8;
  while( true ) {
    local_18 = local_18 / 2;
    local_c = local_c / 2;
    if (local_18 < 1) break;
    for (local_24 = local_c; local_24 < local_8; local_24 = local_24 + local_18) {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xe) + local_24 * 4) + 8) == '\0') {
        FUN_0042c470(param_1 + 4,
                     *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xe) + local_24 * 4) + 4),
                     **(undefined4 **)(*(int *)(param_1 + 0xe) + local_24 * 4));
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xe) + local_24 * 4) + 8) = 1;
      }
    }
    if (2 < local_18) {
      local_18 = local_18 + 1;
    }
  }
  for (local_14 = 0; local_14 < local_8; local_14 = local_14 + 1) {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0xe) + local_14 * 4) + 8) == '\0') {
      FUN_0042c470(param_1 + 4,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xe) + local_14 * 4) + 4)
                   ,**(undefined4 **)(*(int *)(param_1 + 0xe) + local_14 * 4));
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xe) + local_14 * 4) + 8) = 1;
    }
  }
  FUN_0042c2a0(local_20);
  while (cVar1 = FUN_0042c390(), cVar1 != '\0') {
    FUN_0042c330(local_38,0);
    local_34 = FUN_0042c370();
    local_30 = local_34;
    if (local_34 != 0) {
      FUN_0042c250(1);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x12) + 0x14))();
  FUN_00796cd8(*(undefined4 *)(param_1 + 0xe));
  return;
}


