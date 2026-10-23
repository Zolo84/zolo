// FUN_005842f0 @ 5842f0 size=244

int FUN_005842f0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8fd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)(&DAT_00bd1960)[DAT_00bd1bbc] != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (*(code *)**(undefined4 **)(&DAT_00bd1960)[DAT_00bd1bbc])(1);
  }
  if (DAT_00bd1bbc == 0) {
    pvVar1 = operator_new(0x25e);
    uStack_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00401060(param_1,0,0);
    }
    uStack_4 = 0xffffffff;
    (&DAT_00bd1960)[DAT_00bd1bbc] = uVar2;
    DAT_00bd1bbc = DAT_00bd1bbc + 1;
  }
  pvVar1 = operator_new(0x25e);
  uStack_4 = 1;
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00401060(param_1,0,0);
  }
  uStack_4 = 0xffffffff;
  (&DAT_00bd1960)[DAT_00bd1bbc] = iVar3;
  FUN_0057a0b0(*(undefined4 *)(iVar3 + 0x2c));
  iVar3 = DAT_00bd1bbc;
  DAT_00bd1bbc = DAT_00bd1bbc + 1;
  ExceptionList = pvStack_c;
  return iVar3;
}


