// FUN_00638070 @ 638070 size=1721

void __fastcall FUN_00638070(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  int local_124;
  float local_120;
  float local_11c;
  float local_118;
  uint local_114;
  float local_10c;
  undefined1 local_100 [256];
  
  iVar1 = *(int *)(param_1 + 0x146);
  iVar2 = *(int *)(param_1 + 0x13e);
  local_114 = *(uint *)(param_1 + 0x142);
  iVar9 = *(int *)(param_1 + 0x10e);
  if (iVar9 != 0) {
    if (*(int *)(iVar9 + 0x22) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x146) = *(undefined4 *)(*(int *)(iVar9 + 0x22) + 0x32);
  }
  if (*(int *)(param_1 + 0x14a) < 1) {
    *(undefined4 *)(param_1 + 0x14a) = 1;
  }
  if (99 < *(int *)(param_1 + 0x14a)) {
    *(undefined4 *)(param_1 + 0x14a) = 99;
  }
  if (*(int *)(param_1 + 0x14e) < 1) {
    *(undefined4 *)(param_1 + 0x14e) = 1;
  }
  if (99 < *(int *)(param_1 + 0x14e)) {
    *(undefined4 *)(param_1 + 0x14e) = 99;
  }
  if (*(int *)(param_1 + 0x126) == 3) {
    uVar5 = *(undefined4 *)(*(int *)(iVar9 + 0x22) + 0x2e);
    *(undefined4 *)(param_1 + 0x142) = uVar5;
    local_124 = FUN_00467030(uVar5,*(undefined4 *)(param_1 + 0x146),*(undefined4 *)(param_1 + 0x14a)
                            );
    fVar11 = (float10)FUN_004672f0(*(undefined4 *)(param_1 + 0x142),*(undefined4 *)(param_1 + 0x146)
                                  );
    *(float *)(param_1 + 0x160) = (float)fVar11;
    fVar11 = (float10)FUN_00467430(*(undefined4 *)(param_1 + 0x142),*(undefined4 *)(param_1 + 0x146)
                                  );
    *(float *)(param_1 + 0x164) = (float)fVar11;
  }
  else {
    iVar9 = 0;
    local_118 = 0.0;
    local_10c = 0.0;
    local_11c = 0.0;
    local_120 = 0.0;
    if (0 < DAT_008776b0) {
      do {
        if (*(char *)(param_1 + 0x91a + iVar9) != '\0') {
          uVar5 = FUN_0044c4a0(iVar9);
          iVar6 = FUN_00467030(iVar9,uVar5,*(undefined4 *)(param_1 + 0x14a));
          iVar7 = FUN_00467030(iVar9,uVar5,1);
          fVar11 = (float10)FUN_004672f0(iVar9,uVar5);
          local_118 = (float)(fVar11 * (float10)iVar7 + (float10)local_118);
          if (local_11c < (float)iVar6) {
            iVar7 = FUN_00467030(iVar9,uVar5,1);
            local_120 = (float)iVar7;
            local_11c = (float)iVar6;
          }
          fVar11 = (float10)FUN_00467430(iVar9,uVar5);
          local_10c = (float)(fVar11 + (float10)local_10c);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < DAT_008776b0);
    }
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10e) + 0x22) + 0x2e);
    *(undefined4 *)(param_1 + 0x13e) = uVar5;
    local_124 = FUN_00466b90(uVar5,0,*(undefined4 *)(param_1 + 0x146),0,
                             *(undefined4 *)(param_1 + 0x14a));
    if (local_11c <= (float)local_124) {
      iVar9 = FUN_00466b90(*(undefined4 *)(param_1 + 0x13e),0,*(undefined4 *)(param_1 + 0x146),0,1);
      fVar11 = (float10)FUN_00467290(*(undefined4 *)(param_1 + 0x13e),0,
                                     *(undefined4 *)(param_1 + 0x146),0);
      *(float *)(param_1 + 0x160) = (float)(fVar11 + (float10)(local_118 / (float)iVar9));
    }
    else {
      iVar9 = FUN_00466b90(*(undefined4 *)(param_1 + 0x13e),0,*(undefined4 *)(param_1 + 0x146),0,1);
      fVar11 = (float10)FUN_00467290(*(undefined4 *)(param_1 + 0x13e),0,
                                     *(undefined4 *)(param_1 + 0x146),0);
      *(float *)(param_1 + 0x160) =
           (float)((fVar11 * (float10)iVar9 + (float10)local_118) / (float10)local_120);
      local_124 = __ftol();
    }
    fVar11 = (float10)FUN_004673a0(*(undefined4 *)(param_1 + 0x13e),0,
                                   *(undefined4 *)(param_1 + 0x146),0);
    iVar9 = 0;
    *(float *)(param_1 + 0x164) = (float)(fVar11 + (float10)local_10c);
    if (0 < DAT_008776b0) {
      puVar10 = (undefined4 *)(param_1 + 0x65e);
      do {
        (**(code **)(*(int *)puVar10[-0x8c] + 0x18))(0xfffffc18,0xfffffc18);
        (**(code **)(*(int *)*puVar10 + 0x18))(0xfffffc18,0xfffffc18);
        iVar9 = iVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar9 < DAT_008776b0);
    }
    iVar9 = *(int *)(param_1 + 0x126);
    if (((iVar9 == 0) || (iVar9 == 1)) || (iVar9 == 2)) {
      bVar3 = true;
      local_120 = 1.4013e-45;
      if (1 < DAT_008776b0) {
        iVar9 = 0x53;
        puVar10 = (undefined4 *)(param_1 + 0x42e);
        do {
          if (((*(char *)(*(int *)(param_1 + 0x90) + 0x4b5c + (int)local_120) != '\0') &&
              (cVar4 = FUN_004a4340(local_120,*(undefined4 *)(param_1 + 0x13e)), cVar4 != '\0')) &&
             (0 < *(int *)(&DAT_00d7c830 + *(int *)(param_1 + 0x13e) * 4))) {
            (**(code **)(*(int *)*puVar10 + 0x38))(local_120);
            if (DAT_00dc1960 == '\0') {
              (**(code **)(*(int *)*puVar10 + 0x18))(iVar9,0x1bb);
              (**(code **)(*(int *)puVar10[0x8c] + 0x18))(iVar9,0x1cd);
            }
            else {
              (**(code **)(*(int *)*puVar10 + 0x18))(iVar9 + -0x31,0x2ba);
              (**(code **)(*(int *)puVar10[0x8c] + 0x18))(iVar9 + -0x31,0x2cc);
            }
            iVar9 = iVar9 + 0x12;
            puVar10 = puVar10 + 1;
            bVar3 = false;
          }
          local_120 = (float)((int)local_120 + 1);
        } while ((int)local_120 < DAT_008776b0);
        if (!bVar3) goto LAB_006385b0;
      }
      iVar9 = FUN_004a5c30(*(undefined4 *)(param_1 + 0x13e));
      if (0 < iVar9) {
        FUN_004136a0(s_eurostilecond14_bmp_0082f010);
        uVar5 = FUN_0042b6c9(s_EXTRA_DONT_HAVE1_00861220);
        FUN_007a630a(local_100,uVar5);
        uVar5 = FUN_00584270(0xd0,0xe8,0xf8);
        if (DAT_00dc1960 == '\0') {
          uVar13 = 0x1bd;
          uVar12 = 0x53;
        }
        else {
          uVar13 = 700;
          uVar12 = 0x22;
        }
        FUN_004133fd(local_100,uVar12,uVar13,DAT_00bd1bac,uVar5,0);
        uVar12 = FUN_0042b6c9(s_EXTRA_DONT_HAVE2_0086120c);
        FUN_007a630a(local_100,uVar12);
        if (DAT_00dc1960 == '\0') {
          uVar13 = 0x1cd;
          uVar12 = 0x53;
        }
        else {
          uVar13 = 0x2ca;
          uVar12 = 0x22;
        }
        FUN_004133fd(local_100,uVar12,uVar13,DAT_00bd1bac,uVar5,0);
      }
    }
  }
