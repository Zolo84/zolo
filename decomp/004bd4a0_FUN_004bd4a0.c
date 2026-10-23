// FUN_004bd4a0 @ 4bd4a0 size=1132

void __fastcall FUN_004bd4a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  int local_5c;
  undefined2 local_58;
  int local_54;
  undefined2 local_50;
  int local_4c;
  undefined2 local_48;
  int local_44;
  undefined2 local_40;
  int local_3c;
  undefined2 local_38;
  int local_34;
  undefined2 local_30;
  int local_2c;
  undefined2 local_28;
  undefined4 *local_24;
  int local_20;
  float local_1c;
  float local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bec6b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)param_1 + 0x46) != 0) {
    ExceptionList = &local_10;
    (**(code **)(*param_1 + 0x20))();
  }
  iVar5 = (**(code **)(*param_1 + 0xc))();
  piVar8 = *(int **)(iVar5 + 4);
  do {
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)(**(code **)(*param_1 + 0xc))();
      (**(code **)(*piVar8 + 0x14))();
      ExceptionList = local_10;
      return;
    }
    piVar8 = (int *)*piVar8;
    (**(code **)(*piVar8 + 0x30))();
    if (((DAT_00dc1738 != '\0') && (cVar3 = (**(code **)(*piVar8 + 0x28))(), cVar3 != '\0')) &&
       (cVar3 = (**(code **)(*(int *)((int)piVar8 + 0x22e) + 8))(), cVar3 == '\0')) {
      if (*(char *)((int)piVar8 + 0x253) == '\0') {
        cVar4 = (**(code **)(*(int *)piVar8[0x92] + 0x1c))();
        cVar3 = DAT_00dc1737;
        if (cVar4 != '\0') {
          cVar3 = DAT_00dc1736;
        }
        if (cVar3 == '\0') goto LAB_004bd884;
      }
      local_2c = *(int *)(DAT_00893530 + 0x14);
      local_28 = *(undefined2 *)(DAT_00893530 + 0x18);
      local_3c = piVar8[0x8a];
      local_38 = (undefined2)piVar8[0x8b];
      local_34 = *(int *)(param_1[0x10] + 0x94);
      local_30 = *(undefined2 *)(param_1[0x10] + 0x98);
      cVar3 = FUN_0042ddd0();
      if (cVar3 == '\0') {
        local_34 = local_3c;
        local_30 = local_38;
      }
      cVar3 = FUN_0042ddd0();
      if (cVar3 == '\0') {
        iVar5 = param_1[0x10];
        iVar2 = *(int *)(iVar5 + 0x74);
        if (((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 6)) {
LAB_004bd60d:
          local_4c = local_2c;
          local_11 = '\x01';
          local_48 = local_28;
          iVar5 = (**(code **)(piVar8[0x47] + 4))();
          if (1 < iVar5) {
            local_44 = local_2c;
            local_40 = local_28;
            piVar9 = (int *)piVar8[0x48];
            if ((int *)piVar8[0x48] != (int *)0x0) {
              do {
                if (local_11 == '\0') goto LAB_004bd884;
                piVar1 = (int *)piVar9[2];
                iVar5 = *piVar9;
                if (iVar5 != param_1[0x10]) {
                  local_44 = *(int *)(iVar5 + 0x94);
                  local_40 = *(undefined2 *)(iVar5 + 0x98);
                  cVar3 = FUN_0042dd70();
                  if (cVar3 == '\0') {
                    local_11 = '\0';
                  }
                  else {
                    cVar3 = FUN_0042ddd0();
                    if (cVar3 == '\0') {
                      local_4c = local_44;
                      local_48 = local_40;
                    }
                  }
                }
                piVar9 = piVar1;
              } while (piVar1 != (int *)0x0);
              if (local_11 == '\0') goto LAB_004bd884;
            }
          }
          if (*(int *)(param_1[0x10] + 0x74) == 1) {
            local_18 = DAT_00877320;
          }
          else {
            local_18 = DAT_00877324;
          }
          pcVar6 = (char *)FUN_0042e060(local_64);
          local_1c = (float)((int)*pcVar6 +
                            ((int)pcVar6[1] + ((int)pcVar6[2] + *(short *)(pcVar6 + 4) * 0xc) * 0x1e
                            ) * 0x18) * local_18;
          local_20 = (int)ROUND(local_1c);
          if (0 < local_20) {
            FUN_0042e060(local_6c);
            local_54 = local_2c;
            local_50 = local_28;
            FUN_0042db80();
            local_5c = local_54;
            local_58 = local_50;
            FUN_0042e060(local_74);
            FUN_0042db80();
            cVar3 = FUN_0042e980();
            if (cVar3 != '\0') {
              FUN_005b91d4();
              puVar7 = operator_new(0xc);
              local_8 = 0;
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
                local_24 = (undefined4 *)0x0;
              }
              else {
                local_24 = puVar7;
                local_1c = (float)FUN_00523f70();
                FUN_004c0a70(0x3c);
                local_24 = (undefined4 *)puVar7[1];
                *puVar7 = &PTR_FUN_007e7784;
                *(int *)((int)local_24 + 0xe) = piVar8[6];
                *(short *)((int)local_24 + 0x12) = (short)piVar8[7];
                *(undefined2 *)((int)local_24 + 0x14) = local_1c._0_2_;
              }
              local_8 = 0xffffffff;
              piVar8[0x91] = (int)puVar7;
              FUN_00565af0(puVar7);
            }
            piVar8[0x8a] = local_54;
            *(int *)((int)piVar8 + 0x222) = local_5c;
            *(undefined2 *)(piVar8 + 0x8b) = local_50;
            *(undefined2 *)((int)piVar8 + 0x226) = local_58;
          }
        }
        else if ((iVar2 == 1) && (*(char *)((int)param_1 + 0x3f) == '\0')) {
          if (*(char *)((int)param_1 + 0x4e) == '\0') {
            iVar5 = *(int *)(iVar5 + 0x80);
          }
          else {
            iVar5 = *(int *)(iVar5 + 0x84);
          }
          if (*(char *)(iVar5 + 0x3f) != '\0') goto LAB_004bd60d;
        }
      }
    }
LAB_004bd884:
    local_24 = (undefined4 *)&stack0xffffff7c;
    (**(code **)(*param_1 + 0xc))();
    piVar8 = (int *)(**(code **)(*param_1 + 0xc))();
    (**(code **)(*piVar8 + 0x1c))();
    iVar5 = param_1[0x10];
    iVar2 = *(int *)(iVar5 + 0x74);
    if ((((iVar2 == 4) || (iVar2 == 5)) || (iVar2 == 6)) || ((iVar2 == 7 || (iVar2 == 8)))) {
      FUN_0051a850(iVar5 + 0xc);
    }
    else {
      FUN_0051adb0(iVar5 + 0xc);
    }
    iVar5 = (**(code **)(*param_1 + 0xc))();
    piVar8 = *(int **)(iVar5 + 4);
  } while( true );
}


