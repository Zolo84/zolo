// FUN_0046ef10 @ 46ef10 size=1704

void __thiscall FUN_0046ef10(int param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined ***pppuVar9;
  void **ppvVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iStack_c0;
  undefined ***pppuStack_bc;
  undefined ***pppuStack_b8;
  uint local_a0;
  undefined **local_9c;
  int *local_98;
  undefined4 local_94;
  int local_90;
  undefined1 local_8c;
  undefined **local_88;
  int *local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78;
  undefined1 *puStack_74;
  undefined **local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  int local_50;
  undefined1 local_4c;
  undefined **local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined **local_34;
  int *local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24;
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_007bcc3e;
  if (((param_2 == '\0') && (param_3 == '\0')) && (param_4 == '\0')) {
    return;
  }
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007e4b94;
  local_6c = (undefined4 *)0x0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_70 = &PTR_LAB_007e4b94;
  local_58 = (undefined4 *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_5c = &PTR_LAB_007e4b94;
  local_4 = 2;
  uStack_3 = 0;
  ppvVar10 = &local_c;
  piVar2 = *(int **)(param_1 + 0x451c);
  local_c = ExceptionList;
  pppuVar9 = pppuStack_bc;
joined_r0x0046efbf:
  ExceptionList = ppvVar10;
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    pppuStack_bc = (undefined ***)*piVar2;
    ppvVar10 = ExceptionList;
    piVar2 = piVar1;
    if ((*(char *)((int)pppuStack_bc + 0x162) != '\0') &&
       (*(char *)((int)pppuStack_bc + 0x154) == '\0')) {
      iVar12 = *(int *)((&DAT_00dbf99a)[*(int *)((int)pppuStack_bc + 0x88)] + 0x18);
      if (iVar12 == 0) {
        if (param_3 == '\0') goto joined_r0x0046efbf;
        pppuStack_b8 = &local_20;
      }
      else if (iVar12 == 1) {
        if (param_4 == '\0') goto joined_r0x0046efbf;
        pppuStack_b8 = &local_70;
      }
      else {
        if ((iVar12 != 2) || (param_2 == '\0')) goto joined_r0x0046efbf;
        pppuStack_b8 = &local_5c;
      }
      iStack_c0 = 0x46f034;
      FUN_0046ece0();
      ppvVar10 = ExceptionList;
      pppuVar9 = pppuStack_bc;
    }
    goto joined_r0x0046efbf;
  }
  bVar6 = 0 < local_14;
  bVar7 = 0 < local_64;
  bVar8 = 0 < local_50;
  if (((!bVar6) && (!bVar7)) && (local_50 < 1)) goto LAB_0046f525;
  pppuStack_b8 = (undefined ***)0x46f079;
  pppuStack_bc = pppuVar9;
  cVar11 = FUN_004442a0();
  if (cVar11 == '\0') {
LAB_0046f092:
    local_a0 = local_a0 & 0xffffff00;
  }
  else {
    local_a0 = CONCAT31(local_a0._1_3_,1);
    if (*(int *)(*DAT_00d12b40 + 0x3de) < 1) goto LAB_0046f092;
  }
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_34 = &PTR_LAB_007e4b94;
  local_84 = (int *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_88 = &PTR_LAB_007e4b94;
  local_98 = (int *)0x0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_9c = &PTR_LAB_007e4b94;
  local_44 = (int *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_48 = &PTR_LAB_007e4b94;
  pppuStack_bc = &local_48;
  pppuStack_b8 = (undefined ***)0x0;
  local_4 = 6;
  iStack_c0 = 0x46f10f;
  FUN_00468710();
  piVar2 = *(int **)(param_1 + 0x4508);
  while (piVar1 = local_44, piVar2 != (int *)0x0) {
    piVar1 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
    pppuStack_b8 = (undefined ***)0x46f137;
    iVar12 = FUN_00522770();
    if (iVar12 == param_1) {
      pppuStack_b8 = (undefined ***)0x46f146;
      cVar11 = (**(code **)(*piVar1 + 0x28))();
      if ((cVar11 == '\0') || (!bVar6)) {
        pppuStack_b8 = (undefined ***)0x46f19c;
        cVar11 = (**(code **)(*piVar1 + 0x30))();
        if ((cVar11 == '\0') || (!bVar7)) {
          pppuStack_b8 = (undefined ***)0x46f1e8;
          cVar11 = (**(code **)(*piVar1 + 0x2c))();
          if ((cVar11 != '\0') && (bVar8)) {
            piVar1 = *(int **)((int)piVar1 + 0x26);
            iVar12 = iStack_c0;
            while (iStack_c0 = iVar12, piVar1 != (int *)0x0) {
              piVar3 = (int *)piVar1[2];
              iStack_c0 = *piVar1;
              piVar1 = piVar3;
              if (*(int *)(iStack_c0 + 0x13c) <
                  *(int *)(&DAT_00d7c830 + *(int *)(iStack_c0 + 0x130) * 4)) {
                pppuStack_bc = &local_9c;
                pppuStack_b8 = (undefined ***)local_a0;
                FUN_0046edb0();
                iVar12 = iStack_c0;
              }
            }
          }
        }
        else {
          piVar1 = *(int **)((int)piVar1 + 0x26);
          iVar12 = iStack_c0;
          while (iStack_c0 = iVar12, piVar1 != (int *)0x0) {
            piVar3 = (int *)piVar1[2];
            iStack_c0 = *piVar1;
            piVar1 = piVar3;
            if (*(int *)(iStack_c0 + 0x13c) <
                *(int *)(&DAT_00d7c830 + *(int *)(iStack_c0 + 0x130) * 4)) {
              pppuStack_bc = &local_88;
              pppuStack_b8 = (undefined ***)local_a0;
              FUN_0046edb0();
              iVar12 = iStack_c0;
            }
          }
        }
      }
      else {
        piVar1 = *(int **)((int)piVar1 + 0x26);
        iVar12 = iStack_c0;
        while (iStack_c0 = iVar12, piVar1 != (int *)0x0) {
          piVar3 = (int *)piVar1[2];
          iStack_c0 = *piVar1;
          piVar1 = piVar3;
          if (*(int *)(iStack_c0 + 0x13c) <
              *(int *)(&DAT_00d7c830 + *(int *)(iStack_c0 + 0x130) * 4)) {
            pppuStack_bc = &local_34;
            pppuStack_b8 = (undefined ***)local_a0;
            FUN_0046edb0();
            iVar12 = iStack_c0;
          }
        }
      }
    }
  }
joined_r0x0046f23b:
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    iVar12 = *piVar1;
    piVar1 = piVar2;
    if (*(int *)(iVar12 + 0x6c) != 0) {
      pppuStack_b8 = (undefined ***)0x46f254;
      iVar13 = FUN_00522770();
      if ((iVar13 == param_1) &&
         (*(int *)(iVar12 + 0x13c) < *(int *)(&DAT_00d7c830 + *(int *)(iVar12 + 0x130) * 4))) {
        pppuStack_b8 = (undefined ***)0x46f277;
        cVar11 = (**(code **)(**(int **)(iVar12 + 0x6c) + 0x28))();
        if ((cVar11 == '\0') || (!bVar6)) {
          pppuStack_b8 = (undefined ***)0x46f295;
          cVar11 = (**(code **)(**(int **)(iVar12 + 0x6c) + 0x30))();
          if ((cVar11 == '\0') || (!bVar7)) {
            pppuStack_b8 = (undefined ***)0x46f2b0;
            cVar11 = (**(code **)(**(int **)(iVar12 + 0x6c) + 0x2c))();
            if ((cVar11 == '\0') || (!bVar8)) goto joined_r0x0046f23b;
            pppuStack_bc = &local_9c;
          }
          else {
            pppuStack_bc = &local_88;
          }
        }
        else {
          pppuStack_bc = &local_34;
        }
        pppuStack_b8 = (undefined ***)local_a0;
        iStack_c0 = iVar12;
        FUN_0046edb0();
      }
    }
    goto joined_r0x0046f23b;
  }
  if ((bVar6) && (puVar5 = local_1c, local_28 != 0)) {
joined_r0x0046f2f2:
    if (puVar5 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar5[2];
      uVar14 = *puVar5;
      piVar2 = local_30;
      do {
        do {
          puVar5 = puVar4;
          if (piVar2 == (int *)0x0) goto joined_r0x0046f2f2;
          piVar1 = (int *)piVar2[2];
          pppuStack_bc = (undefined ***)*piVar2;
          piVar2 = piVar1;
        } while (*(int *)(&DAT_00d7c830 + *(int *)((int)pppuStack_bc + 0x130) * 4) <=
                 *(int *)((int)pppuStack_bc + 0x13c));
        iStack_c0 = 0x46f335;
        pppuStack_b8 = (undefined ***)uVar14;
        cVar11 = FUN_004a4150();
      } while (cVar11 == '\0');
      pppuStack_bc = (undefined ***)0x46f348;
      pppuStack_b8 = (undefined ***)uVar14;
      uVar14 = FUN_00447250();
      puStack_74 = (undefined1 *)&iStack_c0;
      FUN_00449290(uVar14);
      FUN_0045e960();
      goto joined_r0x0046f2f2;
    }
  }
  if ((bVar7) && (puVar5 = local_6c, local_7c != 0)) {
joined_r0x0046f37c:
    if (puVar5 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar5[2];
      uVar14 = *puVar5;
      piVar2 = local_84;
      do {
        do {
          puVar5 = puVar4;
          if (piVar2 == (int *)0x0) goto joined_r0x0046f37c;
          piVar1 = (int *)piVar2[2];
          pppuStack_bc = (undefined ***)*piVar2;
          piVar2 = piVar1;
        } while (*(int *)(&DAT_00d7c830 + *(int *)((int)pppuStack_bc + 0x130) * 4) <=
                 *(int *)((int)pppuStack_bc + 0x13c));
        iStack_c0 = 0x46f3bc;
        pppuStack_b8 = (undefined ***)uVar14;
        cVar11 = FUN_004a4150();
      } while (cVar11 == '\0');
      pppuStack_bc = (undefined ***)0x46f3cf;
      pppuStack_b8 = (undefined ***)uVar14;
      uVar14 = FUN_00447250();
      puStack_74 = (undefined1 *)&iStack_c0;
      FUN_00449290(uVar14);
      FUN_0045e960();
      goto joined_r0x0046f37c;
    }
  }
  if ((bVar8) && (puVar5 = local_58, local_90 != 0)) {
joined_r0x0046f40b:
    if (puVar5 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar5[2];
      uVar14 = *puVar5;
      piVar2 = local_98;
      do {
        do {
          puVar5 = puVar4;
          if (piVar2 == (int *)0x0) goto joined_r0x0046f40b;
          piVar1 = (int *)piVar2[2];
          pppuStack_bc = (undefined ***)*piVar2;
          piVar2 = piVar1;
        } while (*(int *)(&DAT_00d7c830 + *(int *)((int)pppuStack_bc + 0x130) * 4) <=
                 *(int *)((int)pppuStack_bc + 0x13c));
        iStack_c0 = 0x46f449;
        pppuStack_b8 = (undefined ***)uVar14;
        cVar11 = FUN_004a4150();
      } while (cVar11 == '\0');
      pppuStack_bc = (undefined ***)0x46f45c;
      pppuStack_b8 = (undefined ***)uVar14;
      uVar14 = FUN_00447250();
      puStack_74 = (undefined1 *)&iStack_c0;
      FUN_00449290(uVar14);
      FUN_0045e960();
      goto joined_r0x0046f40b;
    }
  }
  local_48 = &PTR_LAB_007e4b94;
  pppuStack_b8 = (undefined ***)local_44;
  while (pppuStack_b8 != (undefined ***)0x0) {
    piVar2 = (int *)pppuStack_b8[2];
    pppuStack_bc = (undefined ***)0x46f496;
    FUN_00796cd8();
    pppuStack_b8 = (undefined ***)piVar2;
  }
  local_44 = (int *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_9c = &PTR_LAB_007e4b94;
  pppuStack_b8 = (undefined ***)local_98;
  while (pppuStack_b8 != (undefined ***)0x0) {
    piVar2 = (int *)pppuStack_b8[2];
    pppuStack_bc = (undefined ***)0x46f4c0;
    FUN_00796cd8();
    pppuStack_b8 = (undefined ***)piVar2;
  }
  local_98 = (int *)0x0;
  local_94 = 0;
  local_90 = 0;
  local_88 = &PTR_LAB_007e4b94;
  pppuStack_b8 = (undefined ***)local_84;
  while (pppuStack_b8 != (undefined ***)0x0) {
    piVar2 = (int *)pppuStack_b8[2];
    pppuStack_bc = (undefined ***)0x46f4ea;
    FUN_00796cd8();
    pppuStack_b8 = (undefined ***)piVar2;
  }
  local_84 = (int *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_34 = &PTR_LAB_007e4b94;
  pppuStack_b8 = (undefined ***)local_30;
  while (pppuStack_b8 != (undefined ***)0x0) {
    piVar2 = (int *)pppuStack_b8[2];
    pppuStack_bc = (undefined ***)0x46f51a;
    FUN_00796cd8();
    pppuStack_b8 = (undefined ***)piVar2;
  }
LAB_0046f525:
  local_5c = &PTR_LAB_007e4b94;
  pppuStack_b8 = (undefined ***)local_58;
  while (pppuStack_b8 != (undefined ***)0x0) {
    puVar5 = pppuStack_b8[2];
    pppuStack_bc = (undefined ***)0x46f53a;
    FUN_00796cd8();
    pppuStack_b8 = (undefined ***)puVar5;
  }
  local_58 = (undefined4 *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_70 = &PTR_LAB_007e4b94;
  pppuStack_b8 = (undefined ***)local_6c;
  while (pppuStack_b8 != (undefined ***)0x0) {
    puVar5 = pppuStack_b8[2];
    pppuStack_bc = (undefined ***)0x46f564;
    FUN_00796cd8();
    pppuStack_b8 = (undefined ***)puVar5;
  }
  local_6c = (undefined4 *)0x0;
  local_68 = 0;
  local_64 = 0;
  local_20 = &PTR_LAB_007e4b94;
  pppuStack_b8 = (undefined ***)local_1c;
  while (pppuStack_b8 != (undefined ***)0x0) {
    puVar5 = pppuStack_b8[2];
    pppuStack_bc = (undefined ***)0x46f594;
    FUN_00796cd8();
    pppuStack_b8 = (undefined ***)puVar5;
  }
  ExceptionList = local_c;
  return;
}


