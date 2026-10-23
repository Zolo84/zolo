// FUN_006e3a60 @ 6e3a60 size=202

undefined4 * __thiscall FUN_006e3a60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043e250(*(undefined4 *)(DAT_00d0ca90 + 6),1);
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *param_1 = &PTR_FUN_007f7e6c;
  param_1[2] = &PTR_LAB_007f7e68;
  local_4 = 0;
  cVar2 = FUN_0042e910();
  if ((cVar2 == '\0') && (DAT_00d610e5 == '\0')) {
    FUN_0064a850(1);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = param_2;
  iVar1 = DAT_00d0ca90;
  param_1[0x25] = *(undefined4 *)(DAT_00d0ca90 + 4);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(iVar1 + 8);
  *(undefined4 *)((int)param_1 + 0x9a) = param_3;
  FUN_006e4040();
  ExceptionList = local_c;
  return param_1;
}


