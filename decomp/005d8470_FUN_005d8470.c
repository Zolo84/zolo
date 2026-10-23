// FUN_005d8470 @ 5d8470 size=51

void __fastcall FUN_005d8470(int param_1)

{
  *(undefined1 *)(param_1 + 0xfc) = 0;
  if (*(undefined4 **)(param_1 + 0x102) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x102))(1);
  }
  *(undefined4 *)(param_1 + 0x102) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xfe) + 0xa2) = 1;
  return;
}


