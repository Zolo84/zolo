// FUN_00460480 @ 460480 size=212

void FUN_00460480(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar6;
  undefined4 uVar5;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc4db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00428eb0();
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00449290(local_14);
    uVar6 = 0x46;
    puVar2 = (undefined4 *)FUN_00462830();
    uVar4 = *puVar2;
    uVar5 = CONCAT22(uVar6,*(undefined2 *)(puVar2 + 1));
    uVar3 = FUN_0045fec0(uVar4,uVar5);
    FUN_00464a00(0xb7,uVar3,uVar4,uVar5);
  }
  local_4 = 0xffffffff;
  FUN_00565bc0();
  FUN_00449290();
  FUN_004607d0();
  ExceptionList = local_c;
  return;
}


