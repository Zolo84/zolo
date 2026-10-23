// FUN_006ab500 @ 6ab500 size=363

undefined4 FUN_006ab500(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined **ppuStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5c78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if (cVar3 == '\0') {
      ppuStack_20 = &PTR_FUN_007e8b90;
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 2;
      uVar4 = FUN_006aaba0(param_1,param_2,&ppuStack_20,param_3);
      ppuStack_20 = &PTR_LAB_007e518c;
      iVar2 = iStack_1c;
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 8);
        FUN_00796cd8(iVar2);
        iVar2 = iVar1;
      }
    }
    else {
      ppuStack_20 = &PTR_FUN_007e8b48;
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 1;
      uVar4 = FUN_006aaba0(param_1,param_2,&ppuStack_20,param_3);
      ppuStack_20 = &PTR_LAB_007e518c;
      iVar2 = iStack_1c;
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 8);
        FUN_00796cd8(iVar2);
        iVar2 = iVar1;
      }
    }
  }
  else {
    ppuStack_20 = &PTR_FUN_007e8694;
    iStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    uVar4 = FUN_006aaba0(param_1,param_2,&ppuStack_20,param_3);
    ppuStack_20 = &PTR_LAB_007e518c;
    iVar2 = iStack_1c;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_00796cd8(iVar2);
      iVar2 = iVar1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar4;
}


