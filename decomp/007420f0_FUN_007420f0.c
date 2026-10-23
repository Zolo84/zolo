// FUN_007420f0 @ 7420f0 size=213

undefined4 __fastcall FUN_007420f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = 1;
  uStack_14 = 2;
  iVar1 = Ordinal_23();
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == -1) {
    uVar2 = Ordinal_111();
    *(undefined4 *)(param_1 + 0x36) = uVar2;
    return 0xffffffff;
  }
  uStack_10 = 1;
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar1 = Ordinal_21(iVar1,0xffff,4,&uStack_10,4);
    if (iVar1 < 0) {
      uVar2 = Ordinal_111();
      *(undefined4 *)(param_1 + 0x36) = uVar2;
      FUN_0074bc80(s_setsockopt_reusable_0087449c,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_008743a8,0x27b);
      return 0xffffffff;
    }
  }
  iVar1 = Ordinal_53(&DAT_00874498);
  iVar1 = Ordinal_21(*(undefined4 *)(param_1 + 0x22),(int)*(short *)(iVar1 + 8),1,&uStack_14,4);
  if (iVar1 < 0) {
    uVar2 = Ordinal_111();
    *(undefined4 *)(param_1 + 0x36) = uVar2;
    FUN_0074bc80(s_setsockopt_nodelay_00874484,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_008743a8,0x284);
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x1e) = 2;
  return 1;
}


