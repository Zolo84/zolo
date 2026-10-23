// FUN_00780e00 @ 780e00 size=140

void __fastcall FUN_00780e00(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x12);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_LAB_007e4a74;
  }
  *(undefined4 **)(param_1 + 0x1c56c) = puVar1;
  puVar1 = operator_new(0x12);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_LAB_007e4a74;
  }
  *(undefined4 **)(param_1 + 0x1c574) = puVar1;
  puVar1 = operator_new(0x12);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_LAB_007e4a74;
    *(undefined4 **)(param_1 + 0x1c570) = puVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c570) = 0;
  return;
}


