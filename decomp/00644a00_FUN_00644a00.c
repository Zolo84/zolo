// FUN_00644a00 @ 644a00 size=107

void __thiscall FUN_00644a00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0043e780(param_2);
  iVar1 = **(int **)(param_1 + 0xae);
  uVar2 = FUN_0044b1c0(param_2);
  (**(code **)(iVar1 + 0x2c))(uVar2);
  (**(code **)(**(int **)(param_1 + 0xae) + 0x34))(0x19);
  iVar1 = *(int *)(param_1 + 0xae);
  *(undefined4 *)(iVar1 + 0x22) = 0;
  *(undefined4 *)(iVar1 + 0x26) = 10;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  uVar2 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar2);
  return;
}


