// FUN_00751350 @ 751350 size=587

void __fastcall FUN_00751350(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  char *pcStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  char *pcStack_44;
  undefined1 uStack_29;
  int *local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfc2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_28 = (int *)(param_1 + 0x8c);
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  if ((*(int *)(param_1 + 0x88) != 0) && (*(char *)(*(int *)(param_1 + 0x88) + 0x24e) != '\0')) {
    pcStack_44 = *(char **)(param_1 + 0x5a);
    if (pcStack_44 == (char *)0x0) {
      pcStack_44 = (char *)&DAT_007f0c98;
    }
    puStack_48 = *(undefined4 **)(param_1 + 0x14c);
    uStack_4c = 0;
    iStack_50 = 0x7513c0;
    iVar2 = FUN_00676ec0();
    if (iVar2 != 0) {
      pcVar7 = *(char **)(*(int *)(param_1 + 0x178) + 0x18);
      auStack_1c[0] = uStack_29;
      pcStack_44 = (char *)0x7513e4;
      FUN_00674910();
      uVar4 = 0xffffffff;
      pcVar8 = pcVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      puStack_48 = (undefined4 *)0x7513fe;
      pcStack_44 = (char *)uVar4;
      cVar1 = FUN_00674e40();
      if (cVar1 != '\0') {
        pcVar8 = pcStack_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        pcStack_44 = (char *)0x751420;
        FUN_00674e20();
      }
      uStack_4 = 1;
      if (iStack_14 == 0) {
        uStack_4 = 0xffffffff;
        pcStack_44 = (char *)0x751443;
        FUN_00674910();
        ExceptionList = pvStack_c;
        return;
      }
      pcStack_54 = (char *)FUN_007535d0();
      puStack_24 = (undefined1 *)&uStack_4c;
      uStack_4c = CONCAT31(uStack_4c._1_3_,uStack_29);
      uVar4 = 0xffffffff;
      puStack_48 = (undefined4 *)0x0;
      pcStack_44 = (char *)0x0;
      pcVar7 = pcStack_54;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iStack_50 = ~uVar4 - 1;
      uStack_58 = 0x75148f;
      FUN_00674d80();
      puStack_20 = auStack_5c;
      puVar9 = &uStack_29;
      uStack_4._0_1_ = 2;
      uVar3 = FUN_007535d0(puVar9);
      FUN_00673c70(uVar3,puVar9);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      FUN_00745c90(auStack_1c,*(undefined4 *)(param_1 + 0x66));
      FUN_004388d0();
      (**(code **)(*local_28 + 4))();
      if (pcStack_18 == (char *)0x0) {
        ExceptionList = pvStack_c;
        return;
      }
      cVar1 = pcStack_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        pcStack_18[-1] = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      pcStack_44 = (char *)0x751516;
      FUN_00796cd8();
      ExceptionList = pvStack_c;
      return;
    }
  }
  FUN_004388d0();
  pcStack_44 = (char *)0x75153e;
  puStack_20 = operator_new(0x68);
  uStack_4 = 0;
  if (puStack_20 != (void *)0x0) {
    puVar6 = *(undefined4 **)(param_1 + 0x4a);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = &DAT_007f0c98;
    }
    pcStack_44 = s_EN_CHOOSE_CHANNEL_00874988;
    puStack_48 = (undefined4 *)0x751570;
    pcStack_44 = (char *)FUN_0042b6c9();
    uStack_4c = 0x751579;
    puStack_48 = puVar6;
    FUN_0043dce0();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  ExceptionList = pvStack_c;
  return;
}


