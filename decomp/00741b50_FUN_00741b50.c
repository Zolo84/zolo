// FUN_00741b50 @ 741b50 size=102

undefined4 __thiscall FUN_00741b50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x1e) != 1) && (*(int *)(param_1 + 0x1e) != 0x10)) {
    uVar2 = *(undefined4 *)(param_1 + 0x22);
    *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
    iVar1 = Ordinal_3(uVar2);
    if (iVar1 != 0) {
      uVar2 = Ordinal_111();
      *(undefined4 *)(param_1 + 0x36) = uVar2;
      FUN_0074bc80(s_The_socket_should_be_a_closeable_008743d8,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_008743a8,0x2bd);
    }
    *(undefined4 *)(param_1 + 0x1e) = 0x10;
  }
  FUN_007418a0(param_2,param_3);
  return 0;
}


