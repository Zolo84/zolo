// FUN_00796770 @ 796770 size=246

void __thiscall FUN_00796770(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  local_28 = operator_new(10);
  if (local_28 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    uVar3 = FUN_007a8d6d(param_2);
    local_28[1] = uVar3;
  }
  *local_28 = param_3;
  *(undefined1 *)(local_28 + 2) = 0;
  iVar1 = *(int *)(param_1 + 0x1a);
  local_2c = operator_new(0xe);
  if (local_2c == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    *local_2c = local_28;
    local_2c[1] = iVar1;
    local_2c[2] = 0;
    *(undefined1 *)(local_2c + 3) = 0;
  }
  *(undefined4 **)(param_1 + 0x1a) = local_2c;
  iVar2 = *(int *)(param_1 + 0x1e);
  *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + 1;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_1 + 0x1a);
  }
  else {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x1a);
  }
  return;
}


