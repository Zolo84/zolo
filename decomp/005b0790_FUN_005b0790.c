// FUN_005b0790 @ 5b0790 size=350

void FUN_005b0790(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cb9c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar5 = (**(code **)(*param_1 + 0xc))();
  FUN_00405ad0(s_Server___s_will_now_be_deleted__00859180,uVar5);
  puVar6 = operator_new(0xc);
  uStack_4 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar2 = param_1[0x1d];
    iVar3 = param_1[0x1e];
    uVar5 = *(undefined4 *)(DAT_00893530 + 0x14);
    uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
    puVar7 = operator_new(0x1e);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (puVar7 == (undefined2 *)0x0) {
      puVar8 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar7[9] = 0;
      *(undefined4 *)(puVar7 + 10) = 0;
      FUN_0042d2d0();
      puVar8 = puVar7;
    }
    puVar6[1] = puVar8;
    *(undefined1 *)(puVar6 + 2) = 0;
    *(undefined1 *)((int)puVar6 + 9) = 1;
    *puVar6 = &PTR_FUN_007e7638;
    *(undefined1 *)((int)puVar6 + 10) = 0;
    *puVar8 = 0x1e;
    iVar4 = puVar6[1];
    uStack_1c = (uint)puVar7 & 0xff000000;
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(iVar3 + 0x14);
    iVar3 = puVar6[1];
    *(uint *)(iVar3 + 2) = uStack_1c;
    *(undefined2 *)(iVar3 + 6) = 0;
    *puVar6 = &PTR_FUN_007e7618;
    *(int *)(puVar6[1] + 0xe) = iVar2;
    iVar2 = puVar6[1];
    *(int *)(iVar2 + 0x12) = param_1[3];
    *(short *)(iVar2 + 0x16) = (short)param_1[4];
    iVar2 = puVar6[1];
    *(undefined4 *)(iVar2 + 0x18) = uVar5;
    *(undefined2 *)(iVar2 + 0x1c) = uVar1;
  }
  uStack_4 = 0xffffffff;
  FUN_00565bc0(puVar6);
  ExceptionList = pvStack_c;
  return;
}


