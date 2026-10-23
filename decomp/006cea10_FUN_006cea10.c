// FUN_006cea10 @ 6cea10 size=1051

undefined4 __thiscall FUN_006cea10(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcStack_144;
  char *pcStack_140;
  char *pcStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  undefined1 auStack_114 [8];
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d9031;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0xae) {
    if ((*(int *)(param_2[1] + 0xe) == *(int *)(param_1 + 0xc)) || (*(int *)(param_1 + 0x118) == 0))
    {
      pcStack_140 = (char *)0x6cea64;
      pcVar4 = operator_new(0xc);
      uStack_4 = 0;
      pcStack_120 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        pcStack_140 = (char *)0xaf;
        pcStack_144 = (char *)0x6cea89;
        FUN_004c0150();
        *(undefined ***)pcVar4 = &PTR_FUN_007e3e3c;
      }
      uStack_4 = 0xffffffff;
      pcStack_140 = (char *)0x6ceaa4;
      FUN_00565ca0();
    }
    uVar5 = 3;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x13) == '\0') {
      if (piVar2 != (int *)0x0) {
        pcStack_140 = (char *)0x6cead2;
        iVar3 = (**(code **)(*piVar2 + 4))();
        if (iVar3 == 1) {
          if (*(int *)(param_2[1] + 0xe) == *(int *)(param_1 + 0xc)) {
            *(undefined1 *)(param_1 + 0x12) = 0;
          }
          pcStack_120 = (char *)(param_1 + 0x14);
          *pcStack_120 = '\0';
          if (*(undefined4 **)(param_1 + 0x118) != (undefined4 *)0x0) {
            pcStack_140 = (char *)0x6ceb00;
            (**(code **)**(undefined4 **)(param_1 + 0x118))();
          }
          *(undefined4 *)(param_1 + 0x118) = 0;
          *(undefined1 *)(param_1 + 0x11) = 1;
          if (*(undefined4 **)(param_1 + 0x122) != (undefined4 *)0x0) {
            pcStack_140 = (char *)0x6ceb1d;
            (**(code **)**(undefined4 **)(param_1 + 0x122))();
          }
          pcStack_140 = (char *)0x6ceb2c;
          pcVar4 = (char *)FUN_0042b6c9();
          uVar9 = 0xffffffff;
          do {
            pcVar11 = pcVar4;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar11 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar11;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar4 = pcVar11 + -uVar9;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcStack_120 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcStack_120 = pcStack_120 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcStack_120 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcStack_120 = pcStack_120 + 1;
          }
        }
        else {
          FUN_0065f180();
          pcStack_140 = s_PAUSEREMOVAL_0086b890;
          pcStack_144 = (char *)0x6ceb6d;
          pcStack_140 = (char *)FUN_0042b6c9();
          pcStack_144 = acStack_10c;
          FUN_007a630a();
          uVar9 = 0xffffffff;
          pcVar4 = acStack_10c;
          do {
            pcVar11 = pcVar4;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar11 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar11;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar4 = pcVar11 + -uVar9;
          pcVar11 = (char *)(param_1 + 0x14);
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar11 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
    }
    else if (piVar2 != (int *)0x0) {
      pcStack_140 = (char *)0x6cebb2;
      iVar3 = (**(code **)(*piVar2 + 4))();
      if (iVar3 == 1) {
        if (*(undefined4 **)(param_1 + 0x118) != (undefined4 *)0x0) {
          pcStack_140 = (char *)0x6cebcb;
          (**(code **)**(undefined4 **)(param_1 + 0x118))();
        }
        *(undefined4 *)(param_1 + 0x118) = 0;
        *(undefined1 *)(param_1 + 0x13) = 0;
        *(undefined1 *)(DAT_00893530 + 0x1e) = 0;
        if (*(int *)(DAT_00bd1500 + 0x3cc + *(int *)(param_1 + 0xc) * 0x3e) ==
            *(int *)(*(int *)(param_1 + 0x114) + 6)) {
          pcStack_140 = (char *)0x6cec16;
          FUN_006d4290();
          *(undefined1 *)(param_1 + 0x11) = 1;
          *(undefined1 *)(param_1 + 0x12) = 0;
          pcStack_140 = (char *)0x6cec24;
          puVar6 = operator_new(0xc);
          uStack_4 = 1;
          puStack_118 = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            pcStack_120 = *(char **)(DAT_00bd1500 + 900);
            pcStack_140 = (char *)0x6cec56;
            pvVar7 = operator_new(0x12);
            uStack_4._0_1_ = 2;
            if (pvVar7 != (void *)0x0) {
              FUN_0042d6c0();
            }
            uStack_4._0_1_ = 1;
            pcStack_140 = (char *)0x6cec88;
            FUN_0042d320();
            *puVar6 = &PTR_FUN_007e9cfc;
            *(undefined1 *)((int)puVar6 + 10) = 0;
            *(undefined2 *)puVar6[1] = 0xb0;
            iVar3 = puVar6[1];
            pcStack_140 = (char *)0x0;
            pcStack_144 = (char *)0x0;
            *(undefined4 *)(iVar3 + 8) = DAT_0088f29c;
            uStack_4 = CONCAT31(uStack_4._1_3_,3);
            *(undefined2 *)(iVar3 + 0xc) = DAT_0088f2a0;
            puVar8 = (undefined4 *)FUN_0042d2f0(0);
            iVar3 = puVar6[1];
            *(undefined4 *)(iVar3 + 2) = *puVar8;
            *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar8 + 1);
            *puVar6 = &PTR_FUN_007e9cdc;
            *(char **)(puVar6[1] + 0xe) = pcStack_120;
          }
          pcStack_140 = auStack_114;
          uStack_4 = 0xffffffff;
          pcStack_144 = (char *)0x6ced27;
          FUN_0042df90();
          pcStack_144 = (char *)0x6ced32;
          pcStack_140 = (char *)puVar6;
          FUN_00565af0();
          pcStack_140 = (char *)0x6ced44;
          pcVar4 = (char *)FUN_0042b6c9();
          uVar9 = 0xffffffff;
          do {
            pcVar11 = pcVar4;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar11 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar11;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar4 = pcVar11 + -uVar9;
          pcVar11 = (char *)(param_1 + 0x14);
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar11 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
        pcStack_140 = (char *)0x6ced6d;
        pvVar7 = operator_new(0x28);
        uStack_4 = 4;
        if (pvVar7 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          pcStack_140 = (char *)0x1e;
          pcStack_144 = (char *)0x6ced8d;
          uVar5 = FUN_0065f000();
        }
        *(undefined4 *)(param_1 + 0x118) = uVar5;
        uStack_4 = 0xffffffff;
        uStack_11c = 0x20;
        pcStack_120 = (char *)((*(int *)(DAT_00bd1bac + 4) + -0x100) / 2 + 0x6a);
        pcStack_140 = (char *)0x6cedcb;
        pvVar7 = operator_new(0x58);
        uStack_4 = 5;
        if (pvVar7 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          puStack_118 = &pcStack_144;
          FUN_006cee30(300);
          uVar5 = FUN_00441b30(&pcStack_120);
        }
        *(undefined4 *)(param_1 + 0x122) = uVar5;
      }
    }
    uVar5 = 0;
  }
  ExceptionList = pvStack_c;
  return uVar5;
}


