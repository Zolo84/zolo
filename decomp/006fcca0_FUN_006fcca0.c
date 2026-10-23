// FUN_006fcca0 @ 6fcca0 size=181

int __thiscall FUN_006fcca0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(undefined4 **)(param_1 + 0xac) == (undefined4 *)0x0) {
    iVar2 = (**(code **)(*param_2 + 8))();
    if (iVar2 == 0x15) {
      FUN_006fca10(*(undefined4 *)(param_2[1] + 0xe),*(undefined4 *)(param_2[1] + 0x12));
      return 3;
    }
    iVar2 = FUN_006fcfd0(param_2);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (**(code **)**(undefined4 **)(param_1 + 0xac))(param_2);
    if (iVar2 == 1) {
      puVar1 = *(undefined4 **)(param_1 + 0xac);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &PTR_FUN_007f8430;
        if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)puVar1[5])(1);
        }
        if ((undefined4 *)puVar1[6] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)puVar1[6])(1);
        }
        FUN_00796cd8(puVar1);
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      return 3;
    }
  }
  return iVar2;
}


