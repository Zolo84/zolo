// FUN_004c1df0 @ 4c1df0 size=1071

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004c1df0(undefined4 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_128;
  float local_118 [3];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bef37;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar1 = operator_new(0x280);
  local_4 = 0;
  pfVar2 = (float *)0x0;
  if (pfVar1 != (float *)0x0) {
    FUN_00426120(s_db_Combat_CRT_csv_0083f7c0);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_128 = 0x10;
    pfVar2 = pfVar1;
    do {
      iVar9 = 5;
      pfVar7 = pfVar2;
      do {
        FUN_004264e0(local_118);
        *pfVar7 = local_118[0] * _DAT_007e543c;
        FUN_004264e0(local_118);
        pfVar7[0x10] = local_118[0];
        pfVar7 = pfVar7 + 0x20;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      pfVar2 = pfVar2 + 1;
      local_128 = local_128 + -1;
    } while (local_128 != 0);
    local_4 = local_4 & 0xffffff00;
    FUN_004262d0();
    pfVar2 = pfVar1;
  }
  local_4 = 0xffffffff;
  *param_1 = pfVar2;
  puVar3 = operator_new(0xc4);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00426120(s_db_Combat_LANDFIRE_csv_0083f7a8);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00426330(1);
    iVar9 = 7;
    puVar8 = puVar3;
    do {
      FUN_004262f0(1);
      iVar6 = 7;
      do {
        FUN_004265c0(local_10c);
        uVar4 = FUN_004c1d50(local_10c);
        *puVar8 = uVar4;
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004262d0();
  }
  local_4 = 0xffffffff;
  param_1[1] = puVar3;
  puVar3 = operator_new(0xc4);
  local_4 = 4;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00426120(s_db_Combat_LANDSHOCK_csv_0083f790);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_00426330(1);
    iVar9 = 7;
    puVar8 = puVar3;
    do {
      FUN_004262f0(1);
      iVar6 = 7;
      do {
        FUN_004265c0(local_10c);
        uVar4 = FUN_004c1d50(local_10c);
        *puVar8 = uVar4;
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004262d0();
  }
  local_4 = 0xffffffff;
  param_1[2] = puVar3;
  puVar3 = operator_new(0xc4);
  local_4 = 6;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00426120(s_db_Combat_NAVAL_FIRE_csv_0083f774);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_00426330(1);
    iVar9 = 7;
    puVar8 = puVar3;
    do {
      FUN_004262f0(1);
      iVar6 = 7;
      do {
        FUN_004265c0(local_10c);
        uVar4 = FUN_004c1d50(local_10c);
        *puVar8 = uVar4;
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004262d0();
  }
  local_4 = 0xffffffff;
  param_1[3] = puVar3;
  puVar3 = operator_new(0xc4);
  local_4 = 8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00426120(s_db_Combat_NAVAL_SHOCK_csv_0083f758);
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_00426330(1);
    iVar9 = 7;
    puVar8 = puVar3;
    do {
      FUN_004262f0(1);
      iVar6 = 7;
      do {
        FUN_004265c0(local_10c);
        uVar4 = FUN_004c1d50(local_10c);
        *puVar8 = uVar4;
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004262d0();
  }
  local_4 = 0xffffffff;
  param_1[4] = puVar3;
  pvVar5 = operator_new(0xc4);
  local_4 = 10;
  if (pvVar5 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004c1bf0(s_db_Combat_Assault_Fire_csv_0083f73c);
  }
  local_4 = 0xffffffff;
  param_1[5] = uVar4;
  pvVar5 = operator_new(0xc4);
  local_4 = 0xb;
  if (pvVar5 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004c1bf0(s_db_Combat_Assault_Shock_csv_0083f720);
  }
  local_4 = 0xffffffff;
  param_1[6] = uVar4;
  pvVar5 = operator_new(0xc4);
  local_4 = 0xc;
  if (pvVar5 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004c1bf0(s_db_Combat_Assault_Defender_csv_0083f700);
  }
  param_1[7] = uVar4;
  ExceptionList = local_c;
  return param_1;
}


