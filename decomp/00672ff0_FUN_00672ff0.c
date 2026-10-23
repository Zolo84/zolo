// FUN_00672ff0 @ 672ff0 size=154

void __fastcall FUN_00672ff0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d482e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f0efc;
  local_4 = 0;
  if (param_1[0x32] != 0) {
    iVar1 = FUN_004e9370(param_1[0x32]);
    *(undefined4 *)(iVar1 + 0x4ac) = 0;
  }
  if (*(char *)(param_1 + 0x33) != '\0') {
    DAT_00d11160 = DAT_00d11160 + -1;
  }
  local_4 = 2;
  FUN_00527230();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00669740();
  local_4 = 0xffffffff;
  FUN_006a9770();
  ExceptionList = local_c;
  return;
}


