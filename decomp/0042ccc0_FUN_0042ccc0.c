// FUN_0042ccc0 @ 42ccc0 size=619

undefined4 __fastcall FUN_0042ccc0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar4 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba124;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0x24);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) =
       *(undefined4 *)(&DAT_0083b050 + *(int *)(*DAT_00d12b40 + 0x36a) * 4);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x20) - iVar8;
  if (iVar8 < 1) {
    ExceptionList = pvVar4;
    return 0;
  }
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pvVar4 = operator_new(0x12);
    local_4._0_1_ = 1;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
    }
    local_4._0_1_ = 0;
    FUN_0042d320(pvVar4);
    *puVar3 = &PTR_FUN_007e3e1c;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *(undefined2 *)puVar3[1] = 0x1c;
    iVar1 = puVar3[1];
    *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
    puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar1 = puVar3[1];
    *(undefined4 *)(iVar1 + 2) = *puVar5;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar5 + 1);
    *puVar3 = &PTR_FUN_007e3dfc;
    *(int *)(puVar3[1] + 0xe) = iVar8;
  }
  local_4 = 0xffffffff;
  FUN_00565c30(puVar3);
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    iVar8 = FUN_00577a30();
    if ((iVar8 == 0) || (cVar2 = FUN_0042dd70(param_1 + 0x14), cVar2 != '\0')) {
      *(float *)(param_1 + 0x10) =
           (float)(iVar6 - *(int *)(param_1 + 0xc)) / (float)*(int *)(param_1 + 4) +
           *(float *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0xc) = iVar6;
    iVar6 = __ftol();
    if (0 < iVar6) {
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - (float)iVar6;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      iVar8 = _rand();
      puVar3 = operator_new(0xc);
      local_4 = 3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar7 = operator_new(0x16);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar7[4] = 0;
          *(undefined4 *)(puVar7 + 5) = 0;
        }
        puVar3[1] = puVar7;
        *(undefined1 *)(puVar3 + 2) = 0;
        *(undefined1 *)((int)puVar3 + 9) = 1;
        *puVar3 = &PTR_FUN_007e3ddc;
        *(undefined1 *)((int)puVar3 + 10) = 0;
        *puVar7 = 0x131;
        iVar1 = puVar3[1];
        local_14 = (uint)puVar3 & 0xff000000;
        *(undefined4 *)(iVar1 + 8) = DAT_0088f254;
        *(undefined2 *)(iVar1 + 0xc) = DAT_0088f258;
        iVar1 = puVar3[1];
        *(uint *)(iVar1 + 2) = local_14;
        *(undefined2 *)(iVar1 + 6) = 0;
        *puVar3 = &PTR_FUN_007e3dbc;
        *(int *)(puVar3[1] + 0xe) = iVar6;
        *(int *)(puVar3[1] + 0x12) = iVar8;
      }
      local_4 = 0xffffffff;
      FUN_00565ca0(puVar3);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}


