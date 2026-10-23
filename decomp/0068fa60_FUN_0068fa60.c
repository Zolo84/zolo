// FUN_0068fa60 @ 68fa60 size=561

void __fastcall FUN_0068fa60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007d51b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f3d54;
  iVar3 = 10;
  puVar4 = param_1 + 0xa4;
  local_4 = 10;
  do {
    FUN_00796cd8(*puVar4);
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = (undefined4 *)0x0;
  iVar3 = 0;
  if (0 < DAT_00877690) {
    do {
      iVar2 = FUN_004e9370(iVar3);
      if (*(undefined4 **)(iVar2 + 0x486) == param_1) {
        iVar2 = FUN_004e9370(iVar3);
        *(undefined4 *)(iVar2 + 0x486) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00877690);
  }
  param_1[0x9d] = &PTR_LAB_007f3f6c;
  iVar3 = param_1[0x9e];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined ***)((int)param_1 + 0x256) = &PTR_LAB_007f3f9c;
  iVar3 = *(int *)((int)param_1 + 0x25a);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x25a) = 0;
  *(undefined4 *)((int)param_1 + 0x25e) = 0;
  *(undefined4 *)((int)param_1 + 0x262) = 0;
  param_1[0x91] = &PTR_FUN_007e6eac;
  iVar3 = param_1[0x92];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  local_4._1_3_ = (undefined3)(local_4 >> 8);
  local_4._0_1_ = 6;
  FUN_00527230();
  local_4._0_1_ = 5;
  FUN_00527230();
  local_4._0_1_ = 4;
  FUN_00527230();
  local_4._0_1_ = 3;
  FUN_007a8882((int)param_1 + 0x13e,0x12,10,&LAB_00699e40);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar3 = (int)param_1 + 0x8a;
  local_14 = 10;
  do {
    puVar5 = *(undefined4 **)(iVar3 + 4);
    if (*(undefined4 **)(iVar3 + 4) != puVar4) {
      do {
        puVar4 = (undefined4 *)puVar5[2];
        FUN_00796cd8(*puVar5);
        FUN_00796cd8(puVar5);
        puVar5 = puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    *(undefined4 **)(iVar3 + 4) = puVar4;
    *(undefined4 **)(iVar3 + 8) = puVar4;
    *(undefined4 **)(iVar3 + 0xc) = puVar4;
    iVar3 = iVar3 + 0x12;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  FUN_007a8882((int)param_1 + 0x8a,0x12,10,FUN_0068f780);
  param_1[0x16] = &PTR_LAB_007f3fcc;
  puVar5 = (undefined4 *)param_1[0x17];
  while (puVar5 != puVar4) {
    puVar1 = (undefined4 *)puVar5[2];
    FUN_00796cd8(puVar5);
    puVar5 = puVar1;
  }
  param_1[0x17] = puVar4;
  param_1[0x18] = puVar4;
  param_1[0x19] = puVar4;
  local_4 = local_4 & 0xffffff00;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_006a9770();
  ExceptionList = local_c;
  return;
}


