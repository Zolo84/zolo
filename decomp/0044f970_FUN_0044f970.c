// FUN_0044f970 @ 44f970 size=1052

void __thiscall
FUN_0044f970(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_3cc [960];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00dc3a00 != '\0') {
    if (DAT_00877221 == '\0') {
      ExceptionList = &local_c;
      FUN_007a630a(local_3cc,s__s_gfx_interface_models_ill__s___0083c874,&DAT_00dc3a00,param_3,
                   param_4);
      iVar3 = FUN_007a6615(local_3cc,&DAT_0082eeb4);
      if (iVar3 == 0) goto LAB_0044fd69;
LAB_0044fbbc:
      FUN_007a6429(iVar3);
      uVar5 = 0xffffffff;
      pcVar7 = local_3cc;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        param_2 = param_2 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        param_2 = param_2 + 1;
      }
      ExceptionList = local_c;
      return;
    }
    iVar1 = param_1 + 0x51a;
    ExceptionList = &local_c;
    FUN_007a630a(local_3cc,s__s_gfx_interface_models_ill__s___0083c91c,&DAT_00dc3a00,param_3,iVar1,
                 param_4,param_5);
    iVar3 = FUN_007a6615(local_3cc,&DAT_0082eeb4);
    if (iVar3 != 0) goto LAB_0044fbbc;
    if (DAT_00dc195a == '\0') {
      FUN_007a630a(param_2,s_gfx_interface_models_ill__s__s___0083c8f0,param_3,iVar1,param_4,param_5
                  );
      iVar3 = FUN_007a6615(param_2,&DAT_0082eeb4);
      if (iVar3 != 0) {
        FUN_007a6429(iVar3);
        ExceptionList = local_c;
        return;
      }
    }
    iVar3 = param_5;
    if (0 < param_5) {
      do {
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) goto LAB_0044fad2;
          FUN_007a630a(local_3cc,s__s_gfx_interface_models_ill__s___0083c91c,&DAT_00dc3a00,param_3,
                       iVar1,param_4,iVar3);
          iVar4 = FUN_007a6615(local_3cc,&DAT_0082eeb4);
          if (iVar4 != 0) goto LAB_0044faff;
        } while (DAT_00dc195a != '\0');
        FUN_007a630a(param_2,s_gfx_interface_models_ill__s__s___0083c8f0,param_3,iVar1,param_4,iVar3
                    );
        iVar4 = FUN_007a6615(param_2,&DAT_0082eeb4);
      } while (iVar4 == 0);
LAB_0044fb62:
      FUN_007a6429(iVar4);
      ExceptionList = local_c;
      return;
    }
LAB_0044fad2:
    FUN_007a630a(local_3cc,s__s_gfx_interface_models_ill__s___0083c8c4,&DAT_00dc3a00,param_3,param_4
                 ,param_5);
    iVar4 = FUN_007a6615(local_3cc,&DAT_0082eeb4);
    if (iVar4 != 0) {
LAB_0044faff:
      FUN_007a6429(iVar4);
      uVar5 = 0xffffffff;
      pcVar7 = local_3cc;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        param_2 = param_2 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        param_2 = param_2 + 1;
      }
      ExceptionList = local_c;
      return;
    }
    if (DAT_00dc195a != '\0') goto LAB_0044fd69;
    FUN_007a630a(param_2,s_gfx_interface_models_ill__s__d___0083c89c,param_3,param_4,param_5);
    iVar4 = FUN_007a6615(param_2,&DAT_0082eeb4);
    if (iVar4 != 0) goto LAB_0044fb62;
    if (DAT_00dc195a != '\0') goto LAB_0044fd69;
  }
  if (DAT_00877221 != '\0') {
    FUN_007a630a(param_2,s_gfx_interface_models_ill__s__s___0083c8f0,param_3,param_1 + 0x51a,param_4
                 ,param_5);
    FUN_00426f50(param_2);
    local_4 = 0;
    cVar2 = FUN_00427570();
    if (cVar2 == '\0') {
      local_4 = 0xffffffff;
      FUN_00426f80();
      ExceptionList = local_c;
      return;
    }
    iVar1 = param_5;
    if (0 < param_5) {
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_007a630a(param_2,s_gfx_interface_models_ill__s__s___0083c8f0,param_3,param_1 + 0x51a,
                     param_4,iVar1);
        FUN_00426f50(param_2);
        local_4._0_1_ = 1;
        cVar2 = FUN_00427570();
        local_4 = (uint)local_4._1_3_ << 8;
        if (cVar2 == '\0') goto LAB_0044fd2d;
        FUN_00426f80();
      }
    }
    FUN_007a630a(param_2,s_gfx_interface_models_ill__s__d___0083c89c,param_3,param_4,param_5);
    FUN_00426f50(param_2);
    local_4._0_1_ = 2;
    cVar2 = FUN_00427570();
    local_4 = (uint)local_4._1_3_ << 8;
    if (cVar2 == '\0') {
LAB_0044fd2d:
      FUN_00426f80();
      local_4 = 0xffffffff;
      FUN_00426f80();
      ExceptionList = local_c;
      return;
    }
    FUN_00426f80();
    local_4 = 0xffffffff;
    FUN_00426f80();
  }
LAB_0044fd69:
  FUN_007a630a(param_2,s_gfx_interface_models_ill__s__d_0_0083c84c,param_3,param_4);
  ExceptionList = local_c;
  return;
}


