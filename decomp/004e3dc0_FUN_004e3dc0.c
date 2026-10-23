// FUN_004e3dc0 @ 4e3dc0 size=1410

void FUN_004e3dc0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_140;
  int local_13c;
  char local_135;
  undefined4 local_134 [3];
  int local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c001b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426120(&DAT_00dc3500);
  local_4 = 0;
  FUN_00426330(1);
  local_140 = 0;
  local_134[0] = 0;
  do {
    do {
      iVar8 = 0;
      local_135 = '\0';
      local_13c = 0;
      FUN_00426380(&local_13c);
      if (local_13c < 0) {
        local_4 = 0xffffffff;
        FUN_004262d0();
        ExceptionList = local_c;
        return;
      }
    } while (((local_13c == 0) || (*(int *)(DAT_00ab27b4 + 0x288 + local_13c * 0x4b2) == 0)) ||
            (FUN_00426380(&local_140), *(int *)(DAT_00ab27b4 + 0x288 + local_140 * 0x4b2) == 0));
    FUN_004265c0(local_10c);
    iVar1 = FUN_007a8730(local_10c,s_river_008479a8);
    if (iVar1 == 0) {
      iVar8 = 1;
    }
    else {
      iVar1 = FUN_007a8730(local_10c,&DAT_008479b8);
      if (iVar1 == 0) {
        iVar8 = 2;
      }
      else {
        iVar1 = FUN_007a8730(local_10c,s_canal_008481bc);
        if (iVar1 == 0) {
          iVar8 = 3;
        }
        else {
          iVar1 = FUN_007a8730(local_10c,s_impassable_008481b0);
          if (iVar1 == 0) {
            iVar8 = 4;
          }
          else {
            iVar1 = FUN_007a8730(local_10c,s_normal_008481a8);
            if (iVar1 != 0) {
              iVar1 = FUN_007a8730(local_10c,s_remove_008481a0);
              if (iVar1 == 0) {
                local_135 = '\x01';
              }
              else if (DAT_00dc4b5e != '\0') {
                piVar10 = (int *)(DAT_00ab27b4 + local_13c * 0x4b2);
                uVar2 = (**(code **)(*(int *)(DAT_00ab27b4 + local_140 * 0x4b2) + 0xc))(local_140);
                uVar2 = (**(code **)(*piVar10 + 0xc))(local_13c,uVar2);
                FUN_00429a00(s_ERROR___Invalid_province_connect_00848118,local_10c,&DAT_00dc3500,
                             uVar2);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
          }
        }
      }
    }
    FUN_00426380(local_134);
    if (local_135 == '\0') {
      iVar9 = 0;
      iVar5 = *(int *)(DAT_00ab27b4 + 0x290 + local_13c * 0x4b2);
      iVar1 = DAT_00ab27b4 + local_13c * 0x4b2;
      if (0 < iVar5) {
        piVar10 = *(int **)(iVar1 + 0x298);
LAB_004e4218:
        if (*piVar10 != local_140) break;
        iVar5 = DAT_00ab27b4 + local_140 * 0x4b2;
        iVar9 = 0;
        if (0 < *(int *)(iVar1 + 0x290)) {
          iVar7 = 0;
          do {
            piVar10 = (int *)(*(int *)(iVar1 + 0x298) + iVar7);
            if (*piVar10 == local_140) {
              piVar10[1] = iVar8;
              *(undefined4 *)(iVar7 + 8 + *(int *)(iVar1 + 0x298)) = local_134[0];
            }
            iVar9 = iVar9 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar9 < *(int *)(iVar1 + 0x290));
        }
        iVar1 = 0;
        if (0 < *(int *)(iVar5 + 0x290)) {
          iVar9 = 0;
          do {
            piVar10 = (int *)(*(int *)(iVar5 + 0x298) + iVar9);
            if (*piVar10 == local_13c) {
              piVar10[1] = iVar8;
              *(undefined4 *)(iVar9 + 8 + *(int *)(iVar5 + 0x298)) = local_134[0];
            }
            iVar1 = iVar1 + 1;
            iVar9 = iVar9 + 0xc;
          } while (iVar1 < *(int *)(iVar5 + 0x290));
        }
        goto LAB_004e4274;
      }
LAB_004e4224:
      local_118 = local_140;
      local_110 = local_134[0];
      local_114 = iVar8;
      FUN_004eba10(&local_118);
      local_124 = local_13c;
      local_11c = local_134[0];
      local_120 = iVar8;
      FUN_004eba10(&local_124);
    }
    else {
      iVar1 = *(int *)(DAT_00ab27b4 + 0x290 + local_13c * 0x4b2);
      iVar8 = DAT_00ab27b4 + local_13c * 0x4b2;
      iVar5 = 0;
      if (0 < iVar1) {
        piVar10 = *(int **)(iVar8 + 0x298);
LAB_004e3ff4:
        if (*piVar10 != local_140) goto code_r0x004e3ff8;
        iVar1 = *(int *)(iVar8 + 0x294);
        iVar5 = *(int *)(iVar8 + 0x290);
        piVar10 = *(int **)(iVar8 + 0x298);
        pvVar3 = operator_new((iVar1 * 3 + -3) * 4);
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          local_128 = iVar1 + -2;
        }
        *(void **)(DAT_00ab27b4 + 0x298 + local_13c * 0x4b2) = pvVar3;
        *(int *)(DAT_00ab27b4 + 0x290 + local_13c * 0x4b2) = iVar5 + -1;
        *(int *)(DAT_00ab27b4 + 0x294 + local_13c * 0x4b2) = iVar1 + -1;
        if (0 < iVar5) {
          iVar8 = 0;
          piVar6 = piVar10;
          do {
            if (*piVar6 != local_140) {
              piVar4 = (int *)(*(int *)(DAT_00ab27b4 + 0x298 + local_13c * 0x4b2) + iVar8);
              iVar8 = iVar8 + 0xc;
              *piVar4 = *piVar6;
              piVar4[1] = piVar6[1];
              piVar4[2] = piVar6[2];
            }
            piVar6 = piVar6 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00796cd8(piVar10);
        iVar1 = *(int *)(DAT_00ab27b4 + 0x294 + local_140 * 0x4b2);
        iVar8 = DAT_00ab27b4 + local_140 * 0x4b2;
        iVar5 = *(int *)(iVar8 + 0x290);
        piVar10 = *(int **)(iVar8 + 0x298);
        pvVar3 = operator_new((iVar1 * 3 + -3) * 4);
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          local_128 = iVar1 + -2;
        }
        *(void **)(DAT_00ab27b4 + 0x298 + local_140 * 0x4b2) = pvVar3;
        *(int *)(DAT_00ab27b4 + 0x290 + local_140 * 0x4b2) = iVar5 + -1;
        *(int *)(DAT_00ab27b4 + 0x294 + local_140 * 0x4b2) = iVar1 + -1;
        if (0 < iVar5) {
          iVar8 = 0;
          piVar6 = piVar10;
          do {
            if (*piVar6 != local_13c) {
              piVar4 = (int *)(*(int *)(DAT_00ab27b4 + 0x298 + local_140 * 0x4b2) + iVar8);
              iVar8 = iVar8 + 0xc;
              *piVar4 = *piVar6;
              piVar4[1] = piVar6[1];
              piVar4[2] = piVar6[2];
            }
            piVar6 = piVar6 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00796cd8(piVar10);
      }
    }
LAB_004e4274:
    FUN_00426330(1);
  } while( true );
  iVar9 = iVar9 + 1;
  piVar10 = piVar10 + 3;
  if (iVar5 <= iVar9) goto LAB_004e4224;
  goto LAB_004e4218;
code_r0x004e3ff8:
  iVar5 = iVar5 + 1;
  piVar10 = piVar10 + 3;
  if (iVar1 <= iVar5) goto LAB_004e4274;
  goto LAB_004e3ff4;
}


