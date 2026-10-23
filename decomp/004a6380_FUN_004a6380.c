// FUN_004a6380 @ 4a6380 size=887

undefined4 __thiscall FUN_004a6380(int param_1,int param_2)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  int local_50;
  void *local_4c;
  undefined **local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  undefined1 local_38;
  undefined **local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined1 local_24;
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bdf2e;
  iVar6 = (&DAT_0089cad8)[param_2];
  if (iVar6 == 0) {
    return 0;
  }
  uVar9 = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e6f54;
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_48 = &PTR_LAB_007e6f54;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_34 = &PTR_LAB_007e6f54;
  iVar8 = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  local_64 = 0;
  local_68 = 0;
  puVar7 = *(undefined4 **)(iVar6 + 0xe8a4);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar7[2];
    iVar5 = FUN_004e9370(*puVar7);
    puVar7 = puVar2;
    if (((*(int *)(iVar5 + 0x3d4) != 0) && (cVar4 = FUN_004e8ab0(iVar6), cVar4 == '\0')) &&
       (cVar4 = FUN_004e84b0(), cVar4 == '\0')) {
      uVar9 = *(undefined4 *)(iVar5 + 0x288);
      if (*(int *)(iVar5 + 0x3d4) == param_1) {
        ppuVar1 = local_34 + 0xb;
        iVar5 = param_1;
        uVar10 = uVar9;
        FUN_004a7ad0(local_30);
        (*(code *)*ppuVar1)(&local_58,iVar5,uVar10);
        puVar2 = local_2c;
        if (local_58 == 0) {
          local_2c = operator_new(0xe);
          if (local_2c == (undefined4 *)0x0) {
            local_2c = (undefined4 *)0x0;
          }
          else {
            *local_2c = uVar9;
            local_2c[1] = puVar2;
            local_2c[2] = 0;
            *(undefined1 *)(local_2c + 3) = 0;
          }
          if (local_28 == 0) {
            iVar8 = iVar8 + 1;
            local_30 = local_2c;
            local_28 = local_28 + 1;
          }
          else {
            puVar2[2] = local_2c;
            iVar8 = iVar8 + 1;
            local_28 = local_28 + 1;
          }
        }
      }
      else if (*(int *)(iVar5 + 0x3d4) == iVar6) {
        cVar4 = FUN_004e8ab0(iVar6);
        if (cVar4 == '\0') {
          ppuVar1 = local_20 + 0xb;
          uVar10 = extraout_ECX;
          uVar11 = uVar9;
          FUN_004a7ad0(local_1c);
          (*(code *)*ppuVar1)(&local_50,uVar10,uVar11);
          puVar2 = local_18;
          if (local_50 == 0) {
            local_4c = operator_new(0xe);
            local_4._0_1_ = 4;
            if (local_4c == (void *)0x0) {
              local_18 = (undefined4 *)0x0;
            }
            else {
              local_18 = (undefined4 *)FUN_004a7c80(uVar9,puVar2,0);
            }
            local_4._0_1_ = 2;
            puVar3 = local_18;
            if (local_14 != 0) {
              puVar2[2] = local_18;
              puVar3 = local_1c;
            }
            local_1c = puVar3;
            local_64 = local_64 + 1;
            local_14 = local_14 + 1;
          }
        }
      }
      else {
        ppuVar1 = local_48 + 0xb;
        iVar5 = iVar6;
        uVar10 = uVar9;
        FUN_004a7ad0(local_44);
        (*(code *)*ppuVar1)(&local_54,iVar5,uVar10);
        puVar2 = local_40;
        if (local_54 == 0) {
          local_4c = operator_new(0xe);
          local_4._0_1_ = 3;
          if (local_4c == (void *)0x0) {
            local_40 = (undefined4 *)0x0;
          }
          else {
            local_40 = (undefined4 *)FUN_004a7c80(uVar9,puVar2,0);
          }
          local_4._0_1_ = 2;
          if (local_3c == 0) {
            local_68 = local_68 + 1;
            local_44 = local_40;
            local_3c = local_3c + 1;
          }
          else {
            puVar2[2] = local_40;
            local_68 = local_68 + 1;
            local_3c = local_3c + 1;
          }
        }
      }
    }
  }
  iVar6 = _rand();
  if (iVar8 == 0) {
    if (local_68 == 0) {
      if (local_64 == 0) goto LAB_004a667c;
      puVar7 = local_1c;
      for (iVar6 = iVar6 % local_64; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar7 = (undefined4 *)puVar7[2];
      }
    }
    else {
      puVar7 = local_44;
      for (iVar6 = iVar6 % local_68; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar7 = (undefined4 *)puVar7[2];
      }
    }
  }
  else {
    puVar7 = local_30;
    for (iVar6 = iVar6 % iVar8; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar7 = (undefined4 *)puVar7[2];
    }
  }
  uVar9 = *puVar7;
LAB_004a667c:
  local_4 = CONCAT31(local_4._1_3_,1);
  local_34 = &PTR_LAB_007e6f54;
  FUN_004a7ae0();
  local_48 = &PTR_LAB_007e6f54;
  puVar7 = local_44;
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar7[2];
    FUN_00796cd8(puVar7);
    puVar7 = puVar2;
  }
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  local_20 = &PTR_LAB_007e6f54;
  puVar7 = local_1c;
  while (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar7[2];
    FUN_00796cd8(puVar7);
    puVar7 = puVar2;
  }
  ExceptionList = local_c;
  return uVar9;
}


