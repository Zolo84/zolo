// FUN_00488110 @ 488110 size=258

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00488110(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd76b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00428ee0();
  if ((iVar1 != 0) && (iVar1 != 8)) {
    _DAT_008a11bc = *(undefined4 *)(param_1 + 4);
    _DAT_008a11c0 = *(undefined2 *)(param_1 + 8);
    _DAT_008a11ac = *(undefined4 *)(iVar1 + 200);
    pvVar2 = operator_new(0xc);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00447250();
      FUN_00449290(uVar3);
      uVar3 = FUN_0048b960();
      FUN_00465bd0(uVar3);
      uVar3 = FUN_0044df10();
      FUN_00465100(0x8b,uVar3);
    }
    local_4 = 0xffffffff;
    FUN_00565c30();
  }
  ExceptionList = local_c;
  return 3;
}


