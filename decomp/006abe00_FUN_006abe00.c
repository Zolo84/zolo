// FUN_006abe00 @ 6abe00 size=164

undefined1 FUN_006abe00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5cd8;
  local_c = ExceptionList;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_FUN_007f6d64;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_006abeb0(param_1,param_2,&local_20,param_3);
  local_20 = &PTR_LAB_007e518c;
  iVar3 = local_1c;
  if (local_1c == 0) {
    ExceptionList = local_c;
    return uVar2;
  }
  do {
    iVar1 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return uVar2;
}


