// FUN_00689890 @ 689890 size=510

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_00689890(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int unaff_EBX;
  int *piVar11;
  undefined2 *unaff_retaddr;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 *puStack_44;
  undefined4 uStack_40;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c [6];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d4e76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00428eb0();
  local_20 = SUB42(&uStack_40,0);
  uStack_1e = (undefined2)((uint)&uStack_40 >> 0x10);
  puStack_44 = &DAT_0088f28c;
  uStack_48 = 0x6898da;
  uStack_48._2_2_ = 0x68;
  FUN_00446d10();
  uVar5 = uStack_48;
  puStack_44 = (undefined2 *)param_3;
  uVar4 = uStack_48._2_2_;
  uStack_48 = uVar5;
  uVar5 = uStack_48;
  uStack_48._2_2_ = uVar4;
  FUN_00449290(local_1c);
  uVar5 = uStack_48;
  uVar4 = uStack_48._2_2_;
  uStack_48 = uVar5;
  uVar5 = uStack_48;
  uStack_48._2_2_ = uVar4;
  FUN_00667670();
  uVar5 = uStack_48;
  uVar4 = uStack_48._2_2_;
  uStack_48 = uVar5;
  uVar5 = uStack_48;
  uStack_48._2_2_ = uVar4;
  FUN_00461e60();
  uVar5 = uStack_48;
  uVar4 = uStack_48._2_2_;
  uStack_48 = uVar5;
  uVar5 = uStack_48;
  uStack_48._2_2_ = uVar4;
  iVar6 = FUN_00428ee0();
  uVar5 = uStack_48;
  if (iVar6 == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)(iVar6 + -0x14);
  }
  iVar6 = *(int *)(param_1 + 0x12);
  uVar4 = uStack_48._2_2_;
  uStack_48 = uVar5;
  uVar5 = uStack_48;
  uStack_48._2_2_ = uVar4;
  (**(code **)(*piVar11 + 0x10))();
  uVar5 = uStack_48;
  uVar4 = uStack_48._2_2_;
  uStack_48 = uVar5;
  uVar5 = uStack_48;
  uStack_48._2_2_ = uVar4;
  (**(code **)(iVar6 + 0x1a8))();
  uVar5 = uStack_48;
  piVar7 = *(int **)(unaff_EBX + 4);
  do {
    if (piVar7 == (int *)0x0) goto LAB_00689985;
    iVar6 = *piVar7;
    piVar7 = (int *)piVar7[2];
  } while (*(int *)(iVar6 + 4) != param_3);
  if (iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 0x4c);
    uStack_40 = 0x689957;
    uVar4 = uStack_48._2_2_;
    uStack_48 = uVar5;
    uVar5 = uStack_48;
    uStack_48._2_2_ = uVar4;
    piVar7 = operator_new(0xe);
    uVar5 = uStack_48;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = (int)piVar11;
      piVar7[1] = iVar1;
      piVar7[2] = 0;
      *(undefined1 *)(piVar7 + 3) = 0;
    }
    iVar2 = *(int *)(iVar6 + 0x50);
    *(int **)(iVar6 + 0x4c) = piVar7;
    *(int *)(iVar6 + 0x50) = iVar2 + 1;
    if (iVar2 == 0) {
      *(int **)(iVar6 + 0x48) = piVar7;
    }
    else {
      *(int **)(iVar1 + 8) = piVar7;
    }
  }
LAB_00689985:
  uStack_48 = uVar5;
  uVar4 = uStack_48._2_2_;
  if (&uStack_4c != (undefined4 *)*(undefined1 **)(unaff_EBX + 0x1c)) {
    uStack_40 = 0x68999f;
    uVar5 = uStack_48;
    uStack_48._2_2_ = uVar4;
    puVar8 = operator_new(0xc);
    uVar5 = uStack_48;
    puStack_8 = (undefined1 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      uVar3 = CONCAT42(puStack_44,uStack_48._2_2_);
      uStack_40 = 0x6899be;
      uVar4 = uStack_48._2_2_;
      uStack_48 = uVar5;
      uVar5 = uStack_48;
      uStack_48._2_2_ = uVar4;
      pvVar9 = operator_new(0x1a);
      uVar5 = uStack_48;
      puStack_8._0_1_ = 1;
      if (pvVar9 != (void *)0x0) {
        uVar4 = uStack_48._2_2_;
        uStack_48 = uVar5;
        uVar5 = uStack_48;
        uStack_48._2_2_ = uVar4;
        FUN_005c04f0();
        uVar5 = uStack_48;
      }
      uStack_48 = uVar5;
      uVar4 = uStack_48._2_2_;
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      uStack_40 = 0x6899e5;
      uVar5 = uStack_48;
      uStack_48._2_2_ = uVar4;
      FUN_0042d320();
      *puVar8 = &PTR_FUN_007e5fc0;
      *(undefined1 *)((int)puVar8 + 10) = 0;
      *(undefined2 *)puVar8[1] = 0xa9;
      iVar6 = puVar8[1];
      uStack_40 = 0;
      puStack_44 = (undefined2 *)0x0;
      *(undefined4 **)(iVar6 + 8) = &uStack_40;
      uStack_48 = 0;
      uStack_48._2_2_ = 0;
      *(undefined2 *)(iVar6 + 0xc) = local_1c[0];
      uStack_4c = 0x689a18;
      puVar10 = (undefined4 *)FUN_0042d2f0();
      uVar5 = uStack_48;
      iVar6 = puVar8[1];
      *(undefined4 *)(iVar6 + 2) = *puVar10;
      *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar10 + 1);
      iVar6 = puVar8[1];
      *puVar8 = &PTR_FUN_007e5fa0;
      *(undefined4 **)(iVar6 + 0xe) = &uStack_40;
      *(undefined2 *)(iVar6 + 0x12) = local_1c[0];
      *(undefined4 *)(puVar8[1] + 0x14) = uVar3;
      *(undefined1 *)(puVar8[1] + 0x18) = 0;
    }
    uStack_48 = uVar5;
    uVar4 = uStack_48._2_2_;
    puStack_8 = (undefined1 *)0xffffffff;
    uStack_40 = 0x689a63;
    uVar5 = uStack_48;
    uStack_48._2_2_ = uVar4;
    FUN_00565bc0();
  }
  *unaff_retaddr = local_20;
  *(uint *)(unaff_retaddr + 1) = CONCAT22(local_1c[0],uStack_1e);
  ExceptionList = pvStack_10;
  return;
}