LAB_006385b0:
  if (((iVar1 == *(int *)(param_1 + 0x146)) && (iVar2 == *(int *)(param_1 + 0x13e))) &&
     (local_114 == *(uint *)(param_1 + 0x142))) goto LAB_006386f4;
  if (*(int *)(param_1 + 0x126) == 3) {
    if ((DAT_00dc1961 != '\0') || (*(int *)((&DAT_00dbf99a)[*(int *)(param_1 + 0x142)] + 0x18) != 2)
       ) {
      uVar5 = *(undefined4 *)(param_1 + 0x142);
      puVar14 = &DAT_0085aedc;
      goto LAB_00638645;
    }
    FUN_007a630a(local_100,s_gfx_interface_auxiliarybig_bmp_0085b050);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x13e);
    puVar14 = &DAT_0085aee0;
LAB_00638645:
    FUN_0044f970(local_100,puVar14,uVar5,*(int *)(param_1 + 0x146));
  }
  if (((DAT_00dc1961 == '\0') && (*(int *)(param_1 + 0x126) == 3)) &&
     (*(int *)((&DAT_00dbf99a)[*(int *)(param_1 + 0x142)] + 0x18) == 2)) {
    (**(code **)(**(int **)(param_1 + 0x12e) + 0x2c))(local_100);
    (**(code **)(**(int **)(param_1 + 0x12e) + 0x34))(DAT_008776b0);
    (**(code **)(**(int **)(param_1 + 0x12e) + 0x38))(*(undefined4 *)(param_1 + 0x142));
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x12e) + 0x2c))(local_100);
    (**(code **)(**(int **)(param_1 + 0x12e) + 0x34))(1);
  }
  if (0 < DAT_008776b0) {
    puVar8 = (undefined1 *)(param_1 + 0x91a);
    do {
      puVar8[-0x8c] = 0;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while ((int)(puVar8 + (-0x91a - param_1)) < DAT_008776b0);
  }
LAB_006386f4:
  local_114 = local_114 & 0xff000000;
  *(uint *)(param_1 + 0x15a) = local_114;
  *(undefined2 *)(param_1 + 0x15e) = 0;
  FUN_0042dc20(local_124);
  return;
}


