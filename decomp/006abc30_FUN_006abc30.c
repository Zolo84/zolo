// FUN_006abc30 @ 6abc30 size=278

undefined1 FUN_006abc30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined **ppuStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5ca0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if (cVar3 == '\0') {
    ppuStack_20 = &PTR_FUN_007f6d64;
    iStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 1;
    uVar4 = FUN_006abeb0(param_1,param_2,&ppuStack_20,param_3);
    ppuStack_20 = &PTR_LAB_007e518c;
    iVar2 = iStack_1c;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_00796cd8(iVar2);
      iVar2 = iVar1;
    }
    ExceptionList = pvStack_c;
    return uVar4;
  }
  ppuStack_20 = &PTR_FUN_007f3d08;
  iStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 0;
  uVar4 = FUN_006abeb0(param_1,param_2,&ppuStack_20,param_3);
  ppuStack_20 = &PTR_LAB_007e518c;
  iVar2 = iStack_1c;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  ExceptionList = pvStack_c;
  return uVar4;
}


