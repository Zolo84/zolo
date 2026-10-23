// FUN_0068b4f0 @ 68b4f0 size=1227

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0068b4f0(int *param_1,int param_2)

{
  int *piVar1;
  uint3 uVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 local_24;
  uint local_1c;
  int local_18;
  int iStack_10;
  int iStack_c;
  
  iVar11 = 0;
  local_18 = 0;
  uVar2 = 0;
  local_1c = 0;
  if (*(int *)(param_2 + 0x290) < 1) {
LAB_0068b53f:
    return (float10)_DAT_007e3380;
  }
  piVar12 = (int *)(*(int *)(param_2 + 0x298) + 4);
  while (*piVar12 == 4) {
    iVar11 = iVar11 + 1;
    piVar12 = piVar12 + 3;
    if (*(int *)(param_2 + 0x290) <= iVar11) goto LAB_0068b53f;
  }
  if (*(char *)(*(int *)(*(int *)((int)param_1 + 10) + 0x12da) + 0x3b38) != '\0') {
    piVar12 = (int *)(**(code **)(*param_1 + 0xe0))();
    iVar11 = (**(code **)(*piVar12 + 0x1e8))();
    iVar11 = *(int *)(iVar11 + 4);
    while (iVar11 != 0) {
      iVar7 = *(int *)(param_2 + 0x482);
      iVar11 = *(int *)(iVar11 + 8);
      iVar6 = FUN_0068a080();
      if ((iVar6 == iVar7) && (iVar7 = FUN_006813c0(*(undefined4 *)(param_2 + 0x12)), iVar7 != 0)) {
        uVar2 = 0x100;
      }
    }
  }
  iVar11 = *(int *)(param_2 + 0x12);
  iVar7 = *(int *)(*(int *)((int)param_1 + 10) + 0x120);
  iVar6 = FUN_0044e1b0();
  if (iVar6 == iVar11) {
    local_1c = 0x20;
  }
  local_24 = (float)(uint)uVar2;
  if (*(int **)(iVar7 + 0x336) != (int *)0x0) {
    piVar12 = *(int **)(iVar7 + 0x336);
    do {
      piVar1 = piVar12 + 2;
      if (*(int *)*piVar12 == *(int *)(param_2 + 0x12)) {
        if (((int *)*piVar12)[1] < 0) {
          local_24 = (float)CONCAT13(1,uVar2);
        }
        else {
          local_1c = local_1c | 8;
        }
        break;
      }
      piVar12 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  if (_DAT_007e3380 < (float)*(int *)(param_2 + 0x226) * *(float *)(iVar7 + 0x2ea)) {
    local_1c = local_1c | 1;
  }
  cVar5 = *(char *)(iVar7 + 0x2e4);
  if ((*(int *)(param_2 + 0x182) != 0) &&
     ((iVar11 = *(int *)(param_2 + 0x482), iVar6 = FUN_0044e1d0(), iVar11 == iVar6 ||
      (cVar5 != '\0')))) {
    local_1c = local_1c | 0x10;
  }
  if (*(int *)(param_2 + 0x1aa) != 0) {
    piVar12 = *(int **)(*(int *)(param_2 + 0x1aa) + 4);
    while (piVar12 != (int *)0x0) {
      piVar1 = piVar12 + 2;
      iVar11 = *piVar12;
      piVar12 = (int *)*piVar1;
      if (*(int *)(iVar11 + 0x74) == 1) {
        local_1c = local_1c | 0x40;
      }
    }
  }
  local_24._0_3_ = (uint3)(ushort)local_24;
  iStack_10 = 0;
  if (0 < *(int *)(param_2 + 0x290)) {
    iStack_c = 0;
    do {
      puVar8 = (undefined4 *)(iStack_c + *(int *)(param_2 + 0x298));
      if (puVar8[1] != 4) {
        iVar6 = FUN_004e9370(*puVar8);
        piVar12 = (int *)(**(code **)(*param_1 + 0xe0))();
        iVar11 = (**(code **)(*piVar12 + 0x1e8))();
        iVar11 = *(int *)(iVar11 + 4);
        fVar3 = local_24;
        while (iVar11 != 0) {
          iVar10 = *(int *)(iVar6 + 0x482);
          iVar11 = *(int *)(iVar11 + 8);
          iVar9 = FUN_0068a080();
          if ((iVar9 == iVar10) &&
             (iVar10 = FUN_006813c0(*(undefined4 *)(iVar6 + 0x12)), iVar10 != 0)) {
            local_24._3_1_ = (undefined1)((uint)fVar3 >> 0x18);
            local_24._0_2_ = SUB42(fVar3,0);
            local_24._0_3_ = CONCAT12(1,(ushort)local_24);
            fVar3 = local_24;
          }
        }
        iVar11 = *(int *)(iVar6 + 0x3d8);
        local_24 = fVar3;
        if ((((iVar11 != 0) && (iVar11 != *(int *)((int)param_1 + 10))) &&
            (cVar5 = FUN_00586230(*(undefined4 *)(iVar11 + 6)), cVar5 == '\0')) &&
           (iVar11 = *(int *)(iVar6 + 0x3d8),
           *(int *)(*(int *)(iVar11 + 0x12da) + 0x3b30) != *(int *)(*(int *)((int)param_1 + 10) + 6)
           )) {
          uVar4 = local_1c | 2;
          if (iVar11 != 0) {
            uVar13 = *(undefined4 *)(iVar11 + 6);
            (**(code **)(*param_1 + 0xe0))(uVar13);
            cVar5 = FUN_00690970(uVar13);
            if (cVar5 != '\0') {
              local_24 = (float)CONCAT31((int3)((uint)fVar3 >> 8),1);
              uVar4 = local_1c | 6;
            }
          }
          local_1c = uVar4;
          iVar11 = 0;
          if ((int *)param_1[0x34] != (int *)0x0) {
            piVar12 = (int *)param_1[0x34];
            do {
              piVar1 = piVar12 + 2;
              piVar12 = (int *)*piVar12;
              if ((*piVar12 == *(int *)(*(int *)(iVar6 + 0x3d8) + 6)) &&
                 (_DAT_007e3380 < (float)piVar12[1])) {
                FUN_006a9d50();
                piVar12[3] = piVar12[3] + 1;
                iVar11 = __ftol();
                break;
              }
              piVar12 = (int *)*piVar1;
            } while ((int *)*piVar1 != (int *)0x0);
          }
          if (local_18 < iVar11) {
            local_18 = iVar11;
          }
        }
      }
      iStack_10 = iStack_10 + 1;
      iStack_c = iStack_c + 0xc;
    } while (iStack_10 < *(int *)(param_2 + 0x290));
  }
  if (((local_24._1_1_ == '\0') ||
      (iVar11 = *(int *)(param_2 + 0x482), iVar6 = FUN_0044e1d0(), iVar11 != iVar6)) &&
     ((char)local_24 != '\0')) {
    local_1c = local_1c | 4;
  }
  if (local_24._2_1_ != '\0') {
    local_1c = local_1c | 0x80;
  }
  FUN_004e9500(*(undefined4 *)((int)param_1 + 10));
  cVar5 = (**(code **)(*(int *)(iVar7 + 0x30e) + 0x24))(*(undefined4 *)(param_2 + 0x12));
  if (cVar5 != '\0') {
    local_24 = _DAT_007e3380;
  }
  *(float *)(param_2 + 0x48a) = local_24;
  *(uint *)(param_2 + 0x492) = local_1c;
  return (float10)local_24;
}


