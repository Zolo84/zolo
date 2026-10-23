// FUN_00662180 @ 662180 size=1761

/* WARNING: Removing unreachable block (ram,0x00662485) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00662180(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  int local_38 [2];
  int *local_30;
  int *local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d3968;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = (**(code **)(*(int *)((int)param_1 + 0x7a) + 4))();
  if (iVar4 < *(int *)((int)param_1 + 0xd2)) {
    for (local_1c = *(int **)((int)param_1 + 0xe2); local_1c != (int *)0x0;
        local_1c = (int *)local_1c[2]) {
      FUN_00428eb0();
      FUN_00446d10();
      FUN_00526b00();
      FUN_00449290(local_38);
      FUN_00667670();
      FUN_00462100();
      piVar5 = (int *)FUN_004e9370();
      iVar4 = *(int *)((int)param_1 + 10);
      (**(code **)(*piVar5 + 0xc))();
      (**(code **)(*(int *)(iVar4 + 0xe) + 0xc))();
      FUN_00458570();
      FUN_00428ee0();
      (**(code **)(*param_1 + 0x1c8))();
    }
  }
  iVar4 = (**(code **)(*(int *)((int)param_1 + 0x7a) + 4))();
  if (*(int *)((int)param_1 + 0xd2) < iVar4) {
    do {
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x8e) + 4))();
      if (*(int *)((int)param_1 + 0xd6) <= iVar4) break;
      piVar9 = (int *)0x0;
      local_20 = (int *)0x64;
      piVar5 = *(int **)((int)param_1 + 0x82);
      if (*(int **)((int)param_1 + 0x82) == (int *)0x0) break;
      do {
        local_18 = (int *)piVar5[1];
        local_1c = (int *)*piVar5;
        piVar5 = (int *)((int)local_1c + 0x22);
        iVar4 = (**(code **)(*(int *)((int)local_1c + 0x22) + 4))();
        if ((iVar4 < (int)local_20) && (cVar3 = FUN_00525840(), cVar3 != '\0')) {
          local_20 = (int *)(**(code **)(*piVar5 + 4))();
          piVar9 = local_1c;
        }
        piVar5 = local_18;
      } while (local_18 != (int *)0x0);
      if (piVar9 == (int *)0x0) break;
      iVar4 = *(int *)((int)param_1 + 10);
      (**(code **)(*(int *)((int)piVar9 + 0x22) + 4))();
      (**(code **)(*piVar9 + 0xc))();
      (**(code **)(*(int *)(iVar4 + 0xe) + 0xc))();
      FUN_00458570();
      FUN_00528280();
      FUN_00528270();
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x7a) + 4))();
    } while (*(int *)((int)param_1 + 0xd2) < iVar4);
  }
  iVar4 = (**(code **)(*(int *)((int)param_1 + 0x7a) + 4))();
  if (*(int *)((int)param_1 + 0xd2) < iVar4) {
    do {
      piVar5 = (int *)0x0;
      local_20 = (int *)0x42c80000;
      puVar6 = *(undefined4 **)((int)param_1 + 0x82);
      if (*(undefined4 **)((int)param_1 + 0x82) == (undefined4 *)0x0) break;
      do {
        puVar1 = (undefined4 *)puVar6[1];
        local_1c = (int *)*puVar6;
        iVar4 = (**(code **)(*(int *)((int)local_1c + 0x22) + 4))();
        local_30 = (int *)(float)iVar4;
        fVar10 = (float10)FUN_00667110();
        if (fVar10 * (float10)(float)local_30 < (float10)(float)local_20) {
          local_20 = (int *)(float)(fVar10 * (float10)(float)local_30);
          piVar5 = local_1c;
        }
        puVar6 = puVar1;
      } while (puVar1 != (undefined4 *)0x0);
      if (piVar5 == (int *)0x0) break;
      FUN_00664880();
      local_30 = (int *)FUN_00663d30();
      if (local_30 == (int *)0x0) break;
      if (piVar5[3] != *(int *)((int)local_30 + 0xc)) {
        FUN_0051b230();
        FUN_006aaee0();
        *(int **)((int)param_1 + 0x102) = piVar5;
        break;
      }
      iVar4 = *(int *)((int)param_1 + 10);
      (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
      (**(code **)(*piVar5 + 0xc))();
      (**(code **)(*(int *)(iVar4 + 0xe) + 0xc))();
      FUN_00458570();
      FUN_00528280();
      FUN_00528280();
      FUN_00524610();
      local_8 = 0;
      puVar6 = operator_new(0xe);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = piVar5;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      FUN_006aa780();
      (*(code *)PTR_FUN_007e4c94)();
      local_8 = 0xffffffff;
      FUN_00527230();
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x7a) + 4))();
    } while (*(int *)((int)param_1 + 0xd2) < iVar4);
  }
  piVar5 = *(int **)((int)param_1 + 0x7e);
  do {
    do {
      do {
        if (piVar5 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
        local_30 = (int *)piVar5[2];
        piVar9 = (int *)*piVar5;
        FUN_00664880();
        piVar7 = (int *)FUN_00663d30();
        piVar5 = local_30;
        local_20 = piVar7;
      } while (piVar7 == (int *)0x0);
      local_2c = (int *)piVar9[0x92];
      piVar8 = (int *)FUN_00522770();
      piVar5 = local_30;
    } while ((local_2c != piVar8) || (piVar9[3] != piVar7[3]));
    local_18 = (int *)0x0;
    local_14 = 0;
    piVar5 = *(int **)((int)piVar9 + 0x26);
    while (piVar5 != (int *)0x0) {
      piVar7 = (int *)piVar5[2];
      iVar4 = *piVar5;
      piVar5 = piVar7;
      if (*(int *)(iVar4 + 0x134) != 0x1e) {
        iVar4 = FUN_004fccd0();
        if (iVar4 == 0) {
          local_18 = (int *)((int)local_18 + 1);
        }
        else if (iVar4 == 2) {
          local_14 = local_14 + 1;
        }
      }
    }
    if ((DAT_00dc1743 != '\0') && (0 < local_14)) {
      local_2c = (int *)((float)local_14 * _DAT_00877348);
      local_38[0] = (int)ROUND((float)local_2c);
      local_14 = local_38[0];
      if (local_38[0] == 0) {
        local_14 = 1;
      }
    }
    iVar4 = (**(code **)(*(int *)((int)piVar9 + 0x22) + 4))();
    if (iVar4 < *(int *)((int)param_1 + 0xca)) {
      do {
        iVar4 = (**(code **)(*(int *)((int)local_20 + 0x22) + 4))();
        if (iVar4 < 1) break;
        uVar2 = local_24 >> 8;
        local_24 = local_24 & 0xffffff00;
        if (local_14 <= (int)local_18) {
          local_24 = CONCAT31((int3)uVar2,1);
        }
        local_1c = (int *)FUN_00666510();
        if (local_1c == (int *)0x0) break;
        iVar4 = FUN_004fccd0();
        if (iVar4 == 0) {
          local_18 = (int *)((int)local_18 + 1);
        }
        else {
          iVar4 = FUN_004fccd0();
          if (iVar4 == 2) {
            local_14 = local_14 + 1;
          }
        }
        iVar4 = *(int *)((int)param_1 + 10);
        (**(code **)(*piVar9 + 0xc))();
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*local_1c + 0xc))();
        (**(code **)(*(int *)(iVar4 + 0xe) + 0xc))();
        FUN_00458570();
        FUN_0045e6c0();
        iVar4 = (**(code **)(*(int *)((int)piVar9 + 0x22) + 4))();
      } while (iVar4 < *(int *)((int)param_1 + 0xca));
    }
    local_1c = (int *)((int)local_18 + 1);
    if (0 < (int)local_18) {
      piVar5 = local_18;
      if (DAT_00dc1743 != '\0') {
        local_2c = (int *)((float)(int)local_18 / _DAT_00877348);
        piVar5 = (int *)(int)ROUND((float)local_2c);
      }
      local_1c = (int *)((int)local_1c + (int)piVar5);
    }
    if ((int)*(int **)((int)param_1 + 0xca) < (int)local_1c) {
      local_1c = *(int **)((int)param_1 + 0xca);
    }
    piVar5 = local_1c;
    iVar4 = (**(code **)(*(int *)((int)piVar9 + 0x22) + 4))();
    if ((int)piVar5 < iVar4) {
      do {
        local_28 = CONCAT31(local_28._1_3_,1);
        if (local_14 <= (int)local_18) {
          local_28 = (uint)local_28._1_3_ << 8;
        }
        local_2c = (int *)FUN_00666510();
        if (local_2c == (int *)0x0) break;
        iVar4 = FUN_004fccd0();
        if (iVar4 == 0) {
          local_18 = (int *)((int)local_18 + -1);
        }
        else {
          iVar4 = FUN_004fccd0();
          if (iVar4 == 2) {
            local_14 = local_14 + -1;
          }
        }
        iVar4 = *(int *)((int)param_1 + 10);
        (**(code **)(*piVar9 + 0xc))();
        (**(code **)(*local_20 + 0xc))();
        (**(code **)(*local_2c + 0xc))();
        (**(code **)(*(int *)(iVar4 + 0xe) + 0xc))();
        FUN_00458570();
        FUN_0045e6c0();
        iVar4 = (**(code **)(*(int *)((int)piVar9 + 0x22) + 4))();
      } while ((int)local_1c < iVar4);
    }
    iVar4 = (**(code **)(*(int *)((int)piVar9 + 0x22) + 4))();
    local_2c = (int *)(float)iVar4;
    fVar10 = (float10)FUN_00667110();
    local_2c = (int *)(float)(fVar10 * (float10)(float)local_2c);
    iVar4 = (**(code **)(*(int *)((int)piVar9 + 0x22) + 4))();
    piVar5 = local_30;
    if ((((iVar4 < 0x1e) && ((float)local_2c < (float)*(int *)((int)param_1 + 0xca))) &&
        (cVar3 = FUN_00664680(), piVar5 = local_30, cVar3 == '\0')) &&
       (iVar4 = FUN_00667230(), piVar5 = local_30, iVar4 != 0)) {
      fVar10 = (float10)FUN_0044a9c0();
      local_20 = (int *)(float)fVar10;
      local_2c = (int *)(((float)_DAT_007e40a8 -
                         (float)local_2c / (float)*(int *)((int)param_1 + 0xca)) *
                        (float)_DAT_007e6f38);
      cVar3 = FUN_0044beb0();
      piVar9 = local_2c;
      if (cVar3 == '\0') {
        piVar9 = _DAT_007e6858;
      }
      piVar5 = local_30;
      if ((float)local_20 < (float)piVar9 * (float)piVar9) {
        FUN_004e9370();
        FUN_006aaee0();
        piVar5 = local_30;
      }
    }
  } while( true );
}


