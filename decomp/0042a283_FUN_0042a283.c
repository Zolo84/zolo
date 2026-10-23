// FUN_0042a283 @ 42a283 size=446

undefined4 FUN_0042a283(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *local_534;
  undefined4 local_51c;
  undefined1 local_518 [512];
  undefined4 local_318;
  undefined1 local_314 [512];
  undefined1 local_114 [256];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007ba013;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x316);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_534 = (undefined4 *)0x0;
  }
  else {
    local_534 = (undefined4 *)FUN_00533e40(param_1,&DAT_0083a830);
  }
  local_8 = 0xffffffff;
  local_14 = local_534;
  if (local_534 == (undefined4 *)0x0) {
    FUN_00429a50(s_Can_t_open_language_file__s_0083a834,param_1);
  }
  while( true ) {
    iVar3 = FUN_005343dc();
    if (iVar3 == 0) {
      if (local_14 != (undefined4 *)0x0) {
        (**(code **)*local_14)(1);
      }
      ExceptionList = local_10;
      return 1;
    }
    puVar4 = (undefined4 *)FUN_0042b810();
    puVar5 = &local_51c;
    for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = FUN_005343dc();
    if (iVar3 == 0) {
      ExceptionList = local_10;
      return 0;
    }
    uVar6 = 1;
    FUN_0042b810(1);
    cVar1 = FUN_0042b7f0(uVar6);
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return 0;
    }
    iVar3 = FUN_005343dc();
    if (iVar3 == 0) break;
    FUN_0042b7e0();
    puVar4 = (undefined4 *)FUN_0042b810();
    puVar5 = &local_318;
    for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00429d50(local_518,local_114);
    FUN_0042a0fe(local_114,local_314,0);
  }
  ExceptionList = local_10;
  return 0;
}


