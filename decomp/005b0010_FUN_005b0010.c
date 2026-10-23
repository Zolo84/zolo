// FUN_005b0010 @ 5b0010 size=608

void FUN_005b0010(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cb934;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar6 = (**(code **)(*param_1 + 0xac))();
  if (iVar6 == 0) {
    FUN_00405ad0(s_Server__Unit___d_is_killed_by_at_00859154,*(undefined4 *)((int)piVar4 + 0x1a));
    iVar6 = *(int *)((int)piVar4 + 0x176);
    if (iVar6 != 0) {
      uVar5 = FUN_0051b210();
      param_1 = (int *)CONCAT31(param_1._1_3_,uVar5);
      pvVar7 = operator_new(0xc);
      uStack_4 = 0;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        iVar6 = iVar6 + 0xc;
        uVar8 = FUN_005b09b0(0x21,iVar6,iVar6,piVar4 + 6,param_1);
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0(uVar8);
    }
    iVar6 = (**(code **)(piVar4[0x47] + 4))();
    if (iVar6 != 0) {
      piVar9 = (int *)piVar4[0x48];
      while (piVar9 != (int *)0x0) {
        piVar1 = (int *)piVar9[2];
        iVar6 = *piVar9;
        piVar9 = (int *)(**(code **)(**(int **)(iVar6 + 0x80) + 0xc))();
        piVar10 = (int *)(**(code **)(*piVar9 + 0x28))(&param_1,piVar4);
        piVar9 = piVar1;
        if (*piVar10 == 0) {
          FUN_005b02c0(iVar6,piVar4,0);
        }
        else {
          pvVar7 = operator_new(0xc);
          uStack_4 = 1;
          if (pvVar7 == (void *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_005b09b0(0x21,iVar6 + 0xc,iVar6 + 0xc,piVar4 + 6,1);
          }
          uStack_4 = 0xffffffff;
          FUN_00565bc0(uVar8);
        }
      }
    }
    puVar11 = operator_new(0xc);
    uVar3 = DAT_0088f28c;
    uStack_4 = 2;
    param_1 = puVar11;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      iVar6 = piVar4[0x92];
      uStack_1a = (undefined2)DAT_0088f28e;
      uStack_18 = (undefined2)((uint)DAT_0088f28e >> 0x10);
      pvVar7 = operator_new(0x20);
      uStack_4._0_1_ = 3;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_004666c0();
      }
      uStack_4._0_1_ = 2;
      FUN_0042d320(uVar8);
      *puVar11 = &PTR_FUN_007e5e5c;
      *(undefined1 *)((int)puVar11 + 10) = 0;
      *(undefined2 *)puVar11[1] = 0x35;
      iVar2 = puVar11[1];
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 4);
      *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar6 + 8);
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar6 = puVar11[1];
      *(undefined4 *)(iVar6 + 2) = *puVar12;
      *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar12 + 1);
      iVar6 = puVar11[1];
      *puVar11 = &PTR_FUN_007e5370;
      *(int *)(iVar6 + 0xe) = piVar4[6];
      *(short *)(iVar6 + 0x12) = (short)piVar4[7];
      *(undefined1 *)(puVar11[1] + 0x14) = 1;
      *(undefined1 *)(puVar11[1] + 0x15) = 0;
      *(undefined4 *)(puVar11[1] + 0x16) = 0;
      iVar6 = puVar11[1];
      *(uint *)(iVar6 + 0x1a) = CONCAT22(uStack_1a,uVar3);
      *(undefined2 *)(iVar6 + 0x1e) = uStack_18;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0(puVar11);
  }
  ExceptionList = pvStack_c;
  return;
}


