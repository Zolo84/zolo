// FUN_004d90b0 @ 4d90b0 size=146

void __fastcall FUN_004d90b0(int param_1)

{
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfb2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a630a(local_10c,s__s_idgrid_tbl_00847888,&DAT_00dc1970);
  FUN_00426f50(local_10c);
  local_4 = 0;
  FUN_00427220(param_1 + 6,4,0xb400);
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return;
}


