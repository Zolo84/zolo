// FUN_0067ea60 @ 67ea60 size=300

undefined4 __thiscall FUN_0067ea60(int param_1,int param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  char cVar4;
  int unaff_EBX;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d4aa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006a9d50();
  local_20 = &PTR_FUN_007e5258;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)((uint)local_10 & 0xffffff00);
  local_4 = 0;
  FUN_00680620(&local_20);
  cVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8b2) + 0x24))
                    (*(undefined4 *)(param_2 + 0x117de));
  ppuVar3 = local_20;
  if (cVar4 == '\0') {
    uVar2 = *(undefined4 *)(param_2 + 6);
    for (; ppuVar1 = local_20, ppuVar3 != (undefined **)0x0; ppuVar3 = (undefined **)ppuVar3[2]) {
      cVar4 = (**(code **)(unaff_EBX + 0xc))(*ppuVar3,uVar2);
      if (cVar4 != '\0') {
        ppuVar1 = local_20;
        if (ppuVar3 != (undefined **)0x0) {
          while (ppuVar1 != (undefined **)0x0) {
            ppuVar3 = (undefined **)ppuVar1[2];
            FUN_00796cd8(ppuVar1);
            ppuVar1 = ppuVar3;
          }
          ExceptionList = local_10;
          return 1;
        }
        break;
      }
    }
    while (ppuVar1 != (undefined **)0x0) {
      ppuVar3 = (undefined **)ppuVar1[2];
      FUN_00796cd8(ppuVar1);
      ppuVar1 = ppuVar3;
    }
  }
  else {
    while (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar3[2];
      FUN_00796cd8(ppuVar3);
      ppuVar3 = ppuVar1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


