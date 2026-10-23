// FUN_004ea310 @ 4ea310 size=151

void __fastcall FUN_004ea310(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c0138;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0x254) != 8) && (*(int *)(param_1 + 0x254) != 9)) &&
     (*(int *)(param_1 + 0x3d8) != 0)) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_20 = &PTR_LAB_007e4bc4;
    local_4 = 0;
    ExceptionList = &local_c;
    uVar3 = FUN_0049ee40(param_1,&local_20,0);
    *(undefined4 *)(param_1 + 0x18a) = uVar3;
    local_20 = &PTR_LAB_007e4bc4;
    iVar2 = local_1c;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_00796cd8(iVar2);
      iVar2 = iVar1;
    }
  }
  ExceptionList = local_c;
  return;
}


