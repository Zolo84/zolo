// FUN_00701050 @ 701050 size=1384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00701050(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db8cd;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0xc);
  ExceptionList = &local_c;
  pvVar3 = operator_new(0xe);
  local_2c = SUB42(pvVar3,0);
  uStack_2a = (undefined2)((uint)pvVar3 >> 0x10);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0049a870(param_2);
  }
  iVar8 = *(int *)(param_1 + 0x10);
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(int *)(param_1 + 0x10) = iVar8 + 1;
  if (iVar8 == 0) {
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  else {
    *(undefined4 *)(iVar6 + 8) = uVar4;
  }
  if (*(char *)(param_2 + 0x1237) == '\0') {
    if (*(char *)(param_2 + 0x1238) == '\0') {
      FUN_00712010();
      cVar2 = FUN_0042ddd0();
      if (cVar2 == '\0') {
        FUN_0044df10();
        piVar5 = (int *)FUN_00498640();
        piVar5 = (int *)(**(code **)(*piVar5 + 0x28))(&local_2c);
        if (*piVar5 == 0) {
          FUN_0044df10();
          piVar5 = (int *)FUN_00700a50();
          piVar5 = (int *)(**(code **)(*piVar5 + 0x28))(&local_2c);
          if (*piVar5 == 0) {
            if (*(char *)(param_2 + 0x23a6) != '\0') {
              iVar6 = *(int *)(param_1 + 0x1d522);
              pvVar3 = operator_new(0xe);
              local_4 = 1;
              if (pvVar3 == (void *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = FUN_0049a870(param_2);
              }
              iVar8 = *(int *)(param_1 + 0x1d526);
              *(undefined4 *)(param_1 + 0x1d522) = uVar4;
              *(int *)(param_1 + 0x1d526) = iVar8 + 1;
              if (iVar8 != 0) {
                *(undefined4 *)(iVar6 + 8) = uVar4;
                ExceptionList = local_c;
                return;
              }
              *(undefined4 *)(param_1 + 0x1d51e) = uVar4;
              ExceptionList = local_c;
              return;
            }
            uStack_24 = *(undefined4 *)(param_2 + 0x1240);
            uStack_20 = *(undefined2 *)(param_2 + 0x1244);
            cVar2 = FUN_0042dd70();
            if (cVar2 == '\0') {
              uStack_24 = *(undefined4 *)(DAT_00893530 + 0x14);
              uStack_20 = *(undefined2 *)(DAT_00893530 + 0x18);
              if (0 < *(int *)(param_2 + 0x1252)) {
                _rand();
              }
              FUN_0042dc20();
            }
            if (*(int *)(param_2 + 0x1256) == 0) {
              iVar6 = (**(code **)(*(int *)(param_2 + 0x23ac) + 4))();
              if (0 < iVar6) {
                puVar7 = *(undefined4 **)(param_2 + 0x23b0);
                while (puVar7 != (undefined4 *)0x0) {
                  puVar9 = (undefined4 *)puVar7[2];
                  uVar4 = *puVar7;
                  puVar7 = operator_new(0xc);
                  local_4 = 2;
                  if (puVar7 != (undefined4 *)0x0) {
                    local_2c = 3;
                    uStack_2a = (undefined2)uVar4;
                    uStack_28 = (undefined2)((uint)uVar4 >> 0x10);
                    iVar8 = _rand();
                    FUN_00701630();
                    iVar6 = puVar7[1];
                    *puVar7 = &PTR_FUN_007e52d0;
                    *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(param_2 + 0xc);
                    *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(param_2 + 0x10);
                    iVar6 = puVar7[1];
                    *(uint *)(iVar6 + 0x14) = CONCAT22(uStack_2a,local_2c);
                    *(undefined2 *)(iVar6 + 0x18) = uStack_28;
                    *(int *)(puVar7[1] + 0x1a) = iVar8;
                  }
                  local_4 = 0xffffffff;
                  FUN_00565af0();
                  puVar7 = puVar9;
                }
                ExceptionList = local_c;
                return;
              }
              iVar6 = 0;
              do {
                puVar7 = operator_new(0xc);
                local_4 = 3;
                if (puVar7 != (undefined4 *)0x0) {
                  local_1c = 3;
                  uStack_1a = (undefined2)iVar6;
                  uStack_18 = (undefined2)((uint)iVar6 >> 0x10);
                  iVar8 = _rand();
                  pvVar3 = operator_new(0x1e);
                  local_2c = SUB42(pvVar3,0);
                  uStack_2a = (undefined2)((uint)pvVar3 >> 0x10);
                  local_4._0_1_ = 4;
                  if (pvVar3 != (void *)0x0) {
                    FUN_007016d0();
                  }
                  local_4 = CONCAT31(local_4._1_3_,3);
                  FUN_0042d320();
                  *puVar7 = &PTR_FUN_007e52f0;
                  *(undefined1 *)((int)puVar7 + 10) = 0;
                  *(undefined2 *)puVar7[1] = 0xa0;
                  iVar1 = puVar7[1];
                  *(undefined4 *)(iVar1 + 8) = _DAT_0088f228;
                  *(undefined2 *)(iVar1 + 0xc) = DAT_0088f22c;
                  puVar9 = (undefined4 *)FUN_0042d2f0(0,0);
                  iVar1 = puVar7[1];
                  *(undefined4 *)(iVar1 + 2) = *puVar9;
                  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar9 + 1);
                  iVar1 = puVar7[1];
                  *puVar7 = &PTR_FUN_007e52d0;
                  *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(param_2 + 0xc);
                  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_2 + 0x10);
                  iVar1 = puVar7[1];
                  *(uint *)(iVar1 + 0x14) = CONCAT22(uStack_1a,local_1c);
                  *(undefined2 *)(iVar1 + 0x18) = uStack_18;
                  *(int *)(puVar7[1] + 0x1a) = iVar8;
                }
                local_4 = 0xffffffff;
                FUN_00565af0();
                iVar6 = iVar6 + 1;
              } while (iVar6 < 0x157);
              ExceptionList = local_c;
              return;
            }
            puVar7 = operator_new(0xc);
            local_4 = 5;
            if (puVar7 != (undefined4 *)0x0) {
              local_1c = 3;
              uStack_1a = (undefined2)*(undefined4 *)(param_2 + 0x1256);
              uStack_18 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1256) >> 0x10);
              iVar6 = _rand();
              pvVar3 = operator_new(0x1e);
              local_2c = SUB42(pvVar3,0);
              uStack_2a = (undefined2)((uint)pvVar3 >> 0x10);
              local_4._0_1_ = 6;
              if (pvVar3 != (void *)0x0) {
                FUN_007016d0();
              }
              local_4 = CONCAT31(local_4._1_3_,5);
              FUN_0042d320();
              *puVar7 = &PTR_FUN_007e52f0;
              *(undefined1 *)((int)puVar7 + 10) = 0;
              *(undefined2 *)puVar7[1] = 0xa0;
              iVar8 = puVar7[1];
              *(undefined4 *)(iVar8 + 8) = _DAT_0088f228;
              *(undefined2 *)(iVar8 + 0xc) = DAT_0088f22c;
              puVar9 = (undefined4 *)FUN_0042d2f0(0,0);
              iVar8 = puVar7[1];
              *(undefined4 *)(iVar8 + 2) = *puVar9;
              *(undefined2 *)(iVar8 + 6) = *(undefined2 *)(puVar9 + 1);
              iVar8 = puVar7[1];
              *puVar7 = &PTR_FUN_007e52d0;
              *(undefined4 *)(iVar8 + 0xe) = *(undefined4 *)(param_2 + 0xc);
              *(undefined2 *)(iVar8 + 0x12) = *(undefined2 *)(param_2 + 0x10);
              iVar8 = puVar7[1];
              *(uint *)(iVar8 + 0x14) = CONCAT22(uStack_1a,local_1c);
              *(undefined2 *)(iVar8 + 0x18) = uStack_18;
              *(int *)(puVar7[1] + 0x1a) = iVar6;
            }
            local_4 = 0xffffffff;
            FUN_00565af0();
            ExceptionList = local_c;
            return;
          }
        }
      }
      if ((DAT_00dc4b5e != '\0') && (*(short *)(param_2 + 0x123e) != 0)) {
        FUN_00429a00();
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1d4ca);
      *(undefined4 *)(param_1 + 0x16 + iVar6 * 6) = *(undefined4 *)(param_2 + 0xc);
      *(undefined2 *)(param_1 + iVar6 * 6 + 0x1a) = *(undefined2 *)(param_2 + 0x10);
      *(int *)(param_1 + 0x1d4ca) = *(int *)(param_1 + 0x1d4ca) + 1;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1d4ce);
    *(undefined4 *)(param_1 + 0xea70 + iVar6 * 6) = *(undefined4 *)(param_2 + 0xc);
    *(undefined2 *)(param_1 + iVar6 * 6 + 0xea74) = *(undefined2 *)(param_2 + 0x10);
    *(int *)(param_1 + 0x1d4ce) = *(int *)(param_1 + 0x1d4ce) + 1;
  }
  ExceptionList = local_c;
  return;
}


