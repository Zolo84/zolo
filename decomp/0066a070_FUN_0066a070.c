// FUN_0066a070 @ 66a070 size=158

undefined4 * __thiscall FUN_0066a070(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d3eb3;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = &PTR_LAB_007e6edc;
  *param_1 = &PTR_FUN_007f0bf4;
  local_4 = 1;
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  for (iVar1 = *(int *)(param_2 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 10)) {
    FUN_0049a190();
  }
  ExceptionList = local_c;
  return param_1;
}


