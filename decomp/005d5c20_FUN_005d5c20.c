// FUN_005d5c20 @ 5d5c20 size=217

undefined4 * __thiscall
FUN_005d5c20(undefined4 *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *param_1 = &PTR_FUN_007ecd04;
  param_1[2] = &PTR_LAB_007ecd00;
  uStack_10 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x12) >> 0x10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)((int)param_1 + 0x3a) = uStack_10;
  param_1[0xf] = param_3;
  local_4 = 0;
  *(undefined2 *)(param_1 + 0x10) = param_4;
  FUN_0061e4e0((undefined4 *)((int)param_1 + 0x2e),param_2);
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00414c80(s_gfx_interface_leader_back_bmp_0085b4b0);
    *(undefined4 *)((int)param_1 + 0x32) = uVar2;
    ExceptionList = local_c;
    return param_1;
  }
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  ExceptionList = local_c;
  return param_1;
}


