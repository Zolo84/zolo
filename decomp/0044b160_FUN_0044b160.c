// FUN_0044b160 @ 44b160 size=84

undefined * FUN_0044b160(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_0088ebf8;
  if ((&DAT_0089cad8)[param_1] != 0) {
    puVar1 = (undefined1 *)((&DAT_0089cad8)[param_1] + 0x31a);
  }
  FUN_007a630a(&DAT_0089c9c8,s_gfx_map_shields_shield_xxx_s_bmp_0083c6ac,puVar1);
  puVar1 = (undefined1 *)FUN_004af700(param_1);
  DAT_0089c9df = *puVar1;
  DAT_0089c9e0 = puVar1[1];
  DAT_0089c9e1 = puVar1[2];
  return &DAT_0089c9c8;
}


