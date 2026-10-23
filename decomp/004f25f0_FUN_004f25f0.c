// FUN_004f25f0 @ 4f25f0 size=606

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004f25f0(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  undefined4 local_210;
  short local_20c;
  undefined4 local_208;
  short local_204;
  undefined1 local_200 [256];
  char local_100 [256];
  
  DAT_00ad2e70._0_1_ = 0;
  if (_DAT_007e8418 < *(float *)(param_1 + 0x42)) {
    if (*(int *)(param_1 + 0x30) < 2) {
      FUN_00791b3b(&DAT_00ad2e70,param_1 + 0x1a);
    }
    else {
      FUN_007a8a7e((double)(((_DAT_007e3374 - *(float *)(param_1 + 0x4e)) *
                             (_DAT_007e3374 - *(float *)(param_1 + 0x46)) *
                            (float)*(int *)(param_1 + 0x24)) / *(float *)(param_1 + 0x42)));
      __ftol();
      local_208 = *(undefined4 *)(DAT_00893530 + 0x14);
      local_204 = *(short *)(DAT_00893530 + 0x18);
      FUN_0042dc20();
      local_210 = local_208;
      local_20c = local_204;
      FUN_00791b3b(local_200,&local_210);
      FUN_0042b6c9(s_NEXTPART_00848ff0);
      FUN_007a630a();
      if (((1 < *(int *)(param_1 + 0x30)) &&
          (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34) + 1)) &&
         ((local_210._1_1_ != *(char *)(param_1 + 0x1b) ||
          (((local_210._2_1_ != *(char *)(param_1 + 0x1c) ||
            (local_20c != *(short *)(param_1 + 0x1e))) ||
           ((char)local_210 != *(char *)(param_1 + 0x1a))))))) {
        *(undefined4 *)(param_1 + 0x1a) = local_210;
        *(short *)(param_1 + 0x1e) = local_20c;
      }
      FUN_00791b3b(local_200,param_1 + 0x1a);
      FUN_0042b6c9(s_SERIESFINISHED_00848fe0);
      FUN_007a630a();
      uVar4 = 0xffffffff;
      pcVar7 = local_100;
      do {
        pcVar9 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar7 = (char *)&DAT_00ad2e70;
      do {
        pcVar8 = pcVar7;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar7 + 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar2 != '\0');
      pcVar7 = pcVar9 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      if (1 < *(int *)(param_1 + 0x30)) {
        fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x244) + 0x42);
        uVar4 = 0xffffffff;
        pcVar7 = &DAT_00839650;
        do {
          pcVar9 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        iVar5 = -1;
        pcVar7 = (char *)&DAT_00ad2e70;
        do {
          pcVar8 = pcVar7;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar8 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar2 != '\0');
        pcVar7 = pcVar9 + -uVar4;
        pcVar9 = pcVar8 + -1;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        fVar1 = (fVar1 - _DAT_00dc17e0) * _DAT_007e4088;
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        dVar11 = (double)fVar1;
        dVar10 = (double)(*(float *)(param_1 + 0x4e) * _DAT_007e4088);
        uVar3 = FUN_0042b6c9(s_CURR_GEARINGBONUS_00848fcc);
        FUN_007a630a(local_100,uVar3,dVar10,dVar11);
        uVar4 = 0xffffffff;
        pcVar7 = local_100;
        do {
          pcVar9 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        iVar5 = -1;
        pcVar7 = (char *)&DAT_00ad2e70;
        do {
          pcVar8 = pcVar7;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar8 = pcVar7 + 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar2 != '\0');
        pcVar7 = pcVar9 + -uVar4;
        pcVar9 = pcVar8 + -1;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        return &DAT_00ad2e70;
      }
    }
  }
  return &DAT_00ad2e70;
}


