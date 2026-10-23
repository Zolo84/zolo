// FUN_005ba0ae @ 5ba0ae size=3085

undefined4 FUN_005ba0ae(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *local_184;
  int *local_178;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_56;
  undefined2 uStack_54;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc3ce;
  local_10 = ExceptionList;
  iVar6 = *(int *)(param_1 + 4);
  ExceptionList = &local_10;
  iVar4 = FUN_00428ee0();
  if (iVar4 == 0) {
    local_178 = (int *)0x0;
  }
  else {
    local_178 = (int *)(iVar4 + -0x14);
  }
  if (local_178 != (int *)0x0) {
    local_178[0x91] = 0;
    if ((local_178 != (int *)0x0) && (cVar3 = (**(code **)(*local_178 + 0x28))(), cVar3 != '\0')) {
      uVar1 = *(undefined2 *)(iVar6 + 0x14);
      FUN_004e9370();
      (**(code **)(*local_178 + 0x10))();
      cVar3 = FUN_005081a0();
      if (cVar3 != '\0') {
        FUN_004e9370();
        cVar3 = FUN_0044a690();
        if (cVar3 == '\0') {
          if (*(char *)((int)local_178 + 0x17b) == '\0') {
            local_184 = operator_new(0xc);
            local_8 = 2;
            if (local_184 == (undefined4 *)0x0) {
              local_184 = (undefined4 *)0x0;
            }
            else {
              FUN_004c0a70();
              *local_184 = &PTR_FUN_007e7784;
              iVar6 = local_184[1];
              *(int *)(iVar6 + 0xe) = local_178[6];
              *(short *)(iVar6 + 0x12) = (short)local_178[7];
              *(undefined2 *)(iVar6 + 0x14) = uVar1;
            }
            local_8 = 0xffffffff;
            local_178[0x91] = (int)local_184;
            FUN_0042df90();
            FUN_00565af0();
            ExceptionList = local_10;
            return 0;
          }
          if (DAT_00dc191b != '\0') {
            puVar5 = operator_new(0xc);
            uVar1 = DAT_0088f28c;
            local_8 = 0;
            if (puVar5 != (undefined4 *)0x0) {
              uStack_56 = (undefined2)DAT_0088f28e;
              uStack_54 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              iVar6 = FUN_004e9370();
              uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x3d8) + 6);
              FUN_00458490();
              *puVar5 = &PTR_FUN_007e5370;
              iVar6 = puVar5[1];
              *(int *)(iVar6 + 0xe) = local_178[6];
              *(short *)(iVar6 + 0x12) = (short)local_178[7];
              *(undefined1 *)(puVar5[1] + 0x14) = 1;
              *(undefined1 *)(puVar5[1] + 0x15) = 0;
              *(undefined4 *)(puVar5[1] + 0x16) = uVar9;
              iVar6 = puVar5[1];
              *(uint *)(iVar6 + 0x1a) = CONCAT22(uStack_56,uVar1);
              *(undefined2 *)(iVar6 + 0x1e) = uStack_54;
            }
            local_8 = 0xffffffff;
            FUN_00565ca0();
            ExceptionList = local_10;
            return 0;
          }
          puVar5 = operator_new(0xc);
          uVar1 = DAT_0088f28c;
          local_8 = 1;
          if (puVar5 != (undefined4 *)0x0) {
            uStack_66 = (undefined2)DAT_0088f28e;
            uStack_64 = (undefined2)((uint)DAT_0088f28e >> 0x10);
            FUN_00458490();
            *puVar5 = &PTR_FUN_007e5370;
            iVar6 = puVar5[1];
            *(int *)(iVar6 + 0xe) = local_178[6];
            *(short *)(iVar6 + 0x12) = (short)local_178[7];
            *(undefined1 *)(puVar5[1] + 0x14) = 1;
            *(undefined1 *)(puVar5[1] + 0x15) = 0;
            *(undefined4 *)(puVar5[1] + 0x16) = 0;
            iVar6 = puVar5[1];
            *(uint *)(iVar6 + 0x1a) = CONCAT22(uStack_66,uVar1);
            *(undefined2 *)(iVar6 + 0x1e) = uStack_64;
          }
          local_8 = 0xffffffff;
          FUN_00565ca0();
          ExceptionList = local_10;
          return 0;
        }
      }
      iVar4 = (**(code **)(*local_178 + 0x10))();
      if ((*(int *)(iVar4 + 0x264) == 4) && (*(char *)((int)local_178 + 0x17b) == '\0')) {
        FUN_005bacbb();
        ExceptionList = local_10;
        return 0;
      }
    }
    iVar4 = (**(code **)(local_178[0x47] + 4))();
    if ((iVar4 == 0) || (cVar3 = (**(code **)(*local_178 + 0x28))(), cVar3 != '\0')) {
      uVar7 = (uint)*(ushort *)(iVar6 + 0x14);
      (**(code **)(*(int *)(local_178[0x92] + 0xe) + 0xc))();
      FUN_00405ad0(s_UnitServer__Move_update_for_Unit_008591c0,
                   *(undefined4 *)((int)local_178 + 0x1a));
      cVar3 = FUN_005216c0();
      if (cVar3 == '\0') {
        FUN_005bacbb();
      }
      else {
        iVar6 = DAT_00ab27b4 + uVar7 * 0x4b2;
        iVar4 = (**(code **)(*(int *)((int)local_178 + 0x22e) + 4))();
        if (iVar4 < 2) {
          FUN_00405ad0(s_UnitServer__Unit___d_arrived_at_i_00859220);
        }
        else {
          (**(code **)(*(int *)((int)local_178 + 0x22e) + 4))();
          FUN_00405ad0();
          FUN_005bca59(local_178,uVar7,**(undefined4 **)(*(int *)((int)local_178 + 0x232) + 8));
        }
        if ((*(int *)(iVar6 + 0x254) == 8) &&
           (cVar3 = (**(code **)(*local_178 + 0x28))(), cVar3 != '\0')) {
          (**(code **)(*local_178 + 0x10))();
          cVar3 = FUN_0052b150();
          if (cVar3 == '\0') {
            FUN_005bacbb();
          }
          else {
            (**(code **)(*local_178 + 0x10))();
            FUN_005bfe7d();
          }
        }
        else {
          if (*(int *)(iVar6 + 0x254) == 8) {
            bVar2 = false;
          }
          else if (*(int *)(iVar6 + 0x254) == 9) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((((bVar2) && (cVar3 = (**(code **)(*local_178 + 0x28))(), cVar3 != '\0')) &&
              (local_178[3] == 0)) &&
             (iVar4 = (**(code **)(*local_178 + 0x10))(), *(int *)(iVar4 + 0x2ae) != 0)) {
            (**(code **)(*local_178 + 0x10))();
            cVar3 = FUN_00517740();
            if (cVar3 == '\0') {
              FUN_005bacbb();
            }
            else {
              pvVar8 = operator_new(0xc);
              local_8 = 3;
              if (pvVar8 != (void *)0x0) {
                (**(code **)(*local_178 + 0x10))();
                FUN_005211d0();
                FUN_00447250();
                    /* WARNING: Ignoring partial resolution of indirect */
                uVar9 = FUN_00447250(uVar7);
                FUN_005c0110(0x2e,uVar9,uVar7);
              }
              local_8 = 0xffffffff;
              FUN_00565bc0();
            }
          }
          else {
            cVar3 = (**(code **)(*local_178 + 0x30))();
            if ((cVar3 == '\0') || (local_178[3] != 0)) {
              pvVar8 = operator_new(0xc);
              local_8 = 5;
              if (pvVar8 != (void *)0x0) {
                    /* WARNING: Ignoring partial resolution of indirect */
                uVar9 = FUN_00447250(uVar7);
                FUN_005c0110(0x2e,uVar9,uVar7);
              }
              local_8 = 0xffffffff;
              FUN_00565bc0();
            }
            else {
              iVar6 = *(int *)(iVar6 + 0x12);
              iVar4 = (**(code **)(*local_178 + 0x18))();
              if (iVar6 == *(int *)(*(int *)(iVar4 + 0x2a6) + 0xc)) {
                FUN_005bacbb();
              }
              else {
                pvVar8 = operator_new(0xc);
                local_8 = 4;
                if (pvVar8 != (void *)0x0) {
                  (**(code **)(*local_178 + 0x18))();
                  FUN_0054f0a0();
                  FUN_00447250();
                    /* WARNING: Ignoring partial resolution of indirect */
                  uVar9 = FUN_00447250(uVar7);
                  FUN_005c0110(0x2e,uVar9,uVar7);
                }
                local_8 = 0xffffffff;
                FUN_00565bc0();
              }
            }
          }
        }
      }
    }
    else {
      FUN_005bacbb();
    }
  }
  ExceptionList = local_10;
  return 0;
}


