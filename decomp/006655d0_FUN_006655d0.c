// FUN_006655d0 @ 6655d0 size=410

undefined4 __thiscall FUN_006655d0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int local_14;
  int iStack_10;
  int local_8;
  
  iVar2 = FUN_0051b230();
  local_8 = 0;
  if (0 < *(int *)(iVar2 + 0x290)) {
    local_14 = 0;
    do {
      piVar3 = (int *)FUN_004e9370(*(undefined4 *)(local_14 + *(int *)(iVar2 + 0x298)));
      if (((piVar3[0x95] == 8) || (piVar3[0x95] == 9)) &&
         (cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x174) + 0x24))
                            (piVar3[0xa2]), cVar1 == '\0')) {
        if (*(char *)((int)param_2 + 0x2ba) != '\0') {
          uVar6 = *(undefined4 *)((int)piVar3 + 0x12);
          piVar8 = (int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x1aa);
          cVar1 = (**(code **)(*piVar8 + 0x24))(uVar6);
          if (cVar1 == '\0') {
            iVar4 = FUN_004e9370(uVar6);
            iStack_10 = 0;
            if (0 < *(int *)(iVar4 + 0x290)) {
              iVar7 = 0;
              do {
                iVar5 = FUN_004e9370(*(undefined4 *)(iVar7 + *(int *)(iVar4 + 0x298)));
                cVar1 = (**(code **)(*piVar8 + 0x24))(*(undefined4 *)(iVar5 + 0x12));
                if (cVar1 != '\0') goto LAB_006656df;
                iStack_10 = iStack_10 + 1;
                iVar7 = iVar7 + 0xc;
              } while (iStack_10 < *(int *)(iVar4 + 0x290));
            }
            goto LAB_006656f6;
          }
        }
LAB_006656df:
        cVar1 = FUN_00665470(param_2,*(undefined4 *)((int)piVar3 + 0x1c2));
        if (cVar1 != '\0') {
          iVar2 = *(int *)(param_1 + 10);
          uVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
          uVar6 = (**(code **)(*param_2 + 0xc))(uVar6);
          uVar6 = (**(code **)(*piVar3 + 0xc))(uVar6);
          uVar6 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar6);
          FUN_00458570(s_NAVAL___s_noticed_an_enemy_fleet_008678c4,uVar6);
          return 1;
        }
      }
LAB_006656f6:
      local_8 = local_8 + 1;
      local_14 = local_14 + 0xc;
    } while (local_8 < *(int *)(iVar2 + 0x290));
  }
  return 0;
}


