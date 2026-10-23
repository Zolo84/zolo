// FUN_004424d0 @ 4424d0 size=839

undefined4 __thiscall FUN_004424d0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  int iVar8;
  ushort *puVar9;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
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
  ushort *local_10;
  int local_c;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x24);
  iVar8 = *(int *)(param_1 + 0x1c) + iVar5;
  local_1c = 0;
  local_28 = param_1;
  local_24 = iVar8;
  iVar1 = FUN_005841b0();
  if ((iVar5 < iVar1 + -1) && (0 < iVar8)) {
    if (iVar5 < 0) {
      local_1c = -iVar5;
      iVar5 = 0;
    }
    iVar1 = FUN_005841b0();
    if (iVar1 + -1 < iVar8) {
      iVar8 = FUN_005841b0();
      iVar8 = iVar8 + -1;
      local_24 = iVar8;
    }
    local_34 = (**(code **)(**(int **)(param_1 + 0x10) + 8))();
    local_30 = (**(code **)(*DAT_00bd1bac + 8))();
    local_48 = FUN_00584270(0x23,0x23,0x23);
    local_44 = FUN_00584270(0x3f,0x3f,0x3f);
    local_20 = iVar5;
    if (iVar5 < iVar8) {
      local_2c = local_1c - iVar5;
      do {
        iVar1 = local_2c;
        local_20 = iVar5;
        iVar8 = FUN_00584190();
        local_38 = iVar8 * iVar5 + local_30;
        piVar7 = (int *)(DAT_0089c0b0 + iVar5 * 8);
        local_40 = (iVar1 + iVar5) * *(int *)(*(int *)(param_1 + 0x10) + 0x18) + local_34;
        local_3c = *(int *)(param_1 + 0x20) << 1;
        local_4c = piVar7;
        local_50 = operator_new(*piVar7 * 0x10 + 8);
        local_8 = 0;
        local_1c = 0;
        piVar3 = local_50;
        if (0 < *piVar7) {
          do {
            iVar5 = *(int *)(param_1 + 0x20) * 2;
            iVar1 = (*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18)) * 2;
            local_10 = (ushort *)(piVar7[1] + local_1c * 8);
            local_14 = *(int *)local_10;
            local_18 = iVar1;
            if (local_14 < iVar5) {
              if (iVar1 < *(int *)(local_10 + 2)) {
                *piVar3 = local_14;
                piVar3[1] = iVar5;
                piVar3[2] = iVar1;
                local_8 = local_8 + 2;
                piVar3[3] = *(int *)(piVar7[1] + 4 + local_1c * 8);
                local_1c = *piVar7 + 1;
                piVar3 = piVar3 + 4;
                local_14 = iVar5;
              }
              else {
                if ((iVar5 <= local_14) || (*(int *)(local_10 + 2) <= iVar5)) goto LAB_004427ab;
                *piVar3 = local_14;
                piVar3[1] = iVar5;
                local_8 = local_8 + 1;
                piVar3 = piVar3 + 2;
                local_18 = *(int *)(piVar7[1] + 4 + local_1c * 8);
                local_14 = iVar5;
              }
LAB_00442653:
              local_c = local_38 + local_14;
              local_10 = (ushort *)((local_14 - local_3c) + local_40);
              puVar9 = (ushort *)(local_c + -2);
              uVar2 = (uint)(local_18 - local_14) >> 1;
              puVar6 = local_10;
              do {
                uVar4 = *puVar6;
                puVar9 = puVar9 + 1;
                puVar6 = puVar6 + 1;
                if (uVar4 == (ushort)local_48) {
                  uVar4 = *puVar9 >> 2 & (ushort)local_44;
                }
                *puVar9 = uVar4;
                uVar2 = uVar2 - 1;
                piVar7 = local_4c;
                iVar5 = local_14;
              } while (uVar2 != 0);
            }
            else {
LAB_004427ab:
              if ((iVar1 - local_14 != 0 && local_14 <= iVar1) && (iVar1 < *(int *)(local_10 + 2)))
              {
                *piVar3 = iVar1;
                piVar3[1] = *(int *)(piVar7[1] + 4 + local_1c * 8);
                local_14 = *(int *)(piVar7[1] + local_1c * 8);
                local_8 = local_8 + 1;
                piVar3 = piVar3 + 2;
                goto LAB_00442653;
              }
              local_18 = *(int *)(local_10 + 2);
              if ((local_18 <= iVar1) && (iVar5 <= local_14)) goto LAB_00442653;
              *piVar3 = local_14;
              local_8 = local_8 + 1;
              piVar3[1] = *(int *)(piVar7[1] + 4 + local_1c * 8);
              piVar3 = piVar3 + 2;
              local_18 = iVar1;
              local_c = local_14;
            }
            local_14 = iVar5;
            local_1c = local_1c + 1;
            param_1 = local_28;
          } while (local_1c < *piVar7);
        }
        FUN_00796cd8(piVar7[1]);
        *piVar7 = local_8;
        piVar7[1] = (int)local_50;
        iVar5 = local_20 + 1;
        local_20 = iVar5;
      } while (iVar5 < local_24);
    }
    if (*(char *)(param_1 + 0x56) != '\0') {
      local_58 = *(int *)(param_1 + 0x20);
      local_60 = local_58 + -8;
      local_5c = *(int *)(param_1 + 0x24) + 8;
      local_54 = *(int *)(param_1 + 0x1c) + 8 + *(int *)(param_1 + 0x24);
      FUN_004045f0(&local_60);
      local_60 = *(int *)(param_1 + 0x20);
      local_5c = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24);
      local_54 = local_5c + 8;
      local_58 = *(int *)(param_1 + 0x18) + -8 + local_60;
      FUN_004045f0(&local_60);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x12) + 0x10))(param_2);
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    (**(code **)(*DAT_00bd1bac + 0xc))();
  }
  return 0;
}


