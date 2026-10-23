// FUN_0051c0f0 @ 51c0f0 size=481

void __thiscall FUN_0051c0f0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  int iStack_54;
  int iStack_44;
  int iStack_30;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c1fa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar4 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
  iVar5 = DAT_00893530;
  if (cVar4 == '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x222);
    uVar8 = *(undefined2 *)((int)param_1 + 0x226);
    iVar5 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 4))();
    if (1 < iVar5) {
      FUN_004ee3c0();
      uStack_4 = 0;
      FUN_004ee3c0();
      uStack_4._0_1_ = 1;
      FUN_004ee3c0();
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      iStack_54 = 0;
      uVar6 = FUN_004e9370(**(undefined4 **)((int)param_1 + 0x232));
      puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 0x232) + 8);
      while (puVar3 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar3[2];
        uVar7 = FUN_004e9370(*puVar3);
        cVar4 = (**(code **)(*param_1 + 0x28))();
        if (cVar4 == '\0') {
          (**(code **)(*param_1 + 0x2c))();
        }
        iVar5 = FUN_00430cc0(param_1,uVar6,uVar7);
        iStack_54 = iStack_54 + iVar5;
        puVar3 = puVar2;
        uVar6 = uVar7;
      }
      FUN_0042db80(iStack_54);
      while (iStack_44 != 0) {
        iVar5 = *(int *)(iStack_44 + 8);
        FUN_00796cd8(iStack_44);
        iStack_44 = iVar5;
      }
      while (iStack_30 != 0) {
        iVar5 = *(int *)(iStack_30 + 8);
        FUN_00796cd8(iStack_30);
        iStack_30 = iVar5;
      }
      while (iStack_1c != 0) {
        iVar5 = *(int *)(iStack_1c + 8);
        FUN_00796cd8(iStack_1c);
        iStack_1c = iVar5;
      }
    }
    *param_2 = uVar1;
  }
  else {
    *param_2 = *(undefined4 *)(DAT_00893530 + 0x14);
    uVar8 = *(undefined2 *)(iVar5 + 0x18);
  }
  *(undefined2 *)(param_2 + 1) = uVar8;
  ExceptionList = pvStack_c;
  return;
}


