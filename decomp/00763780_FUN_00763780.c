// FUN_00763780 @ 763780 size=52

undefined * __fastcall FUN_00763780(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xba);
  if (iVar1 != 0) {
    FUN_007a630a(&DAT_00d590dc,s__s__s__s_00875d04,*(undefined4 *)(iVar1 + 0x10),
                 *(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18));
    return &DAT_00d590dc;
  }
  return &DAT_0088ebf8;
}


