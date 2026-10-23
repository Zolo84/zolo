// FUN_005bacbb @ 5bacbb size=1965

void FUN_005bacbb(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *local_120;
  void *local_11c;
  undefined4 *local_114;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_36;
  undefined2 uStack_34;
  uint local_28;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc41b;
  local_10 = ExceptionList;
  if (*(char *)((int)param_1 + 0x17b) == '\0') {
    ExceptionList = &local_10;
    cVar3 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
    if ((cVar3 == '\0') &&
       (((iVar5 = (**(code **)(param_1[0x47] + 4))(), iVar5 == 0 ||
         (cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 == '\0')) || (param_1[3] == 0)))) {
      uVar4 = (**(code **)(*(int *)(param_1[0x92] + 0xe) + 0xc))();
      FUN_00405ad0(s_UnitServer__CancelMove_for_Unit___0085929c,*(undefined4 *)((int)param_1 + 0x1a)
                   ,uVar4);
      local_120 = operator_new(0xc);
      uVar2 = DAT_0088f28c;
      local_8 = 3;
      if (local_120 == (undefined4 *)0x0) {
        local_120 = (undefined4 *)0x0;
      }
      else {
        uStack_6a = (undefined2)DAT_0088f28e;
        uStack_68 = (undefined2)((uint)DAT_0088f28e >> 0x10);
        local_11c = operator_new(0x20);
        local_8._0_1_ = 4;
        if (local_11c == (void *)0x0) {
          local_11c = (void *)0x0;
        }
        else {
          FUN_0042d6c0();
          *(undefined2 *)((int)local_11c + 0xe) = 0;
          *(undefined4 *)((int)local_11c + 0x10) = 0;
          *(undefined2 *)((int)local_11c + 0x1a) = 0;
          *(undefined4 *)((int)local_11c + 0x1c) = 0;
        }
        local_8._0_1_ = 3;
        FUN_0042d320(local_11c);
        local_8 = CONCAT31(local_8._1_3_,5);
        *local_120 = &PTR_FUN_007e5e5c;
        *(undefined1 *)((int)local_120 + 10) = 0;
        *(undefined2 *)local_120[1] = 0x30;
        iVar5 = local_120[1];
        *(int *)(iVar5 + 8) = param_1[6];
        *(short *)(iVar5 + 0xc) = (short)param_1[7];
        puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar5 = local_120[1];
        *(undefined4 *)(iVar5 + 2) = *puVar7;
        *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar7 + 1);
        *local_120 = &PTR_FUN_007e5370;
        iVar5 = local_120[1];
        *(int *)(iVar5 + 0xe) = param_1[6];
        *(short *)(iVar5 + 0x12) = (short)param_1[7];
        *(undefined1 *)(local_120[1] + 0x14) = 1;
        *(undefined1 *)(local_120[1] + 0x15) = 0;
        *(undefined4 *)(local_120[1] + 0x16) = 0;
        iVar5 = local_120[1];
        *(uint *)(iVar5 + 0x1a) = CONCAT22(uStack_6a,uVar2);
        *(undefined2 *)(iVar5 + 0x1e) = uStack_68;
      }
      local_8 = 0xffffffff;
      FUN_00565bc0(local_120);
    }
  }
  else {
    ExceptionList = &local_10;
    uVar4 = (**(code **)(*(int *)(param_1[0x92] + 0xe) + 0xc))();
    pcVar8 = s_UnitServer__CancelMove_for_Retre_0085925c;
    FUN_00405ad0(s_UnitServer__CancelMove_for_Retre_0085925c,*(undefined4 *)((int)param_1 + 0x1a),
                 uVar4);
    iVar5 = (**(code **)(*param_1 + 0x40))(0);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x30))();
      iVar5 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      if (0 < iVar5) {
        local_1c = *(int **)((int)param_1 + 0x26);
        while (local_1c != (int *)0x0) {
          piVar1 = (int *)local_1c[2];
          iVar5 = *local_1c;
          local_110 = operator_new(0xc);
          uVar2 = DAT_0088f28c;
          local_8 = 1;
          if (local_110 == (undefined4 *)0x0) {
            local_110 = (undefined4 *)0x0;
          }
          else {
            uStack_4a = (undefined2)DAT_0088f28e;
            uStack_48 = (undefined2)((uint)DAT_0088f28e >> 0x10);
            iVar6 = FUN_00522770();
            FUN_00498970(0x6c,iVar6 + 4);
            *local_110 = &PTR_FUN_007e6180;
            iVar6 = local_110[1];
            *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(iVar5 + 0xc);
            *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
            iVar5 = local_110[1];
            *(uint *)(iVar5 + 0x14) = CONCAT22(uStack_4a,uVar2);
            *(undefined2 *)(iVar5 + 0x18) = uStack_48;
            *(undefined1 *)(local_110[1] + 0x1a) = 0;
            *(undefined4 *)(local_110[1] + 0x1c) = 0xfffffff8;
          }
          local_8 = 0xffffffff;
          FUN_00565bc0(local_110);
          local_1c = piVar1;
        }
      }
      local_114 = operator_new(0xc);
      uVar2 = DAT_0088f28c;
      local_8 = 2;
      if (local_114 == (undefined4 *)0x0) {
        local_114 = (undefined4 *)0x0;
      }
      else {
        uStack_5a = (undefined2)DAT_0088f28e;
        uStack_58 = (undefined2)((uint)DAT_0088f28e >> 0x10);
        FUN_00458490(0x35,param_1[0x92] + 4);
        *local_114 = &PTR_FUN_007e5370;
        iVar5 = local_114[1];
        *(int *)(iVar5 + 0xe) = param_1[6];
        *(short *)(iVar5 + 0x12) = (short)param_1[7];
        *(undefined1 *)(local_114[1] + 0x14) = 1;
        *(undefined1 *)(local_114[1] + 0x15) = 0;
        *(undefined4 *)(local_114[1] + 0x16) = 0;
        iVar5 = local_114[1];
        *(uint *)(iVar5 + 0x1a) = CONCAT22(uStack_5a,uVar2);
        *(undefined2 *)(iVar5 + 0x1e) = uStack_58;
      }
      local_8 = 0xffffffff;
      FUN_00565bc0(local_114);
    }
    else {
      local_28 = local_28 & 0xff000000;
      iVar5 = FUN_005bb48f(param_1,iVar5,1,local_28,(uint)pcVar8 & 0xffff0000,1);
      if ((iVar5 == -1) && (cVar3 = (**(code **)(*param_1 + 0x2c))(), cVar3 != '\0')) {
        local_10c = operator_new(0xc);
        uVar2 = DAT_0088f28c;
        local_8 = 0;
        if (local_10c == (undefined4 *)0x0) {
          local_10c = (undefined4 *)0x0;
        }
        else {
          uStack_36 = (undefined2)DAT_0088f28e;
          uStack_34 = (undefined2)((uint)DAT_0088f28e >> 0x10);
          FUN_00458490(0x35,param_1[0x92] + 4);
          *local_10c = &PTR_FUN_007e5370;
          iVar5 = local_10c[1];
          *(int *)(iVar5 + 0xe) = param_1[6];
          *(short *)(iVar5 + 0x12) = (short)param_1[7];
          *(undefined1 *)(local_10c[1] + 0x14) = 1;
          *(undefined1 *)(local_10c[1] + 0x15) = 0;
          *(undefined4 *)(local_10c[1] + 0x16) = 0;
          iVar5 = local_10c[1];
          *(uint *)(iVar5 + 0x1a) = CONCAT22(uStack_36,uVar2);
          *(undefined2 *)(iVar5 + 0x1e) = uStack_34;
        }
        local_8 = 0xffffffff;
        FUN_00565bc0(local_10c);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


