// FUN_00609bd0 @ 609bd0 size=533

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00609bd0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_retaddr;
  undefined2 uStack_16;
  undefined2 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d00ae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 4))(param_2);
  if (((*(int *)(DAT_00d0ca90 + 0x21e62) != 0xf) && (*(char *)(param_1 + 0x32) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x34) + 0x96) != '\0')) {
    puVar4 = operator_new(0xc);
    puStack_8 = (undefined1 *)0x0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
      unaff_retaddr = param_2;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x2e);
      uStack_16 = (undefined2)*(undefined4 *)(DAT_00d0ca90 + 6);
      uStack_14 = (undefined2)((uint)*(undefined4 *)(DAT_00d0ca90 + 6) >> 0x10);
      iVar5 = _rand();
      pvVar6 = operator_new(0x1e);
      puStack_8._0_1_ = 1;
      if (pvVar6 == (void *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
        *(undefined2 *)((int)pvVar6 + 0xe) = 0;
        *(undefined4 *)((int)pvVar6 + 0x10) = 0;
        *(undefined2 *)((int)pvVar6 + 0x14) = 0;
        *(undefined4 *)((int)pvVar6 + 0x16) = 0;
      }
      puStack_8._0_1_ = 0;
      FUN_0042d320(pvVar6);
      *puVar4 = &PTR_FUN_007e52f0;
      *(undefined1 *)((int)puVar4 + 10) = 0;
      *(undefined2 *)puVar4[1] = 0xa0;
      iVar1 = puVar4[1];
      *(undefined4 *)(iVar1 + 8) = _DAT_0088f228;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      *(undefined2 *)(iVar1 + 0xc) = DAT_0088f22c;
      puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar1 = puVar4[1];
      *(undefined4 *)(iVar1 + 2) = *puVar7;
      *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar7 + 1);
      iVar1 = puVar4[1];
      *puVar4 = &PTR_FUN_007e52d0;
      *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(iVar8 + 0x10);
      iVar8 = puVar4[1];
      *(uint *)(iVar8 + 0x14) = CONCAT22(uStack_16,3);
      *(undefined2 *)(iVar8 + 0x18) = uStack_14;
      *(int *)(puVar4[1] + 0x1a) = iVar5;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00565bc0(puVar4);
    param_2 = unaff_retaddr;
  }
  if (iVar3 == 0) {
    iVar8 = (**(code **)(*param_2 + 8))();
    if (iVar8 == 0x1c) {
      *(int *)(*(int *)(param_1 + 0x2e) + 0x24) = DAT_00d0ca90;
      cVar2 = FUN_0072a260();
      if (cVar2 == '\0') {
        DAT_00cf5904 = 1;
        ExceptionList = pvStack_10;
        return 0;
      }
      cVar2 = FUN_0072a2c0();
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x32) = 0;
        (**(code **)(**(int **)(param_1 + 0x38) + 0x38))(1);
      }
      else {
        *(undefined1 *)(param_1 + 0x32) = 1;
        (**(code **)(**(int **)(param_1 + 0x38) + 0x38))(0);
      }
    }
  }
  ExceptionList = pvStack_10;
  return iVar3;
}


