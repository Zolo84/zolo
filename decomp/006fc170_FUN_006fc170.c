// FUN_006fc170 @ 6fc170 size=361

undefined4 __thiscall FUN_006fc170(int param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db35e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0x12) + 4))(param_2);
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x22);
  if (iVar7 == 0) {
    iVar7 = (**(code **)(*param_2 + 8))();
    if ((iVar7 == 0xe) &&
       (cVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))
                          (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
       cVar2 == '\0')) {
      ExceptionList = pvStack_10;
      return 1;
    }
  }
  else {
    puVar4 = operator_new(0xc);
    puStack_8 = (undefined1 *)0x0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar7 + 0x2e);
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      pvVar5 = operator_new(0x1a);
      puStack_8._0_1_ = 1;
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      puStack_8._0_1_ = 0;
      FUN_0042d320(pvVar5);
      *puVar4 = &PTR_FUN_007e62c0;
      *(undefined1 *)((int)puVar4 + 10) = 0;
      *(undefined2 *)puVar4[1] = 0x15;
      iVar7 = puVar4[1];
      *(undefined4 *)(iVar7 + 8) = DAT_0088f29c;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      *(undefined2 *)(iVar7 + 0xc) = DAT_0088f2a0;
      puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar7 = puVar4[1];
      *(undefined4 *)(iVar7 + 2) = *puVar6;
      *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar6 + 1);
      *puVar4 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar4[1] + 0xe) = uVar3;
      *(undefined4 *)(puVar4[1] + 0x12) = uVar1;
      *(undefined1 *)(puVar4[1] + 0x16) = 1;
      *(undefined1 *)(puVar4[1] + 0x17) = 0;
      *(undefined1 *)(puVar4[1] + 0x18) = 0;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00565ca0(puVar4);
    uVar3 = 1;
  }
  ExceptionList = pvStack_10;
  return uVar3;
}


