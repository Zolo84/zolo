// FUN_0059aca0 @ 59aca0 size=231

undefined4 * __fastcall FUN_0059aca0(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca853;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0042b6c9(s_EYRHISTORY_008587b4);
  FUN_005926f0(uVar2);
  *param_1 = &PTR_FUN_007eb8bc;
  param_1[2] = &PTR_LAB_007eb8b8;
  local_4 = 0;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  if ((undefined4 *)param_1[0x46] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x46])(1);
  }
  pvVar3 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0x3b0,0x21c,0,0);
  }
  param_1[0x46] = uVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar1 = FUN_00584270(0,0,0);
  *(undefined2 *)(param_1[0x46] + 0x5a) = uVar1;
  *(undefined1 *)(param_1[0x46] + 0x5d) = 0;
  param_1[0x45] = 0x28;
  ExceptionList = pvStack_c;
  return param_1;
}


