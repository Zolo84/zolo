// FUN_006ab160 @ 6ab160 size=921

undefined4 FUN_006ab160(int *param_1,int param_2,undefined4 *param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iStack_44;
  int iStack_30;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5c49;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x28))();
  FUN_005212f0();
  iStack_4 = 0;
  FUN_005212f0();
  iStack_4._0_1_ = 1;
  FUN_005212f0();
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  cVar4 = (**(code **)(*param_1 + 0x28))();
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0x30))();
  }
  if (param_1[3] == *(int *)(param_2 + 0x12)) {
    iStack_4._0_1_ = 1;
    FUN_0045a680();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_0045a680();
    iStack_4 = 0xffffffff;
    FUN_0045a680();
    uVar5 = 1;
  }
  else {
    cVar4 = FUN_0051a4c0();
    if (cVar4 == '\0') {
      iStack_4._0_1_ = 1;
      FUN_0045a680();
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      FUN_0045a680();
      iStack_4 = 0xffffffff;
      FUN_0045a680();
      uVar5 = 3;
    }
    else {
      uVar5 = FUN_0051b230();
      cVar4 = FUN_00431220(param_1,uVar5,param_2);
      if (cVar4 == '\0') {
        iStack_4._0_1_ = 1;
        FUN_0045a680();
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_0045a680();
        iStack_4 = 0xffffffff;
        FUN_0045a680();
        uVar5 = 2;
      }
      else {
        uVar5 = *param_3;
        uVar1 = *(undefined2 *)(param_3 + 1);
        iVar6 = FUN_005bc744(param_1,param_1[3],*(undefined4 *)(param_2 + 0x12));
        FUN_0042db80(-iVar6);
        puVar7 = operator_new(0xc);
        iStack_4._0_1_ = 3;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(param_2 + 0x12);
          FUN_004c0990(0x34,&DAT_0088f24c);
          iVar6 = puVar7[1];
          *puVar7 = &PTR_FUN_007e7804;
          *(short *)(iVar6 + 0x14) = (short)uVar2;
          *(int *)(iVar6 + 0xe) = param_1[6];
          iVar3 = param_1[7];
          *(undefined1 *)(iVar6 + 0x16) = 1;
          *(short *)(iVar6 + 0x12) = (short)iVar3;
          *(undefined4 *)(iVar6 + 0x18) = uVar5;
          *(undefined2 *)(iVar6 + 0x1c) = uVar1;
        }
        iStack_4._0_1_ = 2;
        FUN_00565bf0(puVar7);
        puVar7 = operator_new(0xc);
        iStack_4._0_1_ = 4;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar5 = *(undefined4 *)(param_2 + 0x12);
          pvVar8 = operator_new(0x12);
          iStack_4._0_1_ = 5;
          if (pvVar8 == (void *)0x0) {
            pvVar8 = (void *)0x0;
          }
          else {
            FUN_0042d6c0();
          }
          FUN_0042d320(pvVar8);
          *puVar7 = &PTR_FUN_007e877c;
          *(undefined1 *)((int)puVar7 + 10) = 0;
          *(undefined2 *)puVar7[1] = 0x85;
          iVar6 = puVar7[1];
          *(int *)(iVar6 + 8) = param_1[6];
          *(short *)(iVar6 + 0xc) = (short)param_1[7];
          puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar6 = puVar7[1];
          *(undefined4 *)(iVar6 + 2) = *puVar9;
          param_1._0_2_ = (undefined2)uVar5;
          *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar9 + 1);
          *puVar7 = &PTR_FUN_007e875c;
          *(undefined2 *)(puVar7[1] + 0xe) = param_4;
          *(undefined2 *)(puVar7[1] + 0x10) = param_1._0_2_;
        }
        iStack_4 = CONCAT31(iStack_4._1_3_,2);
        FUN_00565bc0(puVar7);
        while (iStack_44 != 0) {
          iVar6 = *(int *)(iStack_44 + 8);
          FUN_00796cd8(iStack_44);
          iStack_44 = iVar6;
        }
        while (iStack_30 != 0) {
          iVar6 = *(int *)(iStack_30 + 8);
          FUN_00796cd8(iStack_30);
          iStack_30 = iVar6;
        }
        while (iStack_1c != 0) {
          iVar6 = *(int *)(iStack_1c + 8);
          FUN_00796cd8(iStack_1c);
          iStack_1c = iVar6;
        }
        uVar5 = 0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar5;
}


