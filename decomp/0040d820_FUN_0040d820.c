// FUN_0040d820 @ 40d820 size=1093

void __thiscall FUN_0040d820(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  puVar3 = param_2;
  FUN_0040dcb0(0);
  piVar6 = *(int **)(param_1 + 0x10);
  FUN_004d8a60(&local_28,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
  FUN_004d8a60(&local_30,*(undefined4 *)(*(int *)(param_1 + 0x1e) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x1e) + 0xc));
  iVar8 = 1;
  local_4c = 0;
  local_48 = 1;
  if (*(char *)(*(int *)(param_1 + 0x3c) + 0x17b) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x3c) + 0x264) == 4) {
      local_4c = 3;
    }
    else {
      uVar5 = FUN_0051c0c0();
      iVar7 = FUN_004e9370(uVar5);
      if ((*(int *)(iVar7 + 0x3d8) == 0) ||
         (cVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x248) + 6)),
         cVar4 == '\0')) {
        cVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x22e) + 8))();
        if (cVar4 == '\0') {
          puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x3c) + 0x232);
          do {
            if (puVar2 == (undefined4 *)0x0) goto LAB_0040d935;
            puVar1 = (undefined4 *)puVar2[2];
            iVar7 = FUN_004e9370(*puVar2);
            puVar2 = puVar1;
          } while ((*(int *)(iVar7 + 0x3d8) == 0) ||
                  (cVar4 = FUN_0044b280(*(undefined4 *)
                                         (*(int *)(*(int *)(param_1 + 0x3c) + 0x248) + 6)),
                  cVar4 == '\0'));
          local_4c = 1;
        }
      }
      else {
        local_4c = 1;
      }
    }
  }
  else {
    local_4c = 2;
  }
LAB_0040d935:
  local_40 = (int *)piVar6[2];
  iVar7 = *piVar6;
  if (local_40 != (int *)0x0) {
    do {
      if (*(int *)(param_1 + 0x26) <= iVar8) break;
      local_38 = *local_40;
      if ((*(char *)(iVar7 + 0xc) == '\0') && (*(char *)(local_38 + 0xc) == '\0')) {
        iVar8 = iVar8 + 0xc;
        if (*(int *)(param_1 + 0x22) < iVar8) {
          return;
        }
        iVar7 = iVar8 * 0x18;
        local_48 = iVar8;
        piVar6 = (int *)FUN_004d8a60(local_10,*(undefined4 *)
                                               (*(int *)(param_1 + 0x1e) + -0x18 + iVar7),
                                     *(undefined4 *)(*(int *)(param_1 + 0x1e) + -0x14 + iVar7));
        local_28 = *piVar6;
        local_24 = piVar6[1];
        piVar6 = (int *)FUN_004d8a60(local_8,*(undefined4 *)
                                              (*(int *)(param_1 + 0x1e) + -0x10 + iVar7),
                                     *(undefined4 *)(*(int *)(param_1 + 0x1e) + -0xc + iVar7));
        local_30 = *piVar6;
        local_2c = piVar6[1];
      }
      else {
        param_2 = (undefined4 *)0x0;
        iVar7 = iVar8 * 0x18;
        do {
          if (*(int *)(param_1 + 0x26) <= iVar8) break;
          FUN_004d8a60(&local_20,*(undefined4 *)(*(int *)(param_1 + 0x1e) + iVar7),
                       *(undefined4 *)(*(int *)(param_1 + 0x1e) + 4 + iVar7));
          FUN_004d8a60(&local_18,*(undefined4 *)(*(int *)(param_1 + 0x1e) + 8 + iVar7),
                       *(undefined4 *)(*(int *)(param_1 + 0x1e) + 0xc + iVar7));
          if (iVar8 < *(int *)(param_1 + 0x2a)) {
            puVar9 = &DAT_0088e300 + local_4c * 0x100;
            FUN_00404c50(&local_28,&local_20,&local_30,0,0,0xff,puVar9,*puVar3,puVar3[1]);
            uVar5 = puVar3[1];
            uVar10 = *puVar3;
          }
          else {
            puVar9 = &DAT_0088db00 + local_4c * 0x100;
            FUN_00404c50(&local_28,&local_20,&local_30,0,0,0xff,puVar9,*puVar3,puVar3[1]);
            uVar5 = puVar3[1];
            uVar10 = *puVar3;
          }
          FUN_00404c50(&local_18,&local_30,&local_20,0xff,0xff,0,puVar9,uVar10,uVar5);
          local_28 = local_20;
          local_24 = local_1c;
          local_2c = local_14;
          local_30 = local_18;
          iVar8 = local_48 + 1;
          iVar7 = iVar7 + 0x18;
          param_2 = (undefined4 *)((int)param_2 + 1);
          local_48 = iVar8;
        } while ((int)param_2 < 0xc);
      }
      local_40 = (int *)local_40[2];
      iVar7 = local_38;
    } while (local_40 != (int *)0x0);
    if (iVar8 < 1) {
      return;
    }
  }
  FUN_004d8a60(&local_40,
               *(undefined4 *)(*(int *)(param_1 + 0x1e) + -0x20 + *(int *)(param_1 + 0x26) * 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x1e) + -0x1c + *(int *)(param_1 + 0x26) * 0x18));
  FUN_004d8a60(&local_20,
               *(undefined4 *)(*(int *)(param_1 + 0x1e) + -8 + *(int *)(param_1 + 0x26) * 0x18),
               *(undefined4 *)(*(int *)(param_1 + 0x1e) + -4 + *(int *)(param_1 + 0x26) * 0x18));
  local_38 = local_28 * 2 - (int)local_40;
  local_34 = local_24 * 2 - local_3c;
  local_44 = local_2c * 2 - local_3c;
  local_48 = local_30 * 2 - (int)local_40;
  local_20 = local_20 * 2 - (int)local_40;
  local_1c = local_1c * 2 - local_3c;
  FUN_00404c50(&local_38,&local_20,&local_40,0,0,0x80,&DAT_0088db00 + local_4c * 0x100,*puVar3,
               puVar3[1]);
  FUN_00404c50(&local_48,&local_40,&local_20,0,0x80,0,&DAT_0088db00 + local_4c * 0x100,*puVar3,
               puVar3[1]);
  return;
}


