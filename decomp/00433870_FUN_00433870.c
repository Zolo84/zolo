// FUN_00433870 @ 433870 size=107

void __fastcall FUN_00433870(int *param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 0;
  (**(code **)(*param_1 + 0x34))(4);
  if (*(char *)((int)param_1 + 0x86) != '\0') {
    (**(code **)(*param_1 + 0x54))();
  }
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  (**(code **)(*param_1 + 0x54))();
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  param_1[0x26] = -1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  param_1[0x29] = 0x10;
  *(undefined1 *)((int)param_1 + 0xa2) = 1;
  return;
}


