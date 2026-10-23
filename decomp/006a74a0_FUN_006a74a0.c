// FUN_006a74a0 @ 6a74a0 size=672

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_006a74a0(int *param_1,int param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined1 uVar11;
  uint uStack_34;
  int iStack_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d59fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005212f0();
  local_4 = 0;
  if (*(int *)(param_2 + 0xc) != *(int *)(param_1[0x2f] + 0x12)) {
    FUN_0051b230();
    cVar4 = FUN_00431220(param_2);
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x18c))();
      goto LAB_006a7525;
    }
  }
  iVar5 = (**(code **)(*param_1 + 0xd8))();
  if (*(char *)((int)param_1 + 0xe) != '\0') {
    FUN_006aa000();
    FUN_006aaa60();
    FUN_00458570(s_AITransport___d__Fleet_Recieved__0086928c);
    if ((iStack_18 != 0) && (*(int *)(PTR_FUN_007e8b90 + 0x12) == *(int *)(iVar5 + 0xc))) {
      FUN_0045a6c0();
    }
    ppuVar10 = &PTR_FUN_007e8b90;
    if (*(int *)(iVar5 + 0xc) == *(int *)(param_1[0x2f] + 0x12)) {
      (**(code **)(*param_1 + 0x24))();
      ppuVar10 = &PTR_FUN_007e8b90;
      do {
        ppuVar10 = (undefined **)ppuVar10[2];
        FUN_00796cd8();
      } while (ppuVar10 != (undefined **)0x0);
    }
    else {
      uVar11 = 1;
      do {
        puVar7 = operator_new(0xc);
        puStack_8._0_1_ = 1;
        if (puVar7 != (undefined4 *)0x0) {
          ppuVar1 = (undefined **)ppuVar10[2];
          uStack_34 = uStack_34 & 0xff000000;
          uVar2 = *(undefined4 *)(*ppuVar10 + 0x12);
          pvVar8 = operator_new(0x1e);
          puStack_8._0_1_ = 2;
          if (pvVar8 != (void *)0x0) {
            FUN_0042d6c0();
            *(undefined2 *)((int)pvVar8 + 0xe) = 0;
            *(undefined4 *)((int)pvVar8 + 0x10) = 0;
            FUN_0042d2d0();
          }
          puStack_8._0_1_ = 1;
          FUN_0042d320();
          *puVar7 = &PTR_FUN_007e77e4;
          *(undefined1 *)((int)puVar7 + 10) = 0;
          *(undefined2 *)puVar7[1] = 0x34;
          iVar3 = puVar7[1];
          *(undefined4 *)(iVar3 + 8) = _DAT_0088f24c;
          *(undefined2 *)(iVar3 + 0xc) = DAT_0088f24e._2_2_;
          puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0);
          iVar3 = puVar7[1];
          *(undefined4 *)(iVar3 + 2) = *puVar9;
          *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar9 + 1);
          iVar3 = puVar7[1];
          *puVar7 = &PTR_FUN_007e7804;
          *(short *)(iVar3 + 0x14) = (short)uVar2;
          *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar5 + 0x18);
          *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar5 + 0x1c);
          *(undefined1 *)(iVar3 + 0x16) = uVar11;
          *(uint *)(iVar3 + 0x18) = uStack_34;
          *(undefined2 *)(iVar3 + 0x1c) = 0;
          ppuVar10 = ppuVar1;
        }
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        FUN_00565c30();
        uVar11 = 0;
      } while (ppuVar10 != (undefined **)0x0);
      ppuVar10 = &PTR_FUN_007e8b90;
      do {
        ppuVar10 = (undefined **)ppuVar10[2];
        FUN_00796cd8();
      } while (ppuVar10 != (undefined **)0x0);
    }
    ExceptionList = pvStack_10;
    return 1;
  }
LAB_006a7525:
  puStack_8 = (undefined1 *)0xffffffff;
  uVar6 = FUN_0045a680();
  ExceptionList = pvStack_10;
  return uVar6 & 0xffffff00;
}


