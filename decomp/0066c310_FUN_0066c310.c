// FUN_0066c310 @ 66c310 size=255

void __fastcall FUN_0066c310(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007d3fd8;
  ExceptionList = &local_c;
  *param_1 = &DAT_007f0c9c;
  local_4 = 0;
  *(undefined ***)((int)param_1 + 0x30dbe) = &PTR_LAB_007f0ec4;
  iVar2 = *(int *)((int)param_1 + 0x30dc2);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x30dc2) = 0;
  *(undefined4 *)((int)param_1 + 0x30dc6) = 0;
  *(undefined4 *)((int)param_1 + 0x30dca) = 0;
  param_1[0xc36b] = &PTR_LAB_007f0ec4;
  iVar2 = param_1[0xc36c];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0xc36c] = 0;
  param_1[0xc36d] = 0;
  param_1[0xc36e] = 0;
  *(undefined ***)((int)param_1 + 0x30d9a) = &PTR_LAB_007f0e94;
  iVar2 = *(int *)((int)param_1 + 0x30d9e);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x30d9e) = 0;
  *(undefined4 *)((int)param_1 + 0x30da2) = 0;
  *(undefined4 *)((int)param_1 + 0x30da6) = 0;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006ad140();
  ExceptionList = local_c;
  return;
}


