// FUN_00750750 @ 750750 size=987

void __fastcall FUN_00750750(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 auStack_5a4 [4];
  undefined4 uStack_5a0;
  uint uStack_59c;
  uint uStack_598;
  char *pcStack_594;
  char *pcStack_590;
  char *pcStack_58c;
  undefined1 uStack_571;
  undefined1 *puStack_570;
  undefined1 uStack_56c;
  undefined4 *puStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  int *local_55c;
  undefined1 uStack_558;
  int iStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined1 uStack_548;
  char *pcStack_544;
  undefined1 auStack_538 [16];
  undefined1 *puStack_528;
  char acStack_524 [16];
  undefined4 auStack_514 [2];
  undefined1 auStack_50c [256];
  char acStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfb8d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_55c = (int *)(param_1 + 0x8c);
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  if (*(int *)(param_1 + 0x88) == 0) {
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  }
  else {
    uStack_548 = uStack_571;
    pcStack_58c = (char *)0x7507ae;
    FUN_00674910();
    iStack_4 = 0;
    FUN_00750450();
    iVar5 = *(int *)(param_1 + 0x88);
    pcStack_58c = (char *)0x7507e5;
    FUN_0042b6c9();
    pcStack_590 = auStack_538;
    pcStack_594 = (char *)0x7507f1;
    pcStack_58c = (char *)(iVar5 + 0x22e);
    pcStack_590 = (char *)FUN_0074a770();
    pcStack_58c = (char *)0x0;
    iStack_4._0_1_ = 1;
    pcStack_594 = (char *)0x75080f;
    FUN_00674710();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    pcStack_58c = (char *)0x750822;
    FUN_00674910();
    uStack_56c = uStack_571;
    pcStack_58c = (char *)0x750835;
    FUN_00674910();
    puVar8 = &DAT_00893640;
    puVar9 = auStack_514;
    for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    pcStack_594 = acStack_40c;
    puVar8 = auStack_514;
    puVar9 = auStack_514;
    for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    pcStack_58c = auStack_50c;
    iStack_4._0_1_ = 2;
    pcStack_590 = s_N__s_P__s_008749f8;
    uStack_598 = 0x750878;
    FUN_007a630a();
    iVar5 = -1;
    pcVar2 = acStack_40c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcStack_58c = acStack_40c;
    pcStack_590 = (char *)0x75089e;
    FUN_00674d80();
    uStack_558 = uStack_571;
    pcStack_58c = (char *)0x7508b1;
    FUN_00674910();
    iVar5 = -1;
    pcStack_58c = acStack_40c;
    pcVar2 = acStack_40c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcStack_590 = (char *)0x7508d4;
    FUN_00674d80();
    iStack_4._0_1_ = 3;
    pcStack_590 = (char *)puStack_568;
    if (puStack_568 == (undefined4 *)0x0) {
      pcStack_590 = (char *)&DAT_007f0c98;
    }
    pcStack_594 = pcStack_544;
    if (pcStack_544 == (char *)0x0) {
      pcStack_594 = (char *)&DAT_007f0c98;
    }
    pcStack_58c = (char *)0x20;
    uStack_598 = 0x750915;
    FUN_00746fb0();
    iVar5 = *(int *)(param_1 + 0x88);
    pcStack_58c = (char *)0x750930;
    FUN_0042b6c9();
    pcStack_590 = auStack_538;
    pcStack_594 = (char *)0x75093c;
    pcStack_58c = (char *)(iVar5 + 0x22e);
    pcStack_590 = (char *)FUN_0074a770();
    iStack_4._0_1_ = 4;
    pcStack_58c = (char *)0x0;
    pcStack_594 = (char *)0x75095a;
    FUN_00674710();
    iStack_4._0_1_ = 3;
    pcStack_58c = (char *)0x75096d;
    FUN_00674910();
    pcStack_58c = s_EN_GAME_STARTED_WITH_NAME_008749dc;
    pcStack_590 = (char *)0x750981;
    pcStack_58c = (char *)FUN_0042b6c9();
    pcStack_590 = acStack_524;
    pcStack_594 = (char *)0x75098c;
    FUN_0074a620();
    iStack_4 = CONCAT31(iStack_4._1_3_,5);
    pcVar2 = (char *)FUN_007535d0();
    puStack_528 = (undefined1 *)&pcStack_594;
    uStack_598 = 0;
    pcStack_594 = (char *)CONCAT31(pcStack_594._1_3_,uStack_571);
    uStack_59c = 0x7509b9;
    FUN_00674910();
    uVar6 = 0xffffffff;
    uStack_598 = 1;
    pcVar10 = pcVar2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uStack_5a0 = 0x7509d5;
    uStack_59c = uVar6;
    puStack_570 = (undefined1 *)uVar6;
    cVar1 = FUN_00674e40();
    if (cVar1 != '\0') {
      pcVar10 = pcStack_590;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uStack_59c = 0x7509f8;
      uStack_598 = uVar6;
      FUN_00674e20();
    }
    puStack_570 = auStack_5a4;
    puVar11 = &uStack_571;
    iStack_4._0_1_ = 6;
    uVar3 = FUN_007535d0(puVar11);
    FUN_00673c70(uVar3,puVar11);
    iStack_4 = CONCAT31(iStack_4._1_3_,5);
    FUN_00745c90(acStack_524,*(undefined4 *)(param_1 + 0x66));
    pcStack_58c = (char *)0x750a50;
    BVar4 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
    if (BVar4 == 0) {
      pcStack_58c = s_C__Dev_HoI2_Projects_Darkest_Hou_00874560;
      pcStack_590 = s_Unknown_method_00874398;
      pcStack_594 = s_Releasemutex__mutex__failed__008745ec;
      uStack_598 = 0x750a6d;
      FUN_0074bc80();
    }
    (**(code **)(*local_55c + 4))();
    iStack_4 = CONCAT31(iStack_4._1_3_,3);
    pcStack_58c = (char *)0x750a8c;
    FUN_00674910();
    if (iStack_554 != 0) {
      cVar1 = *(char *)(iStack_554 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        pcStack_58c = (char *)0x750aaf;
        FUN_00796cd8();
      }
      else {
        *(char *)(iStack_554 + -1) = cVar1 + -1;
      }
    }
    iStack_554 = 0;
    uStack_550 = 0;
    uStack_54c = 0;
    if (puStack_568 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_568 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        pcStack_58c = (char *)0x750adf;
        FUN_00796cd8();
      }
      else {
        *(char *)((int)puStack_568 + -1) = cVar1 + -1;
      }
    }
    puStack_568 = (undefined4 *)0x0;
    uStack_564 = 0;
    uStack_560 = 0;
    if (pcStack_544 != (char *)0x0) {
      cVar1 = pcStack_544[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        pcStack_58c = (char *)0x750b0f;
        FUN_00796cd8();
      }
      else {
        pcStack_544[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


