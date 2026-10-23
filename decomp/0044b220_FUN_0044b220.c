// FUN_0044b220 @ 44b220 size=84

undefined * FUN_0044b220(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_0088ebf8;
  if ((&DAT_0089cad8)[param_1] != 0) {
    puVar1 = (undefined1 *)((&DAT_0089cad8)[param_1] + 0x31a);
  }
  FUN_007a630a(&DAT_0089d038,s_gfx_map_flags_icon_xxx_s_bmp_0083c6f0,puVar1);
  puVar1 = (undefined1 *)FUN_004af700(param_1);
  DAT_0089d04b = *puVar1;
  DAT_0089d04c = puVar1[1];
  DAT_0089d04d = puVar1[2];
  return &DAT_0089d038;
}


