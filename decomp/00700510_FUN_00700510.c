// FUN_00700510 @ 700510 size=1329

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00700510(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_48;
  undefined2 *local_28;
  undefined4 *puStack_24;
  undefined2 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db807;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 4);
    local_48._0_2_ = 0x551;
    local_48._2_2_ = 0x70;
    iVar3 = FUN_00428460();
    if ((iVar3 != 0) && ((int *)(iVar3 + -8) != (int *)0x0)) {
      if (DAT_00dc4b5e != '\0') {
        local_48._0_2_ = 0x579;
        local_48._2_2_ = 0x70;
        FUN_004af700();
        local_48._0_2_ = (undefined2)*(undefined4 *)(iVar3 + 6);
        local_48._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar3 + 6) >> 0x10);
        FUN_00429a00(s_Executing_event__d__s_00870140);
      }
      local_48._0_2_ = 300;
      local_48._2_2_ = 0x87;
      FUN_00405ad0();
      if (*(char *)(iVar3 + 0x122d) == '\0') {
        puVar4 = (undefined2 *)FUN_0044df10();
        local_48._0_2_ = *puVar4;
        local_48._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
        piVar5 = (int *)FUN_00700a50();
        piVar5 = (int *)(**(code **)(*piVar5 + 0x28))(&local_28);
        if (*piVar5 == 0) {
          iVar6 = (&DAT_0089cad8)[*(int *)(iVar1 + 0x16)];
          if ((iVar6 == 0) && (iVar6 = FUN_00712700(), iVar6 == 0)) {
            if (*(char *)(iVar3 + 0x1230) != '\0') {
              ExceptionList = local_c;
              return 3;
            }
            puVar4 = (undefined2 *)FUN_0044df10();
            local_48._0_2_ = *puVar4;
            puStack_24 = &local_48;
            local_48._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
            piVar5 = (int *)FUN_00498640();
            piVar5 = (int *)(**(code **)(*piVar5 + 0x28))(&local_28);
            if (*piVar5 != 0) {
              ExceptionList = local_c;
              return 3;
            }
            cVar2 = FUN_00711ff0();
            if (cVar2 == '\0') {
              ExceptionList = local_c;
              return 3;
            }
            uStack_1c = *(undefined4 *)(DAT_00893530 + 0x14);
            uStack_18 = *(undefined2 *)(DAT_00893530 + 0x18);
            local_48._0_2_ = 0x906;
            local_48._2_2_ = 0x70;
            FUN_0042dc20();
            local_48._0_2_ = 0x90d;
            local_48._2_2_ = 0x70;
            puVar7 = operator_new(0xc);
            uStack_4 = 3;
            puStack_24 = puVar7;
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              iVar6 = _rand();
              local_48._0_2_ = 0x934;
              local_48._2_2_ = 0x70;
              puVar4 = operator_new(0x1e);
              uStack_4 = CONCAT31(uStack_4._1_3_,4);
              local_28 = puVar4;
              if (puVar4 == (undefined2 *)0x0) {
                puVar4 = (undefined2 *)0x0;
              }
              else {
                FUN_0042d6c0();
                puVar4[7] = 0;
                *(undefined4 *)(puVar4 + 8) = 0;
                puVar4[10] = 0;
                *(undefined4 *)(puVar4 + 0xb) = 0;
              }
              puVar7[1] = puVar4;
              *(undefined1 *)(puVar7 + 2) = 0;
              *(undefined1 *)((int)puVar7 + 9) = 1;
              *puVar7 = &PTR_FUN_007e52f0;
              *(undefined1 *)((int)puVar7 + 10) = 0;
              *puVar4 = 0xa0;
              iVar8 = puVar7[1];
              local_48._0_2_ = 0;
              local_48._2_2_ = 0;
              *(undefined4 *)(iVar8 + 8) = _DAT_0088f228;
              *(undefined2 *)(iVar8 + 0xc) = DAT_0088f22c;
              puVar9 = (undefined4 *)FUN_0042d2f0(0,0);
              iVar8 = puVar7[1];
              *(undefined4 *)(iVar8 + 2) = *puVar9;
              *(undefined2 *)(iVar8 + 6) = *(undefined2 *)(puVar9 + 1);
              iVar8 = puVar7[1];
              *puVar7 = &PTR_FUN_007e52d0;
              *(undefined4 *)(iVar8 + 0xe) = *(undefined4 *)(iVar3 + 4);
              *(undefined2 *)(iVar8 + 0x12) = *(undefined2 *)(iVar3 + 8);
              iVar3 = puVar7[1];
              *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
              *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar1 + 0x18);
              *(int *)(puVar7[1] + 0x1a) = iVar6;
            }
            uStack_4 = 0xffffffff;
            local_48._0_2_ = SUB42(puVar7,0);
            local_48._2_2_ = (undefined2)((uint)puVar7 >> 0x10);
            FUN_00565af0();
            ExceptionList = local_c;
            return 3;
          }
          if (*(char *)(iVar3 + 0x1230) == '\0') {
            puVar4 = (undefined2 *)FUN_0044df10();
            local_48._0_2_ = *puVar4;
            local_28 = (undefined2 *)&local_48;
            local_48._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
            piVar5 = (int *)FUN_00498640();
            piVar5 = (int *)(**(code **)(*piVar5 + 0x28))(&puStack_24);
            if (*piVar5 != 0) {
              ExceptionList = local_c;
              return 3;
            }
          }
          *(int *)(iVar3 + 0x1c) = iVar6;
          if (((*(char *)(iVar3 + 0x239e) != '\0') &&
              (0 < (int)(&DAT_00dc0fd4)[*(int *)(iVar1 + 0x16)])) &&
             ((int)(&DAT_00dc0fd4)[*(int *)(iVar1 + 0x16)] < 3)) {
            cVar2 = FUN_0072a2c0();
            if (cVar2 == '\0') {
              ExceptionList = local_c;
              return 3;
            }
            local_48._0_2_ = 0x69b;
            local_48._2_2_ = 0x70;
            puVar7 = operator_new(0xc);
            uStack_4 = 0;
            puStack_24 = puVar7;
            if (puVar7 != (undefined4 *)0x0) {
              iVar6 = _rand();
              local_48._0_2_ = 0xa0;
              local_48._2_2_ = 0;
              FUN_00701630();
              iVar3 = puVar7[1];
              *puVar7 = &PTR_FUN_007e52d0;
              *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar1 + 0xe);
              *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar1 + 0x12);
              iVar3 = puVar7[1];
              *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
              *(undefined2 *)(iVar3 + 0x18) = *(undefined2 *)(iVar1 + 0x18);
              *(int *)(puVar7[1] + 0x1a) = iVar6;
            }
            uStack_4 = 0xffffffff;
            local_48._0_2_ = 0x70e;
            local_48._2_2_ = 0x70;
            FUN_00565bc0();
            ExceptionList = local_c;
            return 3;
          }
          cVar2 = FUN_0070d430();
          if (cVar2 == '\0') {
            cVar2 = FUN_00711ff0();
            if (cVar2 == '\0') {
              ExceptionList = local_c;
              return 3;
            }
            puStack_24 = *(undefined4 **)(DAT_00893530 + 0x14);
            uStack_20 = *(undefined2 *)(DAT_00893530 + 0x18);
            local_48._0_2_ = 0x75c;
            local_48._2_2_ = 0x70;
            FUN_0042dc20();
            local_48._0_2_ = 0x763;
            local_48._2_2_ = 0x70;
            puVar7 = operator_new(0xc);
            uStack_4 = 1;
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              iVar8 = _rand();
              local_48._0_2_ = 0xa0;
              local_48._2_2_ = 0;
              FUN_00701630();
              iVar1 = puVar7[1];
              *puVar7 = &PTR_FUN_007e52d0;
              *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(iVar3 + 4);
              *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(iVar3 + 8);
              iVar1 = puVar7[1];
              *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar6 + 4);
              *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(iVar6 + 8);
              *(int *)(puVar7[1] + 0x1a) = iVar8;
            }
            uStack_4 = 0xffffffff;
            local_48._0_2_ = SUB42(puVar7,0);
            local_48._2_2_ = (undefined2)((uint)puVar7 >> 0x10);
            FUN_00565af0();
            ExceptionList = local_c;
            return 3;
          }
          local_48._0_2_ = 0x7ec;
          local_48._2_2_ = 0x70;
          puVar7 = operator_new(0xc);
          uStack_4 = 2;
          puStack_24 = puVar7;
          if (puVar7 != (undefined4 *)0x0) {
            iVar8 = _rand();
            local_48._0_2_ = 0xa0;
            local_48._2_2_ = 0;
            FUN_00701630();
            iVar6 = puVar7[1];
            *puVar7 = &PTR_FUN_007e52d0;
            *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(iVar1 + 0xe);
            *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(iVar1 + 0x12);
            iVar6 = puVar7[1];
            *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
            *(undefined2 *)(iVar6 + 0x18) = *(undefined2 *)(iVar1 + 0x18);
            *(int *)(puVar7[1] + 0x1a) = iVar8;
          }
          uStack_4 = 0xffffffff;
          local_48._0_2_ = 0x863;
          local_48._2_2_ = 0x70;
          FUN_00565bc0();
          if (*(char *)(iVar3 + 0x1230) == '\0') {
            ExceptionList = local_c;
            return 3;
          }
          local_48._0_2_ = 0x881;
          local_48._2_2_ = 0x70;
          FUN_00700220();
          ExceptionList = local_c;
          return 3;
        }
      }
      (**(code **)(*(int *)(iVar3 + -8) + 0xc))();
      local_48._0_2_ = (undefined2)*(undefined4 *)(iVar3 + 6);
      local_48._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar3 + 6) >> 0x10);
      FUN_00429a00(s_Event_number__d___s__couldn_t_be_008700e8);
    }
  }
  ExceptionList = local_c;
  return 3;
}


