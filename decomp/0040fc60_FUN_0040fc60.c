// FUN_0040fc60 @ 40fc60 size=111

void __fastcall FUN_0040fc60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007b98d8;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e353c;
  local_4 = 0;
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_007e350c;
  ExceptionList = local_c;
  return;
}


