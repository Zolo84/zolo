// FUN_0064c250 @ 64c250 size=109

void __fastcall FUN_0064c250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = **(int **)(param_1 + 0x21e4a);
  uVar2 = FUN_0044b1c0(*(undefined4 *)(param_1 + 6));
  (**(code **)(iVar1 + 0x2c))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x21e4a) + 0x34))(0x19);
  iVar1 = *(int *)(param_1 + 0x21e4a);
  *(undefined4 *)(iVar1 + 0x22) = 0;
  *(undefined4 *)(iVar1 + 0x26) = 10;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x21e4a) + 0xe) = 1;
  uVar2 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar2);
  return;
}


