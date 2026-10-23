// FUN_006aaff0 @ 6aaff0 size=356

undefined4 FUN_006aaff0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined **ppuStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined **ppuStack_20;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5bf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if (cVar3 == '\0') {
      ppuStack_34 = &PTR_FUN_007f6d64;
      iStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_4 = 2;
      uVar4 = FUN_006aaba0(param_1,param_2,&ppuStack_34,param_3);
      ppuStack_34 = &PTR_LAB_007e518c;
      iVar1 = iStack_30;
      while (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
        FUN_00796cd8(iVar1);
        iVar1 = iVar2;
      }
    }
    else {
      ppuStack_34 = &PTR_FUN_007e8b48;
      iStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_4 = 1;
      uVar4 = FUN_006aaba0(param_1,param_2,&ppuStack_34,param_3);
      ppuStack_34 = &PTR_LAB_007e518c;
      iVar1 = iStack_30;
      while (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
        FUN_00796cd8(iVar1);
        iVar1 = iVar2;
      }
    }
  }
  else {
    FUN_004ee3c0();
    ppuStack_20 = &PTR_FUN_007f3d08;
    uStack_4 = 0;
    uVar4 = FUN_006aaba0(param_1,param_2,&ppuStack_20,param_3);
    ppuStack_20 = &PTR_LAB_007e518c;
    while (iStack_1c != 0) {
      iVar1 = *(int *)(iStack_1c + 8);
      FUN_00796cd8(iStack_1c);
      iStack_1c = iVar1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar4;
}


