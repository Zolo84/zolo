// FUN_0044b1c0 @ 44b1c0 size=84

undefined * FUN_0044b1c0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_0088ebf8;
  if ((&DAT_0089cad8)[param_1] != 0) {
    puVar1 = (undefined1 *)((&DAT_0089cad8)[param_1] + 0x31a);
  }
  FUN_007a630a(&DAT_0089c8c8,s_gfx_map_flags_flag_xxx_s_bmp_0083c6d0,puVar1);
  puVar1 = (undefined1 *)FUN_004af700(param_1);
  DAT_0089c8db = *puVar1;
  DAT_0089c8dc = puVar1[1];
  DAT_0089c8dd = puVar1[2];
  return &DAT_0089c8c8;
}


