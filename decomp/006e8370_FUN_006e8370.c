// FUN_006e8370 @ 6e8370 size=107

void __fastcall FUN_006e8370(int param_1)

{
  int iVar1;
  
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(undefined4 **)(param_1 + 0x22) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x22))(1);
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(undefined4 **)(param_1 + 0x26) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x26))(1);
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (*(undefined4 **)(param_1 + 0x2e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2e))(1);
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


