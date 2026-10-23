// FUN_005847c0 @ 5847c0 size=126

void __fastcall FUN_005847c0(int param_1)

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
    *puVar1 = &PTR_FUN_007e5258;
  }
  *(undefined4 **)(param_1 + 0x26) = puVar1;
  puVar1 = operator_new(0x12);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_FUN_007e5258;
  }
  *(undefined4 **)(param_1 + 0x22) = puVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  *(undefined1 *)(param_1 + 0x32a) = 0;
  *(undefined1 *)(param_1 + 0x42a) = 0;
  return;
}


