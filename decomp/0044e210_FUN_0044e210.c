// FUN_0044e210 @ 44e210 size=867

void __fastcall FUN_0044e210(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *local_114;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bbc4c;
  local_c = ExceptionList;
  if (DAT_00dc3a00 == '\0') {
    iVar7 = 0;
    if (0 < DAT_0087769c) {
      piVar5 = &DAT_00d7d488;
      ExceptionList = &local_c;
      do {
        iVar6 = 0;
        if (0 < *piVar5) {
          do {
            local_4 = 0xffffffff;
            if (DAT_00877221 == '\0') {
LAB_0044e4ed:
              FUN_007a630a(local_10c,s_gfx_interface_models_MODEL__d__d_0083c7a8,iVar7,iVar6);
            }
            else {
              FUN_007a630a(local_10c,s_gfx_interface_models__s_MODEL__d_0083c7f8,param_1 + 0x61a,
                           iVar7,iVar6);
              iVar4 = FUN_007a6615(local_10c,&DAT_0082eeb4);
              if (iVar4 == 0) goto LAB_0044e4ed;
              FUN_007a6429(iVar4);
            }
            pvVar2 = operator_new(0x7e);
            local_4 = 1;
            if (pvVar2 == (void *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_00414c80(local_10c);
            }
            iVar4 = iVar6 + piVar5[1];
            iVar6 = iVar6 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x452e) + iVar4 * 4) = uVar3;
          } while (iVar6 < *piVar5);
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 2;
      } while (iVar7 < DAT_0087769c);
    }
  }
  else {
    iVar7 = 0;
    if (0 < DAT_0087769c) {
      local_114 = &DAT_00d7d488;
      ExceptionList = &local_c;
      do {
        iVar6 = 0;
        if (0 < *local_114) {
          do {
            local_4 = 0xffffffff;
            if (DAT_00877221 == '\0') {
              FUN_007a630a(local_10c,s__s_gfx_interface_models_MODEL__d_0083c7d0,&DAT_00dc3a00,iVar7
                           ,iVar6);
              iVar4 = FUN_007a6615(local_10c,&DAT_0082eeb4);
              if (iVar4 == 0) {
joined_r0x0044e3e2:
                if (DAT_00dc1959 == '\0') {
                  FUN_007a630a(local_10c,s_gfx_interface_models_MODEL__d__d_0083c7a8,iVar7,iVar6);
                }
              }
              else {
                FUN_007a6429(iVar4);
              }
            }
            else {
              iVar4 = param_1 + 0x61a;
              FUN_007a630a(local_10c,s__s_gfx_interface_models__s_MODEL_0083c820,&DAT_00dc3a00,iVar4
                           ,iVar7,iVar6);
              iVar1 = FUN_007a6615(local_10c,&DAT_0082eeb4);
              if (iVar1 == 0) {
                if (DAT_00dc1959 == '\0') {
                  FUN_007a630a(local_10c,s_gfx_interface_models__s_MODEL__d_0083c7f8,iVar4,iVar7,
                               iVar6);
                  iVar1 = FUN_007a6615(local_10c,&DAT_0082eeb4);
                  if (iVar1 != 0) goto LAB_0044e2db;
                }
                FUN_007a630a(local_10c,s__s_gfx_interface_models_MODEL__d_0083c7d0,&DAT_00dc3a00,
                             iVar7,iVar6);
                iVar1 = FUN_007a6615(local_10c,&DAT_0082eeb4);
                if (iVar1 == 0) {
                  if (DAT_00dc1959 == '\0') {
                    FUN_007a630a(local_10c,s_gfx_interface_models__s_MODEL__d_0083c7f8,iVar4,iVar7,
                                 iVar6);
                    iVar4 = FUN_007a6615(local_10c,&DAT_0082eeb4);
                    if (iVar4 != 0) {
                      FUN_007a6429(iVar4);
                      goto LAB_0044e3f8;
                    }
                  }
                  FUN_007a630a(local_10c,s__s_gfx_interface_models_MODEL__d_0083c7d0,&DAT_00dc3a00,
                               iVar7,iVar6);
                  iVar4 = FUN_007a6615(local_10c,&DAT_0082eeb4);
                  if (iVar4 == 0) goto joined_r0x0044e3e2;
                  FUN_007a6429(iVar4);
                }
                else {
                  FUN_007a6429(iVar1);
                }
              }
              else {
LAB_0044e2db:
                FUN_007a6429(iVar1);
              }
            }
LAB_0044e3f8:
            pvVar2 = operator_new(0x7e);
            local_4 = 0;
            if (pvVar2 == (void *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_00414c80(local_10c);
            }
            iVar4 = iVar6 + local_114[1];
            iVar6 = iVar6 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x452e) + iVar4 * 4) = uVar3;
          } while (iVar6 < *local_114);
        }
        iVar7 = iVar7 + 1;
        local_114 = local_114 + 2;
      } while (iVar7 < DAT_0087769c);
    }
  }
  ExceptionList = local_c;
  return;
}


