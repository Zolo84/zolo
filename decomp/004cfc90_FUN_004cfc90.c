// FUN_004cfc90 @ 4cfc90 size=110

void FUN_004cfc90(int param_1)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(param_1 + 4);
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_8[2];
    FUN_00796cd8(*local_8);
    FUN_00796cd8(local_8);
    local_8 = puVar1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


