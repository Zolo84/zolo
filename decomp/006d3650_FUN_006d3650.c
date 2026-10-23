// FUN_006d3650 @ 6d3650 size=57

void __fastcall FUN_006d3650(int param_1)

{
  undefined4 uVar1;
  
  FUN_00584770();
  uVar1 = FUN_005842f0(s_gfx_interface_cursor_inactive_bm_0086cc64);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = FUN_005842f0(s_gfx_interface_cursor_active_bmp_008577f4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  return;
}


