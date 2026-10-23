// FUN_00523250 @ 523250 size=87

void __fastcall FUN_00523250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x17b) = 1;
  (**(code **)(**(int **)(param_1 + 0x15a) + 0x2c))(s_gfx_map_flags_flag_retreat_bmp_0084b11c);
  (**(code **)(**(int **)(param_1 + 0x15a) + 0x34))(0x19);
  iVar1 = *(int *)(param_1 + 0x15a);
  *(undefined4 *)(iVar1 + 0x22) = 0;
  *(undefined4 *)(iVar1 + 0x26) = 10;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  uVar2 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar2);
  return;
}


