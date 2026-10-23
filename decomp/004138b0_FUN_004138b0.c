// FUN_004138b0 @ 4138b0 size=145

undefined4 __thiscall FUN_004138b0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040e860();
  puVar3 = (undefined1 *)(param_1 + 0x104);
  local_4 = 0;
  iVar2 = FUN_0040f340(param_2,puVar3);
  if (iVar2 == 0) {
    FUN_00429a50(s_Palette___s__not_found__0082f1f4,param_2);
  }
  iVar2 = 0x100;
  do {
    uVar1 = puVar3[2];
    puVar3[2] = *puVar3;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_4 = 0xffffffff;
  FUN_0040e980();
  ExceptionList = local_c;
  return 1;
}


