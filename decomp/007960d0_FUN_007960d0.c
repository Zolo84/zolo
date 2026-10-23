// FUN_007960d0 @ 7960d0 size=59

void __thiscall FUN_007960d0(int param_1,code *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  local_8 = *(undefined4 **)(param_1 + 4);
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_8[2];
    (*param_2)(*local_8);
    local_8 = puVar1;
  }
  return;
}


