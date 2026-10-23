// FUN_0068eea0 @ 68eea0 size=422

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_0068eea0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined2 *unaff_retaddr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 *puStack_40;
  undefined4 uStack_3c;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c [6];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d505e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00428eb0();
  local_20 = SUB42(&uStack_3c,0);
  uStack_1e = (undefined2)((uint)&uStack_3c >> 0x10);
  puStack_40 = &DAT_0088f28c;
  uStack_44 = 0x68eee3;
  uStack_44._2_2_ = 0x68;
  FUN_00446d10();
  uVar3 = uStack_44;
  puStack_40 = (undefined2 *)param_3;
  uVar2 = uStack_44._2_2_;
  uStack_44 = uVar3;
  uVar3 = uStack_44;
  uStack_44._2_2_ = uVar2;
  FUN_00449290(local_1c);
  uVar3 = uStack_44;
  uVar2 = uStack_44._2_2_;
  uStack_44 = uVar3;
  uVar3 = uStack_44;
  uStack_44._2_2_ = uVar2;
  FUN_00667670();
  uVar3 = uStack_44;
  uVar2 = uStack_44._2_2_;
  uStack_44 = uVar3;
  uVar3 = uStack_44;
  uStack_44._2_2_ = uVar2;
  FUN_00461e60();
  uVar3 = uStack_44;
  uVar2 = uStack_44._2_2_;
  uStack_44 = uVar3;
  uVar3 = uStack_44;
  uStack_44._2_2_ = uVar2;
  iVar4 = FUN_00428ee0();
  uVar3 = uStack_44;
  if (iVar4 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)(iVar4 + -0x14);
  }
  iVar4 = *param_1;
  uVar2 = uStack_44._2_2_;
  uStack_44 = uVar3;
  uVar3 = uStack_44;
  uStack_44._2_2_ = uVar2;
  (**(code **)(*piVar8 + 0x10))();
  uVar3 = uStack_44;
  uVar2 = uStack_44._2_2_;
  uStack_44 = uVar3;
  uVar3 = uStack_44;
  uStack_44._2_2_ = uVar2;
  (**(code **)(iVar4 + 0x1a8))();
  uVar3 = uStack_44;
  if (&uStack_48 != (undefined4 *)*(undefined1 **)((int)param_1 + 10)) {
    uStack_3c = 0x68ef49;
    uVar2 = uStack_44._2_2_;
    uStack_44 = uVar3;
    uVar3 = uStack_44;
    uStack_44._2_2_ = uVar2;
    puVar5 = operator_new(0xc);
    uVar3 = uStack_44;
    puStack_8 = (undefined1 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = CONCAT42(puStack_40,uStack_44._2_2_);
      uStack_3c = 0x68ef68;
      uVar2 = uStack_44._2_2_;
      uStack_44 = uVar3;
      uVar3 = uStack_44;
      uStack_44._2_2_ = uVar2;
      pvVar6 = operator_new(0x1a);
      uVar3 = uStack_44;
      puStack_8._0_1_ = 1;
      if (pvVar6 != (void *)0x0) {
        uVar2 = uStack_44._2_2_;
        uStack_44 = uVar3;
        uVar3 = uStack_44;
        uStack_44._2_2_ = uVar2;
        FUN_0042d6c0();
        uVar3 = uStack_44;
        *(undefined2 *)((int)pvVar6 + 0xe) = 0;
        *(undefined4 *)((int)pvVar6 + 0x10) = 0;
      }
      uStack_44 = uVar3;
      uVar2 = uStack_44._2_2_;
      puStack_8._0_1_ = 0;
      uStack_3c = 0x68ef98;
      uVar3 = uStack_44;
      uStack_44._2_2_ = uVar2;
      FUN_0042d320();
      *puVar5 = &PTR_FUN_007e5fc0;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *(undefined2 *)puVar5[1] = 0xa9;
      iVar4 = puVar5[1];
      uStack_3c = 0;
      puStack_40 = (undefined2 *)0x0;
      *(undefined4 **)(iVar4 + 8) = &uStack_3c;
      uStack_44 = 0;
      uStack_44._2_2_ = 0;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      *(undefined2 *)(iVar4 + 0xc) = local_1c[0];
      uStack_48 = 0x68efd0;
      puVar7 = (undefined4 *)FUN_0042d2f0();
      uVar3 = uStack_44;
      iVar4 = puVar5[1];
      *(undefined4 *)(iVar4 + 2) = *puVar7;
      *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar7 + 1);
      iVar4 = puVar5[1];
      *puVar5 = &PTR_FUN_007e5fa0;
      *(undefined4 **)(iVar4 + 0xe) = &uStack_3c;
      *(undefined2 *)(iVar4 + 0x12) = local_1c[0];
      *(undefined4 *)(puVar5[1] + 0x14) = uVar1;
      *(undefined1 *)(puVar5[1] + 0x18) = 0;
    }
    uStack_44 = uVar3;
    uVar2 = uStack_44._2_2_;
    puStack_8 = (undefined1 *)0xffffffff;
    uStack_3c = 0x68f01b;
    uVar3 = uStack_44;
    uStack_44._2_2_ = uVar2;
    FUN_00565bc0();
  }
  *unaff_retaddr = local_20;
  *(uint *)(unaff_retaddr + 1) = CONCAT22(local_1c[0],uStack_1e);
  ExceptionList = pvStack_10;
  return;
}


