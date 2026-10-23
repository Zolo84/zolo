// FUN_0051a9c0 @ 51a9c0 size=1001

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051a9c0(int *param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  char unaff_retaddr;
  int aiStack_24 [4];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_007c1eee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar4 = (**(code **)(*(int *)(param_1[0x92] + 0xe) + 0xc))();
  FUN_00405ad0(s_Combat__Unit___d___s__got_Combat_0084afac,*(undefined4 *)((int)param_1 + 0x1a),
               uVar4);
  *(undefined1 *)((int)param_1 + 0x17b) = 0;
  cVar3 = FUN_00526ba0();
  if (cVar3 == '\0') {
    iVar5 = FUN_00522770();
    iVar6 = **(int **)((int)param_1 + 0x15a);
    uVar4 = FUN_0044b1c0(*(undefined4 *)(iVar5 + 6));
    (**(code **)(iVar6 + 0x2c))(uVar4);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))(s_gfx_map_flags_flag_exiled_bmp_0084af8c)
    ;
  }
  (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))(0x19);
  iVar6 = *(int *)((int)param_1 + 0x15a);
  *(undefined4 *)(iVar6 + 0x22) = 0;
  *(undefined4 *)(iVar6 + 0x26) = 10;
  *(undefined1 *)(iVar6 + 0x67) = 0;
  uVar4 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar4);
  iVar5 = (**(code **)(param_1[0x47] + 4))();
  *(undefined1 *)((int)param_1 + 0x186) = 0;
  iVar6 = FUN_00428ee0(piStack_4);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -8;
  }
  FUN_00527110(iVar6);
  if (iVar5 == 0) {
    iVar7 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 4))();
    if (iVar7 == 0) {
      *(undefined4 *)((int)param_1 + 0x13a) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x13a) = **(undefined4 **)((int)param_1 + 0x232);
      cVar3 = FUN_0042dd70(param_1 + 0x8a);
      if (cVar3 == '\0') {
        *(undefined4 *)((int)param_1 + 0x13e) = 0;
      }
      else {
        pcVar8 = (char *)FUN_0042e060(aiStack_24,param_1 + 0x8a);
        *(int *)((int)param_1 + 0x13e) =
             (int)*pcVar8 +
             ((int)pcVar8[1] + ((int)pcVar8[2] + *(short *)(pcVar8 + 4) * 0xc) * 0x1e) * 0x18;
      }
    }
  }
  FUN_00523370(2 - (uint)(unaff_retaddr != '\0'));
  FUN_0051a6d0(iVar6);
  cVar3 = FUN_00444290();
  if (cVar3 != '\0') {
    *(undefined1 *)(DAT_00ab27b4 + param_1[3] * 0x4b2 + 0x3b1) = 1;
  }
  *(undefined1 **)((int)param_1 + 0x21a) = &LAB_00521b30;
  *(undefined4 *)((int)param_1 + 0x21e) = 0;
  cVar3 = (**(code **)(*param_1 + 0x2c))();
  if ((cVar3 != '\0') && (cVar3 = FUN_0042e980(), cVar3 != '\0')) {
    iVar6 = (**(code **)(*param_1 + 0x14))();
    piVar1 = *(int **)(*(int *)(iVar6 + 0x2ae) + 4);
    while (piVar1 != (int *)0x0) {
      iVar6 = *piVar1;
      piStack_4 = (int *)piVar1[2];
      aiStack_24[0] = iVar6;
      iVar7 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
      piVar1 = piStack_4;
      if (iVar7 != 0) {
        fVar2 = _DAT_007e3380;
        for (piVar1 = *(int **)(iVar6 + 0x26); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
          fVar2 = fVar2 + *(float *)(*piVar1 + 0xf4);
        }
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
        piVar1 = piStack_4;
        if (_DAT_007e3374 < fVar2 / (float)iVar6) {
          puVar9 = operator_new(0xc);
          pvStack_c = (void *)0x0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            iVar6 = param_1[3];
            pvVar10 = operator_new(0x14);
            pvStack_c._0_1_ = 1;
            if (pvVar10 == (void *)0x0) {
              pvVar10 = (void *)0x0;
            }
            else {
              FUN_0042d6c0();
            }
            pvStack_c._0_1_ = 0;
            FUN_0042d320(pvVar10);
            *puVar9 = &PTR_FUN_007e6b6c;
            *(undefined1 *)((int)puVar9 + 10) = 0;
            *(undefined2 *)puVar9[1] = 0x39;
            iVar7 = puVar9[1];
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(aiStack_24[0] + 0x18);
            pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
            *(undefined2 *)(iVar7 + 0xc) = *(undefined2 *)(aiStack_24[0] + 0x1c);
            puVar11 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar7 = puVar9[1];
            *(undefined4 *)(iVar7 + 2) = *puVar11;
            *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar11 + 1);
            *puVar9 = &PTR_FUN_007e6b4c;
            *(int *)(puVar9[1] + 0xe) = iVar6;
            *(undefined1 *)(puVar9[1] + 0x12) = 0;
          }
          pvStack_c = (void *)0xffffffff;
          FUN_00565bc0(puVar9);
          piVar1 = piStack_4;
        }
      }
    }
  }
  if (iVar5 == 0) {
    cVar3 = (**(code **)(*param_1 + 0x28))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x2c))();
      if (cVar3 == '\0') {
        uVar4 = (**(code **)(*param_1 + 0x18))();
        FUN_006ad5c0(0x11,&LAB_00527180,uVar4);
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0x14))();
        FUN_006ad550(0x10,&LAB_00527170,uVar4);
      }
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x10))();
      FUN_006ad4e0(0xf,&LAB_00527160,uVar4);
    }
  }
  ExceptionList = pvStack_14;
  return;
}


