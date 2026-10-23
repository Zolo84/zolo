// FUN_006fca10 @ 6fca10 size=521

void __thiscall FUN_006fca10(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  int local_20;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db3fb;
  local_c = ExceptionList;
  iVar2 = *(int *)(DAT_00bd1bac + 4);
  iVar3 = *(int *)(DAT_00bd1bac + 8);
  ExceptionList = &local_c;
  FUN_0053e1f9(param_2,param_3);
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    local_1c = &DAT_00bce5ec;
    piVar11 = (int *)(param_1 + 0x10);
    do {
      if (*(int *)(*piVar11 + 0xac) == param_3) {
        if (local_20 == *(int *)(param_1 + 0x90)) {
          *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
        }
        if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar11)(1);
        }
        uVar7 = 0xffffffff;
        pcVar4 = s_gfx_map_shields_shield__0086ff04;
        do {
          pcVar13 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar4 = pcVar13 + -uVar7;
        pcVar13 = (char *)&DAT_00d42c28;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar4 = (char *)FUN_004af700(param_2);
        uVar7 = 0xffffffff;
        do {
          pcVar13 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar4 = (char *)&DAT_00d42c28;
        do {
          pcVar12 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar1 != '\0');
        pcVar4 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar13 = pcVar13 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar4 = &DAT_0082f1dc;
        do {
          pcVar13 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar4 = (char *)&DAT_00d42c28;
        do {
          pcVar12 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar1 != '\0');
        pcVar4 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pvVar5 = operator_new(0xb4);
        uStack_4 = 0;
        if (pvVar5 == (void *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_006edc70(&DAT_00d42c28,param_2);
        }
        *piVar11 = iVar9;
        uStack_4 = 0xffffffff;
        iVar10 = 0x48;
        if (10 < *(int *)(param_1 + 0xa0)) {
          iVar10 = 0x24;
          *(undefined4 *)(iVar9 + 0xe) = 1;
        }
        (**(code **)(*(int *)*piVar11 + 0x18))
                  (iVar10 * local_20 + 0x120 + (iVar2 + -0x400 >> 1),(iVar3 + -0x300 >> 1) + 0x50);
        uVar6 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
        FUN_00415f20(uVar6);
        *(undefined1 *)(*piVar11 + 0xa2) = 0;
        *local_1c = param_2;
      }
      local_20 = local_20 + 1;
      piVar11 = piVar11 + 1;
      local_1c = local_1c + 1;
    } while (local_20 < *(int *)(param_1 + 0xa0));
  }
  ExceptionList = local_c;
  return;
}


