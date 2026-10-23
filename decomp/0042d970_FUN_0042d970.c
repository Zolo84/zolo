// FUN_0042d970 @ 42d970 size=165

void __fastcall FUN_0042d970(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007ba1b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e3edc;
  iVar2 = 0;
  local_4 = 0;
  if (0 < (int)param_1[1]) {
    puVar1 = param_1 + 2;
    do {
      FUN_00796cd8(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x22]) {
    puVar1 = param_1 + 0x23;
    do {
      FUN_00796cd8(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < (int)param_1[0x22]);
  }
  DAT_0088faf8 = 0;
  local_4 = 0xffffffff;
  FUN_00429b40();
  ExceptionList = local_c;
  return;
}


