// FUN_00669770 @ 669770 size=60

void __thiscall FUN_00669770(undefined4 *param_1,int param_2)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_007f0c1c;
  if (param_2 != 0) {
    param_1[1] = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x1c);
  }
  return;
}


