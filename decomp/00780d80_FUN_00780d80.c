// FUN_00780d80 @ 780d80 size=83

void __fastcall FUN_00780d80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined4 *)((int)puVar1 + 10) = 0;
    *(undefined4 *)((int)puVar1 + 0x16) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e) = 0;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    *(undefined ***)((int)puVar1 + 0x12) = &PTR_LAB_007f70c4;
    puVar1[9] = &PTR_LAB_007e4068;
    *puVar1 = &PTR_FUN_007f7128;
    puVar1[9] = &PTR_FUN_007f7120;
    *(undefined4 **)(param_1 + 0x167f0) = puVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x167f0) = 0;
  return;
}


