// FUN_006662c0 @ 6662c0 size=580

undefined4 __thiscall FUN_006662c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  int iStack_20;
  int local_18;
  int local_10;
  int local_c;
  
  iVar2 = FUN_0051b230();
  local_c = 0;
  if (0 < *(int *)(iVar2 + 0x290)) {
    local_18 = 0;
    do {
      piVar3 = (int *)FUN_004e9370(*(undefined4 *)(local_18 + *(int *)(iVar2 + 0x298)));
      if ((piVar3[0x95] == 8) || (piVar3[0x95] == 9)) {
        iVar4 = FUN_00527ab0(*(undefined4 *)(param_1 + 10));
        fVar11 = (float10)(**(code **)(*param_2 + 0xa4))();
        if (((float10)iVar4 < fVar11) && (local_10 = 0, 0 < piVar3[0xa4])) {
          iStack_20 = 0;
          do {
            iVar4 = FUN_004e9370(*(undefined4 *)(iStack_20 + piVar3[0xa6]));
            if (((*(int *)(iVar4 + 0x254) == 8) || (*(int *)(iVar4 + 0x254) == 9)) &&
               (cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x174) +
                                    0x24))(*(undefined4 *)(iVar4 + 0x288)), cVar1 == '\0')) {
              if (*(char *)((int)param_2 + 0x2ba) != '\0') {
                uVar7 = *(undefined4 *)(iVar4 + 0x12);
                piVar10 = (int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x1aa);
                cVar1 = (**(code **)(*piVar10 + 0x24))(uVar7);
                if (cVar1 == '\0') {
                  iVar5 = FUN_004e9370(uVar7);
                  iVar9 = 0;
                  if (0 < *(int *)(iVar5 + 0x290)) {
                    iVar8 = 0;
                    do {
                      iVar6 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar5 + 0x298) + iVar8));
                      cVar1 = (**(code **)(*piVar10 + 0x24))(*(undefined4 *)(iVar6 + 0x12));
                      if (cVar1 != '\0') goto LAB_0066644c;
                      iVar9 = iVar9 + 1;
                      iVar8 = iVar8 + 0xc;
                    } while (iVar9 < *(int *)(iVar5 + 0x290));
                  }
                  goto LAB_00666467;
                }
              }
LAB_0066644c:
              cVar1 = FUN_00665470(param_2,*(undefined4 *)(iVar4 + 0x1c2));
              if (cVar1 != '\0') {
                iVar2 = *(int *)(param_1 + 10);
                uVar7 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
                uVar7 = (**(code **)(*param_2 + 0xc))(uVar7);
                uVar7 = (**(code **)(*piVar3 + 0xc))(uVar7);
                uVar7 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar7);
                FUN_00458570(s_NAVAL___s_has_noticed_enemy_flee_00867974,uVar7);
                return 1;
              }
            }
LAB_00666467:
            local_10 = local_10 + 1;
            iStack_20 = iStack_20 + 0xc;
          } while (local_10 < piVar3[0xa4]);
        }
      }
      local_c = local_c + 1;
      local_18 = local_18 + 0xc;
    } while (local_c < *(int *)(iVar2 + 0x290));
  }
  return 0;
}


