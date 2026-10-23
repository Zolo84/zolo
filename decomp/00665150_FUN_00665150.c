// FUN_00665150 @ 665150 size=785

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00665150(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  float10 fVar12;
  float fStack_130;
  int *piStack_124;
  int iStack_120;
  int local_11c [3];
  float fStack_110;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d39f9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar4 = FUN_0044beb0();
  if (cVar4 != '\0') {
    FUN_004c4760();
    local_4 = 0;
    piVar3 = *(int **)((int)param_1 + 0x92);
    while (piVar3 != (int *)0x0) {
      piVar8 = (int *)piVar3[2];
      iVar9 = *piVar3;
      iVar5 = (**(code **)(*(int *)(iVar9 + 0x22) + 4))();
      piVar3 = piVar8;
      if (((1 < iVar5) && (iVar5 = (**(code **)(*(int *)(iVar9 + 0x22) + 4))(), iVar5 < 5)) &&
         (cVar4 = FUN_00664680(iVar9), cVar4 == '\0')) {
        FUN_00528270(iVar9);
      }
    }
    if (local_11c[0] < 1) {
      local_4 = 0xffffffff;
      FUN_00527230();
      ExceptionList = pvStack_c;
      return;
    }
    piVar3 = (int *)param_1[0x3d];
    while ((piVar3 != (int *)0x0 && (local_11c[0] != 0))) {
      piVar8 = (int *)piVar3[3];
      fStack_110 = (float)piVar3[1];
      piVar1 = (int *)**(int **)((int)&DAT_008ea36c + *piVar3 * 0x12);
      piVar3 = piVar8;
      if (_DAT_007e3380 < fStack_110) {
        piVar11 = (int *)0x0;
        fStack_130 = 1e+11;
        piVar8 = piStack_124;
        if (piStack_124 != (int *)0x0) {
          do {
            piVar2 = (int *)piVar8[2];
            piVar8 = (int *)*piVar8;
            fVar12 = (float10)FUN_0044a9c0(*(undefined4 *)((int)piVar1 + 0x12),piVar8[3]);
            if (fVar12 < (float10)fStack_130) {
              fStack_130 = (float)fVar12;
              piVar11 = piVar8;
            }
            piVar8 = piVar2;
          } while (piVar2 != (int *)0x0);
          if (piVar11 != (int *)0x0) {
            pvVar6 = operator_new(0xa4);
            local_4._0_1_ = 1;
            if (pvVar6 == (void *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              uVar7 = (**(code **)(*param_1 + 0xe0))();
              piVar8 = (int *)FUN_006a6380(uVar7);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            (**(code **)(*piVar8 + 0xb4))(param_1);
            (**(code **)(*piVar8 + 0x20c))(piVar1,0);
            (**(code **)(*piVar8 + 0xc4))();
            (**(code **)(*param_1 + 0x108))(piVar8);
            piVar8[0x11] = iStack_120;
            uVar7 = (**(code **)(*piVar1 + 0xc))();
            FUN_007a630a(local_11c,s_ASW_patrol__s_008678b4,uVar7);
            (**(code **)(*piVar8 + 0x1c8))(piVar11);
            iVar9 = *(int *)((int)param_1 + 10);
            iVar5 = piVar1[0xa2];
            uVar7 = (**(code **)(*piVar11 + 0xc))();
            uVar7 = FUN_004c7bfa(iVar5,uVar7);
            uVar7 = (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))(uVar7);
            FUN_00458570(s_NAVAL___s_starts_a_defensive_pla_00867870,uVar7);
            FUN_00528280(piVar11);
            *(int *)((int)param_1 + 0xd6) = *(int *)((int)param_1 + 0xd6) + -1;
          }
        }
        (**(code **)(param_1[0x3c] + 0x18))
                  (*(undefined4 *)param_1[0x3d],((undefined4 *)param_1[0x3d])[1]);
      }
    }
    (*(code *)PTR_FUN_007e7b80)();
    local_4 = 0xffffffff;
    FUN_00527230();
  }
  iVar9 = (**(code **)(*(int *)((int)param_1 + 0x8e) + 4))();
  while (1 < iVar9) {
    uVar7 = **(undefined4 **)((int)param_1 + 0x92);
    (**(code **)(*(int *)((int)param_1 + 0x8e) + 0x18))(uVar7);
    iVar9 = *(int *)((int)param_1 + 0x82);
    puVar10 = operator_new(0xe);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = uVar7;
      puVar10[1] = iVar9;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0;
    }
    iVar5 = *(int *)((int)param_1 + 0x86);
    *(undefined4 **)((int)param_1 + 0x82) = puVar10;
    *(int *)((int)param_1 + 0x86) = iVar5 + 1;
    if (iVar5 == 0) {
      *(undefined4 **)((int)param_1 + 0x7e) = puVar10;
    }
    else {
      *(undefined4 **)(iVar9 + 8) = puVar10;
    }
    iVar9 = (**(code **)(*(int *)((int)param_1 + 0x8e) + 4))();
  }
  ExceptionList = pvStack_c;
  return;
}


