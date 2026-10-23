// FUN_004cf3b0 @ 4cf3b0 size=158

void __thiscall FUN_004cf3b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  local_18 = operator_new(0xe);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    *local_18 = param_2;
    local_18[1] = 0;
    local_18[2] = iVar1;
    *(undefined1 *)(local_18 + 3) = 0;
  }
  *(undefined4 **)(param_1 + 4) = local_18;
  iVar2 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  return;
}


