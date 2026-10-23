// FUN_0047e530 @ 47e530 size=301

undefined4 FUN_0047e530(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd33e;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  puVar4 = operator_new(0x52a);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00425b20();
    local_4._0_1_ = 1;
    FUN_00428b00();
    *(undefined ***)((int)puVar4 + 0x12) = &PTR_LAB_007e4068;
    local_4 = CONCAT31(local_4._1_3_,2);
    *puVar4 = &PTR_FUN_007e4048;
    puVar4[2] = &PTR_LAB_007e4034;
    *(undefined ***)((int)puVar4 + 0x12) = &PTR_FUN_007e402c;
    FUN_00428d60();
    FUN_005847c0();
    *(undefined1 *)((int)puVar4 + 0x16) = 0;
  }
  *(undefined1 *)(puVar4 + 7) = *(undefined1 *)(iVar1 + 0x24);
  *(undefined4 *)((int)puVar4 + 0x1e) = *(undefined4 *)(iVar1 + 0x26);
  iVar2 = (int)DAT_00d615d6;
  local_4 = 0xffffffff;
  DAT_00d615d6 = operator_new(0xe);
  if (DAT_00d615d6 == (undefined4 *)0x0) {
    DAT_00d615d6 = (undefined4 *)0x0;
  }
  else {
    *DAT_00d615d6 = puVar4;
    DAT_00d615d6[1] = iVar2;
    DAT_00d615d6[2] = 0;
    *(undefined1 *)(DAT_00d615d6 + 3) = 0;
  }
  iVar5 = DAT_00d615da + 1;
  bVar6 = DAT_00d615da != 0;
  puVar3 = DAT_00d615d6;
  DAT_00d615da = iVar5;
  if (bVar6) {
    *(undefined4 **)(iVar2 + 8) = DAT_00d615d6;
    puVar3 = DAT_00d615d2;
  }
  DAT_00d615d2 = puVar3;
  FUN_00449290(iVar1 + 0x12);
  FUN_00460220();
  puVar4[6] = puVar4[6] + 1;
  FUN_005886c0();
  ExceptionList = local_c;
  return 3;
}


