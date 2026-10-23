// FUN_0065e1e0 @ 65e1e0 size=180

void FUN_0065e1e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d36cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = operator_new(0x60);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0065d3a0(param_1,0);
  }
  iVar3 = DAT_00d10f18;
  local_4 = 0xffffffff;
  iVar1 = *(int *)(DAT_00d10f18 + 8);
  puVar6 = operator_new(0xe);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = uVar5;
    puVar6[1] = iVar1;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
  }
  iVar2 = *(int *)(iVar3 + 0xc);
  *(undefined4 **)(iVar3 + 8) = puVar6;
  *(int *)(iVar3 + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar1 + 8) = puVar6;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 **)(iVar3 + 4) = puVar6;
  ExceptionList = local_c;
  return;
}


