// FUN_0040d020 @ 40d020 size=246

void __fastcall FUN_0040d020(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007b981b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e3478;
  param_1[2] = &PTR_LAB_007e348c;
  local_4 = 1;
  if (*(char *)((int)param_1 + 0x3a) != '\0') {
    *(undefined1 *)((int)param_1 + 0x3a) = 0;
    FUN_0040fe10(param_1,0);
  }
  puVar4 = (undefined4 *)param_1[4];
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[2];
    FUN_00796cd8(*puVar4);
    FUN_00796cd8(puVar4);
    puVar4 = puVar1;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x1e));
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  param_1[3] = &PTR_LAB_007e3490;
  iVar3 = param_1[4];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = 2;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


