// FUN_006f9210 @ 6f9210 size=807

undefined4 __thiscall FUN_006f9210(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 auStack_80c [512];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db009;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_2 + 8))();
  if ((iVar2 == 0x136) && (*(int *)(param_2[1] + 0xe) == *(int *)(param_1 + 0x21e))) {
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 4);
    if (iVar2 == iVar1) {
      puVar3 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        pvVar4 = operator_new(0xe);
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          FUN_0042d2d0();
          *(undefined2 *)((int)pvVar4 + 8) = 0;
          *(undefined4 *)((int)pvVar4 + 10) = 0;
        }
        FUN_0042d320(pvVar4);
        *puVar3 = &PTR_FUN_007e3e5c;
        *(undefined1 *)((int)puVar3 + 10) = 0;
        *(undefined2 *)puVar3[1] = 7;
        iVar2 = puVar3[1];
        *(undefined4 *)(iVar2 + 8) = DAT_0088f29c;
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        *(undefined2 *)(iVar2 + 0xc) = DAT_0088f2a0;
        puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar2 = puVar3[1];
        *(undefined4 *)(iVar2 + 2) = *puVar5;
        *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar5 + 1);
        *puVar3 = &PTR_FUN_007e3e3c;
      }
      uStack_4 = 0xffffffff;
      FUN_00565c50(puVar3);
      uVar6 = 1;
    }
    else {
      if (iVar2 < iVar1 + -0x800) {
        uVar8 = 0x800;
        FUN_004271a0(auStack_80c,0x800);
        iVar2 = *(int *)(param_1 + 8) + 0x800;
      }
      else {
        FUN_004271a0(auStack_80c,iVar1 - iVar2);
        iVar2 = *(int *)(param_1 + 4);
        uVar8 = iVar2 - *(int *)(param_1 + 8);
      }
      *(int *)(param_1 + 8) = iVar2;
      puVar3 = operator_new(0xc);
      uStack_4 = 2;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x21e);
        pvVar4 = operator_new(0x816);
        uStack_4._0_1_ = 3;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          FUN_0042d6c0();
        }
        uStack_4._0_1_ = 2;
        FUN_0042d320(pvVar4);
        *puVar3 = &PTR_FUN_007eaa3c;
        *(undefined1 *)((int)puVar3 + 10) = 0;
        *(undefined2 *)puVar3[1] = 0x135;
        iVar2 = puVar3[1];
        *(undefined4 *)(iVar2 + 8) = DAT_0088f29c;
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        *(undefined2 *)(iVar2 + 0xc) = DAT_0088f2a0;
        puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar2 = puVar3[1];
        *(undefined4 *)(iVar2 + 2) = *puVar5;
        *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar5 + 1);
        *puVar3 = &PTR_FUN_007e9a7c;
        puVar5 = auStack_80c;
        puVar9 = (undefined4 *)(puVar3[1] + 0xe);
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined4 *)(puVar3[1] + 0x80e) = uVar6;
        *(uint *)(puVar3[1] + 0x812) = uVar8;
      }
      uStack_4 = 0xffffffff;
      puVar5 = operator_new(0xe);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[1] = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        *(undefined1 *)((int)puVar5 + 9) = 1;
        uStack_4 = 6;
        *puVar5 = &PTR_FUN_007e943c;
        FUN_005661a0(puVar3);
      }
      uStack_4 = 0xffffffff;
      FUN_00582390(puVar5,*(undefined4 *)(DAT_00bd1500 + 0x3b0 + *(int *)(param_1 + 0x21e) * 0x3e));
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 0;
  }
  ExceptionList = pvStack_c;
  return uVar6;
}


