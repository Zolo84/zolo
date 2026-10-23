// FUN_004ca2c2 @ 4ca2c2 size=122

void __fastcall FUN_004ca2c2(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *local_8;
  
  *(undefined1 *)(param_1 + 0x50) = 0;
  local_8 = *(undefined4 **)(param_1 + 0x3e);
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_8[2];
    piVar2 = (int *)*local_8;
    local_8 = puVar1;
    if (*(char *)(*piVar2 + 0x50) != '\0') {
      FUN_004ca2c2();
    }
  }
  return;
}


