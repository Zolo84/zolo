// FUN_00462a50 @ 462a50 size=580

void __thiscall FUN_00462a50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc89c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar6 = operator_new(0xc);
  local_4 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    fVar9 = (float10)FUN_004a4610(param_2);
    FUN_00465b00(0x15d,param_1 + 4);
    *puVar6 = &PTR_FUN_007e64d4;
    *(float *)(puVar6[1] + 0xe) = (float)-fVar9;
    *(undefined4 *)(puVar6[1] + 0x12) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00565ca0(puVar6);
  puVar6 = operator_new(0xc);
  local_4 = 1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    fVar9 = (float10)FUN_004a4690(param_2);
    FUN_00465b00(0x15e,param_1 + 4);
    *puVar6 = &PTR_FUN_007e64d4;
    *(float *)(puVar6[1] + 0xe) = (float)-fVar9;
    *(undefined4 *)(puVar6[1] + 0x12) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00565ca0(puVar6);
  piVar4 = *(int **)(param_2 + 4);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar2 = *piVar4;
    puVar6 = operator_new(0xc);
    uVar5 = DAT_0088f28c;
    local_4 = 2;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uStack_1a = (undefined2)DAT_0088f28e;
      uStack_18 = (undefined2)((uint)DAT_0088f28e >> 0x10);
      pvVar7 = operator_new(0x20);
      local_4._0_1_ = 3;
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
        *(undefined2 *)((int)pvVar7 + 0xe) = 0;
        *(undefined4 *)((int)pvVar7 + 0x10) = 0;
        *(undefined2 *)((int)pvVar7 + 0x1a) = 0;
        *(undefined4 *)((int)pvVar7 + 0x1c) = 0;
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0042d320(pvVar7);
      *puVar6 = &PTR_FUN_007e5e5c;
      *(undefined1 *)((int)puVar6 + 10) = 0;
      *(undefined2 *)puVar6[1] = 0x1ba;
      iVar3 = puVar6[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 4);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(param_1 + 8);
      puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar3 = puVar6[1];
      *(undefined4 *)(iVar3 + 2) = *puVar8;
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar8 + 1);
      iVar3 = puVar6[1];
      *puVar6 = &PTR_FUN_007e5370;
      *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x1c);
      *(undefined1 *)(puVar6[1] + 0x14) = 1;
      *(undefined1 *)(puVar6[1] + 0x15) = 0;
      *(undefined4 *)(puVar6[1] + 0x16) = 0;
      iVar2 = puVar6[1];
      *(uint *)(iVar2 + 0x1a) = CONCAT22(uStack_1a,uVar5);
      *(undefined2 *)(iVar2 + 0x1e) = uStack_18;
    }
    local_4 = 0xffffffff;
    FUN_00565ca0(puVar6);
    piVar4 = piVar1;
  }
  ExceptionList = local_c;
  return;
}


