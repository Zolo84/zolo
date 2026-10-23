// FUN_00521d10 @ 521d10 size=237

undefined4 FUN_00521d10(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  void **ppvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined **local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c2178;
  local_c = ExceptionList;
  local_1c = (uint *)0x0;
  local_18 = (uint *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e378c;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  if (0 < param_3) {
    do {
      puVar3 = local_18;
      uVar1 = *param_2;
      local_18 = operator_new(0xe);
      if (local_18 == (uint *)0x0) {
        local_18 = (uint *)0x0;
      }
      else {
        *local_18 = (uint)uVar1;
        local_18[1] = (uint)puVar3;
        local_18[2] = 0;
        *(undefined1 *)(local_18 + 3) = 0;
      }
      iVar6 = local_14 + 1;
      puVar2 = local_18;
      if (local_14 != 0) {
        puVar3[2] = (uint)local_18;
        puVar2 = local_1c;
      }
      local_1c = puVar2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      ppvVar4 = ExceptionList;
      local_14 = iVar6;
    } while (param_3 != 0);
  }
  ExceptionList = ppvVar4;
  uVar5 = FUN_00521e00(param_1,&local_20);
  local_20 = &PTR_LAB_007e378c;
  puVar3 = local_1c;
  while (puVar3 != (uint *)0x0) {
    puVar2 = (uint *)puVar3[2];
    FUN_00796cd8(puVar3);
    puVar3 = puVar2;
  }
  ExceptionList = local_c;
  return uVar5;
}


