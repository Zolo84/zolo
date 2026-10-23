// FUN_00661bf0 @ 661bf0 size=414

void __fastcall FUN_00661bf0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 local_28;
  undefined2 uStack_24;
  undefined **local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d3948;
  local_1c = (undefined2 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e6edc;
  local_4 = 0;
  piVar4 = *(int **)(*(int *)(param_1 + 10) + 0x4508);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (puVar7 = local_1c, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    piVar2 = (int *)*piVar4;
    uStack_3c._0_2_ = 0x1c4e;
    uStack_3c._2_2_ = 0x66;
    cVar5 = (**(code **)(*piVar2 + 0x2c))();
    piVar4 = piVar1;
    if (cVar5 != '\0') {
      uStack_3c._0_2_ = 0x1c65;
      uStack_3c._2_2_ = 0x66;
      iVar6 = (**(code **)(piVar2[0x47] + 4))();
      if (iVar6 != 0) {
        uStack_3c._0_2_ = 0x1c76;
        uStack_3c._2_2_ = 0x66;
        iVar6 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
        if ((iVar6 != 0) && (*(int *)(*(int *)piVar2[0x48] + 0x74) == 2)) {
          uStack_3c._0_2_ = 0x1c8f;
          uStack_3c._2_2_ = 0x66;
          FUN_00526c90();
          uStack_3c._0_2_ = 0x1c96;
          uStack_3c._2_2_ = 0x66;
          FUN_00667680();
          uStack_3c._0_2_ = 0x1ca0;
          uStack_3c._2_2_ = 0x66;
          puVar7 = (undefined2 *)FUN_00447250();
          uStack_40 = *puVar7;
          local_28 = &uStack_40;
          uStack_3e = (undefined2)*(undefined4 *)(puVar7 + 1);
          uStack_3c._0_2_ = (undefined2)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10);
          cVar5 = FUN_0049a2d0();
          if (cVar5 == '\0') {
            uStack_3c._0_2_ = 0x1cc9;
            uStack_3c._2_2_ = 0x66;
            FUN_00526c90();
            uStack_3c._0_2_ = 0x1cd0;
            uStack_3c._2_2_ = 0x66;
            FUN_00667680();
            uStack_3c._0_2_ = 0x1cda;
            uStack_3c._2_2_ = 0x66;
            puVar7 = (undefined2 *)FUN_00447250();
            uStack_40 = *puVar7;
            local_28 = &uStack_40;
            uStack_3e = (undefined2)*(undefined4 *)(puVar7 + 1);
            uStack_3c._0_2_ = (undefined2)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10);
            FUN_0049a190();
          }
        }
      }
    }
  }
  while (puVar7 != (undefined2 *)0x0) {
    puVar3 = *(undefined2 **)(puVar7 + 5);
    local_28._0_2_ = *puVar7;
    uStack_3c = &local_28;
    local_28._2_2_ = (undefined2)*(undefined4 *)(puVar7 + 1);
    uStack_24 = (undefined2)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10);
    uStack_40 = 0x1d28;
    uStack_3e = 0x66;
    iVar6 = FUN_00428ee0();
    if ((((iVar6 != 0) && (uStack_3c = (undefined4 *)(iVar6 + -8), uStack_3c != (undefined4 *)0x0))
        && (*(char *)(*(int *)(iVar6 + 0x78) + 0x3e) == '\0')) &&
       (*(char *)(*(int *)(iVar6 + 0x7c) + 0x3e) == '\0')) {
      uStack_40 = 0x1d56;
      uStack_3e = 0x66;
      FUN_00661d90();
    }
    puVar7 = puVar3;
  }
  local_20 = &PTR_LAB_007e6edc;
  puVar7 = local_1c;
  while (puVar7 != (undefined2 *)0x0) {
    puVar3 = *(undefined2 **)(puVar7 + 5);
    uStack_3c._0_2_ = SUB42(puVar7,0);
    uStack_3c._2_2_ = (undefined2)((uint)puVar7 >> 0x10);
    uStack_40 = 0x1d73;
    uStack_3e = 0x66;
    FUN_00796cd8();
    puVar7 = puVar3;
  }
  ExceptionList = pvStack_c;
  return;
}


